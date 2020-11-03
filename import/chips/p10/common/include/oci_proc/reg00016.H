/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/oci_proc/reg00016.H $         */
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

#ifndef __OCI_PROC_REG00016_H_
#define __OCI_PROC_REG00016_H_

#ifndef __PPE_HCODE__
namespace scomt
{
namespace oci_proc
{
#endif


//>> PREP_[TP_TPBR_PBA_PBAO_BCUE_STAT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPBR_PBA_PBAO_BCUE_STAT(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPBR_PBA_PBAO_BCUE_STAT;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPBR_PBA_PBAO_BCUE_STAT]

//>> GET_[TP_TPBR_PBA_PBAO_BCUE_STAT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPBR_PBA_PBAO_BCUE_STAT(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPBR_PBA_PBAO_BCUE_STAT;
#endif
    return fapi2::getScom(i_target, TP_TPBR_PBA_PBAO_BCUE_STAT, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_BCUE_STAT]

//>> PUT_[TP_TPBR_PBA_PBAO_BCUE_STAT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPBR_PBA_PBAO_BCUE_STAT(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_STAT));
#endif
    return fapi2::putScom(i_target, TP_TPBR_PBA_PBAO_BCUE_STAT, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPBR_PBA_PBAO_BCUE_STAT]


//>> SET_[TP_TPBR_PBA_PBAO_BCUE_STAT_RUNNING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_BCUE_STAT_RUNNING(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_STAT));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_BCUE_STAT_RUNNING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_STAT_RUNNING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_BCUE_STAT_RUNNING]

//>> SET_[TP_TPBR_PBA_PBAO_BCUE_STAT_RUNNING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_BCUE_STAT_RUNNING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_STAT));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_BCUE_STAT_RUNNING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_STAT_RUNNING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_BCUE_STAT_RUNNING]

//>> SET_[TP_TPBR_PBA_PBAO_BCUE_STAT_RUNNING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_BCUE_STAT_RUNNING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_STAT));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_BCUE_STAT_RUNNING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_STAT_RUNNING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_BCUE_STAT_RUNNING]

//>> CLEAR_[TP_TPBR_PBA_PBAO_BCUE_STAT_RUNNING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_BCUE_STAT_RUNNING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_STAT));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_BCUE_STAT_RUNNING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_STAT_RUNNING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_BCUE_STAT_RUNNING]

//>> GET_[TP_TPBR_PBA_PBAO_BCUE_STAT_RUNNING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_BCUE_STAT_RUNNING(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_STAT));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_BCUE_STAT_RUNNING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_STAT_RUNNING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_BCUE_STAT_RUNNING]

//>> GET_[TP_TPBR_PBA_PBAO_BCUE_STAT_RUNNING]
static inline bool GET_TP_TPBR_PBA_PBAO_BCUE_STAT_RUNNING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_STAT));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_BCUE_STAT_RUNNING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_STAT_RUNNING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_BCUE_STAT_RUNNING]

//>> SET_[TP_TPBR_PBA_PBAO_BCUE_STAT_WAITING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_BCUE_STAT_WAITING(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_STAT));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_BCUE_STAT_WAITING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_STAT_WAITING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_BCUE_STAT_WAITING]

//>> SET_[TP_TPBR_PBA_PBAO_BCUE_STAT_WAITING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_BCUE_STAT_WAITING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_STAT));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_BCUE_STAT_WAITING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_STAT_WAITING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_BCUE_STAT_WAITING]

//>> SET_[TP_TPBR_PBA_PBAO_BCUE_STAT_WAITING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_BCUE_STAT_WAITING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_STAT));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_BCUE_STAT_WAITING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_STAT_WAITING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_BCUE_STAT_WAITING]

//>> CLEAR_[TP_TPBR_PBA_PBAO_BCUE_STAT_WAITING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_BCUE_STAT_WAITING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_STAT));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_BCUE_STAT_WAITING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_STAT_WAITING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_BCUE_STAT_WAITING]

//>> GET_[TP_TPBR_PBA_PBAO_BCUE_STAT_WAITING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_BCUE_STAT_WAITING(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_STAT));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_BCUE_STAT_WAITING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_STAT_WAITING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_BCUE_STAT_WAITING]

//>> GET_[TP_TPBR_PBA_PBAO_BCUE_STAT_WAITING]
static inline bool GET_TP_TPBR_PBA_PBAO_BCUE_STAT_WAITING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_STAT));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_BCUE_STAT_WAITING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_STAT_WAITING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_BCUE_STAT_WAITING]

//>> SET_[TP_TPBR_PBA_PBAO_BCUE_STAT_WRCMP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_BCUE_STAT_WRCMP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_STAT));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_BCUE_STAT_WRCMP,
           TP_TPBR_PBA_PBAO_BCUE_STAT_WRCMP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_STAT_WRCMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_BCUE_STAT_WRCMP]

//>> SET_[TP_TPBR_PBA_PBAO_BCUE_STAT_WRCMP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_BCUE_STAT_WRCMP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_STAT));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_BCUE_STAT_WRCMP,
           TP_TPBR_PBA_PBAO_BCUE_STAT_WRCMP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_STAT_WRCMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_BCUE_STAT_WRCMP]

//>> GET_[TP_TPBR_PBA_PBAO_BCUE_STAT_WRCMP]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_BCUE_STAT_WRCMP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_STAT));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_BCUE_STAT_WRCMP,
           TP_TPBR_PBA_PBAO_BCUE_STAT_WRCMP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_STAT_WRCMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_BCUE_STAT_WRCMP]

//>> SET_[TP_TPBR_PBA_PBAO_BCUE_STAT_RDCMP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_BCUE_STAT_RDCMP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_STAT));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_BCUE_STAT_RDCMP,
           TP_TPBR_PBA_PBAO_BCUE_STAT_RDCMP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_STAT_RDCMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_BCUE_STAT_RDCMP]

//>> SET_[TP_TPBR_PBA_PBAO_BCUE_STAT_RDCMP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_BCUE_STAT_RDCMP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_STAT));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_BCUE_STAT_RDCMP,
           TP_TPBR_PBA_PBAO_BCUE_STAT_RDCMP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_STAT_RDCMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_BCUE_STAT_RDCMP]

//>> GET_[TP_TPBR_PBA_PBAO_BCUE_STAT_RDCMP]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_BCUE_STAT_RDCMP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_STAT));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_BCUE_STAT_RDCMP,
           TP_TPBR_PBA_PBAO_BCUE_STAT_RDCMP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_STAT_RDCMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_BCUE_STAT_RDCMP]

//>> SET_[TP_TPBR_PBA_PBAO_BCUE_STAT_DEBUG]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_BCUE_STAT_DEBUG(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_STAT));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_BCUE_STAT_DEBUG,
           TP_TPBR_PBA_PBAO_BCUE_STAT_DEBUG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_STAT_DEBUG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_BCUE_STAT_DEBUG]

//>> SET_[TP_TPBR_PBA_PBAO_BCUE_STAT_DEBUG]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_BCUE_STAT_DEBUG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_STAT));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_BCUE_STAT_DEBUG,
           TP_TPBR_PBA_PBAO_BCUE_STAT_DEBUG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_STAT_DEBUG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_BCUE_STAT_DEBUG]

//>> GET_[TP_TPBR_PBA_PBAO_BCUE_STAT_DEBUG]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_BCUE_STAT_DEBUG(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_STAT));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_BCUE_STAT_DEBUG,
           TP_TPBR_PBA_PBAO_BCUE_STAT_DEBUG_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_STAT_DEBUG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_BCUE_STAT_DEBUG]

//>> SET_[TP_TPBR_PBA_PBAO_BCUE_STAT_STOPPED]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_BCUE_STAT_STOPPED(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_STAT));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_BCUE_STAT_STOPPED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_STAT_STOPPED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_BCUE_STAT_STOPPED]

//>> SET_[TP_TPBR_PBA_PBAO_BCUE_STAT_STOPPED]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_BCUE_STAT_STOPPED(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_STAT));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_BCUE_STAT_STOPPED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_STAT_STOPPED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_BCUE_STAT_STOPPED]

//>> SET_[TP_TPBR_PBA_PBAO_BCUE_STAT_STOPPED]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_BCUE_STAT_STOPPED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_STAT));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_BCUE_STAT_STOPPED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_STAT_STOPPED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_BCUE_STAT_STOPPED]

//>> CLEAR_[TP_TPBR_PBA_PBAO_BCUE_STAT_STOPPED]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_BCUE_STAT_STOPPED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_STAT));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_BCUE_STAT_STOPPED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_STAT_STOPPED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_BCUE_STAT_STOPPED]

//>> GET_[TP_TPBR_PBA_PBAO_BCUE_STAT_STOPPED]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_BCUE_STAT_STOPPED(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_STAT));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_BCUE_STAT_STOPPED,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_STAT_STOPPED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_BCUE_STAT_STOPPED]

//>> GET_[TP_TPBR_PBA_PBAO_BCUE_STAT_STOPPED]
static inline bool GET_TP_TPBR_PBA_PBAO_BCUE_STAT_STOPPED(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_STAT));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_BCUE_STAT_STOPPED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_STAT_STOPPED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_BCUE_STAT_STOPPED]

//>> SET_[TP_TPBR_PBA_PBAO_BCUE_STAT_ERROR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_BCUE_STAT_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_STAT));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_BCUE_STAT_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_STAT_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_BCUE_STAT_ERROR]

//>> SET_[TP_TPBR_PBA_PBAO_BCUE_STAT_ERROR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_BCUE_STAT_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_STAT));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_BCUE_STAT_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_STAT_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_BCUE_STAT_ERROR]

//>> SET_[TP_TPBR_PBA_PBAO_BCUE_STAT_ERROR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_BCUE_STAT_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_STAT));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_BCUE_STAT_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_STAT_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_BCUE_STAT_ERROR]

//>> CLEAR_[TP_TPBR_PBA_PBAO_BCUE_STAT_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_BCUE_STAT_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_STAT));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_BCUE_STAT_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_STAT_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_BCUE_STAT_ERROR]

//>> GET_[TP_TPBR_PBA_PBAO_BCUE_STAT_ERROR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_BCUE_STAT_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_STAT));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_BCUE_STAT_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_STAT_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_BCUE_STAT_ERROR]

//>> GET_[TP_TPBR_PBA_PBAO_BCUE_STAT_ERROR]
static inline bool GET_TP_TPBR_PBA_PBAO_BCUE_STAT_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_STAT));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_BCUE_STAT_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_STAT_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_BCUE_STAT_ERROR]

//>> SET_[TP_TPBR_PBA_PBAO_BCUE_STAT_DONE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_BCUE_STAT_DONE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_STAT));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_BCUE_STAT_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_STAT_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_BCUE_STAT_DONE]

//>> SET_[TP_TPBR_PBA_PBAO_BCUE_STAT_DONE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_BCUE_STAT_DONE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_STAT));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_BCUE_STAT_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_STAT_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_BCUE_STAT_DONE]

//>> SET_[TP_TPBR_PBA_PBAO_BCUE_STAT_DONE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_BCUE_STAT_DONE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_STAT));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_BCUE_STAT_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_STAT_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_BCUE_STAT_DONE]

//>> CLEAR_[TP_TPBR_PBA_PBAO_BCUE_STAT_DONE]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_BCUE_STAT_DONE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_STAT));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_BCUE_STAT_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_STAT_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_BCUE_STAT_DONE]

//>> GET_[TP_TPBR_PBA_PBAO_BCUE_STAT_DONE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_BCUE_STAT_DONE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_STAT));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_BCUE_STAT_DONE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_STAT_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_BCUE_STAT_DONE]

//>> GET_[TP_TPBR_PBA_PBAO_BCUE_STAT_DONE]
static inline bool GET_TP_TPBR_PBA_PBAO_BCUE_STAT_DONE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_STAT));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_BCUE_STAT_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_STAT_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_BCUE_STAT_DONE]

//>> PREP_[TP_TPBR_PBA_PBAO_PBASLVCTL3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPBR_PBA_PBAO_PBASLVCTL3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPBR_PBA_PBAO_PBASLVCTL3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPBR_PBA_PBAO_PBASLVCTL3]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPBR_PBA_PBAO_PBASLVCTL3(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPBR_PBA_PBAO_PBASLVCTL3;
#endif
    return fapi2::getScom(i_target, TP_TPBR_PBA_PBAO_PBASLVCTL3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3]

//>> PUT_[TP_TPBR_PBA_PBAO_PBASLVCTL3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPBR_PBA_PBAO_PBASLVCTL3(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return fapi2::putScom(i_target, TP_TPBR_PBA_PBAO_PBASLVCTL3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPBR_PBA_PBAO_PBASLVCTL3]


//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL3_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_ENABLE]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL3_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_ENABLE]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL3_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_PBASLVCTL3_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_ENABLE]

//>> CLEAR_[TP_TPBR_PBA_PBAO_PBASLVCTL3_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_PBASLVCTL3_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_PBASLVCTL3_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_PBASLVCTL3_ENABLE]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBASLVCTL3_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_ENABLE]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_ENABLE]
static inline bool GET_TP_TPBR_PBA_PBAO_PBASLVCTL3_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_PBASLVCTL3_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_ENABLE]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_MID_MATCH_VALUE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL3_MID_MATCH_VALUE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_MID_MATCH_VALUE,
           TP_TPBR_PBA_PBAO_PBASLVCTL3_MID_MATCH_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_MID_MATCH_VALUE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_MID_MATCH_VALUE]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_MID_MATCH_VALUE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL3_MID_MATCH_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_MID_MATCH_VALUE,
           TP_TPBR_PBA_PBAO_PBASLVCTL3_MID_MATCH_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_MID_MATCH_VALUE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_MID_MATCH_VALUE]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_MID_MATCH_VALUE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBASLVCTL3_MID_MATCH_VALUE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_MID_MATCH_VALUE,
           TP_TPBR_PBA_PBAO_PBASLVCTL3_MID_MATCH_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_MID_MATCH_VALUE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_MID_MATCH_VALUE]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_4]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_4]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_4]

//>> CLEAR_[TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_4]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_4]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_4]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_4,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_4]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_4]
static inline bool GET_TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_4(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_4]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_MID_CARE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL3_MID_CARE_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_MID_CARE_MASK,
           TP_TPBR_PBA_PBAO_PBASLVCTL3_MID_CARE_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_MID_CARE_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_MID_CARE_MASK]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_MID_CARE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL3_MID_CARE_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_MID_CARE_MASK,
           TP_TPBR_PBA_PBAO_PBASLVCTL3_MID_CARE_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_MID_CARE_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_MID_CARE_MASK]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_MID_CARE_MASK]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBASLVCTL3_MID_CARE_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_MID_CARE_MASK,
           TP_TPBR_PBA_PBAO_PBASLVCTL3_MID_CARE_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_MID_CARE_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_MID_CARE_MASK]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_WRITE_TTYPE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL3_WRITE_TTYPE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_WRITE_TTYPE,
           TP_TPBR_PBA_PBAO_PBASLVCTL3_WRITE_TTYPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_WRITE_TTYPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_WRITE_TTYPE]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_WRITE_TTYPE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL3_WRITE_TTYPE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_WRITE_TTYPE,
           TP_TPBR_PBA_PBAO_PBASLVCTL3_WRITE_TTYPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_WRITE_TTYPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_WRITE_TTYPE]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_WRITE_TTYPE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBASLVCTL3_WRITE_TTYPE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_WRITE_TTYPE,
           TP_TPBR_PBA_PBAO_PBASLVCTL3_WRITE_TTYPE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_WRITE_TTYPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_WRITE_TTYPE]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_11_14]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_11_14(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_11_14,
           TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_11_14_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_11_14 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_11_14]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_11_14]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_11_14(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_11_14,
           TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_11_14_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_11_14 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_11_14]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_11_14]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_11_14(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_11_14,
           TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_11_14_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_11_14 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_11_14]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_READ_TTYPE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL3_READ_TTYPE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_READ_TTYPE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_READ_TTYPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_READ_TTYPE]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_READ_TTYPE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL3_READ_TTYPE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_READ_TTYPE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_READ_TTYPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_READ_TTYPE]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_READ_TTYPE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL3_READ_TTYPE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_PBASLVCTL3_READ_TTYPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_READ_TTYPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_READ_TTYPE]

//>> CLEAR_[TP_TPBR_PBA_PBAO_PBASLVCTL3_READ_TTYPE]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_PBASLVCTL3_READ_TTYPE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_PBASLVCTL3_READ_TTYPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_READ_TTYPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_PBASLVCTL3_READ_TTYPE]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_READ_TTYPE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBASLVCTL3_READ_TTYPE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_READ_TTYPE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_READ_TTYPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_READ_TTYPE]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_READ_TTYPE]
static inline bool GET_TP_TPBR_PBA_PBAO_PBASLVCTL3_READ_TTYPE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_PBASLVCTL3_READ_TTYPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_READ_TTYPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_READ_TTYPE]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_READ_PREFETCH_CTL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL3_READ_PREFETCH_CTL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_READ_PREFETCH_CTL,
           TP_TPBR_PBA_PBAO_PBASLVCTL3_READ_PREFETCH_CTL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_READ_PREFETCH_CTL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_READ_PREFETCH_CTL]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_READ_PREFETCH_CTL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL3_READ_PREFETCH_CTL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_READ_PREFETCH_CTL,
           TP_TPBR_PBA_PBAO_PBASLVCTL3_READ_PREFETCH_CTL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_READ_PREFETCH_CTL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_READ_PREFETCH_CTL]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_READ_PREFETCH_CTL]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBASLVCTL3_READ_PREFETCH_CTL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_READ_PREFETCH_CTL,
           TP_TPBR_PBA_PBAO_PBASLVCTL3_READ_PREFETCH_CTL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_READ_PREFETCH_CTL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_READ_PREFETCH_CTL]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_INVALIDATE_CTL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_INVALIDATE_CTL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_INVALIDATE_CTL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_INVALIDATE_CTL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_INVALIDATE_CTL]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_INVALIDATE_CTL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_INVALIDATE_CTL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_INVALIDATE_CTL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_INVALIDATE_CTL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_INVALIDATE_CTL]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_INVALIDATE_CTL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_INVALIDATE_CTL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_INVALIDATE_CTL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_INVALIDATE_CTL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_INVALIDATE_CTL]

//>> CLEAR_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_INVALIDATE_CTL]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_INVALIDATE_CTL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_INVALIDATE_CTL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_INVALIDATE_CTL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_INVALIDATE_CTL]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_INVALIDATE_CTL]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_INVALIDATE_CTL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_INVALIDATE_CTL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_INVALIDATE_CTL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_INVALIDATE_CTL]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_INVALIDATE_CTL]
static inline bool GET_TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_INVALIDATE_CTL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_INVALIDATE_CTL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_INVALIDATE_CTL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_INVALIDATE_CTL]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_W]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_W(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_W,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_W chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_W]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_W]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_W(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_W,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_W chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_W]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_W]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_W(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_W>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_W chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_W]

//>> CLEAR_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_W]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_W(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_W>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_W chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_W]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_W]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_W(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_W,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_W chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_W]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_W]
static inline bool GET_TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_W(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_W>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_W chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_W]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_A]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_A]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_A]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_A]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_A]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_A(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_A]

//>> CLEAR_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_A]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_A(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_A]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_A]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_A,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_A]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_A]
static inline bool GET_TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_A(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_A]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_B]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_B]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_B]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_B]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_B]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_B(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_B]

//>> CLEAR_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_B]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_B(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_B]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_B]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_B,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_B]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_B]
static inline bool GET_TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_B(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_B]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_C]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_C(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_C,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_C chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_C]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_C]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_C(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_C,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_C chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_C]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_C]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_C(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_C>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_C chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_C]

//>> CLEAR_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_C]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_C(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_C>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_C chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_C]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_C]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_C(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_C,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_C chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_C]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_C]
static inline bool GET_TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_C(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_C>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_C chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_BUF_ALLOC_C]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_23]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_23(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_23,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_23 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_23]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_23]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_23(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_23,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_23 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_23]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_23]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_23(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_23>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_23 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_23]

//>> CLEAR_[TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_23]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_23(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_23>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_23 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_23]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_23]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_23(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_23,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_23 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_23]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_23]
static inline bool GET_TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_23(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_23>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_23 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_23]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_DIS_WRITE_GATHER]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL3_DIS_WRITE_GATHER(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_DIS_WRITE_GATHER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_DIS_WRITE_GATHER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_DIS_WRITE_GATHER]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_DIS_WRITE_GATHER]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL3_DIS_WRITE_GATHER(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_DIS_WRITE_GATHER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_DIS_WRITE_GATHER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_DIS_WRITE_GATHER]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_DIS_WRITE_GATHER]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL3_DIS_WRITE_GATHER(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_PBASLVCTL3_DIS_WRITE_GATHER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_DIS_WRITE_GATHER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_DIS_WRITE_GATHER]

//>> CLEAR_[TP_TPBR_PBA_PBAO_PBASLVCTL3_DIS_WRITE_GATHER]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_PBASLVCTL3_DIS_WRITE_GATHER(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_PBASLVCTL3_DIS_WRITE_GATHER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_DIS_WRITE_GATHER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_PBASLVCTL3_DIS_WRITE_GATHER]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_DIS_WRITE_GATHER]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBASLVCTL3_DIS_WRITE_GATHER(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_DIS_WRITE_GATHER,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_DIS_WRITE_GATHER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_DIS_WRITE_GATHER]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_DIS_WRITE_GATHER]
static inline bool GET_TP_TPBR_PBA_PBAO_PBASLVCTL3_DIS_WRITE_GATHER(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_PBASLVCTL3_DIS_WRITE_GATHER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_DIS_WRITE_GATHER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_DIS_WRITE_GATHER]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_WR_GATHER_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL3_WR_GATHER_TIMEOUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_WR_GATHER_TIMEOUT,
           TP_TPBR_PBA_PBAO_PBASLVCTL3_WR_GATHER_TIMEOUT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_WR_GATHER_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_WR_GATHER_TIMEOUT]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_WR_GATHER_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL3_WR_GATHER_TIMEOUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_WR_GATHER_TIMEOUT,
           TP_TPBR_PBA_PBAO_PBASLVCTL3_WR_GATHER_TIMEOUT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_WR_GATHER_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_WR_GATHER_TIMEOUT]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_WR_GATHER_TIMEOUT]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBASLVCTL3_WR_GATHER_TIMEOUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_WR_GATHER_TIMEOUT,
           TP_TPBR_PBA_PBAO_PBASLVCTL3_WR_GATHER_TIMEOUT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_WR_GATHER_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_WR_GATHER_TIMEOUT]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_WRITE_TSIZE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL3_WRITE_TSIZE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_WRITE_TSIZE,
           TP_TPBR_PBA_PBAO_PBASLVCTL3_WRITE_TSIZE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_WRITE_TSIZE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_WRITE_TSIZE]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_WRITE_TSIZE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL3_WRITE_TSIZE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_WRITE_TSIZE,
           TP_TPBR_PBA_PBAO_PBASLVCTL3_WRITE_TSIZE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_WRITE_TSIZE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_WRITE_TSIZE]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_WRITE_TSIZE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBASLVCTL3_WRITE_TSIZE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_WRITE_TSIZE,
           TP_TPBR_PBA_PBAO_PBASLVCTL3_WRITE_TSIZE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_WRITE_TSIZE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_WRITE_TSIZE]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_EXTADDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL3_EXTADDR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_EXTADDR,
           TP_TPBR_PBA_PBAO_PBASLVCTL3_EXTADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_EXTADDR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_EXTADDR]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_EXTADDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL3_EXTADDR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_EXTADDR,
           TP_TPBR_PBA_PBAO_PBASLVCTL3_EXTADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_EXTADDR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_EXTADDR]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_EXTADDR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBASLVCTL3_EXTADDR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_EXTADDR,
           TP_TPBR_PBA_PBAO_PBASLVCTL3_EXTADDR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_EXTADDR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_EXTADDR]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_50]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_50(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_50,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_50 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_50]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_50]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_50(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_50,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_50 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_50]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_50]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_50(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_50>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_50 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_50]

//>> CLEAR_[TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_50]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_50(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_50>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_50 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_50]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_50]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_50(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_50,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_50 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_50]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_50]
static inline bool GET_TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_50(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL3));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_50>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_50 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL3_RESERVED_50]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_ERR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_ERR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_ERR]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_ERR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_ERR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_ERR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_ERR]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_ERR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_POPULATE_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_POPULATE_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_POPULATE_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_POPULATE_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_POPULATE_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_POPULATE_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_POPULATE_PENDING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_POPULATE_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_POPULATE_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_POPULATE_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_POPULATE_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_POPULATE_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_POPULATE_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_POPULATE_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_POPULATE_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_POPULATE_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_POPULATE_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_POPULATE_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_POPULATE_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_POPULATE_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_POPULATE_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_POPULATE_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_POPULATE_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_POPULATE_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_POPULATE_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_POPULATE_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_POPULATE_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_POPULATE_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_POPULATE_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_POPULATE_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_VALID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_VALID(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_VALID,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_VALID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_VALID]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_VALID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_VALID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_VALID,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_VALID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_VALID]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_VALID]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_VALID(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_VALID,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_VALID_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACL_VALID]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACU]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACU(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACU;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACU]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACU]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACU(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACU;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACU, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACU]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACU]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACU(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACU));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACU, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACU]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACU_OCB_OCI_GPEXIDCAC_DCACHE_TAG_ADDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACU_OCB_OCI_GPEXIDCAC_DCACHE_TAG_ADDR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACU));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACU_OCB_OCI_GPEXIDCAC_DCACHE_TAG_ADDR,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACU_OCB_OCI_GPEXIDCAC_DCACHE_TAG_ADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACU_OCB_OCI_GPEXIDCAC_DCACHE_TAG_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACU_OCB_OCI_GPEXIDCAC_DCACHE_TAG_ADDR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACU_OCB_OCI_GPEXIDCAC_DCACHE_TAG_ADDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACU_OCB_OCI_GPEXIDCAC_DCACHE_TAG_ADDR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACU));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACU_OCB_OCI_GPEXIDCAC_DCACHE_TAG_ADDR,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACU_OCB_OCI_GPEXIDCAC_DCACHE_TAG_ADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACU_OCB_OCI_GPEXIDCAC_DCACHE_TAG_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACU_OCB_OCI_GPEXIDCAC_DCACHE_TAG_ADDR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACU_OCB_OCI_GPEXIDCAC_DCACHE_TAG_ADDR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACU_OCB_OCI_GPEXIDCAC_DCACHE_TAG_ADDR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACU));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACU_OCB_OCI_GPEXIDCAC_DCACHE_TAG_ADDR,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACU_OCB_OCI_GPEXIDCAC_DCACHE_TAG_ADDR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACU_OCB_OCI_GPEXIDCAC_DCACHE_TAG_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDCACU_OCB_OCI_GPEXIDCAC_DCACHE_TAG_ADDR]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR_IR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR_IR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR_IR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR_IR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR_IR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR_IR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR_IR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR_IR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR_IR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR_IR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR_IR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR_IR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR_IR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR_IR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR_IR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR_IR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR_IR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR_IR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR_EDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR_EDR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR_EDR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR_EDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR_EDR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR_EDR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR_EDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR_EDR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR_EDR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR_EDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR_EDR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR_EDR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR_EDR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR_EDR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR_EDR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR_EDR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR_EDR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIRAMEDR_EDR]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CMD2B_RESERVED_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CMD2B_RESERVED_0(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CMD2B_RESERVED_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CMD2B_RESERVED_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CMD2B_RESERVED_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CMD2B_RESERVED_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CMD2B_RESERVED_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CMD2B_RESERVED_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CMD2B_RESERVED_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CMD2B_RESERVED_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CMD2B_RESERVED_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CMD2B_RESERVED_0(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CMD2B_RESERVED_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CMD2B_RESERVED_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CMD2B_RESERVED_0]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CMD2B_RESERVED_0]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CMD2B_RESERVED_0(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CMD2B_RESERVED_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CMD2B_RESERVED_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CMD2B_RESERVED_0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CMD2B_RESERVED_0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CMD2B_RESERVED_0(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CMD2B_RESERVED_0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CMD2B_RESERVED_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CMD2B_RESERVED_0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CMD2B_RESERVED_0]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CMD2B_RESERVED_0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CMD2B_RESERVED_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CMD2B_RESERVED_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CMD2B_RESERVED_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CLEAR_STICKY_BITS_2B]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CLEAR_STICKY_BITS_2B(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CLEAR_STICKY_BITS_2B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CLEAR_STICKY_BITS_2B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CLEAR_STICKY_BITS_2B]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CLEAR_STICKY_BITS_2B]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CLEAR_STICKY_BITS_2B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CLEAR_STICKY_BITS_2B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CLEAR_STICKY_BITS_2B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CLEAR_STICKY_BITS_2B]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CLEAR_STICKY_BITS_2B]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CLEAR_STICKY_BITS_2B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CLEAR_STICKY_BITS_2B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CLEAR_STICKY_BITS_2B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CLEAR_STICKY_BITS_2B]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CLEAR_STICKY_BITS_2B]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CLEAR_STICKY_BITS_2B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CLEAR_STICKY_BITS_2B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CLEAR_STICKY_BITS_2B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CLEAR_STICKY_BITS_2B]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CLEAR_STICKY_BITS_2B]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CLEAR_STICKY_BITS_2B(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CLEAR_STICKY_BITS_2B,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CLEAR_STICKY_BITS_2B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CLEAR_STICKY_BITS_2B]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CLEAR_STICKY_BITS_2B]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CLEAR_STICKY_BITS_2B(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CLEAR_STICKY_BITS_2B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CLEAR_STICKY_BITS_2B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCMD2B_CLEAR_STICKY_BITS_2B]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_O2SRD0B]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_O2SRD0B(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_O2SRD0B;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_O2SRD0B]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SRD0B]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_O2SRD0B(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_O2SRD0B;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_O2SRD0B, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SRD0B]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_O2SRD0B]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_O2SRD0B(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SRD0B));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_O2SRD0B, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_O2SRD0B]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SRD0B_OCB_OCI_O2SRD0B_O2S_RDATA_0B]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SRD0B_OCB_OCI_O2SRD0B_O2S_RDATA_0B(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SRD0B));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SRD0B_OCB_OCI_O2SRD0B_O2S_RDATA_0B,
           TP_TPCHIP_OCC_OCI_OCB_O2SRD0B_OCB_OCI_O2SRD0B_O2S_RDATA_0B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SRD0B_OCB_OCI_O2SRD0B_O2S_RDATA_0B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SRD0B_OCB_OCI_O2SRD0B_O2S_RDATA_0B]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SRD0B_OCB_OCI_O2SRD0B_O2S_RDATA_0B]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SRD0B_OCB_OCI_O2SRD0B_O2S_RDATA_0B(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SRD0B));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SRD0B_OCB_OCI_O2SRD0B_O2S_RDATA_0B,
           TP_TPCHIP_OCC_OCI_OCB_O2SRD0B_OCB_OCI_O2SRD0B_O2S_RDATA_0B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SRD0B_OCB_OCI_O2SRD0B_O2S_RDATA_0B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SRD0B_OCB_OCI_O2SRD0B_O2S_RDATA_0B]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SRD0B_OCB_OCI_O2SRD0B_O2S_RDATA_0B]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_O2SRD0B_OCB_OCI_O2SRD0B_O2S_RDATA_0B(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SRD0B));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_O2SRD0B_OCB_OCI_O2SRD0B_O2S_RDATA_0B,
           TP_TPCHIP_OCC_OCI_OCB_O2SRD0B_OCB_OCI_O2SRD0B_O2S_RDATA_0B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SRD0B_OCB_OCI_O2SRD0B_O2S_RDATA_0B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SRD0B_OCB_OCI_O2SRD0B_O2S_RDATA_0B]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_O2SWD2B]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_O2SWD2B(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_O2SWD2B;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_O2SWD2B]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SWD2B]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_O2SWD2B(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_O2SWD2B;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_O2SWD2B, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SWD2B]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_O2SWD2B]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_O2SWD2B(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SWD2B));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_O2SWD2B, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_O2SWD2B]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SWD2B_OCB_OCI_O2SWD2B_O2S_WDATA_2B]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SWD2B_OCB_OCI_O2SWD2B_O2S_WDATA_2B(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SWD2B));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SWD2B_OCB_OCI_O2SWD2B_O2S_WDATA_2B,
           TP_TPCHIP_OCC_OCI_OCB_O2SWD2B_OCB_OCI_O2SWD2B_O2S_WDATA_2B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SWD2B_OCB_OCI_O2SWD2B_O2S_WDATA_2B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SWD2B_OCB_OCI_O2SWD2B_O2S_WDATA_2B]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SWD2B_OCB_OCI_O2SWD2B_O2S_WDATA_2B]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SWD2B_OCB_OCI_O2SWD2B_O2S_WDATA_2B(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SWD2B));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SWD2B_OCB_OCI_O2SWD2B_O2S_WDATA_2B,
           TP_TPCHIP_OCC_OCI_OCB_O2SWD2B_OCB_OCI_O2SWD2B_O2S_WDATA_2B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SWD2B_OCB_OCI_O2SWD2B_O2S_WDATA_2B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SWD2B_OCB_OCI_O2SWD2B_O2S_WDATA_2B]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SWD2B_OCB_OCI_O2SWD2B_O2S_WDATA_2B]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_O2SWD2B_OCB_OCI_O2SWD2B_O2S_WDATA_2B(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SWD2B));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_O2SWD2B_OCB_OCI_O2SWD2B_O2S_WDATA_2B,
           TP_TPCHIP_OCC_OCI_OCB_O2SWD2B_OCB_OCI_O2SWD2B_O2S_WDATA_2B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SWD2B_OCB_OCI_O2SWD2B_O2S_WDATA_2B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SWD2B_OCB_OCI_O2SWD2B_O2S_WDATA_2B]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OCBSES0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OCBSES0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OCBSES0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OCBSES0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OCBSES0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OCBSES0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OCBSES0;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OCBSES0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OCBSES0]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OCBSES0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OCBSES0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCBSES0));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OCBSES0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OCBSES0]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OCBSES0_SH_READ_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OCBSES0_SH_READ_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCBSES0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OCBSES0_SH_READ_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCBSES0_SH_READ_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OCBSES0_SH_READ_UNDERFLOW]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OCBSES0_SH_READ_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OCBSES0_SH_READ_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCBSES0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OCBSES0_SH_READ_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCBSES0_SH_READ_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OCBSES0_SH_READ_UNDERFLOW]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OCBSES0_SH_READ_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OCBSES0_SH_READ_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCBSES0));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OCBSES0_SH_READ_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCBSES0_SH_READ_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OCBSES0_SH_READ_UNDERFLOW]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OCBSES0_SH_READ_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OCBSES0_SH_READ_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCBSES0));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OCBSES0_SH_READ_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCBSES0_SH_READ_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OCBSES0_SH_READ_UNDERFLOW]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OCBSES0_SH_READ_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OCBSES0_SH_READ_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCBSES0));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OCBSES0_SH_READ_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCBSES0_SH_READ_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OCBSES0_SH_READ_UNDERFLOW]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OCBSES0_SH_READ_UNDERFLOW]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OCBSES0_SH_READ_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCBSES0));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OCBSES0_SH_READ_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCBSES0_SH_READ_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OCBSES0_SH_READ_UNDERFLOW]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OCBSES0_LL_WRITE_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OCBSES0_LL_WRITE_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCBSES0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OCBSES0_LL_WRITE_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCBSES0_LL_WRITE_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OCBSES0_LL_WRITE_OVERFLOW]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OCBSES0_LL_WRITE_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OCBSES0_LL_WRITE_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCBSES0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OCBSES0_LL_WRITE_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCBSES0_LL_WRITE_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OCBSES0_LL_WRITE_OVERFLOW]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OCBSES0_LL_WRITE_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OCBSES0_LL_WRITE_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCBSES0));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OCBSES0_LL_WRITE_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCBSES0_LL_WRITE_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OCBSES0_LL_WRITE_OVERFLOW]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OCBSES0_LL_WRITE_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OCBSES0_LL_WRITE_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCBSES0));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OCBSES0_LL_WRITE_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCBSES0_LL_WRITE_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OCBSES0_LL_WRITE_OVERFLOW]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OCBSES0_LL_WRITE_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OCBSES0_LL_WRITE_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCBSES0));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OCBSES0_LL_WRITE_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCBSES0_LL_WRITE_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OCBSES0_LL_WRITE_OVERFLOW]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OCBSES0_LL_WRITE_OVERFLOW]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OCBSES0_LL_WRITE_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCBSES0));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OCBSES0_LL_WRITE_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCBSES0_LL_WRITE_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OCBSES0_LL_WRITE_OVERFLOW]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OIRR1C_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OIRR1C_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OIRR1C_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OIRR1C_RW]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OIRR1C_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OIRR1C_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OIRR1C_RW;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OIRR1C_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OIRR1C_RW]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OIRR1C_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OIRR1C_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OIRR1C_RW, TP_TPCHIP_OCC_OCI_OCB_OIRR1C_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OIRR1C_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OIRR1C_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OIRR1C_RW]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OIRR1C_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OIRR1C_WO_CLEAR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OIRR1C_WO_CLEAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OIRR1C_WO_CLEAR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OIRR1C_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OIRR1C_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OIRR1C_WO_CLEAR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OIRR1C_WO_CLEAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OIRR1C_WO_CLEAR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OIRR1C_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OIRR1C_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OIRR1C_RW, TP_TPCHIP_OCC_OCI_OCB_OIRR1C_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OIRR1C_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OIRR1C_WO_CLEAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OIRR1C_WO_CLEAR]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OIRR1C_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OIRR1C_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OIRR1C_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OIRR1C_WO_OR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OIRR1C_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OIRR1C_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OIRR1C_WO_OR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OIRR1C_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OIRR1C_WO_OR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OIRR1C_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OIRR1C_WO_OR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OIRR1C_RW, TP_TPCHIP_OCC_OCI_OCB_OIRR1C_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OIRR1C_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OIRR1C_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OIRR1C_WO_OR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OIRR1C_OCB_OCI_OIRR1C_INTERRUPT_ROUTE_1_C]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OIRR1C_OCB_OCI_OIRR1C_INTERRUPT_ROUTE_1_C(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OIRR1C_RW, TP_TPCHIP_OCC_OCI_OCB_OIRR1C_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OIRR1C_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OIRR1C_OCB_OCI_OIRR1C_INTERRUPT_ROUTE_1_C,
           TP_TPCHIP_OCC_OCI_OCB_OIRR1C_OCB_OCI_OIRR1C_INTERRUPT_ROUTE_1_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OIRR1C_OCB_OCI_OIRR1C_INTERRUPT_ROUTE_1_C chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OIRR1C_OCB_OCI_OIRR1C_INTERRUPT_ROUTE_1_C]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OIRR1C_OCB_OCI_OIRR1C_INTERRUPT_ROUTE_1_C]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OIRR1C_OCB_OCI_OIRR1C_INTERRUPT_ROUTE_1_C(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OIRR1C_RW, TP_TPCHIP_OCC_OCI_OCB_OIRR1C_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OIRR1C_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OIRR1C_OCB_OCI_OIRR1C_INTERRUPT_ROUTE_1_C,
           TP_TPCHIP_OCC_OCI_OCB_OIRR1C_OCB_OCI_OIRR1C_INTERRUPT_ROUTE_1_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OIRR1C_OCB_OCI_OIRR1C_INTERRUPT_ROUTE_1_C chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OIRR1C_OCB_OCI_OIRR1C_INTERRUPT_ROUTE_1_C]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OIRR1C_OCB_OCI_OIRR1C_INTERRUPT_ROUTE_1_C]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OIRR1C_OCB_OCI_OIRR1C_INTERRUPT_ROUTE_1_C(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OIRR1C_RW, TP_TPCHIP_OCC_OCI_OCB_OIRR1C_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OIRR1C_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OIRR1C_OCB_OCI_OIRR1C_INTERRUPT_ROUTE_1_C,
           TP_TPCHIP_OCC_OCI_OCB_OIRR1C_OCB_OCI_OIRR1C_INTERRUPT_ROUTE_1_C_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OIRR1C_OCB_OCI_OIRR1C_INTERRUPT_ROUTE_1_C chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OIRR1C_OCB_OCI_OIRR1C_INTERRUPT_ROUTE_1_C]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OISR0_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OISR0_RO(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OISR0_RO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OISR0_RO]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_RO(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OISR0_RO;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_RO]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OISR0_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OISR0_RO(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OISR0_RO]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_TRACE_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_TRACE_TRIGGER(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_TRACE_TRIGGER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_TRACE_TRIGGER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_TRACE_TRIGGER]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_TRACE_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_TRACE_TRIGGER(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_TRACE_TRIGGER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_TRACE_TRIGGER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_TRACE_TRIGGER]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_TRACE_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_TRACE_TRIGGER(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_TRACE_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_TRACE_TRIGGER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_TRACE_TRIGGER]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_TRACE_TRIGGER]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OISR0_TRACE_TRIGGER(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_TRACE_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_TRACE_TRIGGER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_TRACE_TRIGGER]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_TRACE_TRIGGER]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_TRACE_TRIGGER(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_TRACE_TRIGGER,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_TRACE_TRIGGER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_TRACE_TRIGGER]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_TRACE_TRIGGER]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_TRACE_TRIGGER(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_TRACE_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_TRACE_TRIGGER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_TRACE_TRIGGER]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_ERROR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_ERROR]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_ERROR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_ERROR]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_ERROR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_ERROR]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_ERROR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_ERROR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_ERROR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_ERROR]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_ERROR]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE2_ERROR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE2_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE2_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE2_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE2_ERROR]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE2_ERROR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE2_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE2_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE2_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE2_ERROR]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE2_ERROR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE2_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE2_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE2_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE2_ERROR]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE2_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE2_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE2_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE2_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE2_ERROR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE2_ERROR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE2_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE2_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE2_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE2_ERROR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE2_ERROR]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE2_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE2_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE2_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE2_ERROR]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE3_ERROR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE3_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE3_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE3_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE3_ERROR]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE3_ERROR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE3_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE3_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE3_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE3_ERROR]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE3_ERROR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE3_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE3_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE3_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE3_ERROR]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE3_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE3_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE3_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE3_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE3_ERROR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE3_ERROR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE3_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE3_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE3_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE3_ERROR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE3_ERROR]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE3_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE3_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE3_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_GPE3_ERROR]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE2]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE2]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE2]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE2]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE3]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE3]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE3(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE3]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE3]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE3,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE3]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE3]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE3(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_CHECK_STOP_GPE3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_MALF_ALERT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_MALF_ALERT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_MALF_ALERT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_MALF_ALERT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_MALF_ALERT]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_MALF_ALERT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_MALF_ALERT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_MALF_ALERT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_MALF_ALERT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_MALF_ALERT]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_MALF_ALERT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_MALF_ALERT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_MALF_ALERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_MALF_ALERT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_MALF_ALERT]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_MALF_ALERT]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_MALF_ALERT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_MALF_ALERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_MALF_ALERT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_MALF_ALERT]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_MALF_ALERT]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_MALF_ALERT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_MALF_ALERT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_MALF_ALERT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_MALF_ALERT]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_MALF_ALERT]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_MALF_ALERT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_MALF_ALERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_MALF_ALERT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_OCC_MALF_ALERT]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PVREF_ERROR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PVREF_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PVREF_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PVREF_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PVREF_ERROR]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PVREF_ERROR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PVREF_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PVREF_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PVREF_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PVREF_ERROR]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PVREF_ERROR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PVREF_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PVREF_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PVREF_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PVREF_ERROR]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PVREF_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OISR0_PVREF_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PVREF_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PVREF_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PVREF_ERROR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PVREF_ERROR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PVREF_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PVREF_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PVREF_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PVREF_ERROR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PVREF_ERROR]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PVREF_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PVREF_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PVREF_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PVREF_ERROR]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI2]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI2]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI2]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI2]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI3]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI3]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI3]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI3]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI3,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI3]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI3]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI3(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_IPI3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_DEBUG_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_DEBUG_TRIGGER(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_DEBUG_TRIGGER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_DEBUG_TRIGGER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_DEBUG_TRIGGER]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_DEBUG_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_DEBUG_TRIGGER(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_DEBUG_TRIGGER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_DEBUG_TRIGGER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_DEBUG_TRIGGER]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_DEBUG_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_DEBUG_TRIGGER(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_DEBUG_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_DEBUG_TRIGGER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_DEBUG_TRIGGER]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_DEBUG_TRIGGER]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OISR0_DEBUG_TRIGGER(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_DEBUG_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_DEBUG_TRIGGER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_DEBUG_TRIGGER]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_DEBUG_TRIGGER]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_DEBUG_TRIGGER(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_DEBUG_TRIGGER,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_DEBUG_TRIGGER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_DEBUG_TRIGGER]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_DEBUG_TRIGGER]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_DEBUG_TRIGGER(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_DEBUG_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_DEBUG_TRIGGER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_DEBUG_TRIGGER]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_SPARE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_SPARE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_SPARE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_SPARE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_SPARE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_SPARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_SPARE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_SPARE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_SPARE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_SPARE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_SPARE]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_SPARE]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OISR0_SPARE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_SPARE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_SPARE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_SPARE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_SPARE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_SPARE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_SPARE]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_SPARE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_SPARE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_ATTN]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_ATTN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_ATTN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_ATTN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_ATTN]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_ATTN]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_ATTN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_ATTN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_ATTN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_ATTN]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_ATTN]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_ATTN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_ATTN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_ATTN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_ATTN]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_ATTN]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_ATTN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_ATTN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_ATTN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_ATTN]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_ATTN]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_ATTN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_ATTN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_ATTN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_ATTN]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_ATTN]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_ATTN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_ATTN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_ATTN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_ATTN]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH0]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH0]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH0(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH0]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH1]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH1]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH1]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PBAX_PGPE_PUSH1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PBA_OVERCURRENT_INDICATOR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PBA_OVERCURRENT_INDICATOR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PBA_OVERCURRENT_INDICATOR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PBA_OVERCURRENT_INDICATOR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PBA_OVERCURRENT_INDICATOR]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PBA_OVERCURRENT_INDICATOR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PBA_OVERCURRENT_INDICATOR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PBA_OVERCURRENT_INDICATOR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PBA_OVERCURRENT_INDICATOR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PBA_OVERCURRENT_INDICATOR]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PBA_OVERCURRENT_INDICATOR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PBA_OVERCURRENT_INDICATOR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PBA_OVERCURRENT_INDICATOR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PBA_OVERCURRENT_INDICATOR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PBA_OVERCURRENT_INDICATOR]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PBA_OVERCURRENT_INDICATOR]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OISR0_PBA_OVERCURRENT_INDICATOR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PBA_OVERCURRENT_INDICATOR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PBA_OVERCURRENT_INDICATOR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PBA_OVERCURRENT_INDICATOR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PBA_OVERCURRENT_INDICATOR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PBA_OVERCURRENT_INDICATOR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PBA_OVERCURRENT_INDICATOR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PBA_OVERCURRENT_INDICATOR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PBA_OVERCURRENT_INDICATOR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PBA_OVERCURRENT_INDICATOR]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PBA_OVERCURRENT_INDICATOR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PBA_OVERCURRENT_INDICATOR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PBA_OVERCURRENT_INDICATOR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PBA_OVERCURRENT_INDICATOR]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE0_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE0_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE0_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE0_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE0_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE0_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE0_PENDING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE0_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE0_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE0_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE0_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE0_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE0_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE0_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE0_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE0_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE0_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE0_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE0_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE0_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE0_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE0_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE0_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE0_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE0_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE0_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE0_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE0_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE0_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE0_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE1_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE1_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE1_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE1_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE1_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE1_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE1_PENDING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE1_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE1_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE1_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE1_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE1_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE1_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE1_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE1_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE1_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE1_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE1_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE1_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE1_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE1_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE1_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE1_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE1_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE1_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE1_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE1_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE1_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE1_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE1_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE2_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE2_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE2_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE2_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE2_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE2_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE2_PENDING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE2_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE2_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE2_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE2_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE2_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE2_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE2_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE2_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE2_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE2_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE2_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE2_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE2_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE2_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE2_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE2_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE2_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE2_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE2_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE2_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE2_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE2_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE2_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE3_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE3_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE3_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE3_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE3_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE3_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE3_PENDING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE3_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE3_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE3_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE3_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE3_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE3_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE3_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE3_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE3_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE3_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE3_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE3_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE3_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE3_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE3_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE3_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE3_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE3_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE3_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE3_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE3_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE3_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE3_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE4_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE4_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE4_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE4_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE4_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE4_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE4_PENDING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE4_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE4_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE4_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE4_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE4_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE4_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE4_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE4_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE4_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE4_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE4_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE4_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE4_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE4_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE4_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE4_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE4_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE4_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE4_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE4_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE4_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE4_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE4_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE5_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE5_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE5_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE5_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE5_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE5_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE5_PENDING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE5_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE5_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE5_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE5_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE5_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE5_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE5_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE5_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE5_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE5_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE5_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE5_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE5_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE5_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE5_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE5_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE5_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE5_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE5_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE5_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE5_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE5_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE5_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE6_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE6_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE6_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE6_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE6_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE6_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE6_PENDING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE6_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE6_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE6_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE6_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE6_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE6_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE6_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE6_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE6_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE6_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE6_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE6_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE6_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE6_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE6_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE6_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE6_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE6_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE6_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE6_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE6_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE6_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE6_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE7_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE7_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE7_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE7_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE7_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE7_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE7_PENDING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE7_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE7_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE7_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE7_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE7_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE7_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE7_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE7_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE7_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE7_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE7_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE7_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE7_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE7_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE7_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE7_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE7_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE7_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE7_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE7_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE7_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE7_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE7_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE8_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE8_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE8_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE8_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE8_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE8_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE8_PENDING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE8_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE8_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE8_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE8_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE8_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE8_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE8_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE8_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE8_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE8_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE8_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE8_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE8_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE8_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE8_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE8_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE8_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE8_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE8_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE8_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE8_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE8_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE8_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE9_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE9_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE9_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE9_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE9_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE9_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE9_PENDING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE9_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE9_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE9_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE9_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE9_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE9_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE9_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE9_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE9_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE9_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE9_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE9_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE9_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE9_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE9_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE9_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE9_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE9_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE9_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE9_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE9_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE9_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPE9_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEA_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEA_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEA_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEA_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEA_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEA_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEA_PENDING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEA_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEA_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEA_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEA_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEA_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEA_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEA_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEA_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEA_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEA_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEA_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEA_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEA_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEA_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEA_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEA_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEA_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEA_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEA_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEA_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEA_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEA_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEA_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEB_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEB_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEB_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEB_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEB_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEB_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEB_PENDING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEB_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEB_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEB_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEB_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEB_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEB_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEB_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEB_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEB_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEB_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEB_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEB_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEB_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEB_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEB_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEB_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEB_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEB_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEB_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEB_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEB_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEB_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEB_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEC_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEC_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEC_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEC_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEC_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEC_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEC_PENDING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEC_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEC_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEC_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEC_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEC_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEC_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEC_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEC_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEC_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEC_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEC_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEC_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEC_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEC_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEC_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEC_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEC_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEC_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEC_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEC_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEC_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEC_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEC_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPED_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPED_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPED_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPED_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPED_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPED_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPED_PENDING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPED_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPED_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPED_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPED_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPED_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPED_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPED_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPED_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPED_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPED_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPED_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPED_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPED_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPED_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPED_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPED_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPED_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPED_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPED_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPED_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPED_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPED_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPED_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEE_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEE_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEE_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEE_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEE_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEE_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEE_PENDING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEE_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEE_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEE_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEE_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEE_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEE_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEE_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEE_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEE_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEE_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEE_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEE_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEE_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEE_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEE_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEE_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEE_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEE_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEE_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEE_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEE_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEE_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEE_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEF_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEF_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEF_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEF_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEF_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEF_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEF_PENDING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEF_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEF_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEF_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEF_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEF_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEF_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEF_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEF_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEF_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEF_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEF_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEF_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEF_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEF_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEF_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEF_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEF_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEF_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEF_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEF_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OISR0_RO, TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OISR0_WO_OR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEF_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEF_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OISR0_PMC_PCB_INTR_TYPEF_PENDING]

//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
