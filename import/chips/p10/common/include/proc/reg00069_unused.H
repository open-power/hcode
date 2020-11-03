/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/proc/reg00069_unused.H $      */
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

#ifndef __PROC_REG00069_H_UNUSED__
#define __PROC_REG00069_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace proc
{
#endif


//>> PREP_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSIEP5_FSI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSIEP5_FSI0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSIEP5_FSI0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSIEP5_FSI0]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSIEP5_FSI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSIEP5_FSI0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSIEP5_FSI0;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSIEP5_FSI0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSIEP5_FSI0]

//>> PUT_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSIEP5_FSI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSIEP5_FSI0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSIEP5_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSIEP5_SCOMFSI0));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSIEP5_FSI0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSIEP5_FSI0]

//>> PREP_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSIEP5_SCOMFSI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSIEP5_SCOMFSI0(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSIEP5_SCOMFSI0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSIEP5_SCOMFSI0]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSIEP5_SCOMFSI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSIEP5_SCOMFSI0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSIEP5_SCOMFSI0;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSIEP5_SCOMFSI0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSIEP5_SCOMFSI0]

//>> PUT_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSIEP5_SCOMFSI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSIEP5_SCOMFSI0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSIEP5_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSIEP5_SCOMFSI0));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSIEP5_SCOMFSI0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SLAVE_A_MST_0_MSIEP5_SCOMFSI0]


//>> PREP_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAESP4_FSI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAESP4_FSI0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAESP4_FSI0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAESP4_FSI0]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAESP4_FSI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAESP4_FSI0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAESP4_FSI0;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAESP4_FSI0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAESP4_FSI0]

//>> PUT_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAESP4_FSI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAESP4_FSI0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAESP4_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAESP4_SCOMFSI0));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAESP4_FSI0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAESP4_FSI0]

//>> PREP_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAESP4_SCOMFSI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAESP4_SCOMFSI0(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAESP4_SCOMFSI0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAESP4_SCOMFSI0]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAESP4_SCOMFSI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAESP4_SCOMFSI0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAESP4_SCOMFSI0;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAESP4_SCOMFSI0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAESP4_SCOMFSI0]

//>> PUT_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAESP4_SCOMFSI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAESP4_SCOMFSI0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAESP4_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAESP4_SCOMFSI0));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAESP4_SCOMFSI0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MAESP4_SCOMFSI0]


//>> PREP_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0]

//>> PUT_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0]

//>> PREP_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO]

//>> PUT_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO]


//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_0]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_0]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_0]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_0]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_0]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_0]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_0]
static inline bool GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_0]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_1]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_1]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_1]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_1]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_1]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_1]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_1]
static inline bool GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_1]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_2]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_2]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_2]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_2]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_2]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_2]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_2]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_2]
static inline bool GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_2]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_3]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_3]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_3]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_3]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_3]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_3]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_3,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_3]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_3]
static inline bool GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_3(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_3]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_4]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_4]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_4]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_4]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_4]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_4]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_4,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_4]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_4]
static inline bool GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_4(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_4]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_5(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_5]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_5]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_5(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_5]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_5]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_5(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_5]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_5]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_5(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_5,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_5]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_5]
static inline bool GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_5(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_5]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_6]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_6]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_6]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_6]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_6]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_6]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_6,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_6]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_6]
static inline bool GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_6(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_6]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_7(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_7]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_7]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_7]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_7]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_7]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_7]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_7(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_7,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_7]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_7]
static inline bool GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_7(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_RO));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MREFP0_7]

//>> PREP_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI0]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI0;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI0]

//>> PUT_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_RO));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI0]

//>> PREP_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_RO(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_RO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_RO]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_RO(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_RO;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_RO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_RO]

//>> PUT_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_RO(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_RO));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_RO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_RO]


//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI_A_MST_1_PORT5_ERROR_CODE_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI_A_MST_1_PORT5_ERROR_CODE_0(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI_A_MST_1_PORT5_ERROR_CODE_0,
           TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI_A_MST_1_PORT5_ERROR_CODE_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI_A_MST_1_PORT5_ERROR_CODE_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI_A_MST_1_PORT5_ERROR_CODE_0]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI_A_MST_1_PORT5_ERROR_CODE_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI_A_MST_1_PORT5_ERROR_CODE_0(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI_A_MST_1_PORT5_ERROR_CODE_0,
           TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI_A_MST_1_PORT5_ERROR_CODE_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI_A_MST_1_PORT5_ERROR_CODE_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI_A_MST_1_PORT5_ERROR_CODE_0]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI_A_MST_1_PORT5_ERROR_CODE_0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI_A_MST_1_PORT5_ERROR_CODE_0(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_RO));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI_A_MST_1_PORT5_ERROR_CODE_0,
           TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI_A_MST_1_PORT5_ERROR_CODE_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI_A_MST_1_PORT5_ERROR_CODE_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI_A_MST_1_PORT5_ERROR_CODE_0]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI_A_MST_1_PORT5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI_A_MST_1_PORT5_ERROR_CODE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI_A_MST_1_PORT5_ERROR_CODE,
           TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI_A_MST_1_PORT5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI_A_MST_1_PORT5_ERROR_CODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI_A_MST_1_PORT5_ERROR_CODE]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI_A_MST_1_PORT5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI_A_MST_1_PORT5_ERROR_CODE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI_A_MST_1_PORT5_ERROR_CODE,
           TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI_A_MST_1_PORT5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI_A_MST_1_PORT5_ERROR_CODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI_A_MST_1_PORT5_ERROR_CODE]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI_A_MST_1_PORT5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI_A_MST_1_PORT5_ERROR_CODE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_RO));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI_A_MST_1_PORT5_ERROR_CODE,
           TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI_A_MST_1_PORT5_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI_A_MST_1_PORT5_ERROR_CODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI_A_MST_1_PORT5_ERROR_CODE]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI_A_MST_1_PORT5_ERROR_CODE_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI_A_MST_1_PORT5_ERROR_CODE_2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI_A_MST_1_PORT5_ERROR_CODE_2,
           TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI_A_MST_1_PORT5_ERROR_CODE_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI_A_MST_1_PORT5_ERROR_CODE_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI_A_MST_1_PORT5_ERROR_CODE_2]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI_A_MST_1_PORT5_ERROR_CODE_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI_A_MST_1_PORT5_ERROR_CODE_2(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI_A_MST_1_PORT5_ERROR_CODE_2,
           TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI_A_MST_1_PORT5_ERROR_CODE_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI_A_MST_1_PORT5_ERROR_CODE_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI_A_MST_1_PORT5_ERROR_CODE_2]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI_A_MST_1_PORT5_ERROR_CODE_2]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI_A_MST_1_PORT5_ERROR_CODE_2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_RO));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI_A_MST_1_PORT5_ERROR_CODE_2,
           TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI_A_MST_1_PORT5_ERROR_CODE_2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI_A_MST_1_PORT5_ERROR_CODE_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI_A_MST_1_PORT5_ERROR_CODE_2]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FOURTH_ERROR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FOURTH_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FOURTH_ERROR,
           TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FOURTH_ERROR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FOURTH_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FOURTH_ERROR]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FOURTH_ERROR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FOURTH_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FOURTH_ERROR,
           TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FOURTH_ERROR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FOURTH_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FOURTH_ERROR]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FOURTH_ERROR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FOURTH_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_RO));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FOURTH_ERROR,
           TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FOURTH_ERROR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FOURTH_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FOURTH_ERROR]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_CRC_ERROR_COUNT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_CRC_ERROR_COUNT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_CRC_ERROR_COUNT,
           TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_CRC_ERROR_COUNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_CRC_ERROR_COUNT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_CRC_ERROR_COUNT]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_CRC_ERROR_COUNT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_CRC_ERROR_COUNT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_CRC_ERROR_COUNT,
           TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_CRC_ERROR_COUNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_CRC_ERROR_COUNT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_CRC_ERROR_COUNT]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_CRC_ERROR_COUNT]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_CRC_ERROR_COUNT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_RO));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_CRC_ERROR_COUNT,
           TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_CRC_ERROR_COUNT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_CRC_ERROR_COUNT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_CRC_ERROR_COUNT]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_HOT_PLUG_FLAG]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_HOT_PLUG_FLAG(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_HOT_PLUG_FLAG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_HOT_PLUG_FLAG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_HOT_PLUG_FLAG]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_HOT_PLUG_FLAG]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_HOT_PLUG_FLAG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_RO));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_HOT_PLUG_FLAG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_HOT_PLUG_FLAG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_HOT_PLUG_FLAG]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_HOT_PLUG_FLAG]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_HOT_PLUG_FLAG(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_RO));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_HOT_PLUG_FLAG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_HOT_PLUG_FLAG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_HOT_PLUG_FLAG]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_HOT_PLUG_FLAG]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_HOT_PLUG_FLAG(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_RO));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_HOT_PLUG_FLAG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_HOT_PLUG_FLAG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_HOT_PLUG_FLAG]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_HOT_PLUG_FLAG]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_HOT_PLUG_FLAG(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_RO));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_HOT_PLUG_FLAG,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_HOT_PLUG_FLAG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_HOT_PLUG_FLAG]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_HOT_PLUG_FLAG]
static inline bool GET_TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_HOT_PLUG_FLAG(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_FSI0, TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_RO));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_HOT_PLUG_FLAG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_HOT_PLUG_FLAG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_MST_1_MSTAP5_HOT_PLUG_FLAG]

//>> PREP_[TP_TPVSB_FSI_W_SLAVE_A_SCISM]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SLAVE_A_SCISM(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_SCISM;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SLAVE_A_SCISM]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_SCISM]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SLAVE_A_SCISM(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_SCISM;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_SCISM, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_SCISM]

//>> PUT_[TP_TPVSB_FSI_W_SLAVE_A_SCISM]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SLAVE_A_SCISM(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_SCISM));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_SCISM, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SLAVE_A_SCISM]


//>> PREP_[TP_TPVSB_FSI_W_SLAVE_A_SISM]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SLAVE_A_SISM(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_SISM;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SLAVE_A_SISM]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_A_SISM]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SLAVE_A_SISM(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_A_SISM;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_SISM, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_A_SISM]

//>> PUT_[TP_TPVSB_FSI_W_SLAVE_A_SISM]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SLAVE_A_SISM(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_A_SISM));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SLAVE_A_SISM, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SLAVE_A_SISM]


//>> PREP_[TP_TPVSB_FSI_W_SLAVE_B_SCRSIC4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SLAVE_B_SCRSIC4(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_B_SCRSIC4;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SLAVE_B_SCRSIC4]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_B_SCRSIC4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SLAVE_B_SCRSIC4(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_B_SCRSIC4;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SLAVE_B_SCRSIC4, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_B_SCRSIC4]

//>> PUT_[TP_TPVSB_FSI_W_SLAVE_B_SCRSIC4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SLAVE_B_SCRSIC4(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_B_SCRSIC4));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SLAVE_B_SCRSIC4, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SLAVE_B_SCRSIC4]


//>> PREP_[TP_TPVSB_FSI_W_SLAVE_B_SDATA]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SLAVE_B_SDATA(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_B_SDATA;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SLAVE_B_SDATA]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_B_SDATA]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SLAVE_B_SDATA(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_B_SDATA;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SLAVE_B_SDATA, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_B_SDATA]

//>> PUT_[TP_TPVSB_FSI_W_SLAVE_B_SDATA]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SLAVE_B_SDATA(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_B_SDATA));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SLAVE_B_SDATA, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SLAVE_B_SDATA]


//>> PREP_[TP_TPVSB_FSI_W_SLAVE_B_SRSIS0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SLAVE_B_SRSIS0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_B_SRSIS0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SLAVE_B_SRSIS0]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_B_SRSIS0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SLAVE_B_SRSIS0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_B_SRSIS0;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SLAVE_B_SRSIS0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_B_SRSIS0]

//>> PUT_[TP_TPVSB_FSI_W_SLAVE_B_SRSIS0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SLAVE_B_SRSIS0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_B_SRSIS0));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SLAVE_B_SRSIS0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SLAVE_B_SRSIS0]


//>> PREP_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES]

//>> PUT_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES]


//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_ANY_ERROR]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_ANY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_ANY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_ANY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_ANY_ERROR]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_ANY_ERROR]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_ANY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_ANY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_ANY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_ANY_ERROR]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_ANY_ERROR]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_ANY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_ANY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_ANY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_ANY_ERROR]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_ANY_ERROR]
static inline fapi2::buffer<uint64_t>&
CLEAR_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_ANY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_ANY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_ANY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_ANY_ERROR]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_ANY_ERROR]
static inline fapi2::buffer<uint64_t>&
GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_ANY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_ANY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_ANY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_ANY_ERROR]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_ANY_ERROR]
static inline bool GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_ANY_ERROR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_ANY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_ANY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_ANY_ERROR]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CMD_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CMD_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CMD_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CMD_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CMD_PARITY_ERROR]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CMD_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CMD_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CMD_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CMD_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CMD_PARITY_ERROR]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CMD_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CMD_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CMD_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CMD_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CMD_PARITY_ERROR]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CMD_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>&
CLEAR_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CMD_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CMD_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CMD_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CMD_PARITY_ERROR]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CMD_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>&
GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CMD_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CMD_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CMD_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CMD_PARITY_ERROR]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CMD_PARITY_ERROR]
static inline bool GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CMD_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CMD_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CMD_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CMD_PARITY_ERROR]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_WR_DATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_WR_DATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_WR_DATA_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_WR_DATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_WR_DATA_PARITY_ERROR]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_WR_DATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_WR_DATA_PARITY_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_WR_DATA_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_WR_DATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_WR_DATA_PARITY_ERROR]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_WR_DATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_WR_DATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_WR_DATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_WR_DATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_WR_DATA_PARITY_ERROR]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_WR_DATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>&
CLEAR_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_WR_DATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_WR_DATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_WR_DATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_WR_DATA_PARITY_ERROR]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_WR_DATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>&
GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_WR_DATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_WR_DATA_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_WR_DATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_WR_DATA_PARITY_ERROR]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_WR_DATA_PARITY_ERROR]
static inline bool GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_WR_DATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_WR_DATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_WR_DATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_WR_DATA_PARITY_ERROR]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_RD_DATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_RD_DATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_RD_DATA_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_RD_DATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_RD_DATA_PARITY_ERROR]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_RD_DATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_RD_DATA_PARITY_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_RD_DATA_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_RD_DATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_RD_DATA_PARITY_ERROR]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_RD_DATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_RD_DATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_RD_DATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_RD_DATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_RD_DATA_PARITY_ERROR]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_RD_DATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>&
CLEAR_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_RD_DATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_RD_DATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_RD_DATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_RD_DATA_PARITY_ERROR]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_RD_DATA_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>&
GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_RD_DATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_RD_DATA_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_RD_DATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_RD_DATA_PARITY_ERROR]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_RD_DATA_PARITY_ERROR]
static inline bool GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_RD_DATA_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_RD_DATA_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_RD_DATA_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_RD_DATA_PARITY_ERROR]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_LCK_STATUS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_LCK_STATUS_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_LCK_STATUS_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_LCK_STATUS_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_LCK_STATUS_PARITY_ERROR]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_LCK_STATUS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_LCK_STATUS_PARITY_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_LCK_STATUS_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_LCK_STATUS_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_LCK_STATUS_PARITY_ERROR]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_LCK_STATUS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_LCK_STATUS_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_LCK_STATUS_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_LCK_STATUS_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_LCK_STATUS_PARITY_ERROR]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_LCK_STATUS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>&
CLEAR_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_LCK_STATUS_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_LCK_STATUS_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_LCK_STATUS_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_LCK_STATUS_PARITY_ERROR]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_LCK_STATUS_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>&
GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_LCK_STATUS_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_LCK_STATUS_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_LCK_STATUS_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_LCK_STATUS_PARITY_ERROR]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_LCK_STATUS_PARITY_ERROR]
static inline bool
GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_LCK_STATUS_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_LCK_STATUS_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_LCK_STATUS_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_LCK_STATUS_PARITY_ERROR]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_FSM_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_FSM_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_FSM_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_FSM_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_FSM_PARITY_ERROR]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_FSM_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_FSM_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_FSM_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_FSM_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_FSM_PARITY_ERROR]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_FSM_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_FSM_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_FSM_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_FSM_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_FSM_PARITY_ERROR]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_FSM_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>&
CLEAR_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_FSM_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_FSM_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_FSM_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_FSM_PARITY_ERROR]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_FSM_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>&
GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_FSM_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_FSM_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_FSM_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_FSM_PARITY_ERROR]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_FSM_PARITY_ERROR]
static inline bool GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_FSM_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_FSM_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_FSM_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_FSM_PARITY_ERROR]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_COMMAND_OVERRUN_ERROR]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_COMMAND_OVERRUN_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_COMMAND_OVERRUN_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_COMMAND_OVERRUN_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_COMMAND_OVERRUN_ERROR]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_COMMAND_OVERRUN_ERROR]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_COMMAND_OVERRUN_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_COMMAND_OVERRUN_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_COMMAND_OVERRUN_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_COMMAND_OVERRUN_ERROR]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_COMMAND_OVERRUN_ERROR]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_COMMAND_OVERRUN_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_COMMAND_OVERRUN_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_COMMAND_OVERRUN_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_COMMAND_OVERRUN_ERROR]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_COMMAND_OVERRUN_ERROR]
static inline fapi2::buffer<uint64_t>&
CLEAR_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_COMMAND_OVERRUN_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_COMMAND_OVERRUN_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_COMMAND_OVERRUN_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_COMMAND_OVERRUN_ERROR]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_COMMAND_OVERRUN_ERROR]
static inline fapi2::buffer<uint64_t>&
GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_COMMAND_OVERRUN_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_COMMAND_OVERRUN_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_COMMAND_OVERRUN_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_COMMAND_OVERRUN_ERROR]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_COMMAND_OVERRUN_ERROR]
static inline bool
GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_COMMAND_OVERRUN_ERROR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_COMMAND_OVERRUN_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_COMMAND_OVERRUN_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_COMMAND_OVERRUN_ERROR]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PARITY_ERROR]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PARITY_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PARITY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PARITY_ERROR]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PARITY_ERROR]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>&
CLEAR_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PARITY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PARITY_ERROR]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PARITY_ERROR]
static inline fapi2::buffer<uint64_t>&
GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PARITY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PARITY_ERROR]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PARITY_ERROR]
static inline bool GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PARITY_ERROR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PARITY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PARITY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PARITY_ERROR]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PROTOCOL_ERROR]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PROTOCOL_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PROTOCOL_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PROTOCOL_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PROTOCOL_ERROR]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PROTOCOL_ERROR]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PROTOCOL_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PROTOCOL_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PROTOCOL_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PROTOCOL_ERROR]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PROTOCOL_ERROR]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PROTOCOL_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PROTOCOL_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PROTOCOL_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PROTOCOL_ERROR]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PROTOCOL_ERROR]
static inline fapi2::buffer<uint64_t>&
CLEAR_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PROTOCOL_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PROTOCOL_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PROTOCOL_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PROTOCOL_ERROR]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PROTOCOL_ERROR]
static inline fapi2::buffer<uint64_t>&
GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PROTOCOL_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PROTOCOL_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PROTOCOL_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PROTOCOL_ERROR]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PROTOCOL_ERROR]
static inline bool GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PROTOCOL_ERROR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PROTOCOL_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PROTOCOL_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_PROTOCOL_ERROR]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_TIMEOUT_BIT]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_TIMEOUT_BIT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_TIMEOUT_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_TIMEOUT_BIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_TIMEOUT_BIT]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_TIMEOUT_BIT]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_TIMEOUT_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_TIMEOUT_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_TIMEOUT_BIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_TIMEOUT_BIT]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_TIMEOUT_BIT]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_TIMEOUT_BIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_TIMEOUT_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_TIMEOUT_BIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_TIMEOUT_BIT]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_TIMEOUT_BIT]
static inline fapi2::buffer<uint64_t>&
CLEAR_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_TIMEOUT_BIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_TIMEOUT_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_TIMEOUT_BIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_TIMEOUT_BIT]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_TIMEOUT_BIT]
static inline fapi2::buffer<uint64_t>&
GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_TIMEOUT_BIT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_TIMEOUT_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_TIMEOUT_BIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_TIMEOUT_BIT]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_TIMEOUT_BIT]
static inline bool GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_TIMEOUT_BIT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_TIMEOUT_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_TIMEOUT_BIT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_TIMEOUT_BIT]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_ERRACK]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_ERRACK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_ERRACK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_ERRACK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_ERRACK]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_ERRACK]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_ERRACK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_ERRACK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_ERRACK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_ERRACK]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_ERRACK]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_ERRACK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_ERRACK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_ERRACK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_ERRACK]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_ERRACK]
static inline fapi2::buffer<uint64_t>&
CLEAR_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_ERRACK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_ERRACK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_ERRACK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_ERRACK]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_ERRACK]
static inline fapi2::buffer<uint64_t>&
GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_ERRACK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_ERRACK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_ERRACK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_ERRACK]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_ERRACK]
static inline bool GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_ERRACK(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_ERRACK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_ERRACK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_ERRACK]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_INVALID_ADDRESS]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_INVALID_ADDRESS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_INVALID_ADDRESS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_INVALID_ADDRESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_INVALID_ADDRESS]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_INVALID_ADDRESS]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_INVALID_ADDRESS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_INVALID_ADDRESS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_INVALID_ADDRESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_INVALID_ADDRESS]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_INVALID_ADDRESS]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_INVALID_ADDRESS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_INVALID_ADDRESS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_INVALID_ADDRESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_INVALID_ADDRESS]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_INVALID_ADDRESS]
static inline fapi2::buffer<uint64_t>&
CLEAR_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_INVALID_ADDRESS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_INVALID_ADDRESS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_INVALID_ADDRESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_INVALID_ADDRESS]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_INVALID_ADDRESS]
static inline fapi2::buffer<uint64_t>&
GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_INVALID_ADDRESS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_INVALID_ADDRESS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_INVALID_ADDRESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_INVALID_ADDRESS]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_INVALID_ADDRESS]
static inline bool GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_INVALID_ADDRESS(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_INVALID_ADDRESS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_INVALID_ADDRESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_INVALID_ADDRESS]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_PORT_IS_FENCED]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_PORT_IS_FENCED(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_PORT_IS_FENCED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_PORT_IS_FENCED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_PORT_IS_FENCED]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_PORT_IS_FENCED]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_PORT_IS_FENCED(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_PORT_IS_FENCED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_PORT_IS_FENCED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_PORT_IS_FENCED]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_PORT_IS_FENCED]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_PORT_IS_FENCED(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_PORT_IS_FENCED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_PORT_IS_FENCED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_PORT_IS_FENCED]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_PORT_IS_FENCED]
static inline fapi2::buffer<uint64_t>&
CLEAR_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_PORT_IS_FENCED(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_PORT_IS_FENCED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_PORT_IS_FENCED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_PORT_IS_FENCED]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_PORT_IS_FENCED]
static inline fapi2::buffer<uint64_t>&
GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_PORT_IS_FENCED(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_PORT_IS_FENCED,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_PORT_IS_FENCED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_PORT_IS_FENCED]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_PORT_IS_FENCED]
static inline bool GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_PORT_IS_FENCED(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_PORT_IS_FENCED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_PORT_IS_FENCED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_PORT_IS_FENCED]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_READ_DATA_VALID]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_READ_DATA_VALID(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_READ_DATA_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_READ_DATA_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_READ_DATA_VALID]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_READ_DATA_VALID]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_READ_DATA_VALID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_READ_DATA_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_READ_DATA_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_READ_DATA_VALID]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_READ_DATA_VALID]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_READ_DATA_VALID(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_READ_DATA_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_READ_DATA_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_READ_DATA_VALID]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_READ_DATA_VALID]
static inline fapi2::buffer<uint64_t>&
CLEAR_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_READ_DATA_VALID(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_READ_DATA_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_READ_DATA_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_READ_DATA_VALID]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_READ_DATA_VALID]
static inline fapi2::buffer<uint64_t>&
GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_READ_DATA_VALID(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_READ_DATA_VALID,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_READ_DATA_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_READ_DATA_VALID]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_READ_DATA_VALID]
static inline bool GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_READ_DATA_VALID(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_READ_DATA_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_READ_DATA_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_READ_DATA_VALID]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_BUSY_FLAG]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_BUSY_FLAG(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_BUSY_FLAG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_BUSY_FLAG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_BUSY_FLAG]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_BUSY_FLAG]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_BUSY_FLAG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_BUSY_FLAG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_BUSY_FLAG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_BUSY_FLAG]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_BUSY_FLAG]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_BUSY_FLAG(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_BUSY_FLAG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_BUSY_FLAG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_BUSY_FLAG]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_BUSY_FLAG]
static inline fapi2::buffer<uint64_t>&
CLEAR_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_BUSY_FLAG(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_BUSY_FLAG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_BUSY_FLAG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_BUSY_FLAG]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_BUSY_FLAG]
static inline fapi2::buffer<uint64_t>&
GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_BUSY_FLAG(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_BUSY_FLAG,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_BUSY_FLAG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_BUSY_FLAG]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_BUSY_FLAG]
static inline bool GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_BUSY_FLAG(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_BUSY_FLAG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_BUSY_FLAG chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_OPB_BUSY_FLAG]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_MASTER_ERROR]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_MASTER_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_MASTER_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_MASTER_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_MASTER_ERROR]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_MASTER_ERROR]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_MASTER_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_MASTER_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_MASTER_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_MASTER_ERROR]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_MASTER_ERROR]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_MASTER_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_MASTER_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_MASTER_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_MASTER_ERROR]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_MASTER_ERROR]
static inline fapi2::buffer<uint64_t>&
CLEAR_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_MASTER_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_MASTER_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_MASTER_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_MASTER_ERROR]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_MASTER_ERROR]
static inline fapi2::buffer<uint64_t>&
GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_MASTER_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_MASTER_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_MASTER_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_MASTER_ERROR]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_MASTER_ERROR]
static inline bool GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_MASTER_ERROR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_MASTER_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_MASTER_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_MASTER_ERROR]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_PORT_INTERRUPT]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_PORT_INTERRUPT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_PORT_INTERRUPT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_PORT_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_PORT_INTERRUPT]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_PORT_INTERRUPT]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_PORT_INTERRUPT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_PORT_INTERRUPT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_PORT_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_PORT_INTERRUPT]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_PORT_INTERRUPT]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_PORT_INTERRUPT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_PORT_INTERRUPT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_PORT_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_PORT_INTERRUPT]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_PORT_INTERRUPT]
static inline fapi2::buffer<uint64_t>&
CLEAR_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_PORT_INTERRUPT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_PORT_INTERRUPT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_PORT_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_PORT_INTERRUPT]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_PORT_INTERRUPT]
static inline fapi2::buffer<uint64_t>&
GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_PORT_INTERRUPT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_PORT_INTERRUPT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_PORT_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_PORT_INTERRUPT]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_PORT_INTERRUPT]
static inline bool
GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_PORT_INTERRUPT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_PORT_INTERRUPT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_PORT_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_PORT_INTERRUPT]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_HOT_PLUG_EVENT]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_HOT_PLUG_EVENT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_HOT_PLUG_EVENT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_HOT_PLUG_EVENT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_HOT_PLUG_EVENT]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_HOT_PLUG_EVENT]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_HOT_PLUG_EVENT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_HOT_PLUG_EVENT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_HOT_PLUG_EVENT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_HOT_PLUG_EVENT]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_HOT_PLUG_EVENT]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_HOT_PLUG_EVENT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_HOT_PLUG_EVENT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_HOT_PLUG_EVENT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_HOT_PLUG_EVENT]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_HOT_PLUG_EVENT]
static inline fapi2::buffer<uint64_t>&
CLEAR_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_HOT_PLUG_EVENT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_HOT_PLUG_EVENT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_HOT_PLUG_EVENT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_HOT_PLUG_EVENT]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_HOT_PLUG_EVENT]
static inline fapi2::buffer<uint64_t>&
GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_HOT_PLUG_EVENT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_HOT_PLUG_EVENT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_HOT_PLUG_EVENT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_HOT_PLUG_EVENT]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_HOT_PLUG_EVENT]
static inline bool GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_HOT_PLUG_EVENT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_HOT_PLUG_EVENT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_HOT_PLUG_EVENT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_HOT_PLUG_EVENT]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_CONTROL_REGISTER_PARITY_INTERRUPT]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_CONTROL_REGISTER_PARITY_INTERRUPT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_CONTROL_REGISTER_PARITY_INTERRUPT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_CONTROL_REGISTER_PARITY_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_CONTROL_REGISTER_PARITY_INTERRUPT]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_CONTROL_REGISTER_PARITY_INTERRUPT]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_CONTROL_REGISTER_PARITY_INTERRUPT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_CONTROL_REGISTER_PARITY_INTERRUPT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_CONTROL_REGISTER_PARITY_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_CONTROL_REGISTER_PARITY_INTERRUPT]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_CONTROL_REGISTER_PARITY_INTERRUPT]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_CONTROL_REGISTER_PARITY_INTERRUPT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_CONTROL_REGISTER_PARITY_INTERRUPT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_CONTROL_REGISTER_PARITY_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_CONTROL_REGISTER_PARITY_INTERRUPT]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_CONTROL_REGISTER_PARITY_INTERRUPT]
static inline fapi2::buffer<uint64_t>&
CLEAR_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_CONTROL_REGISTER_PARITY_INTERRUPT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_CONTROL_REGISTER_PARITY_INTERRUPT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_CONTROL_REGISTER_PARITY_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_CONTROL_REGISTER_PARITY_INTERRUPT]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_CONTROL_REGISTER_PARITY_INTERRUPT]
static inline fapi2::buffer<uint64_t>&
GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_CONTROL_REGISTER_PARITY_INTERRUPT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_CONTROL_REGISTER_PARITY_INTERRUPT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_CONTROL_REGISTER_PARITY_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_CONTROL_REGISTER_PARITY_INTERRUPT]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_CONTROL_REGISTER_PARITY_INTERRUPT]
static inline bool
GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_CONTROL_REGISTER_PARITY_INTERRUPT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_CONTROL_REGISTER_PARITY_INTERRUPT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_CONTROL_REGISTER_PARITY_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_CONTROL_REGISTER_PARITY_INTERRUPT]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT]
static inline fapi2::buffer<uint64_t>&
CLEAR_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT]
static inline fapi2::buffer<uint64_t>&
GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT]
static inline bool
GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT]
static inline fapi2::buffer<uint64_t>&
CLEAR_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT]
static inline fapi2::buffer<uint64_t>&
GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT]
static inline bool
GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_CM_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_MASTER_ERROR]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_MASTER_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_MASTER_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_MASTER_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_MASTER_ERROR]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_MASTER_ERROR]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_MASTER_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_MASTER_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_MASTER_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_MASTER_ERROR]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_MASTER_ERROR]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_MASTER_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_MASTER_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_MASTER_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_MASTER_ERROR]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_MASTER_ERROR]
static inline fapi2::buffer<uint64_t>&
CLEAR_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_MASTER_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_MASTER_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_MASTER_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_MASTER_ERROR]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_MASTER_ERROR]
static inline fapi2::buffer<uint64_t>&
GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_MASTER_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_MASTER_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_MASTER_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_MASTER_ERROR]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_MASTER_ERROR]
static inline bool GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_MASTER_ERROR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_MASTER_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_MASTER_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_MASTER_ERROR]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_PORT_INTERRUPT]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_PORT_INTERRUPT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_PORT_INTERRUPT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_PORT_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_PORT_INTERRUPT]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_PORT_INTERRUPT]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_PORT_INTERRUPT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_PORT_INTERRUPT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_PORT_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_PORT_INTERRUPT]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_PORT_INTERRUPT]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_PORT_INTERRUPT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_PORT_INTERRUPT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_PORT_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_PORT_INTERRUPT]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_PORT_INTERRUPT]
static inline fapi2::buffer<uint64_t>&
CLEAR_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_PORT_INTERRUPT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_PORT_INTERRUPT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_PORT_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_PORT_INTERRUPT]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_PORT_INTERRUPT]
static inline fapi2::buffer<uint64_t>&
GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_PORT_INTERRUPT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_PORT_INTERRUPT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_PORT_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_PORT_INTERRUPT]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_PORT_INTERRUPT]
static inline bool GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_PORT_INTERRUPT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_PORT_INTERRUPT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_PORT_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_PORT_INTERRUPT]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_HOT_PLUG_EVENT]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_HOT_PLUG_EVENT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_HOT_PLUG_EVENT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_HOT_PLUG_EVENT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_HOT_PLUG_EVENT]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_HOT_PLUG_EVENT]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_HOT_PLUG_EVENT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_HOT_PLUG_EVENT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_HOT_PLUG_EVENT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_HOT_PLUG_EVENT]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_HOT_PLUG_EVENT]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_HOT_PLUG_EVENT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_HOT_PLUG_EVENT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_HOT_PLUG_EVENT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_HOT_PLUG_EVENT]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_HOT_PLUG_EVENT]
static inline fapi2::buffer<uint64_t>&
CLEAR_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_HOT_PLUG_EVENT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_HOT_PLUG_EVENT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_HOT_PLUG_EVENT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_HOT_PLUG_EVENT]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_HOT_PLUG_EVENT]
static inline fapi2::buffer<uint64_t>&
GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_HOT_PLUG_EVENT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_HOT_PLUG_EVENT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_HOT_PLUG_EVENT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_HOT_PLUG_EVENT]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_HOT_PLUG_EVENT]
static inline bool GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_HOT_PLUG_EVENT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_HOT_PLUG_EVENT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_HOT_PLUG_EVENT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_HOT_PLUG_EVENT]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_CONTROL_REGISTER_PARITY_INTERRUPT]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_CONTROL_REGISTER_PARITY_INTERRUPT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_CONTROL_REGISTER_PARITY_INTERRUPT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_CONTROL_REGISTER_PARITY_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_CONTROL_REGISTER_PARITY_INTERRUPT]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_CONTROL_REGISTER_PARITY_INTERRUPT]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_CONTROL_REGISTER_PARITY_INTERRUPT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_CONTROL_REGISTER_PARITY_INTERRUPT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_CONTROL_REGISTER_PARITY_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_CONTROL_REGISTER_PARITY_INTERRUPT]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_CONTROL_REGISTER_PARITY_INTERRUPT]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_CONTROL_REGISTER_PARITY_INTERRUPT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_CONTROL_REGISTER_PARITY_INTERRUPT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_CONTROL_REGISTER_PARITY_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_CONTROL_REGISTER_PARITY_INTERRUPT]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_CONTROL_REGISTER_PARITY_INTERRUPT]
static inline fapi2::buffer<uint64_t>&
CLEAR_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_CONTROL_REGISTER_PARITY_INTERRUPT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_CONTROL_REGISTER_PARITY_INTERRUPT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_CONTROL_REGISTER_PARITY_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_CONTROL_REGISTER_PARITY_INTERRUPT]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_CONTROL_REGISTER_PARITY_INTERRUPT]
static inline fapi2::buffer<uint64_t>&
GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_CONTROL_REGISTER_PARITY_INTERRUPT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_CONTROL_REGISTER_PARITY_INTERRUPT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_CONTROL_REGISTER_PARITY_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_CONTROL_REGISTER_PARITY_INTERRUPT]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_CONTROL_REGISTER_PARITY_INTERRUPT]
static inline bool
GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_CONTROL_REGISTER_PARITY_INTERRUPT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_CONTROL_REGISTER_PARITY_INTERRUPT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_CONTROL_REGISTER_PARITY_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_CONTROL_REGISTER_PARITY_INTERRUPT]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT]
static inline fapi2::buffer<uint64_t>&
CLEAR_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT]
static inline fapi2::buffer<uint64_t>&
GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT]
static inline bool
GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_1_REMOTE_SLAVE_INTERRUPT]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT]

//>> CLEAR_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT]
static inline fapi2::buffer<uint64_t>&
CLEAR_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT]
static inline fapi2::buffer<uint64_t>&
GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT]
static inline bool
GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_M_ANY_INTR_2_REMOTE_SLAVE_INTERRUPT]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_READ_DATA]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_READ_DATA(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_READ_DATA,
           TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_READ_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_READ_DATA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_READ_DATA]

//>> SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_READ_DATA]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_READ_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_READ_DATA,
           TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_READ_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_READ_DATA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_READ_DATA]

//>> GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_READ_DATA]
static inline fapi2::buffer<uint64_t>&
GET_TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_READ_DATA(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_READ_DATA,
           TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_READ_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_READ_DATA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SLAVE_CMFSI_INCLUDE_MFSI_A_PIB2OPB_COMP_P_0_STAT_RDDAT_ERRES_READ_DATA]

//>> PREP_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG]

//>> PUT_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG]


//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_CLOCK_DIVIDER]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_CLOCK_DIVIDER(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_CLOCK_DIVIDER,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_CLOCK_DIVIDER_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_CLOCK_DIVIDER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_CLOCK_DIVIDER]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_CLOCK_DIVIDER]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_CLOCK_DIVIDER(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_CLOCK_DIVIDER,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_CLOCK_DIVIDER_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_CLOCK_DIVIDER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_CLOCK_DIVIDER]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_CLOCK_DIVIDER]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_CLOCK_DIVIDER(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_CLOCK_DIVIDER,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_CLOCK_DIVIDER_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_CLOCK_DIVIDER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_CLOCK_DIVIDER]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_RECEIVE_DELAY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_RECEIVE_DELAY(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_RECEIVE_DELAY,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_RECEIVE_DELAY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_RECEIVE_DELAY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_RECEIVE_DELAY]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_RECEIVE_DELAY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_RECEIVE_DELAY(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_RECEIVE_DELAY,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_RECEIVE_DELAY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_RECEIVE_DELAY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_RECEIVE_DELAY]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_RECEIVE_DELAY]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_RECEIVE_DELAY(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_RECEIVE_DELAY,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_RECEIVE_DELAY_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_RECEIVE_DELAY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_RECEIVE_DELAY]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPI_RESERVED]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPI_RESERVED(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPI_RESERVED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPI_RESERVED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPI_RESERVED]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPI_RESERVED]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPI_RESERVED(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPI_RESERVED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPI_RESERVED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPI_RESERVED]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPI_RESERVED]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPI_RESERVED(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPI_RESERVED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPI_RESERVED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPI_RESERVED]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPI_RESERVED]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPI_RESERVED(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPI_RESERVED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPI_RESERVED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPI_RESERVED]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPI_RESERVED]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPI_RESERVED(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPI_RESERVED,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPI_RESERVED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPI_RESERVED]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPI_RESERVED]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPI_RESERVED(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPI_RESERVED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPI_RESERVED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPI_RESERVED]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_ENABLE_RECEIVE_PACING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_ENABLE_RECEIVE_PACING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_ENABLE_RECEIVE_PACING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_ENABLE_RECEIVE_PACING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_ENABLE_RECEIVE_PACING]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_ENABLE_RECEIVE_PACING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_ENABLE_RECEIVE_PACING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_ENABLE_RECEIVE_PACING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_ENABLE_RECEIVE_PACING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_ENABLE_RECEIVE_PACING]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_ENABLE_RECEIVE_PACING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_ENABLE_RECEIVE_PACING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_ENABLE_RECEIVE_PACING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_ENABLE_RECEIVE_PACING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_ENABLE_RECEIVE_PACING]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_ENABLE_RECEIVE_PACING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_ENABLE_RECEIVE_PACING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_ENABLE_RECEIVE_PACING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_ENABLE_RECEIVE_PACING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_ENABLE_RECEIVE_PACING]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_ENABLE_RECEIVE_PACING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_ENABLE_RECEIVE_PACING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_ENABLE_RECEIVE_PACING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_ENABLE_RECEIVE_PACING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_ENABLE_RECEIVE_PACING]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_ENABLE_RECEIVE_PACING]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_ENABLE_RECEIVE_PACING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_ENABLE_RECEIVE_PACING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_ENABLE_RECEIVE_PACING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_ENABLE_RECEIVE_PACING]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPIMST_TRACE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPIMST_TRACE_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPIMST_TRACE_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPIMST_TRACE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPIMST_TRACE_ENABLE]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPIMST_TRACE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPIMST_TRACE_ENABLE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPIMST_TRACE_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPIMST_TRACE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPIMST_TRACE_ENABLE]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPIMST_TRACE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPIMST_TRACE_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPIMST_TRACE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPIMST_TRACE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPIMST_TRACE_ENABLE]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPIMST_TRACE_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPIMST_TRACE_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPIMST_TRACE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPIMST_TRACE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPIMST_TRACE_ENABLE]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPIMST_TRACE_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPIMST_TRACE_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPIMST_TRACE_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPIMST_TRACE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPIMST_TRACE_ENABLE]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPIMST_TRACE_ENABLE]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPIMST_TRACE_ENABLE(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPIMST_TRACE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPIMST_TRACE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPIMST_TRACE_ENABLE]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_TRACE_SELECT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_TRACE_SELECT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_TRACE_SELECT,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_TRACE_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_TRACE_SELECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_TRACE_SELECT]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_TRACE_SELECT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_TRACE_SELECT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_TRACE_SELECT,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_TRACE_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_TRACE_SELECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_TRACE_SELECT]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_TRACE_SELECT]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_TRACE_SELECT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_TRACE_SELECT,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_TRACE_SELECT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_TRACE_SELECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_TRACE_SELECT]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_RESET_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_RESET_CONTROL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_RESET_CONTROL,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_RESET_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_RESET_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_RESET_CONTROL]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_RESET_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_RESET_CONTROL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_RESET_CONTROL,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_RESET_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_RESET_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_RESET_CONTROL]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_RESET_CONTROL]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_RESET_CONTROL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_RESET_CONTROL,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_RESET_CONTROL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_RESET_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_RESET_CONTROL]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS]
static inline fapi2::buffer<uint64_t>&
CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS]
static inline fapi2::buffer<uint64_t>&
GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_ECC_SPIMM_ADDR_CORR_DIS]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_ECC_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_ECC_CONTROL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_ECC_CONTROL,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_ECC_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_ECC_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_ECC_CONTROL]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_ECC_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_ECC_CONTROL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_ECC_CONTROL,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_ECC_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_ECC_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_ECC_CONTROL]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_ECC_CONTROL]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_ECC_CONTROL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_ECC_CONTROL,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_ECC_CONTROL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_ECC_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_ECC_CONTROL]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_MMSPISM_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_MMSPISM_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_MMSPISM_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_MMSPISM_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_MMSPISM_ENABLE]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_MMSPISM_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_MMSPISM_ENABLE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_MMSPISM_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_MMSPISM_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_MMSPISM_ENABLE]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_MMSPISM_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_MMSPISM_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_MMSPISM_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_MMSPISM_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_MMSPISM_ENABLE]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_MMSPISM_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_MMSPISM_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_MMSPISM_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_MMSPISM_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_MMSPISM_ENABLE]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_MMSPISM_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_MMSPISM_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_MMSPISM_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_MMSPISM_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_MMSPISM_ENABLE]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_MMSPISM_ENABLE]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_MMSPISM_ENABLE(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_MMSPISM_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_MMSPISM_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SCK_MMSPISM_ENABLE]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPI_SLAVE_RESET]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPI_SLAVE_RESET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPI_SLAVE_RESET,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPI_SLAVE_RESET_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPI_SLAVE_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPI_SLAVE_RESET]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPI_SLAVE_RESET]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPI_SLAVE_RESET(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPI_SLAVE_RESET,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPI_SLAVE_RESET_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPI_SLAVE_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPI_SLAVE_RESET]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPI_SLAVE_RESET]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPI_SLAVE_RESET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPI_SLAVE_RESET,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPI_SLAVE_RESET_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPI_SLAVE_RESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_SPI_SLAVE_RESET]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_LOOPBACK_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_LOOPBACK_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_LOOPBACK_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_LOOPBACK_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_LOOPBACK_ENABLE]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_LOOPBACK_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_LOOPBACK_ENABLE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_LOOPBACK_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_LOOPBACK_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_LOOPBACK_ENABLE]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_LOOPBACK_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_LOOPBACK_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return o_data.setBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_LOOPBACK_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_LOOPBACK_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_LOOPBACK_ENABLE]

//>> CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_LOOPBACK_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_LOOPBACK_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return o_data.clearBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_LOOPBACK_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_LOOPBACK_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_LOOPBACK_ENABLE]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_LOOPBACK_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_LOOPBACK_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_LOOPBACK_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_LOOPBACK_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_LOOPBACK_ENABLE]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_LOOPBACK_ENABLE]
static inline bool GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_LOOPBACK_ENABLE(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return i_data.getBit<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_LOOPBACK_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_LOOPBACK_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_LOOPBACK_ENABLE]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_CLOCK_CONFIG_RESERVED]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_CLOCK_CONFIG_RESERVED(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_CLOCK_CONFIG_RESERVED,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_CLOCK_CONFIG_RESERVED_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_CLOCK_CONFIG_RESERVED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_CLOCK_CONFIG_RESERVED]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_CLOCK_CONFIG_RESERVED]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_CLOCK_CONFIG_RESERVED(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_CLOCK_CONFIG_RESERVED,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_CLOCK_CONFIG_RESERVED_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_CLOCK_CONFIG_RESERVED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_CLOCK_CONFIG_RESERVED]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_CLOCK_CONFIG_RESERVED]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_CLOCK_CONFIG_RESERVED(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_CLOCK_CONFIG_RESERVED,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_CLOCK_CONFIG_RESERVED_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_CLOCK_CONFIG_RESERVED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_CLOCK_CONFIG_CLOCK_CONFIG_RESERVED]

//>> PREP_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT_]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT_
(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT_;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT_]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT_]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT_
(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT_;
#endif
    return fapi2::getScom(i_target, TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT_, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT_]

//>> PUT_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT_]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT_
(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT_));
#endif
    return fapi2::putScom(i_target, TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT_, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT_]


//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__ERROR_REG_Q]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__ERROR_REG_Q(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT_));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__ERROR_REG_Q,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__ERROR_REG_Q_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__ERROR_REG_Q chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__ERROR_REG_Q]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__ERROR_REG_Q]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__ERROR_REG_Q(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT_));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__ERROR_REG_Q,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__ERROR_REG_Q_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__ERROR_REG_Q chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__ERROR_REG_Q]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__ERROR_REG_Q]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__ERROR_REG_Q(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT_));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__ERROR_REG_Q,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__ERROR_REG_Q_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__ERROR_REG_Q chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__ERROR_REG_Q]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__INJECT_PULSE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__INJECT_PULSE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT_));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__INJECT_PULSE,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__INJECT_PULSE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__INJECT_PULSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__INJECT_PULSE]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__INJECT_PULSE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__INJECT_PULSE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT_));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__INJECT_PULSE,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__INJECT_PULSE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__INJECT_PULSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__INJECT_PULSE]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__INJECT_PULSE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__INJECT_PULSE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT_));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__INJECT_PULSE,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__INJECT_PULSE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__INJECT_PULSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__INJECT_PULSE]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__INJECT_MASK]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__INJECT_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT_));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__INJECT_MASK,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__INJECT_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__INJECT_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__INJECT_MASK]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__INJECT_MASK]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__INJECT_MASK(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT_));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__INJECT_MASK,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__INJECT_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__INJECT_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__INJECT_MASK]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__INJECT_MASK]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__INJECT_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT_));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__INJECT_MASK,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__INJECT_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__INJECT_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__INJECT_MASK]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__MASK]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT_));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__MASK,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__MASK]

//>> SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__MASK]
static inline fapi2::buffer<uint64_t>& SET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__MASK(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT_));
#endif
    return o_data.insertFromRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__MASK,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__MASK]

//>> GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__MASK]
static inline fapi2::buffer<uint64_t>& GET_TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT_));
#endif
    return i_data.extractToRight<TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__MASK,
           TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPVSB_FSI_W_SPIMC_SPI_PIB_SPIMST0_ERROR_INJECT__MASK]

//>> PREP_[VAS_VA_EG_SCF_PGMIG4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_VAS_VA_EG_SCF_PGMIG4(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = VAS_VA_EG_SCF_PGMIG4;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[VAS_VA_EG_SCF_PGMIG4]

//>> GET_[VAS_VA_EG_SCF_PGMIG4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_VAS_VA_EG_SCF_PGMIG4(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = VAS_VA_EG_SCF_PGMIG4;
#endif
    return fapi2::getScom(i_target, VAS_VA_EG_SCF_PGMIG4, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[VAS_VA_EG_SCF_PGMIG4]

//>> PUT_[VAS_VA_EG_SCF_PGMIG4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_VAS_VA_EG_SCF_PGMIG4(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(VAS_VA_EG_SCF_PGMIG4));
#endif
    return fapi2::putScom(i_target, VAS_VA_EG_SCF_PGMIG4, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[VAS_VA_EG_SCF_PGMIG4]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
