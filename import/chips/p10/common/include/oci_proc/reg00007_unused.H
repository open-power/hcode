/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/oci_proc/reg00007_unused.H $  */
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

#ifndef __OCI_PROC_REG00007_H_UNUSED__
#define __OCI_PROC_REG00007_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace oci_proc
{
#endif


//>> PREP_[TP_TPBR_PBA_PBAO_PBAXISHBR1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPBR_PBA_PBAO_PBAXISHBR1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPBR_PBA_PBAO_PBAXISHBR1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPBR_PBA_PBAO_PBAXISHBR1]

//>> GET_[TP_TPBR_PBA_PBAO_PBAXISHBR1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPBR_PBA_PBAO_PBAXISHBR1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPBR_PBA_PBAO_PBAXISHBR1;
#endif
    return fapi2::getScom(i_target, TP_TPBR_PBA_PBAO_PBAXISHBR1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAXISHBR1]

//>> PUT_[TP_TPBR_PBA_PBAO_PBAXISHBR1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPBR_PBA_PBAO_PBAXISHBR1(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISHBR1));
#endif
    return fapi2::putScom(i_target, TP_TPBR_PBA_PBAO_PBAXISHBR1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPBR_PBA_PBAO_PBAXISHBR1]


//>> SET_[TP_TPBR_PBA_PBAO_PBAXISHBR1_PBAXISHBR1_PUSH_START]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXISHBR1_PBAXISHBR1_PUSH_START(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISHBR1));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXISHBR1_PBAXISHBR1_PUSH_START,
           TP_TPBR_PBA_PBAO_PBAXISHBR1_PBAXISHBR1_PUSH_START_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISHBR1_PBAXISHBR1_PUSH_START chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXISHBR1_PBAXISHBR1_PUSH_START]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXISHBR1_PBAXISHBR1_PUSH_START]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXISHBR1_PBAXISHBR1_PUSH_START(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISHBR1));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXISHBR1_PBAXISHBR1_PUSH_START,
           TP_TPBR_PBA_PBAO_PBAXISHBR1_PBAXISHBR1_PUSH_START_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISHBR1_PBAXISHBR1_PUSH_START chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXISHBR1_PBAXISHBR1_PUSH_START]

//>> GET_[TP_TPBR_PBA_PBAO_PBAXISHBR1_PBAXISHBR1_PUSH_START]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAXISHBR1_PBAXISHBR1_PUSH_START(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISHBR1));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAXISHBR1_PBAXISHBR1_PUSH_START,
           TP_TPBR_PBA_PBAO_PBAXISHBR1_PBAXISHBR1_PUSH_START_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISHBR1_PBAXISHBR1_PUSH_START chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAXISHBR1_PBAXISHBR1_PUSH_START]

//>> PREP_[TP_TPBR_PBA_PBAO_PBAXISHCS0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPBR_PBA_PBAO_PBAXISHCS0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPBR_PBA_PBAO_PBAXISHCS0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPBR_PBA_PBAO_PBAXISHCS0]

//>> GET_[TP_TPBR_PBA_PBAO_PBAXISHCS0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPBR_PBA_PBAO_PBAXISHCS0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPBR_PBA_PBAO_PBAXISHCS0;
#endif
    return fapi2::getScom(i_target, TP_TPBR_PBA_PBAO_PBAXISHCS0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAXISHCS0]

//>> PUT_[TP_TPBR_PBA_PBAO_PBAXISHCS0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPBR_PBA_PBAO_PBAXISHCS0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISHCS0));
#endif
    return fapi2::putScom(i_target, TP_TPBR_PBA_PBAO_PBAXISHCS0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPBR_PBA_PBAO_PBAXISHCS0]


//>> SET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_FULL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_FULL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISHCS0));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_FULL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_FULL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_FULL]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_FULL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_FULL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISHCS0));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_FULL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_FULL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_FULL]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_FULL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_FULL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISHCS0));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_FULL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_FULL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_FULL]

//>> CLEAR_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_FULL]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_FULL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISHCS0));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_FULL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_FULL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_FULL]

//>> GET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_FULL]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_FULL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISHCS0));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_FULL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_FULL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_FULL]

//>> GET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_FULL]
static inline bool GET_TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_FULL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISHCS0));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_FULL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_FULL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_FULL]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_EMPTY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_EMPTY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISHCS0));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_EMPTY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_EMPTY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_EMPTY]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_EMPTY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_EMPTY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISHCS0));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_EMPTY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_EMPTY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_EMPTY]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_EMPTY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_EMPTY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISHCS0));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_EMPTY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_EMPTY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_EMPTY]

//>> CLEAR_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_EMPTY]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_EMPTY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISHCS0));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_EMPTY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_EMPTY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_EMPTY]

//>> GET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_EMPTY]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_EMPTY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISHCS0));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_EMPTY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_EMPTY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_EMPTY]

//>> GET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_EMPTY]
static inline bool GET_TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_EMPTY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISHCS0));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_EMPTY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_EMPTY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_EMPTY]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_RESERVED_2_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXISHCS0_RESERVED_2_3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISHCS0));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXISHCS0_RESERVED_2_3,
           TP_TPBR_PBA_PBAO_PBAXISHCS0_RESERVED_2_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISHCS0_RESERVED_2_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_RESERVED_2_3]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_RESERVED_2_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXISHCS0_RESERVED_2_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISHCS0));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXISHCS0_RESERVED_2_3,
           TP_TPBR_PBA_PBAO_PBAXISHCS0_RESERVED_2_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISHCS0_RESERVED_2_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_RESERVED_2_3]

//>> GET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_RESERVED_2_3]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAXISHCS0_RESERVED_2_3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISHCS0));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAXISHCS0_RESERVED_2_3,
           TP_TPBR_PBA_PBAO_PBAXISHCS0_RESERVED_2_3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISHCS0_RESERVED_2_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_RESERVED_2_3]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_INTR_ACTION_0_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_INTR_ACTION_0_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISHCS0));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_INTR_ACTION_0_1,
           TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_INTR_ACTION_0_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_INTR_ACTION_0_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_INTR_ACTION_0_1]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_INTR_ACTION_0_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_INTR_ACTION_0_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISHCS0));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_INTR_ACTION_0_1,
           TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_INTR_ACTION_0_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_INTR_ACTION_0_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_INTR_ACTION_0_1]

//>> GET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_INTR_ACTION_0_1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_INTR_ACTION_0_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISHCS0));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_INTR_ACTION_0_1,
           TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_INTR_ACTION_0_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_INTR_ACTION_0_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_INTR_ACTION_0_1]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_LENGTH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_LENGTH(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISHCS0));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_LENGTH,
           TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_LENGTH_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_LENGTH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_LENGTH]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_LENGTH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_LENGTH(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISHCS0));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_LENGTH,
           TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_LENGTH_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_LENGTH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_LENGTH]

//>> GET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_LENGTH]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_LENGTH(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISHCS0));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_LENGTH,
           TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_LENGTH_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_LENGTH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_LENGTH]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_WRITE_PTR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_WRITE_PTR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISHCS0));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_WRITE_PTR,
           TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_WRITE_PTR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_WRITE_PTR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_WRITE_PTR]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_WRITE_PTR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_WRITE_PTR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISHCS0));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_WRITE_PTR,
           TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_WRITE_PTR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_WRITE_PTR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_WRITE_PTR]

//>> GET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_WRITE_PTR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_WRITE_PTR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISHCS0));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_WRITE_PTR,
           TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_WRITE_PTR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_WRITE_PTR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_WRITE_PTR]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_READ_PTR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_READ_PTR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISHCS0));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_READ_PTR,
           TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_READ_PTR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_READ_PTR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_READ_PTR]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_READ_PTR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_READ_PTR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISHCS0));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_READ_PTR,
           TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_READ_PTR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_READ_PTR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_READ_PTR]

//>> GET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_READ_PTR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_READ_PTR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISHCS0));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_READ_PTR,
           TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_READ_PTR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_READ_PTR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_READ_PTR]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISHCS0));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_ENABLE]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISHCS0));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_ENABLE]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISHCS0));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_ENABLE]

//>> CLEAR_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISHCS0));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_ENABLE]

//>> GET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISHCS0));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_ENABLE]

//>> GET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_ENABLE]
static inline bool GET_TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISHCS0));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAXISHCS0_PUSH_ENABLE]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30_OCB_OCI_GPEXIVDR30_GPR30]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30_OCB_OCI_GPEXIVDR30_GPR30(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30_OCB_OCI_GPEXIVDR30_GPR30,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30_OCB_OCI_GPEXIVDR30_GPR30_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30_OCB_OCI_GPEXIVDR30_GPR30 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30_OCB_OCI_GPEXIVDR30_GPR30]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30_OCB_OCI_GPEXIVDR30_GPR30]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30_OCB_OCI_GPEXIVDR30_GPR30(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30_OCB_OCI_GPEXIVDR30_GPR30,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30_OCB_OCI_GPEXIVDR30_GPR30_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30_OCB_OCI_GPEXIVDR30_GPR30 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30_OCB_OCI_GPEXIVDR30_GPR30]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30_OCB_OCI_GPEXIVDR30_GPR30]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30_OCB_OCI_GPEXIVDR30_GPR30(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30_OCB_OCI_GPEXIVDR30_GPR30,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30_OCB_OCI_GPEXIVDR30_GPR30_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30_OCB_OCI_GPEXIVDR30_GPR30 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR30_OCB_OCI_GPEXIVDR30_GPR30]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_R_NW]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_BUSY]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IMPRECISE_ERROR_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_RSP_INFO]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_RSP_INFO(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_RSP_INFO,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_RSP_INFO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_RSP_INFO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_RSP_INFO]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_RSP_INFO]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_RSP_INFO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_RSP_INFO,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_RSP_INFO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_RSP_INFO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_RSP_INFO]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_RSP_INFO]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_RSP_INFO(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_RSP_INFO,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_RSP_INFO_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_RSP_INFO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_RSP_INFO]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBL_DATAOP_PENDING]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISIBU_OCB_OCI_GPEXISIB_PIB_ADDR]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0_SPRG0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0_SPRG0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0_SPRG0,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0_SPRG0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0_SPRG0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0_SPRG0]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0_SPRG0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0_SPRG0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0_SPRG0,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0_SPRG0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0_SPRG0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0_SPRG0]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0_SPRG0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0_SPRG0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0_SPRG0,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0_SPRG0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0_SPRG0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXISPRG0_SPRG0]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31_OCB_OCI_GPEXIVDR30_GPR31]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31_OCB_OCI_GPEXIVDR30_GPR31(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31_OCB_OCI_GPEXIVDR30_GPR31,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31_OCB_OCI_GPEXIVDR30_GPR31_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31_OCB_OCI_GPEXIVDR30_GPR31 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31_OCB_OCI_GPEXIVDR30_GPR31]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31_OCB_OCI_GPEXIVDR30_GPR31]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31_OCB_OCI_GPEXIVDR30_GPR31(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31_OCB_OCI_GPEXIVDR30_GPR31,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31_OCB_OCI_GPEXIVDR30_GPR31_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31_OCB_OCI_GPEXIVDR30_GPR31 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31_OCB_OCI_GPEXIVDR30_GPR31]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31_OCB_OCI_GPEXIVDR30_GPR31]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31_OCB_OCI_GPEXIVDR30_GPR31(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31_OCB_OCI_GPEXIVDR30_GPR31,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31_OCB_OCI_GPEXIVDR30_GPR31_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31_OCB_OCI_GPEXIVDR30_GPR31 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR31_OCB_OCI_GPEXIVDR30_GPR31]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR4_OCB_OCI_GPEXIVDR4_GPR4]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR0_OCB_OCI_GPEXIVDR0_GPR0]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_ADDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_ADDR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_ADDR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_ADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_ADDR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_ADDR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_ADDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_ADDR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_ADDR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_ADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_ADDR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_ADDR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_ADDR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_ADDR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_ADDR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_ADDR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_ADDR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_ADDR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_R_NW]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_BUSY]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IMPRECISE_ERROR_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RSP_INFO]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RSP_INFO(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RSP_INFO,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RSP_INFO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RSP_INFO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RSP_INFO]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RSP_INFO]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RSP_INFO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RSP_INFO,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RSP_INFO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RSP_INFO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RSP_INFO]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RSP_INFO]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RSP_INFO(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RSP_INFO,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RSP_INFO_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RSP_INFO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RSP_INFO]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_RESET_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISIB_DATAOP_PENDING]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_0,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_0]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_0,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_0]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_0,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_0]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_1,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_1]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_1,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_1]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_1,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR30_1]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_CCSR_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_CCSR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_CCSR_WO_CLEAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_CCSR_WO_CLEAR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_CCSR_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_CCSR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_CCSR_WO_CLEAR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_CCSR_WO_CLEAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_CCSR_WO_CLEAR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_CCSR_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_CCSR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_CCSR_RW, TP_TPCHIP_OCC_OCI_OCB_CCSR_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_CCSR_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_CCSR_WO_CLEAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_CCSR_WO_CLEAR]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_CCSR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_CCSR_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_CCSR_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_CCSR_WO_OR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_CCSR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_CCSR_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_CCSR_WO_OR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_CCSR_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_CCSR_WO_OR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_CCSR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_CCSR_WO_OR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_CCSR_RW, TP_TPCHIP_OCC_OCI_OCB_CCSR_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_CCSR_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_CCSR_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_CCSR_WO_OR]


//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OCCS2_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OCCS2_WO_CLEAR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OCCS2_WO_CLEAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OCCS2_WO_CLEAR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OCCS2_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OCCS2_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OCCS2_WO_CLEAR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OCCS2_WO_CLEAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OCCS2_WO_CLEAR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OCCS2_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OCCS2_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCCS2_RW, TP_TPCHIP_OCC_OCI_OCB_OCCS2_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OCCS2_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OCCS2_WO_CLEAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OCCS2_WO_CLEAR]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OCCS2_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OCCS2_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OCCS2_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OCCS2_WO_OR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OCCS2_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OCCS2_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OCCS2_WO_OR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OCCS2_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OCCS2_WO_OR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OCCS2_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OCCS2_WO_OR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCCS2_RW, TP_TPCHIP_OCC_OCI_OCB_OCCS2_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OCCS2_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OCCS2_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OCCS2_WO_OR]


//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q0RR_OCB_OCI_OPIT0Q0RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3_OCB_OCI_OPIT1Q3RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3_OCB_OCI_OPIT1Q3RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3_OCB_OCI_OPIT1Q3RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3_OCB_OCI_OPIT1Q3RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3_OCB_OCI_OPIT1Q3RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3_OCB_OCI_OPIT1Q3RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3_OCB_OCI_OPIT1Q3RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3_OCB_OCI_OPIT1Q3RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3_OCB_OCI_OPIT1Q3RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3_OCB_OCI_OPIT1Q3RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3_OCB_OCI_OPIT1Q3RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3_OCB_OCI_OPIT1Q3RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3_OCB_OCI_OPIT1Q3RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3_OCB_OCI_OPIT1Q3RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3_OCB_OCI_OPIT1Q3RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3_OCB_OCI_OPIT1Q3RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3_OCB_OCI_OPIT1Q3RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q3_OCB_OCI_OPIT1Q3RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR_OCB_OCI_OPIT2Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR_OCB_OCI_OPIT2Q0RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR_OCB_OCI_OPIT2Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR_OCB_OCI_OPIT2Q0RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR_OCB_OCI_OPIT2Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR_OCB_OCI_OPIT2Q0RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR_OCB_OCI_OPIT2Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR_OCB_OCI_OPIT2Q0RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR_OCB_OCI_OPIT2Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR_OCB_OCI_OPIT2Q0RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR_OCB_OCI_OPIT2Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR_OCB_OCI_OPIT2Q0RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR_OCB_OCI_OPIT2Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR_OCB_OCI_OPIT2Q0RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR_OCB_OCI_OPIT2Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR_OCB_OCI_OPIT2Q0RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR_OCB_OCI_OPIT2Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q0RR_OCB_OCI_OPIT2Q0RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7_OCB_OCI_OPIT2Q7RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7_OCB_OCI_OPIT2Q7RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7_OCB_OCI_OPIT2Q7RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7_OCB_OCI_OPIT2Q7RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7_OCB_OCI_OPIT2Q7RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7_OCB_OCI_OPIT2Q7RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7_OCB_OCI_OPIT2Q7RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7_OCB_OCI_OPIT2Q7RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7_OCB_OCI_OPIT2Q7RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7_OCB_OCI_OPIT2Q7RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7_OCB_OCI_OPIT2Q7RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7_OCB_OCI_OPIT2Q7RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7_OCB_OCI_OPIT2Q7RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7_OCB_OCI_OPIT2Q7RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7_OCB_OCI_OPIT2Q7RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7_OCB_OCI_OPIT2Q7RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7_OCB_OCI_OPIT2Q7RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q7_OCB_OCI_OPIT2Q7RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0RR_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR_OCB_OCI_OPIT4Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR_OCB_OCI_OPIT4Q0RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR_OCB_OCI_OPIT4Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR_OCB_OCI_OPIT4Q0RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR_OCB_OCI_OPIT4Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR_OCB_OCI_OPIT4Q0RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR_OCB_OCI_OPIT4Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR_OCB_OCI_OPIT4Q0RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR_OCB_OCI_OPIT4Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR_OCB_OCI_OPIT4Q0RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR_OCB_OCI_OPIT4Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR_OCB_OCI_OPIT4Q0RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR_OCB_OCI_OPIT4Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR_OCB_OCI_OPIT4Q0RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR_OCB_OCI_OPIT4Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR_OCB_OCI_OPIT4Q0RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR_OCB_OCI_OPIT4Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q0RR_OCB_OCI_OPIT4Q0RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q0RR_OCB_OCI_OPIT5Q0RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q1_OCB_OCI_OPIT5Q1RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR_OCB_OCI_OPIT6Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR_OCB_OCI_OPIT6Q0RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR_OCB_OCI_OPIT6Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR_OCB_OCI_OPIT6Q0RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR_OCB_OCI_OPIT6Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR_OCB_OCI_OPIT6Q0RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR_OCB_OCI_OPIT6Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR_OCB_OCI_OPIT6Q0RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR_OCB_OCI_OPIT6Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR_OCB_OCI_OPIT6Q0RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR_OCB_OCI_OPIT6Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR_OCB_OCI_OPIT6Q0RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR_OCB_OCI_OPIT6Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR_OCB_OCI_OPIT6Q0RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR_OCB_OCI_OPIT6Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR_OCB_OCI_OPIT6Q0RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR_OCB_OCI_OPIT6Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q0RR_OCB_OCI_OPIT6Q0RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q0RR_OCB_OCI_OPIT7Q0RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT8C1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C1;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C1]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT8C1(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C1));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C1]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C1));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C1));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C1_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT8C18(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C18;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C18(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C18;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C18, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT8C18(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C18));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C18, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C18));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C18));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C18));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C18));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C18));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C18));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C18RR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C30]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT8C30(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C30;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C30]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C30]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C30(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C30;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C30, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C30]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C30]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT8C30(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C30));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C30, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C30]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C30));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C30));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C30));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C30));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C30));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C30));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C30_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C7RR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C29]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT9C29(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C29;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C29]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C29]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C29(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C29;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C29, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C29]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C29]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT9C29(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C29));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C29, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C29]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C29_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C29_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C29));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C29_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C29_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C29_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C29_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C29_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C29_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C29));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C29_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C29_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C29_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C29_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C29_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C29_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C29));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C29_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C29_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C29_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C29_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C29_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C29_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C29));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C29_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C29_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C29_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C29_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C29_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C29_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C29));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C29_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C29_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C29_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C29_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C29_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C29_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C29));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C29_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C29_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C29_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C29_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C7RR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_0,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_0,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_0,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_1,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_1,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_1,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_2,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_2,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_2]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_2,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_3,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_3,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_3]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_3]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_3,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_4,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_4,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_4]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_4]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_4,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_4_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_5(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_5,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_5_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_5]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_5,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_5_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_5]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_5]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_5(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_5,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_5_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_5]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_6,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_6,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_6]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_6]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_6,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_6_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_7(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_7,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_7_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_7]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_7,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_7_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_7]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_7]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_7(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_7,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_7_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3RR_7]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_0,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_0,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_0,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_1,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_1,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_1,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_2,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_2,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_2]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_2,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_3,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_3,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_3]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_3]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_3,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_4,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_4,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_4]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_4]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_4,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_4_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_5(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_5,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_5_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_5]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_5,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_5_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_5]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_5]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_5(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_5,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_5_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_5]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_6,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_6,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_6]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_6]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_6,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_6_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_7(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_7,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_7_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_7]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_7,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_7_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_7]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_7]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_7(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_7,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_7_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV1RR_7]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPITBSV3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPITBSV3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV3]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV3(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPITBSV3;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPITBSV3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV3]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPITBSV3(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV3));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPITBSV3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV3]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_0,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_0,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV3));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_0,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_1,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_1,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV3));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_1,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_2,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_2,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_2]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV3));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_2,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_3,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_3,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_3]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_3]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV3));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_3,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_4,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_4,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_4]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_4]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV3));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_4,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_4_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_5(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_5,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_5_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_5]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_5,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_5_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_5]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_5]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_5(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV3));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_5,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_5_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_5]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_6,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_6,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_6]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_6]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV3));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_6,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_6_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_7(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_7,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_7_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_7]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_7,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_7_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_7]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_7]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_7(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITBSV3));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_7,
           TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_7_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITBSV3_7]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPITFSV]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPITFSV(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPITFSV;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPITFSV]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSV]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPITFSV(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPITFSV;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPITFSV, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSV]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPITFSV]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPITFSV(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITFSV));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPITFSV, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPITFSV]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSV_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITFSV_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITFSV));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITFSV_0,
           TP_TPCHIP_OCC_OCI_OCB_OPITFSV_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITFSV_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSV_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSV_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITFSV_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITFSV));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITFSV_0,
           TP_TPCHIP_OCC_OCI_OCB_OPITFSV_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITFSV_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSV_0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSV_0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITFSV_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITFSV));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITFSV_0,
           TP_TPCHIP_OCC_OCI_OCB_OPITFSV_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITFSV_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSV_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSV_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITFSV_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITFSV));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITFSV_1,
           TP_TPCHIP_OCC_OCI_OCB_OPITFSV_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITFSV_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSV_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSV_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITFSV_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITFSV));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITFSV_1,
           TP_TPCHIP_OCC_OCI_OCB_OPITFSV_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITFSV_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSV_1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSV_1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITFSV_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITFSV));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITFSV_1,
           TP_TPCHIP_OCC_OCI_OCB_OPITFSV_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITFSV_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSV_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSV_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITFSV_2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITFSV));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITFSV_2,
           TP_TPCHIP_OCC_OCI_OCB_OPITFSV_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITFSV_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSV_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSV_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITFSV_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITFSV));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITFSV_2,
           TP_TPCHIP_OCC_OCI_OCB_OPITFSV_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITFSV_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSV_2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSV_2]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITFSV_2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITFSV));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITFSV_2,
           TP_TPCHIP_OCC_OCI_OCB_OPITFSV_2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITFSV_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSV_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSV_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITFSV_3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITFSV));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITFSV_3,
           TP_TPCHIP_OCC_OCI_OCB_OPITFSV_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITFSV_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSV_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSV_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITFSV_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITFSV));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITFSV_3,
           TP_TPCHIP_OCC_OCI_OCB_OPITFSV_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITFSV_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSV_3]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSV_3]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITFSV_3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITFSV));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITFSV_3,
           TP_TPCHIP_OCC_OCI_OCB_OPITFSV_3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITFSV_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSV_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSV_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITFSV_4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITFSV));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITFSV_4,
           TP_TPCHIP_OCC_OCI_OCB_OPITFSV_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITFSV_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSV_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSV_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITFSV_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITFSV));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITFSV_4,
           TP_TPCHIP_OCC_OCI_OCB_OPITFSV_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITFSV_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSV_4]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSV_4]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITFSV_4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITFSV));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITFSV_4,
           TP_TPCHIP_OCC_OCI_OCB_OPITFSV_4_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITFSV_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSV_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSV_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITFSV_5(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITFSV));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITFSV_5,
           TP_TPCHIP_OCC_OCI_OCB_OPITFSV_5_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITFSV_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSV_5]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSV_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITFSV_5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITFSV));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITFSV_5,
           TP_TPCHIP_OCC_OCI_OCB_OPITFSV_5_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITFSV_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSV_5]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSV_5]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITFSV_5(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITFSV));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITFSV_5,
           TP_TPCHIP_OCC_OCI_OCB_OPITFSV_5_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITFSV_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSV_5]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSV_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITFSV_6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITFSV));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITFSV_6,
           TP_TPCHIP_OCC_OCI_OCB_OPITFSV_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITFSV_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSV_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSV_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITFSV_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITFSV));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITFSV_6,
           TP_TPCHIP_OCC_OCI_OCB_OPITFSV_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITFSV_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSV_6]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSV_6]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITFSV_6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITFSV));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITFSV_6,
           TP_TPCHIP_OCC_OCI_OCB_OPITFSV_6_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITFSV_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSV_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSV_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITFSV_7(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITFSV));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITFSV_7,
           TP_TPCHIP_OCC_OCI_OCB_OPITFSV_7_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITFSV_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSV_7]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSV_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITFSV_7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITFSV));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITFSV_7,
           TP_TPCHIP_OCC_OCI_OCB_OPITFSV_7_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITFSV_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSV_7]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSV_7]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITFSV_7(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITFSV));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITFSV_7,
           TP_TPCHIP_OCC_OCI_OCB_OPITFSV_7_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITFSV_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITFSV_7]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_WOFICECC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_WOFICECC(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_WOFICECC;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_WOFICECC]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICECC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_WOFICECC(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_WOFICECC;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_WOFICECC, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICECC]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_WOFICECC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_WOFICECC(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICECC));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_WOFICECC, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_WOFICECC]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_ECC_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_ECC_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICECC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_ECC_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_ECC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_ECC_ERR]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_ECC_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_ECC_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICECC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_ECC_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_ECC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_ECC_ERR]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_ECC_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_ECC_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICECC));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_ECC_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_ECC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_ECC_ERR]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_ECC_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_ECC_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICECC));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_ECC_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_ECC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_ECC_ERR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_ECC_ERR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_ECC_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICECC));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_ECC_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_ECC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_ECC_ERR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_ECC_ERR]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_ECC_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICECC));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_ECC_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_ECC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_ECC_ERR]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICECC_CONTINUOUS_INJECT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_WOFICECC_CONTINUOUS_INJECT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICECC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_WOFICECC_CONTINUOUS_INJECT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICECC_CONTINUOUS_INJECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICECC_CONTINUOUS_INJECT]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICECC_CONTINUOUS_INJECT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_WOFICECC_CONTINUOUS_INJECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICECC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_WOFICECC_CONTINUOUS_INJECT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICECC_CONTINUOUS_INJECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICECC_CONTINUOUS_INJECT]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICECC_CONTINUOUS_INJECT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_WOFICECC_CONTINUOUS_INJECT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICECC));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_WOFICECC_CONTINUOUS_INJECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICECC_CONTINUOUS_INJECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICECC_CONTINUOUS_INJECT]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_WOFICECC_CONTINUOUS_INJECT]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_WOFICECC_CONTINUOUS_INJECT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICECC));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_WOFICECC_CONTINUOUS_INJECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICECC_CONTINUOUS_INJECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_WOFICECC_CONTINUOUS_INJECT]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICECC_CONTINUOUS_INJECT]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_WOFICECC_CONTINUOUS_INJECT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICECC));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_WOFICECC_CONTINUOUS_INJECT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICECC_CONTINUOUS_INJECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICECC_CONTINUOUS_INJECT]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICECC_CONTINUOUS_INJECT]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_WOFICECC_CONTINUOUS_INJECT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICECC));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_WOFICECC_CONTINUOUS_INJECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICECC_CONTINUOUS_INJECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICECC_CONTINUOUS_INJECT]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_TYPE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_TYPE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICECC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_TYPE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_TYPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_TYPE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_TYPE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_TYPE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICECC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_TYPE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_TYPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_TYPE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_TYPE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_TYPE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICECC));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_TYPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_TYPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_TYPE]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_TYPE]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_TYPE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICECC));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_TYPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_TYPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_TYPE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_TYPE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_TYPE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICECC));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_TYPE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_TYPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_TYPE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_TYPE]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_TYPE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICECC));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_TYPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_TYPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_TYPE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_DATA_OR_ECC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_DATA_OR_ECC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICECC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_DATA_OR_ECC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_DATA_OR_ECC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_DATA_OR_ECC]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_DATA_OR_ECC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_DATA_OR_ECC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICECC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_DATA_OR_ECC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_DATA_OR_ECC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_DATA_OR_ECC]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_DATA_OR_ECC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_DATA_OR_ECC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICECC));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_DATA_OR_ECC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_DATA_OR_ECC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_DATA_OR_ECC]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_DATA_OR_ECC]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_DATA_OR_ECC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICECC));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_DATA_OR_ECC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_DATA_OR_ECC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_DATA_OR_ECC]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_DATA_OR_ECC]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_DATA_OR_ECC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICECC));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_DATA_OR_ECC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_DATA_OR_ECC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_DATA_OR_ECC]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_DATA_OR_ECC]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_DATA_OR_ECC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_WOFICECC));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_DATA_OR_ECC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_DATA_OR_ECC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_WOFICECC_INJECT_DATA_OR_ECC]

//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
