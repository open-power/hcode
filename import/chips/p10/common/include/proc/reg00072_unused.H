/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/proc/reg00072_unused.H $      */
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

#ifndef __PROC_REG00072_H_UNUSED__
#define __PROC_REG00072_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace proc
{
#endif


//>> PREP_[TP_TCN1_N1_XSTOP]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TCN1_N1_XSTOP(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TCN1_N1_XSTOP;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TCN1_N1_XSTOP]

//>> GET_[TP_TCN1_N1_XSTOP]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TCN1_N1_XSTOP(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TCN1_N1_XSTOP;
#endif
    return fapi2::getScom(i_target, TP_TCN1_N1_XSTOP, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP]

//>> PUT_[TP_TCN1_N1_XSTOP]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TCN1_N1_XSTOP(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return fapi2::putScom(i_target, TP_TCN1_N1_XSTOP, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TCN1_N1_XSTOP]


//>> SET_[TP_TCN1_N1_XSTOP_ANY_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_ANY_XSTOP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_ANY_XSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_ANY_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_ANY_XSTOP]

//>> SET_[TP_TCN1_N1_XSTOP_ANY_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_ANY_XSTOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_ANY_XSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_ANY_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_ANY_XSTOP]

//>> SET_[TP_TCN1_N1_XSTOP_ANY_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_ANY_XSTOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.setBit<TP_TCN1_N1_XSTOP_ANY_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_ANY_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_ANY_XSTOP]

//>> CLEAR_[TP_TCN1_N1_XSTOP_ANY_XSTOP]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TCN1_N1_XSTOP_ANY_XSTOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.clearBit<TP_TCN1_N1_XSTOP_ANY_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_ANY_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TCN1_N1_XSTOP_ANY_XSTOP]

//>> GET_[TP_TCN1_N1_XSTOP_ANY_XSTOP]
static inline fapi2::buffer<uint64_t>& GET_TP_TCN1_N1_XSTOP_ANY_XSTOP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.extractToRight<TP_TCN1_N1_XSTOP_ANY_XSTOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_ANY_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_ANY_XSTOP]

//>> GET_[TP_TCN1_N1_XSTOP_ANY_XSTOP]
static inline bool GET_TP_TCN1_N1_XSTOP_ANY_XSTOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.getBit<TP_TCN1_N1_XSTOP_ANY_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_ANY_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_ANY_XSTOP]

//>> SET_[TP_TCN1_N1_XSTOP_SYSTEM_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_SYSTEM_XSTOP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_SYSTEM_XSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_SYSTEM_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_SYSTEM_XSTOP]

//>> SET_[TP_TCN1_N1_XSTOP_SYSTEM_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_SYSTEM_XSTOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_SYSTEM_XSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_SYSTEM_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_SYSTEM_XSTOP]

//>> SET_[TP_TCN1_N1_XSTOP_SYSTEM_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_SYSTEM_XSTOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.setBit<TP_TCN1_N1_XSTOP_SYSTEM_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_SYSTEM_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_SYSTEM_XSTOP]

//>> CLEAR_[TP_TCN1_N1_XSTOP_SYSTEM_XSTOP]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TCN1_N1_XSTOP_SYSTEM_XSTOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.clearBit<TP_TCN1_N1_XSTOP_SYSTEM_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_SYSTEM_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TCN1_N1_XSTOP_SYSTEM_XSTOP]

//>> GET_[TP_TCN1_N1_XSTOP_SYSTEM_XSTOP]
static inline fapi2::buffer<uint64_t>& GET_TP_TCN1_N1_XSTOP_SYSTEM_XSTOP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.extractToRight<TP_TCN1_N1_XSTOP_SYSTEM_XSTOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_SYSTEM_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_SYSTEM_XSTOP]

//>> GET_[TP_TCN1_N1_XSTOP_SYSTEM_XSTOP]
static inline bool GET_TP_TCN1_N1_XSTOP_SYSTEM_XSTOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.getBit<TP_TCN1_N1_XSTOP_SYSTEM_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_SYSTEM_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_SYSTEM_XSTOP]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_ANY_SPATTN]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_ANY_SPATTN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_ANY_SPATTN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_ANY_SPATTN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_ANY_SPATTN]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_ANY_SPATTN]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_ANY_SPATTN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_ANY_SPATTN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_ANY_SPATTN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_ANY_SPATTN]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_ANY_SPATTN]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_ANY_SPATTN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.setBit<TP_TCN1_N1_XSTOP_XSTOP_ANY_SPATTN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_ANY_SPATTN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_ANY_SPATTN]

//>> CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_ANY_SPATTN]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TCN1_N1_XSTOP_XSTOP_ANY_SPATTN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.clearBit<TP_TCN1_N1_XSTOP_XSTOP_ANY_SPATTN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_ANY_SPATTN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_ANY_SPATTN]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_ANY_SPATTN]
static inline fapi2::buffer<uint64_t>& GET_TP_TCN1_N1_XSTOP_XSTOP_ANY_SPATTN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.extractToRight<TP_TCN1_N1_XSTOP_XSTOP_ANY_SPATTN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_ANY_SPATTN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_ANY_SPATTN]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_ANY_SPATTN]
static inline bool GET_TP_TCN1_N1_XSTOP_XSTOP_ANY_SPATTN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.getBit<TP_TCN1_N1_XSTOP_XSTOP_ANY_SPATTN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_ANY_SPATTN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_ANY_SPATTN]

//>> SET_[TP_TCN1_N1_XSTOP_DBG_FIR_XSTOP_ON_TRIG]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_DBG_FIR_XSTOP_ON_TRIG(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_DBG_FIR_XSTOP_ON_TRIG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_DBG_FIR_XSTOP_ON_TRIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_DBG_FIR_XSTOP_ON_TRIG]

//>> SET_[TP_TCN1_N1_XSTOP_DBG_FIR_XSTOP_ON_TRIG]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_DBG_FIR_XSTOP_ON_TRIG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_DBG_FIR_XSTOP_ON_TRIG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_DBG_FIR_XSTOP_ON_TRIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_DBG_FIR_XSTOP_ON_TRIG]

//>> SET_[TP_TCN1_N1_XSTOP_DBG_FIR_XSTOP_ON_TRIG]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_DBG_FIR_XSTOP_ON_TRIG(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.setBit<TP_TCN1_N1_XSTOP_DBG_FIR_XSTOP_ON_TRIG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_DBG_FIR_XSTOP_ON_TRIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_DBG_FIR_XSTOP_ON_TRIG]

//>> CLEAR_[TP_TCN1_N1_XSTOP_DBG_FIR_XSTOP_ON_TRIG]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TCN1_N1_XSTOP_DBG_FIR_XSTOP_ON_TRIG(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.clearBit<TP_TCN1_N1_XSTOP_DBG_FIR_XSTOP_ON_TRIG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_DBG_FIR_XSTOP_ON_TRIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TCN1_N1_XSTOP_DBG_FIR_XSTOP_ON_TRIG]

//>> GET_[TP_TCN1_N1_XSTOP_DBG_FIR_XSTOP_ON_TRIG]
static inline fapi2::buffer<uint64_t>& GET_TP_TCN1_N1_XSTOP_DBG_FIR_XSTOP_ON_TRIG(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.extractToRight<TP_TCN1_N1_XSTOP_DBG_FIR_XSTOP_ON_TRIG,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_DBG_FIR_XSTOP_ON_TRIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_DBG_FIR_XSTOP_ON_TRIG]

//>> GET_[TP_TCN1_N1_XSTOP_DBG_FIR_XSTOP_ON_TRIG]
static inline bool GET_TP_TCN1_N1_XSTOP_DBG_FIR_XSTOP_ON_TRIG(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.getBit<TP_TCN1_N1_XSTOP_DBG_FIR_XSTOP_ON_TRIG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_DBG_FIR_XSTOP_ON_TRIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_DBG_FIR_XSTOP_ON_TRIG]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_PERV]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_PERV(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_PERV,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_PERV]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_PERV]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_PERV(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_PERV,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_PERV]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_PERV]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_PERV(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.setBit<TP_TCN1_N1_XSTOP_XSTOP_PERV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_PERV]

//>> CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_PERV]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TCN1_N1_XSTOP_XSTOP_PERV(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.clearBit<TP_TCN1_N1_XSTOP_XSTOP_PERV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_PERV]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_PERV]
static inline fapi2::buffer<uint64_t>& GET_TP_TCN1_N1_XSTOP_XSTOP_PERV(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.extractToRight<TP_TCN1_N1_XSTOP_XSTOP_PERV,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_PERV]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_PERV]
static inline bool GET_TP_TCN1_N1_XSTOP_XSTOP_PERV(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.getBit<TP_TCN1_N1_XSTOP_XSTOP_PERV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_PERV]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN05]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN05(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN05,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN05]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN05]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN05(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN05,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN05]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN05]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN05(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.setBit<TP_TCN1_N1_XSTOP_XSTOP_IN05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN05]

//>> CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN05]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TCN1_N1_XSTOP_XSTOP_IN05(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.clearBit<TP_TCN1_N1_XSTOP_XSTOP_IN05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN05]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN05]
static inline fapi2::buffer<uint64_t>& GET_TP_TCN1_N1_XSTOP_XSTOP_IN05(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.extractToRight<TP_TCN1_N1_XSTOP_XSTOP_IN05,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN05]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN05]
static inline bool GET_TP_TCN1_N1_XSTOP_XSTOP_IN05(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.getBit<TP_TCN1_N1_XSTOP_XSTOP_IN05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN05]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN06]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN06(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN06,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN06]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN06]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN06(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN06,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN06]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN06]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN06(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.setBit<TP_TCN1_N1_XSTOP_XSTOP_IN06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN06]

//>> CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN06]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TCN1_N1_XSTOP_XSTOP_IN06(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.clearBit<TP_TCN1_N1_XSTOP_XSTOP_IN06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN06]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN06]
static inline fapi2::buffer<uint64_t>& GET_TP_TCN1_N1_XSTOP_XSTOP_IN06(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.extractToRight<TP_TCN1_N1_XSTOP_XSTOP_IN06,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN06]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN06]
static inline bool GET_TP_TCN1_N1_XSTOP_XSTOP_IN06(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.getBit<TP_TCN1_N1_XSTOP_XSTOP_IN06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN06]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN07]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN07(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN07,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN07]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN07]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN07(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN07,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN07]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN07]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN07(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.setBit<TP_TCN1_N1_XSTOP_XSTOP_IN07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN07]

//>> CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN07]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TCN1_N1_XSTOP_XSTOP_IN07(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.clearBit<TP_TCN1_N1_XSTOP_XSTOP_IN07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN07]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN07]
static inline fapi2::buffer<uint64_t>& GET_TP_TCN1_N1_XSTOP_XSTOP_IN07(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.extractToRight<TP_TCN1_N1_XSTOP_XSTOP_IN07,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN07]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN07]
static inline bool GET_TP_TCN1_N1_XSTOP_XSTOP_IN07(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.getBit<TP_TCN1_N1_XSTOP_XSTOP_IN07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN07]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN08]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN08(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN08,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN08]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN08]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN08(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN08,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN08]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN08]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN08(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.setBit<TP_TCN1_N1_XSTOP_XSTOP_IN08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN08]

//>> CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN08]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TCN1_N1_XSTOP_XSTOP_IN08(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.clearBit<TP_TCN1_N1_XSTOP_XSTOP_IN08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN08]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN08]
static inline fapi2::buffer<uint64_t>& GET_TP_TCN1_N1_XSTOP_XSTOP_IN08(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.extractToRight<TP_TCN1_N1_XSTOP_XSTOP_IN08,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN08]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN08]
static inline bool GET_TP_TCN1_N1_XSTOP_XSTOP_IN08(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.getBit<TP_TCN1_N1_XSTOP_XSTOP_IN08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN08]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN09]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN09(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN09,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN09]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN09]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN09(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN09,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN09]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN09]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN09(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.setBit<TP_TCN1_N1_XSTOP_XSTOP_IN09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN09]

//>> CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN09]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TCN1_N1_XSTOP_XSTOP_IN09(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.clearBit<TP_TCN1_N1_XSTOP_XSTOP_IN09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN09]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN09]
static inline fapi2::buffer<uint64_t>& GET_TP_TCN1_N1_XSTOP_XSTOP_IN09(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.extractToRight<TP_TCN1_N1_XSTOP_XSTOP_IN09,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN09]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN09]
static inline bool GET_TP_TCN1_N1_XSTOP_XSTOP_IN09(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.getBit<TP_TCN1_N1_XSTOP_XSTOP_IN09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN09]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN10]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN10(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN10]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN10]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN10(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN10]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN10]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN10(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.setBit<TP_TCN1_N1_XSTOP_XSTOP_IN10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN10]

//>> CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN10]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TCN1_N1_XSTOP_XSTOP_IN10(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.clearBit<TP_TCN1_N1_XSTOP_XSTOP_IN10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN10]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN10]
static inline fapi2::buffer<uint64_t>& GET_TP_TCN1_N1_XSTOP_XSTOP_IN10(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.extractToRight<TP_TCN1_N1_XSTOP_XSTOP_IN10,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN10]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN10]
static inline bool GET_TP_TCN1_N1_XSTOP_XSTOP_IN10(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.getBit<TP_TCN1_N1_XSTOP_XSTOP_IN10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN10]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN11]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN11(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN11]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN11]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN11(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN11]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN11]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN11(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.setBit<TP_TCN1_N1_XSTOP_XSTOP_IN11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN11]

//>> CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN11]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TCN1_N1_XSTOP_XSTOP_IN11(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.clearBit<TP_TCN1_N1_XSTOP_XSTOP_IN11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN11]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN11]
static inline fapi2::buffer<uint64_t>& GET_TP_TCN1_N1_XSTOP_XSTOP_IN11(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.extractToRight<TP_TCN1_N1_XSTOP_XSTOP_IN11,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN11]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN11]
static inline bool GET_TP_TCN1_N1_XSTOP_XSTOP_IN11(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.getBit<TP_TCN1_N1_XSTOP_XSTOP_IN11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN11]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN12]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN12(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN12]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN12]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN12(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN12]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN12]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN12(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.setBit<TP_TCN1_N1_XSTOP_XSTOP_IN12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN12]

//>> CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN12]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TCN1_N1_XSTOP_XSTOP_IN12(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.clearBit<TP_TCN1_N1_XSTOP_XSTOP_IN12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN12]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN12]
static inline fapi2::buffer<uint64_t>& GET_TP_TCN1_N1_XSTOP_XSTOP_IN12(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.extractToRight<TP_TCN1_N1_XSTOP_XSTOP_IN12,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN12]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN12]
static inline bool GET_TP_TCN1_N1_XSTOP_XSTOP_IN12(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.getBit<TP_TCN1_N1_XSTOP_XSTOP_IN12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN12]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN13]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN13(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN13]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN13]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN13(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN13]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN13]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.setBit<TP_TCN1_N1_XSTOP_XSTOP_IN13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN13]

//>> CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN13]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TCN1_N1_XSTOP_XSTOP_IN13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.clearBit<TP_TCN1_N1_XSTOP_XSTOP_IN13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN13]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN13]
static inline fapi2::buffer<uint64_t>& GET_TP_TCN1_N1_XSTOP_XSTOP_IN13(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.extractToRight<TP_TCN1_N1_XSTOP_XSTOP_IN13,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN13]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN13]
static inline bool GET_TP_TCN1_N1_XSTOP_XSTOP_IN13(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.getBit<TP_TCN1_N1_XSTOP_XSTOP_IN13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN13]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN14]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN14(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN14]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN14]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN14(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN14]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN14]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.setBit<TP_TCN1_N1_XSTOP_XSTOP_IN14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN14]

//>> CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN14]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TCN1_N1_XSTOP_XSTOP_IN14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.clearBit<TP_TCN1_N1_XSTOP_XSTOP_IN14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN14]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN14]
static inline fapi2::buffer<uint64_t>& GET_TP_TCN1_N1_XSTOP_XSTOP_IN14(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.extractToRight<TP_TCN1_N1_XSTOP_XSTOP_IN14,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN14]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN14]
static inline bool GET_TP_TCN1_N1_XSTOP_XSTOP_IN14(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.getBit<TP_TCN1_N1_XSTOP_XSTOP_IN14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN14]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN15]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN15(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN15,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN15]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN15]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN15(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN15,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN15]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN15]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN15(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.setBit<TP_TCN1_N1_XSTOP_XSTOP_IN15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN15]

//>> CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN15]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TCN1_N1_XSTOP_XSTOP_IN15(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.clearBit<TP_TCN1_N1_XSTOP_XSTOP_IN15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN15]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN15]
static inline fapi2::buffer<uint64_t>& GET_TP_TCN1_N1_XSTOP_XSTOP_IN15(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.extractToRight<TP_TCN1_N1_XSTOP_XSTOP_IN15,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN15]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN15]
static inline bool GET_TP_TCN1_N1_XSTOP_XSTOP_IN15(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.getBit<TP_TCN1_N1_XSTOP_XSTOP_IN15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN15]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN16]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN16(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN16,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN16 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN16]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN16]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN16(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN16,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN16 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN16]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN16]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN16(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.setBit<TP_TCN1_N1_XSTOP_XSTOP_IN16>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN16 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN16]

//>> CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN16]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TCN1_N1_XSTOP_XSTOP_IN16(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.clearBit<TP_TCN1_N1_XSTOP_XSTOP_IN16>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN16 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN16]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN16]
static inline fapi2::buffer<uint64_t>& GET_TP_TCN1_N1_XSTOP_XSTOP_IN16(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.extractToRight<TP_TCN1_N1_XSTOP_XSTOP_IN16,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN16 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN16]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN16]
static inline bool GET_TP_TCN1_N1_XSTOP_XSTOP_IN16(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.getBit<TP_TCN1_N1_XSTOP_XSTOP_IN16>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN16 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN16]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN17]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN17(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN17,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN17]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN17]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN17(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN17,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN17]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN17]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN17(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.setBit<TP_TCN1_N1_XSTOP_XSTOP_IN17>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN17]

//>> CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN17]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TCN1_N1_XSTOP_XSTOP_IN17(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.clearBit<TP_TCN1_N1_XSTOP_XSTOP_IN17>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN17]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN17]
static inline fapi2::buffer<uint64_t>& GET_TP_TCN1_N1_XSTOP_XSTOP_IN17(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.extractToRight<TP_TCN1_N1_XSTOP_XSTOP_IN17,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN17]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN17]
static inline bool GET_TP_TCN1_N1_XSTOP_XSTOP_IN17(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.getBit<TP_TCN1_N1_XSTOP_XSTOP_IN17>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN17]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN18]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN18(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN18,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN18 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN18]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN18]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN18(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN18,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN18 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN18]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN18]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN18(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.setBit<TP_TCN1_N1_XSTOP_XSTOP_IN18>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN18 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN18]

//>> CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN18]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TCN1_N1_XSTOP_XSTOP_IN18(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.clearBit<TP_TCN1_N1_XSTOP_XSTOP_IN18>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN18 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN18]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN18]
static inline fapi2::buffer<uint64_t>& GET_TP_TCN1_N1_XSTOP_XSTOP_IN18(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.extractToRight<TP_TCN1_N1_XSTOP_XSTOP_IN18,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN18 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN18]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN18]
static inline bool GET_TP_TCN1_N1_XSTOP_XSTOP_IN18(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.getBit<TP_TCN1_N1_XSTOP_XSTOP_IN18>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN18 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN18]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN19]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN19(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN19,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN19]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN19]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN19(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN19,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN19]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN19]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN19(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.setBit<TP_TCN1_N1_XSTOP_XSTOP_IN19>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN19]

//>> CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN19]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TCN1_N1_XSTOP_XSTOP_IN19(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.clearBit<TP_TCN1_N1_XSTOP_XSTOP_IN19>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN19]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN19]
static inline fapi2::buffer<uint64_t>& GET_TP_TCN1_N1_XSTOP_XSTOP_IN19(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.extractToRight<TP_TCN1_N1_XSTOP_XSTOP_IN19,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN19]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN19]
static inline bool GET_TP_TCN1_N1_XSTOP_XSTOP_IN19(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.getBit<TP_TCN1_N1_XSTOP_XSTOP_IN19>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN19]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN20]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN20(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN20,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN20]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN20]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN20(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN20,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN20]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN20]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN20(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.setBit<TP_TCN1_N1_XSTOP_XSTOP_IN20>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN20]

//>> CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN20]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TCN1_N1_XSTOP_XSTOP_IN20(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.clearBit<TP_TCN1_N1_XSTOP_XSTOP_IN20>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN20]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN20]
static inline fapi2::buffer<uint64_t>& GET_TP_TCN1_N1_XSTOP_XSTOP_IN20(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.extractToRight<TP_TCN1_N1_XSTOP_XSTOP_IN20,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN20]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN20]
static inline bool GET_TP_TCN1_N1_XSTOP_XSTOP_IN20(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.getBit<TP_TCN1_N1_XSTOP_XSTOP_IN20>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN20]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN21]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN21(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN21,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN21 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN21]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN21]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN21(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN21,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN21 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN21]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN21]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN21(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.setBit<TP_TCN1_N1_XSTOP_XSTOP_IN21>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN21 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN21]

//>> CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN21]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TCN1_N1_XSTOP_XSTOP_IN21(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.clearBit<TP_TCN1_N1_XSTOP_XSTOP_IN21>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN21 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN21]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN21]
static inline fapi2::buffer<uint64_t>& GET_TP_TCN1_N1_XSTOP_XSTOP_IN21(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.extractToRight<TP_TCN1_N1_XSTOP_XSTOP_IN21,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN21 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN21]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN21]
static inline bool GET_TP_TCN1_N1_XSTOP_XSTOP_IN21(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.getBit<TP_TCN1_N1_XSTOP_XSTOP_IN21>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN21 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN21]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN22]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN22(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN22,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN22 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN22]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN22]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN22(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN22,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN22 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN22]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN22]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN22(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.setBit<TP_TCN1_N1_XSTOP_XSTOP_IN22>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN22 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN22]

//>> CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN22]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TCN1_N1_XSTOP_XSTOP_IN22(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.clearBit<TP_TCN1_N1_XSTOP_XSTOP_IN22>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN22 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN22]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN22]
static inline fapi2::buffer<uint64_t>& GET_TP_TCN1_N1_XSTOP_XSTOP_IN22(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.extractToRight<TP_TCN1_N1_XSTOP_XSTOP_IN22,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN22 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN22]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN22]
static inline bool GET_TP_TCN1_N1_XSTOP_XSTOP_IN22(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.getBit<TP_TCN1_N1_XSTOP_XSTOP_IN22>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN22 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN22]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN23]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN23(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN23,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN23 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN23]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN23]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN23(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN23,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN23 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN23]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN23]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN23(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.setBit<TP_TCN1_N1_XSTOP_XSTOP_IN23>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN23 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN23]

//>> CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN23]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TCN1_N1_XSTOP_XSTOP_IN23(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.clearBit<TP_TCN1_N1_XSTOP_XSTOP_IN23>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN23 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN23]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN23]
static inline fapi2::buffer<uint64_t>& GET_TP_TCN1_N1_XSTOP_XSTOP_IN23(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.extractToRight<TP_TCN1_N1_XSTOP_XSTOP_IN23,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN23 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN23]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN23]
static inline bool GET_TP_TCN1_N1_XSTOP_XSTOP_IN23(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.getBit<TP_TCN1_N1_XSTOP_XSTOP_IN23>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN23 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN23]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN24]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN24(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN24,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN24]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN24]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN24(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN24,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN24]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN24]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN24(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.setBit<TP_TCN1_N1_XSTOP_XSTOP_IN24>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN24]

//>> CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN24]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TCN1_N1_XSTOP_XSTOP_IN24(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.clearBit<TP_TCN1_N1_XSTOP_XSTOP_IN24>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN24]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN24]
static inline fapi2::buffer<uint64_t>& GET_TP_TCN1_N1_XSTOP_XSTOP_IN24(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.extractToRight<TP_TCN1_N1_XSTOP_XSTOP_IN24,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN24]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN24]
static inline bool GET_TP_TCN1_N1_XSTOP_XSTOP_IN24(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.getBit<TP_TCN1_N1_XSTOP_XSTOP_IN24>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN24]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN25]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN25(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN25,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN25 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN25]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN25]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN25(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN25,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN25 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN25]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN25]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN25(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.setBit<TP_TCN1_N1_XSTOP_XSTOP_IN25>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN25 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN25]

//>> CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN25]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TCN1_N1_XSTOP_XSTOP_IN25(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.clearBit<TP_TCN1_N1_XSTOP_XSTOP_IN25>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN25 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN25]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN25]
static inline fapi2::buffer<uint64_t>& GET_TP_TCN1_N1_XSTOP_XSTOP_IN25(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.extractToRight<TP_TCN1_N1_XSTOP_XSTOP_IN25,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN25 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN25]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN25]
static inline bool GET_TP_TCN1_N1_XSTOP_XSTOP_IN25(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.getBit<TP_TCN1_N1_XSTOP_XSTOP_IN25>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN25 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN25]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN26]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN26(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN26,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN26]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN26]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN26(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN26,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN26]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN26]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN26(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.setBit<TP_TCN1_N1_XSTOP_XSTOP_IN26>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN26]

//>> CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN26]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TCN1_N1_XSTOP_XSTOP_IN26(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.clearBit<TP_TCN1_N1_XSTOP_XSTOP_IN26>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN26]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN26]
static inline fapi2::buffer<uint64_t>& GET_TP_TCN1_N1_XSTOP_XSTOP_IN26(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.extractToRight<TP_TCN1_N1_XSTOP_XSTOP_IN26,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN26]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN26]
static inline bool GET_TP_TCN1_N1_XSTOP_XSTOP_IN26(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.getBit<TP_TCN1_N1_XSTOP_XSTOP_IN26>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN26]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN27]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN27(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN27,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN27 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN27]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN27]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN27(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN27,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN27 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN27]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN27]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN27(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.setBit<TP_TCN1_N1_XSTOP_XSTOP_IN27>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN27 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN27]

//>> CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN27]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TCN1_N1_XSTOP_XSTOP_IN27(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.clearBit<TP_TCN1_N1_XSTOP_XSTOP_IN27>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN27 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN27]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN27]
static inline fapi2::buffer<uint64_t>& GET_TP_TCN1_N1_XSTOP_XSTOP_IN27(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.extractToRight<TP_TCN1_N1_XSTOP_XSTOP_IN27,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN27 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN27]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN27]
static inline bool GET_TP_TCN1_N1_XSTOP_XSTOP_IN27(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.getBit<TP_TCN1_N1_XSTOP_XSTOP_IN27>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN27 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN27]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN28]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN28(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN28,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN28]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN28]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN28(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN28,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN28]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN28]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN28(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.setBit<TP_TCN1_N1_XSTOP_XSTOP_IN28>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN28]

//>> CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN28]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TCN1_N1_XSTOP_XSTOP_IN28(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.clearBit<TP_TCN1_N1_XSTOP_XSTOP_IN28>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN28]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN28]
static inline fapi2::buffer<uint64_t>& GET_TP_TCN1_N1_XSTOP_XSTOP_IN28(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.extractToRight<TP_TCN1_N1_XSTOP_XSTOP_IN28,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN28]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN28]
static inline bool GET_TP_TCN1_N1_XSTOP_XSTOP_IN28(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.getBit<TP_TCN1_N1_XSTOP_XSTOP_IN28>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN28]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN29]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN29(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN29,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN29 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN29]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN29]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN29(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN29,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN29 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN29]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN29]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN29(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.setBit<TP_TCN1_N1_XSTOP_XSTOP_IN29>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN29 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN29]

//>> CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN29]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TCN1_N1_XSTOP_XSTOP_IN29(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.clearBit<TP_TCN1_N1_XSTOP_XSTOP_IN29>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN29 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN29]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN29]
static inline fapi2::buffer<uint64_t>& GET_TP_TCN1_N1_XSTOP_XSTOP_IN29(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.extractToRight<TP_TCN1_N1_XSTOP_XSTOP_IN29,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN29 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN29]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN29]
static inline bool GET_TP_TCN1_N1_XSTOP_XSTOP_IN29(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.getBit<TP_TCN1_N1_XSTOP_XSTOP_IN29>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN29 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN29]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN30]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN30(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN30,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN30]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN30]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN30(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN30,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN30]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN30]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN30(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.setBit<TP_TCN1_N1_XSTOP_XSTOP_IN30>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN30]

//>> CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN30]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TCN1_N1_XSTOP_XSTOP_IN30(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.clearBit<TP_TCN1_N1_XSTOP_XSTOP_IN30>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN30]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN30]
static inline fapi2::buffer<uint64_t>& GET_TP_TCN1_N1_XSTOP_XSTOP_IN30(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.extractToRight<TP_TCN1_N1_XSTOP_XSTOP_IN30,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN30]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN30]
static inline bool GET_TP_TCN1_N1_XSTOP_XSTOP_IN30(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.getBit<TP_TCN1_N1_XSTOP_XSTOP_IN30>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN30]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN31]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN31(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN31,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN31 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN31]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN31]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN31(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN31,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN31 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN31]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN31]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN31(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.setBit<TP_TCN1_N1_XSTOP_XSTOP_IN31>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN31 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN31]

//>> CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN31]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TCN1_N1_XSTOP_XSTOP_IN31(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.clearBit<TP_TCN1_N1_XSTOP_XSTOP_IN31>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN31 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN31]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN31]
static inline fapi2::buffer<uint64_t>& GET_TP_TCN1_N1_XSTOP_XSTOP_IN31(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.extractToRight<TP_TCN1_N1_XSTOP_XSTOP_IN31,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN31 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN31]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN31]
static inline bool GET_TP_TCN1_N1_XSTOP_XSTOP_IN31(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.getBit<TP_TCN1_N1_XSTOP_XSTOP_IN31>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN31 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN31]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN32]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN32(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN32,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN32 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN32]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN32]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN32(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN32,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN32 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN32]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN32]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN32(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.setBit<TP_TCN1_N1_XSTOP_XSTOP_IN32>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN32 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN32]

//>> CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN32]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TCN1_N1_XSTOP_XSTOP_IN32(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.clearBit<TP_TCN1_N1_XSTOP_XSTOP_IN32>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN32 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN32]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN32]
static inline fapi2::buffer<uint64_t>& GET_TP_TCN1_N1_XSTOP_XSTOP_IN32(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.extractToRight<TP_TCN1_N1_XSTOP_XSTOP_IN32,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN32 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN32]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN32]
static inline bool GET_TP_TCN1_N1_XSTOP_XSTOP_IN32(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.getBit<TP_TCN1_N1_XSTOP_XSTOP_IN32>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN32 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN32]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN33]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN33(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN33,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN33 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN33]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN33]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN33(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN33,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN33 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN33]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN33]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN33(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.setBit<TP_TCN1_N1_XSTOP_XSTOP_IN33>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN33 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN33]

//>> CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN33]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TCN1_N1_XSTOP_XSTOP_IN33(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.clearBit<TP_TCN1_N1_XSTOP_XSTOP_IN33>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN33 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN33]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN33]
static inline fapi2::buffer<uint64_t>& GET_TP_TCN1_N1_XSTOP_XSTOP_IN33(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.extractToRight<TP_TCN1_N1_XSTOP_XSTOP_IN33,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN33 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN33]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN33]
static inline bool GET_TP_TCN1_N1_XSTOP_XSTOP_IN33(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.getBit<TP_TCN1_N1_XSTOP_XSTOP_IN33>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN33 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN33]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN34]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN34(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN34,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN34 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN34]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN34]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN34(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN34,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN34 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN34]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN34]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN34(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.setBit<TP_TCN1_N1_XSTOP_XSTOP_IN34>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN34 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN34]

//>> CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN34]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TCN1_N1_XSTOP_XSTOP_IN34(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.clearBit<TP_TCN1_N1_XSTOP_XSTOP_IN34>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN34 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN34]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN34]
static inline fapi2::buffer<uint64_t>& GET_TP_TCN1_N1_XSTOP_XSTOP_IN34(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.extractToRight<TP_TCN1_N1_XSTOP_XSTOP_IN34,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN34 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN34]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN34]
static inline bool GET_TP_TCN1_N1_XSTOP_XSTOP_IN34(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.getBit<TP_TCN1_N1_XSTOP_XSTOP_IN34>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN34 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN34]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN35]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN35(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN35,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN35 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN35]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN35]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN35(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN35,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN35 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN35]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN35]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN35(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.setBit<TP_TCN1_N1_XSTOP_XSTOP_IN35>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN35 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN35]

//>> CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN35]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TCN1_N1_XSTOP_XSTOP_IN35(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.clearBit<TP_TCN1_N1_XSTOP_XSTOP_IN35>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN35 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN35]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN35]
static inline fapi2::buffer<uint64_t>& GET_TP_TCN1_N1_XSTOP_XSTOP_IN35(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.extractToRight<TP_TCN1_N1_XSTOP_XSTOP_IN35,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN35 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN35]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN35]
static inline bool GET_TP_TCN1_N1_XSTOP_XSTOP_IN35(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.getBit<TP_TCN1_N1_XSTOP_XSTOP_IN35>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN35 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN35]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN36]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN36(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN36,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN36 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN36]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN36]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN36(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN36,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN36 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN36]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN36]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN36(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.setBit<TP_TCN1_N1_XSTOP_XSTOP_IN36>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN36 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN36]

//>> CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN36]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TCN1_N1_XSTOP_XSTOP_IN36(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.clearBit<TP_TCN1_N1_XSTOP_XSTOP_IN36>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN36 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN36]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN36]
static inline fapi2::buffer<uint64_t>& GET_TP_TCN1_N1_XSTOP_XSTOP_IN36(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.extractToRight<TP_TCN1_N1_XSTOP_XSTOP_IN36,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN36 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN36]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN36]
static inline bool GET_TP_TCN1_N1_XSTOP_XSTOP_IN36(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.getBit<TP_TCN1_N1_XSTOP_XSTOP_IN36>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN36 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN36]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN37]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN37(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN37,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN37 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN37]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN37]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN37(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN37,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN37 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN37]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN37]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN37(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.setBit<TP_TCN1_N1_XSTOP_XSTOP_IN37>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN37 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN37]

//>> CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN37]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TCN1_N1_XSTOP_XSTOP_IN37(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.clearBit<TP_TCN1_N1_XSTOP_XSTOP_IN37>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN37 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN37]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN37]
static inline fapi2::buffer<uint64_t>& GET_TP_TCN1_N1_XSTOP_XSTOP_IN37(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.extractToRight<TP_TCN1_N1_XSTOP_XSTOP_IN37,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN37 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN37]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN37]
static inline bool GET_TP_TCN1_N1_XSTOP_XSTOP_IN37(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.getBit<TP_TCN1_N1_XSTOP_XSTOP_IN37>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN37 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN37]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN38]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN38(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN38,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN38 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN38]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN38]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN38(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN38,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN38 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN38]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN38]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN38(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.setBit<TP_TCN1_N1_XSTOP_XSTOP_IN38>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN38 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN38]

//>> CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN38]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TCN1_N1_XSTOP_XSTOP_IN38(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.clearBit<TP_TCN1_N1_XSTOP_XSTOP_IN38>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN38 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN38]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN38]
static inline fapi2::buffer<uint64_t>& GET_TP_TCN1_N1_XSTOP_XSTOP_IN38(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.extractToRight<TP_TCN1_N1_XSTOP_XSTOP_IN38,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN38 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN38]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN38]
static inline bool GET_TP_TCN1_N1_XSTOP_XSTOP_IN38(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.getBit<TP_TCN1_N1_XSTOP_XSTOP_IN38>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN38 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN38]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN39]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN39(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN39,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN39 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN39]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN39]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN39(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN39,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN39 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN39]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN39]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN39(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.setBit<TP_TCN1_N1_XSTOP_XSTOP_IN39>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN39 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN39]

//>> CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN39]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TCN1_N1_XSTOP_XSTOP_IN39(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.clearBit<TP_TCN1_N1_XSTOP_XSTOP_IN39>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN39 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN39]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN39]
static inline fapi2::buffer<uint64_t>& GET_TP_TCN1_N1_XSTOP_XSTOP_IN39(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.extractToRight<TP_TCN1_N1_XSTOP_XSTOP_IN39,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN39 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN39]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN39]
static inline bool GET_TP_TCN1_N1_XSTOP_XSTOP_IN39(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.getBit<TP_TCN1_N1_XSTOP_XSTOP_IN39>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN39 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN39]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN40]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN40(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN40,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN40 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN40]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN40]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN40(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN40,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN40 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN40]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN40]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN40(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.setBit<TP_TCN1_N1_XSTOP_XSTOP_IN40>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN40 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN40]

//>> CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN40]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TCN1_N1_XSTOP_XSTOP_IN40(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.clearBit<TP_TCN1_N1_XSTOP_XSTOP_IN40>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN40 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN40]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN40]
static inline fapi2::buffer<uint64_t>& GET_TP_TCN1_N1_XSTOP_XSTOP_IN40(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.extractToRight<TP_TCN1_N1_XSTOP_XSTOP_IN40,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN40 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN40]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN40]
static inline bool GET_TP_TCN1_N1_XSTOP_XSTOP_IN40(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.getBit<TP_TCN1_N1_XSTOP_XSTOP_IN40>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN40 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN40]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN41]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN41(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN41,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN41 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN41]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN41]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN41(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN41,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN41 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN41]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN41]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN41(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.setBit<TP_TCN1_N1_XSTOP_XSTOP_IN41>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN41 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN41]

//>> CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN41]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TCN1_N1_XSTOP_XSTOP_IN41(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.clearBit<TP_TCN1_N1_XSTOP_XSTOP_IN41>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN41 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN41]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN41]
static inline fapi2::buffer<uint64_t>& GET_TP_TCN1_N1_XSTOP_XSTOP_IN41(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.extractToRight<TP_TCN1_N1_XSTOP_XSTOP_IN41,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN41 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN41]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN41]
static inline bool GET_TP_TCN1_N1_XSTOP_XSTOP_IN41(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.getBit<TP_TCN1_N1_XSTOP_XSTOP_IN41>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN41 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN41]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN42]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN42(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN42,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN42 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN42]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN42]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN42(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN42,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN42 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN42]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN42]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN42(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.setBit<TP_TCN1_N1_XSTOP_XSTOP_IN42>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN42 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN42]

//>> CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN42]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TCN1_N1_XSTOP_XSTOP_IN42(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.clearBit<TP_TCN1_N1_XSTOP_XSTOP_IN42>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN42 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN42]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN42]
static inline fapi2::buffer<uint64_t>& GET_TP_TCN1_N1_XSTOP_XSTOP_IN42(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.extractToRight<TP_TCN1_N1_XSTOP_XSTOP_IN42,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN42 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN42]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN42]
static inline bool GET_TP_TCN1_N1_XSTOP_XSTOP_IN42(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.getBit<TP_TCN1_N1_XSTOP_XSTOP_IN42>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN42 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN42]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN43]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN43(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN43,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN43 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN43]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN43]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN43(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN43,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN43 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN43]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN43]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN43(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.setBit<TP_TCN1_N1_XSTOP_XSTOP_IN43>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN43 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN43]

//>> CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN43]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TCN1_N1_XSTOP_XSTOP_IN43(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.clearBit<TP_TCN1_N1_XSTOP_XSTOP_IN43>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN43 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN43]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN43]
static inline fapi2::buffer<uint64_t>& GET_TP_TCN1_N1_XSTOP_XSTOP_IN43(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.extractToRight<TP_TCN1_N1_XSTOP_XSTOP_IN43,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN43 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN43]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN43]
static inline bool GET_TP_TCN1_N1_XSTOP_XSTOP_IN43(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.getBit<TP_TCN1_N1_XSTOP_XSTOP_IN43>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN43 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN43]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN44]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN44(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN44,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN44 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN44]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN44]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN44(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN44,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN44 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN44]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN44]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN44(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.setBit<TP_TCN1_N1_XSTOP_XSTOP_IN44>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN44 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN44]

//>> CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN44]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TCN1_N1_XSTOP_XSTOP_IN44(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.clearBit<TP_TCN1_N1_XSTOP_XSTOP_IN44>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN44 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN44]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN44]
static inline fapi2::buffer<uint64_t>& GET_TP_TCN1_N1_XSTOP_XSTOP_IN44(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.extractToRight<TP_TCN1_N1_XSTOP_XSTOP_IN44,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN44 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN44]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN44]
static inline bool GET_TP_TCN1_N1_XSTOP_XSTOP_IN44(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.getBit<TP_TCN1_N1_XSTOP_XSTOP_IN44>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN44 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN44]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN45]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN45(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN45,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN45 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN45]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN45]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN45(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN45,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN45 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN45]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN45]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN45(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.setBit<TP_TCN1_N1_XSTOP_XSTOP_IN45>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN45 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN45]

//>> CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN45]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TCN1_N1_XSTOP_XSTOP_IN45(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.clearBit<TP_TCN1_N1_XSTOP_XSTOP_IN45>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN45 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN45]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN45]
static inline fapi2::buffer<uint64_t>& GET_TP_TCN1_N1_XSTOP_XSTOP_IN45(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.extractToRight<TP_TCN1_N1_XSTOP_XSTOP_IN45,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN45 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN45]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN45]
static inline bool GET_TP_TCN1_N1_XSTOP_XSTOP_IN45(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.getBit<TP_TCN1_N1_XSTOP_XSTOP_IN45>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN45 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN45]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN46]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN46(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN46,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN46 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN46]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN46]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN46(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN46,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN46 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN46]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN46]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN46(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.setBit<TP_TCN1_N1_XSTOP_XSTOP_IN46>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN46 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN46]

//>> CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN46]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TCN1_N1_XSTOP_XSTOP_IN46(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.clearBit<TP_TCN1_N1_XSTOP_XSTOP_IN46>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN46 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN46]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN46]
static inline fapi2::buffer<uint64_t>& GET_TP_TCN1_N1_XSTOP_XSTOP_IN46(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.extractToRight<TP_TCN1_N1_XSTOP_XSTOP_IN46,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN46 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN46]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN46]
static inline bool GET_TP_TCN1_N1_XSTOP_XSTOP_IN46(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.getBit<TP_TCN1_N1_XSTOP_XSTOP_IN46>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN46 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN46]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN47]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN47(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN47,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN47 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN47]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN47]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN47(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN47,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN47 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN47]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN47]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN47(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.setBit<TP_TCN1_N1_XSTOP_XSTOP_IN47>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN47 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN47]

//>> CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN47]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TCN1_N1_XSTOP_XSTOP_IN47(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.clearBit<TP_TCN1_N1_XSTOP_XSTOP_IN47>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN47 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN47]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN47]
static inline fapi2::buffer<uint64_t>& GET_TP_TCN1_N1_XSTOP_XSTOP_IN47(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.extractToRight<TP_TCN1_N1_XSTOP_XSTOP_IN47,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN47 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN47]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN47]
static inline bool GET_TP_TCN1_N1_XSTOP_XSTOP_IN47(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.getBit<TP_TCN1_N1_XSTOP_XSTOP_IN47>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN47 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN47]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN48]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN48(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN48,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN48 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN48]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN48]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN48(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN48,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN48 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN48]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN48]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN48(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.setBit<TP_TCN1_N1_XSTOP_XSTOP_IN48>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN48 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN48]

//>> CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN48]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TCN1_N1_XSTOP_XSTOP_IN48(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.clearBit<TP_TCN1_N1_XSTOP_XSTOP_IN48>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN48 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN48]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN48]
static inline fapi2::buffer<uint64_t>& GET_TP_TCN1_N1_XSTOP_XSTOP_IN48(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.extractToRight<TP_TCN1_N1_XSTOP_XSTOP_IN48,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN48 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN48]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN48]
static inline bool GET_TP_TCN1_N1_XSTOP_XSTOP_IN48(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.getBit<TP_TCN1_N1_XSTOP_XSTOP_IN48>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN48 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN48]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN49]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN49(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN49,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN49 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN49]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN49]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN49(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN49,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN49 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN49]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN49]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN49(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.setBit<TP_TCN1_N1_XSTOP_XSTOP_IN49>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN49 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN49]

//>> CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN49]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TCN1_N1_XSTOP_XSTOP_IN49(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.clearBit<TP_TCN1_N1_XSTOP_XSTOP_IN49>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN49 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN49]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN49]
static inline fapi2::buffer<uint64_t>& GET_TP_TCN1_N1_XSTOP_XSTOP_IN49(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.extractToRight<TP_TCN1_N1_XSTOP_XSTOP_IN49,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN49 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN49]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN49]
static inline bool GET_TP_TCN1_N1_XSTOP_XSTOP_IN49(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.getBit<TP_TCN1_N1_XSTOP_XSTOP_IN49>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN49 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN49]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN50]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN50(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN50,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN50 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN50]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN50]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN50(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN50,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN50 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN50]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN50]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN50(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.setBit<TP_TCN1_N1_XSTOP_XSTOP_IN50>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN50 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN50]

//>> CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN50]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TCN1_N1_XSTOP_XSTOP_IN50(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.clearBit<TP_TCN1_N1_XSTOP_XSTOP_IN50>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN50 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN50]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN50]
static inline fapi2::buffer<uint64_t>& GET_TP_TCN1_N1_XSTOP_XSTOP_IN50(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.extractToRight<TP_TCN1_N1_XSTOP_XSTOP_IN50,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN50 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN50]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN50]
static inline bool GET_TP_TCN1_N1_XSTOP_XSTOP_IN50(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.getBit<TP_TCN1_N1_XSTOP_XSTOP_IN50>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN50 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN50]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN51]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN51(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN51,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN51 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN51]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN51]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN51(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN51,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN51 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN51]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN51]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN51(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.setBit<TP_TCN1_N1_XSTOP_XSTOP_IN51>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN51 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN51]

//>> CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN51]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TCN1_N1_XSTOP_XSTOP_IN51(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.clearBit<TP_TCN1_N1_XSTOP_XSTOP_IN51>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN51 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN51]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN51]
static inline fapi2::buffer<uint64_t>& GET_TP_TCN1_N1_XSTOP_XSTOP_IN51(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.extractToRight<TP_TCN1_N1_XSTOP_XSTOP_IN51,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN51 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN51]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN51]
static inline bool GET_TP_TCN1_N1_XSTOP_XSTOP_IN51(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.getBit<TP_TCN1_N1_XSTOP_XSTOP_IN51>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN51 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN51]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN52]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN52(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN52,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN52 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN52]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN52]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN52(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN52,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN52 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN52]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN52]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN52(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.setBit<TP_TCN1_N1_XSTOP_XSTOP_IN52>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN52 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN52]

//>> CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN52]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TCN1_N1_XSTOP_XSTOP_IN52(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.clearBit<TP_TCN1_N1_XSTOP_XSTOP_IN52>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN52 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN52]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN52]
static inline fapi2::buffer<uint64_t>& GET_TP_TCN1_N1_XSTOP_XSTOP_IN52(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.extractToRight<TP_TCN1_N1_XSTOP_XSTOP_IN52,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN52 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN52]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN52]
static inline bool GET_TP_TCN1_N1_XSTOP_XSTOP_IN52(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.getBit<TP_TCN1_N1_XSTOP_XSTOP_IN52>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN52 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN52]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN53]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN53(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN53,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN53 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN53]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN53]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN53(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.insertFromRight<TP_TCN1_N1_XSTOP_XSTOP_IN53,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN53 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN53]

//>> SET_[TP_TCN1_N1_XSTOP_XSTOP_IN53]
static inline fapi2::buffer<uint64_t>& SET_TP_TCN1_N1_XSTOP_XSTOP_IN53(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.setBit<TP_TCN1_N1_XSTOP_XSTOP_IN53>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN53 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TCN1_N1_XSTOP_XSTOP_IN53]

//>> CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN53]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TCN1_N1_XSTOP_XSTOP_IN53(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return o_data.clearBit<TP_TCN1_N1_XSTOP_XSTOP_IN53>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN53 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TCN1_N1_XSTOP_XSTOP_IN53]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN53]
static inline fapi2::buffer<uint64_t>& GET_TP_TCN1_N1_XSTOP_XSTOP_IN53(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.extractToRight<TP_TCN1_N1_XSTOP_XSTOP_IN53,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN53 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN53]

//>> GET_[TP_TCN1_N1_XSTOP_XSTOP_IN53]
static inline bool GET_TP_TCN1_N1_XSTOP_XSTOP_IN53(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TCN1_N1_XSTOP));
#endif
    return i_data.getBit<TP_TCN1_N1_XSTOP_XSTOP_IN53>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TCN1_N1_XSTOP_XSTOP_IN53 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TCN1_N1_XSTOP_XSTOP_IN53]

//>> PREP_[TP_TPBR_AD_SND_STAT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPBR_AD_SND_STAT_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPBR_AD_SND_STAT_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPBR_AD_SND_STAT_REG]

//>> GET_[TP_TPBR_AD_SND_STAT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPBR_AD_SND_STAT_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPBR_AD_SND_STAT_REG;
#endif
    return fapi2::getScom(i_target, TP_TPBR_AD_SND_STAT_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPBR_AD_SND_STAT_REG]

//>> PUT_[TP_TPBR_AD_SND_STAT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPBR_AD_SND_STAT_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return fapi2::putScom(i_target, TP_TPBR_AD_SND_STAT_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPBR_AD_SND_STAT_REG]


//>> SET_[TP_TPBR_AD_SND_STAT_REG_ERR_CMD_OVERRUN]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_AD_SND_STAT_REG_ERR_CMD_OVERRUN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return o_data.insertFromRight<TP_TPBR_AD_SND_STAT_REG_ERR_CMD_OVERRUN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_ERR_CMD_OVERRUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_AD_SND_STAT_REG_ERR_CMD_OVERRUN]

//>> SET_[TP_TPBR_AD_SND_STAT_REG_ERR_CMD_OVERRUN]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_AD_SND_STAT_REG_ERR_CMD_OVERRUN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return o_data.insertFromRight<TP_TPBR_AD_SND_STAT_REG_ERR_CMD_OVERRUN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_ERR_CMD_OVERRUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_AD_SND_STAT_REG_ERR_CMD_OVERRUN]

//>> SET_[TP_TPBR_AD_SND_STAT_REG_ERR_CMD_OVERRUN]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_AD_SND_STAT_REG_ERR_CMD_OVERRUN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return o_data.setBit<TP_TPBR_AD_SND_STAT_REG_ERR_CMD_OVERRUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_ERR_CMD_OVERRUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_AD_SND_STAT_REG_ERR_CMD_OVERRUN]

//>> CLEAR_[TP_TPBR_AD_SND_STAT_REG_ERR_CMD_OVERRUN]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_AD_SND_STAT_REG_ERR_CMD_OVERRUN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return o_data.clearBit<TP_TPBR_AD_SND_STAT_REG_ERR_CMD_OVERRUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_ERR_CMD_OVERRUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_AD_SND_STAT_REG_ERR_CMD_OVERRUN]

//>> GET_[TP_TPBR_AD_SND_STAT_REG_ERR_CMD_OVERRUN]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_AD_SND_STAT_REG_ERR_CMD_OVERRUN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return i_data.extractToRight<TP_TPBR_AD_SND_STAT_REG_ERR_CMD_OVERRUN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_ERR_CMD_OVERRUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_AD_SND_STAT_REG_ERR_CMD_OVERRUN]

//>> GET_[TP_TPBR_AD_SND_STAT_REG_ERR_CMD_OVERRUN]
static inline bool GET_TP_TPBR_AD_SND_STAT_REG_ERR_CMD_OVERRUN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return i_data.getBit<TP_TPBR_AD_SND_STAT_REG_ERR_CMD_OVERRUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_ERR_CMD_OVERRUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_AD_SND_STAT_REG_ERR_CMD_OVERRUN]

//>> SET_[TP_TPBR_AD_SND_STAT_REG_TRC_CMD_OVERRUN]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_AD_SND_STAT_REG_TRC_CMD_OVERRUN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return o_data.insertFromRight<TP_TPBR_AD_SND_STAT_REG_TRC_CMD_OVERRUN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_TRC_CMD_OVERRUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_AD_SND_STAT_REG_TRC_CMD_OVERRUN]

//>> SET_[TP_TPBR_AD_SND_STAT_REG_TRC_CMD_OVERRUN]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_AD_SND_STAT_REG_TRC_CMD_OVERRUN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return o_data.insertFromRight<TP_TPBR_AD_SND_STAT_REG_TRC_CMD_OVERRUN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_TRC_CMD_OVERRUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_AD_SND_STAT_REG_TRC_CMD_OVERRUN]

//>> SET_[TP_TPBR_AD_SND_STAT_REG_TRC_CMD_OVERRUN]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_AD_SND_STAT_REG_TRC_CMD_OVERRUN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return o_data.setBit<TP_TPBR_AD_SND_STAT_REG_TRC_CMD_OVERRUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_TRC_CMD_OVERRUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_AD_SND_STAT_REG_TRC_CMD_OVERRUN]

//>> CLEAR_[TP_TPBR_AD_SND_STAT_REG_TRC_CMD_OVERRUN]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_AD_SND_STAT_REG_TRC_CMD_OVERRUN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return o_data.clearBit<TP_TPBR_AD_SND_STAT_REG_TRC_CMD_OVERRUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_TRC_CMD_OVERRUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_AD_SND_STAT_REG_TRC_CMD_OVERRUN]

//>> GET_[TP_TPBR_AD_SND_STAT_REG_TRC_CMD_OVERRUN]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_AD_SND_STAT_REG_TRC_CMD_OVERRUN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return i_data.extractToRight<TP_TPBR_AD_SND_STAT_REG_TRC_CMD_OVERRUN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_TRC_CMD_OVERRUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_AD_SND_STAT_REG_TRC_CMD_OVERRUN]

//>> GET_[TP_TPBR_AD_SND_STAT_REG_TRC_CMD_OVERRUN]
static inline bool GET_TP_TPBR_AD_SND_STAT_REG_TRC_CMD_OVERRUN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return i_data.getBit<TP_TPBR_AD_SND_STAT_REG_TRC_CMD_OVERRUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_TRC_CMD_OVERRUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_AD_SND_STAT_REG_TRC_CMD_OVERRUN]

//>> SET_[TP_TPBR_AD_SND_STAT_REG_XSC_CMD_OVERRUN]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_AD_SND_STAT_REG_XSC_CMD_OVERRUN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return o_data.insertFromRight<TP_TPBR_AD_SND_STAT_REG_XSC_CMD_OVERRUN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_XSC_CMD_OVERRUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_AD_SND_STAT_REG_XSC_CMD_OVERRUN]

//>> SET_[TP_TPBR_AD_SND_STAT_REG_XSC_CMD_OVERRUN]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_AD_SND_STAT_REG_XSC_CMD_OVERRUN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return o_data.insertFromRight<TP_TPBR_AD_SND_STAT_REG_XSC_CMD_OVERRUN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_XSC_CMD_OVERRUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_AD_SND_STAT_REG_XSC_CMD_OVERRUN]

//>> SET_[TP_TPBR_AD_SND_STAT_REG_XSC_CMD_OVERRUN]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_AD_SND_STAT_REG_XSC_CMD_OVERRUN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return o_data.setBit<TP_TPBR_AD_SND_STAT_REG_XSC_CMD_OVERRUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_XSC_CMD_OVERRUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_AD_SND_STAT_REG_XSC_CMD_OVERRUN]

//>> CLEAR_[TP_TPBR_AD_SND_STAT_REG_XSC_CMD_OVERRUN]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_AD_SND_STAT_REG_XSC_CMD_OVERRUN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return o_data.clearBit<TP_TPBR_AD_SND_STAT_REG_XSC_CMD_OVERRUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_XSC_CMD_OVERRUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_AD_SND_STAT_REG_XSC_CMD_OVERRUN]

//>> GET_[TP_TPBR_AD_SND_STAT_REG_XSC_CMD_OVERRUN]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_AD_SND_STAT_REG_XSC_CMD_OVERRUN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return i_data.extractToRight<TP_TPBR_AD_SND_STAT_REG_XSC_CMD_OVERRUN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_XSC_CMD_OVERRUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_AD_SND_STAT_REG_XSC_CMD_OVERRUN]

//>> GET_[TP_TPBR_AD_SND_STAT_REG_XSC_CMD_OVERRUN]
static inline bool GET_TP_TPBR_AD_SND_STAT_REG_XSC_CMD_OVERRUN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return i_data.getBit<TP_TPBR_AD_SND_STAT_REG_XSC_CMD_OVERRUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_XSC_CMD_OVERRUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_AD_SND_STAT_REG_XSC_CMD_OVERRUN]

//>> SET_[TP_TPBR_AD_SND_STAT_REG_HTM_CMD_OVERRUN]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_AD_SND_STAT_REG_HTM_CMD_OVERRUN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return o_data.insertFromRight<TP_TPBR_AD_SND_STAT_REG_HTM_CMD_OVERRUN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_HTM_CMD_OVERRUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_AD_SND_STAT_REG_HTM_CMD_OVERRUN]

//>> SET_[TP_TPBR_AD_SND_STAT_REG_HTM_CMD_OVERRUN]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_AD_SND_STAT_REG_HTM_CMD_OVERRUN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return o_data.insertFromRight<TP_TPBR_AD_SND_STAT_REG_HTM_CMD_OVERRUN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_HTM_CMD_OVERRUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_AD_SND_STAT_REG_HTM_CMD_OVERRUN]

//>> SET_[TP_TPBR_AD_SND_STAT_REG_HTM_CMD_OVERRUN]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_AD_SND_STAT_REG_HTM_CMD_OVERRUN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return o_data.setBit<TP_TPBR_AD_SND_STAT_REG_HTM_CMD_OVERRUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_HTM_CMD_OVERRUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_AD_SND_STAT_REG_HTM_CMD_OVERRUN]

//>> CLEAR_[TP_TPBR_AD_SND_STAT_REG_HTM_CMD_OVERRUN]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_AD_SND_STAT_REG_HTM_CMD_OVERRUN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return o_data.clearBit<TP_TPBR_AD_SND_STAT_REG_HTM_CMD_OVERRUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_HTM_CMD_OVERRUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_AD_SND_STAT_REG_HTM_CMD_OVERRUN]

//>> GET_[TP_TPBR_AD_SND_STAT_REG_HTM_CMD_OVERRUN]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_AD_SND_STAT_REG_HTM_CMD_OVERRUN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return i_data.extractToRight<TP_TPBR_AD_SND_STAT_REG_HTM_CMD_OVERRUN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_HTM_CMD_OVERRUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_AD_SND_STAT_REG_HTM_CMD_OVERRUN]

//>> GET_[TP_TPBR_AD_SND_STAT_REG_HTM_CMD_OVERRUN]
static inline bool GET_TP_TPBR_AD_SND_STAT_REG_HTM_CMD_OVERRUN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return i_data.getBit<TP_TPBR_AD_SND_STAT_REG_HTM_CMD_OVERRUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_HTM_CMD_OVERRUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_AD_SND_STAT_REG_HTM_CMD_OVERRUN]

//>> SET_[TP_TPBR_AD_SND_STAT_REG_TOD_CMD_OVERRUN]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_AD_SND_STAT_REG_TOD_CMD_OVERRUN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return o_data.insertFromRight<TP_TPBR_AD_SND_STAT_REG_TOD_CMD_OVERRUN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_TOD_CMD_OVERRUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_AD_SND_STAT_REG_TOD_CMD_OVERRUN]

//>> SET_[TP_TPBR_AD_SND_STAT_REG_TOD_CMD_OVERRUN]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_AD_SND_STAT_REG_TOD_CMD_OVERRUN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return o_data.insertFromRight<TP_TPBR_AD_SND_STAT_REG_TOD_CMD_OVERRUN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_TOD_CMD_OVERRUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_AD_SND_STAT_REG_TOD_CMD_OVERRUN]

//>> SET_[TP_TPBR_AD_SND_STAT_REG_TOD_CMD_OVERRUN]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_AD_SND_STAT_REG_TOD_CMD_OVERRUN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return o_data.setBit<TP_TPBR_AD_SND_STAT_REG_TOD_CMD_OVERRUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_TOD_CMD_OVERRUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_AD_SND_STAT_REG_TOD_CMD_OVERRUN]

//>> CLEAR_[TP_TPBR_AD_SND_STAT_REG_TOD_CMD_OVERRUN]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_AD_SND_STAT_REG_TOD_CMD_OVERRUN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return o_data.clearBit<TP_TPBR_AD_SND_STAT_REG_TOD_CMD_OVERRUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_TOD_CMD_OVERRUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_AD_SND_STAT_REG_TOD_CMD_OVERRUN]

//>> GET_[TP_TPBR_AD_SND_STAT_REG_TOD_CMD_OVERRUN]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_AD_SND_STAT_REG_TOD_CMD_OVERRUN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return i_data.extractToRight<TP_TPBR_AD_SND_STAT_REG_TOD_CMD_OVERRUN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_TOD_CMD_OVERRUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_AD_SND_STAT_REG_TOD_CMD_OVERRUN]

//>> GET_[TP_TPBR_AD_SND_STAT_REG_TOD_CMD_OVERRUN]
static inline bool GET_TP_TPBR_AD_SND_STAT_REG_TOD_CMD_OVERRUN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return i_data.getBit<TP_TPBR_AD_SND_STAT_REG_TOD_CMD_OVERRUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_TOD_CMD_OVERRUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_AD_SND_STAT_REG_TOD_CMD_OVERRUN]

//>> SET_[TP_TPBR_AD_SND_STAT_REG_CMD_COUNT_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_AD_SND_STAT_REG_CMD_COUNT_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return o_data.insertFromRight<TP_TPBR_AD_SND_STAT_REG_CMD_COUNT_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_CMD_COUNT_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_AD_SND_STAT_REG_CMD_COUNT_ERR]

//>> SET_[TP_TPBR_AD_SND_STAT_REG_CMD_COUNT_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_AD_SND_STAT_REG_CMD_COUNT_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return o_data.insertFromRight<TP_TPBR_AD_SND_STAT_REG_CMD_COUNT_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_CMD_COUNT_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_AD_SND_STAT_REG_CMD_COUNT_ERR]

//>> SET_[TP_TPBR_AD_SND_STAT_REG_CMD_COUNT_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_AD_SND_STAT_REG_CMD_COUNT_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return o_data.setBit<TP_TPBR_AD_SND_STAT_REG_CMD_COUNT_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_CMD_COUNT_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_AD_SND_STAT_REG_CMD_COUNT_ERR]

//>> CLEAR_[TP_TPBR_AD_SND_STAT_REG_CMD_COUNT_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_AD_SND_STAT_REG_CMD_COUNT_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return o_data.clearBit<TP_TPBR_AD_SND_STAT_REG_CMD_COUNT_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_CMD_COUNT_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_AD_SND_STAT_REG_CMD_COUNT_ERR]

//>> GET_[TP_TPBR_AD_SND_STAT_REG_CMD_COUNT_ERR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_AD_SND_STAT_REG_CMD_COUNT_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return i_data.extractToRight<TP_TPBR_AD_SND_STAT_REG_CMD_COUNT_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_CMD_COUNT_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_AD_SND_STAT_REG_CMD_COUNT_ERR]

//>> GET_[TP_TPBR_AD_SND_STAT_REG_CMD_COUNT_ERR]
static inline bool GET_TP_TPBR_AD_SND_STAT_REG_CMD_COUNT_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return i_data.getBit<TP_TPBR_AD_SND_STAT_REG_CMD_COUNT_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_CMD_COUNT_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_AD_SND_STAT_REG_CMD_COUNT_ERR]

//>> SET_[TP_TPBR_AD_SND_STAT_REG_SND_PB_OP_HANG_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_AD_SND_STAT_REG_SND_PB_OP_HANG_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return o_data.insertFromRight<TP_TPBR_AD_SND_STAT_REG_SND_PB_OP_HANG_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_SND_PB_OP_HANG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_AD_SND_STAT_REG_SND_PB_OP_HANG_ERR]

//>> SET_[TP_TPBR_AD_SND_STAT_REG_SND_PB_OP_HANG_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_AD_SND_STAT_REG_SND_PB_OP_HANG_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return o_data.insertFromRight<TP_TPBR_AD_SND_STAT_REG_SND_PB_OP_HANG_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_SND_PB_OP_HANG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_AD_SND_STAT_REG_SND_PB_OP_HANG_ERR]

//>> SET_[TP_TPBR_AD_SND_STAT_REG_SND_PB_OP_HANG_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_AD_SND_STAT_REG_SND_PB_OP_HANG_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return o_data.setBit<TP_TPBR_AD_SND_STAT_REG_SND_PB_OP_HANG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_SND_PB_OP_HANG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_AD_SND_STAT_REG_SND_PB_OP_HANG_ERR]

//>> CLEAR_[TP_TPBR_AD_SND_STAT_REG_SND_PB_OP_HANG_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_AD_SND_STAT_REG_SND_PB_OP_HANG_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return o_data.clearBit<TP_TPBR_AD_SND_STAT_REG_SND_PB_OP_HANG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_SND_PB_OP_HANG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_AD_SND_STAT_REG_SND_PB_OP_HANG_ERR]

//>> GET_[TP_TPBR_AD_SND_STAT_REG_SND_PB_OP_HANG_ERR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_AD_SND_STAT_REG_SND_PB_OP_HANG_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return i_data.extractToRight<TP_TPBR_AD_SND_STAT_REG_SND_PB_OP_HANG_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_SND_PB_OP_HANG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_AD_SND_STAT_REG_SND_PB_OP_HANG_ERR]

//>> GET_[TP_TPBR_AD_SND_STAT_REG_SND_PB_OP_HANG_ERR]
static inline bool GET_TP_TPBR_AD_SND_STAT_REG_SND_PB_OP_HANG_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return i_data.getBit<TP_TPBR_AD_SND_STAT_REG_SND_PB_OP_HANG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_SND_PB_OP_HANG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_AD_SND_STAT_REG_SND_PB_OP_HANG_ERR]

//>> SET_[TP_TPBR_AD_SND_STAT_REG_SND_INVALID_CRESP_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_AD_SND_STAT_REG_SND_INVALID_CRESP_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return o_data.insertFromRight<TP_TPBR_AD_SND_STAT_REG_SND_INVALID_CRESP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_SND_INVALID_CRESP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_AD_SND_STAT_REG_SND_INVALID_CRESP_ERR]

//>> SET_[TP_TPBR_AD_SND_STAT_REG_SND_INVALID_CRESP_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_AD_SND_STAT_REG_SND_INVALID_CRESP_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return o_data.insertFromRight<TP_TPBR_AD_SND_STAT_REG_SND_INVALID_CRESP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_SND_INVALID_CRESP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_AD_SND_STAT_REG_SND_INVALID_CRESP_ERR]

//>> SET_[TP_TPBR_AD_SND_STAT_REG_SND_INVALID_CRESP_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_AD_SND_STAT_REG_SND_INVALID_CRESP_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return o_data.setBit<TP_TPBR_AD_SND_STAT_REG_SND_INVALID_CRESP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_SND_INVALID_CRESP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_AD_SND_STAT_REG_SND_INVALID_CRESP_ERR]

//>> CLEAR_[TP_TPBR_AD_SND_STAT_REG_SND_INVALID_CRESP_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_AD_SND_STAT_REG_SND_INVALID_CRESP_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return o_data.clearBit<TP_TPBR_AD_SND_STAT_REG_SND_INVALID_CRESP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_SND_INVALID_CRESP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_AD_SND_STAT_REG_SND_INVALID_CRESP_ERR]

//>> GET_[TP_TPBR_AD_SND_STAT_REG_SND_INVALID_CRESP_ERR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_AD_SND_STAT_REG_SND_INVALID_CRESP_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return i_data.extractToRight<TP_TPBR_AD_SND_STAT_REG_SND_INVALID_CRESP_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_SND_INVALID_CRESP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_AD_SND_STAT_REG_SND_INVALID_CRESP_ERR]

//>> GET_[TP_TPBR_AD_SND_STAT_REG_SND_INVALID_CRESP_ERR]
static inline bool GET_TP_TPBR_AD_SND_STAT_REG_SND_INVALID_CRESP_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return i_data.getBit<TP_TPBR_AD_SND_STAT_REG_SND_INVALID_CRESP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_SND_INVALID_CRESP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_AD_SND_STAT_REG_SND_INVALID_CRESP_ERR]

//>> SET_[TP_TPBR_AD_SND_STAT_REG_RCV_TTAG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_AD_SND_STAT_REG_RCV_TTAG_PARITY_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return o_data.insertFromRight<TP_TPBR_AD_SND_STAT_REG_RCV_TTAG_PARITY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_RCV_TTAG_PARITY_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_AD_SND_STAT_REG_RCV_TTAG_PARITY_ERR]

//>> SET_[TP_TPBR_AD_SND_STAT_REG_RCV_TTAG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_AD_SND_STAT_REG_RCV_TTAG_PARITY_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return o_data.insertFromRight<TP_TPBR_AD_SND_STAT_REG_RCV_TTAG_PARITY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_RCV_TTAG_PARITY_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_AD_SND_STAT_REG_RCV_TTAG_PARITY_ERR]

//>> SET_[TP_TPBR_AD_SND_STAT_REG_RCV_TTAG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_AD_SND_STAT_REG_RCV_TTAG_PARITY_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return o_data.setBit<TP_TPBR_AD_SND_STAT_REG_RCV_TTAG_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_RCV_TTAG_PARITY_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_AD_SND_STAT_REG_RCV_TTAG_PARITY_ERR]

//>> CLEAR_[TP_TPBR_AD_SND_STAT_REG_RCV_TTAG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_AD_SND_STAT_REG_RCV_TTAG_PARITY_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return o_data.clearBit<TP_TPBR_AD_SND_STAT_REG_RCV_TTAG_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_RCV_TTAG_PARITY_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_AD_SND_STAT_REG_RCV_TTAG_PARITY_ERR]

//>> GET_[TP_TPBR_AD_SND_STAT_REG_RCV_TTAG_PARITY_ERR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_AD_SND_STAT_REG_RCV_TTAG_PARITY_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return i_data.extractToRight<TP_TPBR_AD_SND_STAT_REG_RCV_TTAG_PARITY_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_RCV_TTAG_PARITY_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_AD_SND_STAT_REG_RCV_TTAG_PARITY_ERR]

//>> GET_[TP_TPBR_AD_SND_STAT_REG_RCV_TTAG_PARITY_ERR]
static inline bool GET_TP_TPBR_AD_SND_STAT_REG_RCV_TTAG_PARITY_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return i_data.getBit<TP_TPBR_AD_SND_STAT_REG_RCV_TTAG_PARITY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_RCV_TTAG_PARITY_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_AD_SND_STAT_REG_RCV_TTAG_PARITY_ERR]

//>> SET_[TP_TPBR_AD_SND_STAT_REG_RCV_PB_OP_HANG_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_AD_SND_STAT_REG_RCV_PB_OP_HANG_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return o_data.insertFromRight<TP_TPBR_AD_SND_STAT_REG_RCV_PB_OP_HANG_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_RCV_PB_OP_HANG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_AD_SND_STAT_REG_RCV_PB_OP_HANG_ERR]

//>> SET_[TP_TPBR_AD_SND_STAT_REG_RCV_PB_OP_HANG_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_AD_SND_STAT_REG_RCV_PB_OP_HANG_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return o_data.insertFromRight<TP_TPBR_AD_SND_STAT_REG_RCV_PB_OP_HANG_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_RCV_PB_OP_HANG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_AD_SND_STAT_REG_RCV_PB_OP_HANG_ERR]

//>> SET_[TP_TPBR_AD_SND_STAT_REG_RCV_PB_OP_HANG_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_AD_SND_STAT_REG_RCV_PB_OP_HANG_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return o_data.setBit<TP_TPBR_AD_SND_STAT_REG_RCV_PB_OP_HANG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_RCV_PB_OP_HANG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_AD_SND_STAT_REG_RCV_PB_OP_HANG_ERR]

//>> CLEAR_[TP_TPBR_AD_SND_STAT_REG_RCV_PB_OP_HANG_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_AD_SND_STAT_REG_RCV_PB_OP_HANG_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return o_data.clearBit<TP_TPBR_AD_SND_STAT_REG_RCV_PB_OP_HANG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_RCV_PB_OP_HANG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_AD_SND_STAT_REG_RCV_PB_OP_HANG_ERR]

//>> GET_[TP_TPBR_AD_SND_STAT_REG_RCV_PB_OP_HANG_ERR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_AD_SND_STAT_REG_RCV_PB_OP_HANG_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return i_data.extractToRight<TP_TPBR_AD_SND_STAT_REG_RCV_PB_OP_HANG_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_RCV_PB_OP_HANG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_AD_SND_STAT_REG_RCV_PB_OP_HANG_ERR]

//>> GET_[TP_TPBR_AD_SND_STAT_REG_RCV_PB_OP_HANG_ERR]
static inline bool GET_TP_TPBR_AD_SND_STAT_REG_RCV_PB_OP_HANG_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return i_data.getBit<TP_TPBR_AD_SND_STAT_REG_RCV_PB_OP_HANG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_RCV_PB_OP_HANG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_AD_SND_STAT_REG_RCV_PB_OP_HANG_ERR]

//>> SET_[TP_TPBR_AD_SND_STAT_REG_TOD_HANG_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_AD_SND_STAT_REG_TOD_HANG_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return o_data.insertFromRight<TP_TPBR_AD_SND_STAT_REG_TOD_HANG_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_TOD_HANG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_AD_SND_STAT_REG_TOD_HANG_ERR]

//>> SET_[TP_TPBR_AD_SND_STAT_REG_TOD_HANG_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_AD_SND_STAT_REG_TOD_HANG_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return o_data.insertFromRight<TP_TPBR_AD_SND_STAT_REG_TOD_HANG_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_TOD_HANG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_AD_SND_STAT_REG_TOD_HANG_ERR]

//>> SET_[TP_TPBR_AD_SND_STAT_REG_TOD_HANG_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_AD_SND_STAT_REG_TOD_HANG_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return o_data.setBit<TP_TPBR_AD_SND_STAT_REG_TOD_HANG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_TOD_HANG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_AD_SND_STAT_REG_TOD_HANG_ERR]

//>> CLEAR_[TP_TPBR_AD_SND_STAT_REG_TOD_HANG_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_AD_SND_STAT_REG_TOD_HANG_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return o_data.clearBit<TP_TPBR_AD_SND_STAT_REG_TOD_HANG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_TOD_HANG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_AD_SND_STAT_REG_TOD_HANG_ERR]

//>> GET_[TP_TPBR_AD_SND_STAT_REG_TOD_HANG_ERR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_AD_SND_STAT_REG_TOD_HANG_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return i_data.extractToRight<TP_TPBR_AD_SND_STAT_REG_TOD_HANG_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_TOD_HANG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_AD_SND_STAT_REG_TOD_HANG_ERR]

//>> GET_[TP_TPBR_AD_SND_STAT_REG_TOD_HANG_ERR]
static inline bool GET_TP_TPBR_AD_SND_STAT_REG_TOD_HANG_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return i_data.getBit<TP_TPBR_AD_SND_STAT_REG_TOD_HANG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_TOD_HANG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_AD_SND_STAT_REG_TOD_HANG_ERR]

//>> SET_[TP_TPBR_AD_SND_STAT_REG_RCV_TOD_STATE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_AD_SND_STAT_REG_RCV_TOD_STATE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return o_data.insertFromRight<TP_TPBR_AD_SND_STAT_REG_RCV_TOD_STATE,
           TP_TPBR_AD_SND_STAT_REG_RCV_TOD_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_RCV_TOD_STATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_AD_SND_STAT_REG_RCV_TOD_STATE]

//>> SET_[TP_TPBR_AD_SND_STAT_REG_RCV_TOD_STATE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_AD_SND_STAT_REG_RCV_TOD_STATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return o_data.insertFromRight<TP_TPBR_AD_SND_STAT_REG_RCV_TOD_STATE,
           TP_TPBR_AD_SND_STAT_REG_RCV_TOD_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_RCV_TOD_STATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_AD_SND_STAT_REG_RCV_TOD_STATE]

//>> GET_[TP_TPBR_AD_SND_STAT_REG_RCV_TOD_STATE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_AD_SND_STAT_REG_RCV_TOD_STATE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_AD_SND_STAT_REG));
#endif
    return i_data.extractToRight<TP_TPBR_AD_SND_STAT_REG_RCV_TOD_STATE,
           TP_TPBR_AD_SND_STAT_REG_RCV_TOD_STATE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPBR_AD_SND_STAT_REG_RCV_TOD_STATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_AD_SND_STAT_REG_RCV_TOD_STATE]

//>> PREP_[TP_TPBR_PSIHB_PSI_TCE_ADDR_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPBR_PSIHB_PSI_TCE_ADDR_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPBR_PSIHB_PSI_TCE_ADDR_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPBR_PSIHB_PSI_TCE_ADDR_REG]

//>> GET_[TP_TPBR_PSIHB_PSI_TCE_ADDR_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPBR_PSIHB_PSI_TCE_ADDR_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPBR_PSIHB_PSI_TCE_ADDR_REG;
#endif
    return fapi2::getScom(i_target, TP_TPBR_PSIHB_PSI_TCE_ADDR_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPBR_PSIHB_PSI_TCE_ADDR_REG]

//>> PUT_[TP_TPBR_PSIHB_PSI_TCE_ADDR_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPBR_PSIHB_PSI_TCE_ADDR_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_PSI_TCE_ADDR_REG));
#endif
    return fapi2::putScom(i_target, TP_TPBR_PSIHB_PSI_TCE_ADDR_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPBR_PSIHB_PSI_TCE_ADDR_REG]


//>> SET_[TP_TPBR_PSIHB_PSI_TCE_ADDR_REG_ADDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSIHB_PSI_TCE_ADDR_REG_ADDR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_PSI_TCE_ADDR_REG));
#endif
    return o_data.insertFromRight<TP_TPBR_PSIHB_PSI_TCE_ADDR_REG_ADDR,
           TP_TPBR_PSIHB_PSI_TCE_ADDR_REG_ADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPBR_PSIHB_PSI_TCE_ADDR_REG_ADDR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSIHB_PSI_TCE_ADDR_REG_ADDR]

//>> SET_[TP_TPBR_PSIHB_PSI_TCE_ADDR_REG_ADDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSIHB_PSI_TCE_ADDR_REG_ADDR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_PSI_TCE_ADDR_REG));
#endif
    return o_data.insertFromRight<TP_TPBR_PSIHB_PSI_TCE_ADDR_REG_ADDR,
           TP_TPBR_PSIHB_PSI_TCE_ADDR_REG_ADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPBR_PSIHB_PSI_TCE_ADDR_REG_ADDR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSIHB_PSI_TCE_ADDR_REG_ADDR]

//>> GET_[TP_TPBR_PSIHB_PSI_TCE_ADDR_REG_ADDR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PSIHB_PSI_TCE_ADDR_REG_ADDR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_PSI_TCE_ADDR_REG));
#endif
    return i_data.extractToRight<TP_TPBR_PSIHB_PSI_TCE_ADDR_REG_ADDR,
           TP_TPBR_PSIHB_PSI_TCE_ADDR_REG_ADDR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPBR_PSIHB_PSI_TCE_ADDR_REG_ADDR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PSIHB_PSI_TCE_ADDR_REG_ADDR]

//>> SET_[TP_TPBR_PSIHB_PSI_TCE_ADDR_REG_ENTRIES]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSIHB_PSI_TCE_ADDR_REG_ENTRIES(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_PSI_TCE_ADDR_REG));
#endif
    return o_data.insertFromRight<TP_TPBR_PSIHB_PSI_TCE_ADDR_REG_ENTRIES,
           TP_TPBR_PSIHB_PSI_TCE_ADDR_REG_ENTRIES_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPBR_PSIHB_PSI_TCE_ADDR_REG_ENTRIES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSIHB_PSI_TCE_ADDR_REG_ENTRIES]

//>> SET_[TP_TPBR_PSIHB_PSI_TCE_ADDR_REG_ENTRIES]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PSIHB_PSI_TCE_ADDR_REG_ENTRIES(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_PSI_TCE_ADDR_REG));
#endif
    return o_data.insertFromRight<TP_TPBR_PSIHB_PSI_TCE_ADDR_REG_ENTRIES,
           TP_TPBR_PSIHB_PSI_TCE_ADDR_REG_ENTRIES_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPBR_PSIHB_PSI_TCE_ADDR_REG_ENTRIES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PSIHB_PSI_TCE_ADDR_REG_ENTRIES]

//>> GET_[TP_TPBR_PSIHB_PSI_TCE_ADDR_REG_ENTRIES]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PSIHB_PSI_TCE_ADDR_REG_ENTRIES(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PSIHB_PSI_TCE_ADDR_REG));
#endif
    return i_data.extractToRight<TP_TPBR_PSIHB_PSI_TCE_ADDR_REG_ENTRIES,
           TP_TPBR_PSIHB_PSI_TCE_ADDR_REG_ENTRIES_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPBR_PSIHB_PSI_TCE_ADDR_REG_ENTRIES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PSIHB_PSI_TCE_ADDR_REG_ENTRIES]

//>> PREP_[TP_TPCHIP_NET_PCBSLN1_EDRAM_STATUS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_NET_PCBSLN1_EDRAM_STATUS(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_NET_PCBSLN1_EDRAM_STATUS;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_NET_PCBSLN1_EDRAM_STATUS]

//>> GET_[TP_TPCHIP_NET_PCBSLN1_EDRAM_STATUS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_NET_PCBSLN1_EDRAM_STATUS(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_NET_PCBSLN1_EDRAM_STATUS;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_NET_PCBSLN1_EDRAM_STATUS, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLN1_EDRAM_STATUS]

//>> PUT_[TP_TPCHIP_NET_PCBSLN1_EDRAM_STATUS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_NET_PCBSLN1_EDRAM_STATUS(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_EDRAM_STATUS));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_NET_PCBSLN1_EDRAM_STATUS, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_NET_PCBSLN1_EDRAM_STATUS]


//>> SET_[TP_TPCHIP_NET_PCBSLN1_EDRAM_STATUS_EDRAM_STAT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_EDRAM_STATUS_EDRAM_STAT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_EDRAM_STATUS));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLN1_EDRAM_STATUS_EDRAM_STAT,
           TP_TPCHIP_NET_PCBSLN1_EDRAM_STATUS_EDRAM_STAT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_EDRAM_STATUS_EDRAM_STAT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_EDRAM_STATUS_EDRAM_STAT]

//>> SET_[TP_TPCHIP_NET_PCBSLN1_EDRAM_STATUS_EDRAM_STAT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLN1_EDRAM_STATUS_EDRAM_STAT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_EDRAM_STATUS));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLN1_EDRAM_STATUS_EDRAM_STAT,
           TP_TPCHIP_NET_PCBSLN1_EDRAM_STATUS_EDRAM_STAT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_EDRAM_STATUS_EDRAM_STAT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLN1_EDRAM_STATUS_EDRAM_STAT]

//>> GET_[TP_TPCHIP_NET_PCBSLN1_EDRAM_STATUS_EDRAM_STAT]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLN1_EDRAM_STATUS_EDRAM_STAT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLN1_EDRAM_STATUS));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLN1_EDRAM_STATUS_EDRAM_STAT,
           TP_TPCHIP_NET_PCBSLN1_EDRAM_STATUS_EDRAM_STAT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLN1_EDRAM_STATUS_EDRAM_STAT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLN1_EDRAM_STATUS_EDRAM_STAT]

//>> PREP_[TP_TPCHIP_NET_PCBSLPERV_EDRAM_STATUS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_NET_PCBSLPERV_EDRAM_STATUS(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_NET_PCBSLPERV_EDRAM_STATUS;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_NET_PCBSLPERV_EDRAM_STATUS]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_EDRAM_STATUS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_NET_PCBSLPERV_EDRAM_STATUS(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_NET_PCBSLPERV_EDRAM_STATUS;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_NET_PCBSLPERV_EDRAM_STATUS, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_EDRAM_STATUS]

//>> PUT_[TP_TPCHIP_NET_PCBSLPERV_EDRAM_STATUS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_NET_PCBSLPERV_EDRAM_STATUS(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_EDRAM_STATUS));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_NET_PCBSLPERV_EDRAM_STATUS, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_NET_PCBSLPERV_EDRAM_STATUS]


//>> SET_[TP_TPCHIP_NET_PCBSLPERV_EDRAM_STATUS_EDRAM_STAT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_EDRAM_STATUS_EDRAM_STAT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_EDRAM_STATUS));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_EDRAM_STATUS_EDRAM_STAT,
           TP_TPCHIP_NET_PCBSLPERV_EDRAM_STATUS_EDRAM_STAT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_EDRAM_STATUS_EDRAM_STAT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_EDRAM_STATUS_EDRAM_STAT]

//>> SET_[TP_TPCHIP_NET_PCBSLPERV_EDRAM_STATUS_EDRAM_STAT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_NET_PCBSLPERV_EDRAM_STATUS_EDRAM_STAT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_EDRAM_STATUS));
#endif
    return o_data.insertFromRight<TP_TPCHIP_NET_PCBSLPERV_EDRAM_STATUS_EDRAM_STAT,
           TP_TPCHIP_NET_PCBSLPERV_EDRAM_STATUS_EDRAM_STAT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_EDRAM_STATUS_EDRAM_STAT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_NET_PCBSLPERV_EDRAM_STATUS_EDRAM_STAT]

//>> GET_[TP_TPCHIP_NET_PCBSLPERV_EDRAM_STATUS_EDRAM_STAT]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_NET_PCBSLPERV_EDRAM_STATUS_EDRAM_STAT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_NET_PCBSLPERV_EDRAM_STATUS));
#endif
    return i_data.extractToRight<TP_TPCHIP_NET_PCBSLPERV_EDRAM_STATUS_EDRAM_STAT,
           TP_TPCHIP_NET_PCBSLPERV_EDRAM_STATUS_EDRAM_STAT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_NET_PCBSLPERV_EDRAM_STATUS_EDRAM_STAT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_NET_PCBSLPERV_EDRAM_STATUS_EDRAM_STAT]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF_SRR0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF_SRR0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF_SRR0,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF_SRR0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF_SRR0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF_SRR0]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF_SRR0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF_SRR0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF_SRR0,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF_SRR0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF_SRR0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF_SRR0]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF_SRR0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF_SRR0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF_SRR0,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF_SRR0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF_SRR0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF_SRR0]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF_LR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF_LR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF_LR,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF_LR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF_LR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF_LR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF_LR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF_LR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF_LR,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF_LR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF_LR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF_LR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF_LR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF_LR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF_LR,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF_LR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF_LR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIDBGINF_LR]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR3]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR3(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR3;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR3]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR3(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR3));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR3]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR3_OCB_OCI_GPEXIVDR2_GPR3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR3_OCB_OCI_GPEXIVDR2_GPR3(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR3_OCB_OCI_GPEXIVDR2_GPR3,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR3_OCB_OCI_GPEXIVDR2_GPR3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR3_OCB_OCI_GPEXIVDR2_GPR3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR3_OCB_OCI_GPEXIVDR2_GPR3]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR3_OCB_OCI_GPEXIVDR2_GPR3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR3_OCB_OCI_GPEXIVDR2_GPR3(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR3_OCB_OCI_GPEXIVDR2_GPR3,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR3_OCB_OCI_GPEXIVDR2_GPR3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR3_OCB_OCI_GPEXIVDR2_GPR3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR3_OCB_OCI_GPEXIVDR2_GPR3]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR3_OCB_OCI_GPEXIVDR2_GPR3]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR3_OCB_OCI_GPEXIVDR2_GPR3(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR3));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR3_OCB_OCI_GPEXIVDR2_GPR3,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR3_OCB_OCI_GPEXIVDR2_GPR3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR3_OCB_OCI_GPEXIVDR2_GPR3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR3_OCB_OCI_GPEXIVDR2_GPR3]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2_2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2_2,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2_2]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2_2,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2_2]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2_2]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2_2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2_2,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2_2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2_2]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2_3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2_3,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2_3]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2_3,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2_3]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2_3]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2_3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2_3,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2_3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR2_3]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1_BAR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1_BAR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1_BAR,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1_BAR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1_BAR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1_BAR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1_BAR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1_BAR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1_BAR,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1_BAR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1_BAR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1_BAR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1_BAR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1_BAR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1_BAR,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1_BAR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1_BAR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1_BAR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1_SIZE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1_SIZE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1_SIZE,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1_SIZE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1_SIZE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1_SIZE]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1_SIZE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1_SIZE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1_SIZE,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1_SIZE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1_SIZE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1_SIZE]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1_SIZE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1_SIZE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1_SIZE,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1_SIZE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1_SIZE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPESWPR1_SIZE]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXICTR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXICTR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXICTR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXICTR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXICTR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXICTR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXICTR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXICTR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXICTR]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXICTR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXICTR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXICTR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXICTR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXICTR]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXICTR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXICTR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXICTR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXICTR_OCB_OCI_GPEXICTR_CTR]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR8]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR8(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR8;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR8]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR8]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR8(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR8;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR8, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR8]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR8]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR8(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR8));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR8, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR8]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR8_OCB_OCI_GPEXIVDR8_GPR8]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR8_OCB_OCI_GPEXIVDR8_GPR8(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR8));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR8_OCB_OCI_GPEXIVDR8_GPR8,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR8_OCB_OCI_GPEXIVDR8_GPR8_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR8_OCB_OCI_GPEXIVDR8_GPR8 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR8_OCB_OCI_GPEXIVDR8_GPR8]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR8_OCB_OCI_GPEXIVDR8_GPR8]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR8_OCB_OCI_GPEXIVDR8_GPR8(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR8));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR8_OCB_OCI_GPEXIVDR8_GPR8,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR8_OCB_OCI_GPEXIVDR8_GPR8_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR8_OCB_OCI_GPEXIVDR8_GPR8 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR8_OCB_OCI_GPEXIVDR8_GPR8]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR8_OCB_OCI_GPEXIVDR8_GPR8]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR8_OCB_OCI_GPEXIVDR8_GPR8(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR8));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR8_OCB_OCI_GPEXIVDR8_GPR8,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR8_OCB_OCI_GPEXIVDR8_GPR8_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR8_OCB_OCI_GPEXIVDR8_GPR8 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR8_OCB_OCI_GPEXIVDR8_GPR8]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA_OCB_OCI_GPEXIRAMEDR_IR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA_OCB_OCI_GPEXIRAMEDR_IR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA_OCB_OCI_GPEXIRAMEDR_IR,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA_OCB_OCI_GPEXIRAMEDR_IR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA_OCB_OCI_GPEXIRAMEDR_IR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA_OCB_OCI_GPEXIRAMEDR_IR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA_OCB_OCI_GPEXIRAMEDR_IR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA_OCB_OCI_GPEXIRAMEDR_IR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA_OCB_OCI_GPEXIRAMEDR_IR,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA_OCB_OCI_GPEXIRAMEDR_IR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA_OCB_OCI_GPEXIRAMEDR_IR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA_OCB_OCI_GPEXIRAMEDR_IR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA_OCB_OCI_GPEXIRAMEDR_IR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA_OCB_OCI_GPEXIRAMEDR_IR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA_OCB_OCI_GPEXIRAMEDR_IR,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA_OCB_OCI_GPEXIRAMEDR_IR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA_OCB_OCI_GPEXIRAMEDR_IR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA_OCB_OCI_GPEXIRAMEDR_IR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA_SPRG0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA_SPRG0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA_SPRG0,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA_SPRG0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA_SPRG0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA_SPRG0]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA_SPRG0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA_SPRG0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA_SPRG0,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA_SPRG0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA_SPRG0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA_SPRG0]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA_SPRG0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA_SPRG0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA_SPRG0,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA_SPRG0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA_SPRG0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMGA_SPRG0]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIIAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIIAR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIIAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIIAR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIIAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIIAR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIIAR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIIAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIIAR]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIIAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIIAR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIIAR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIIAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIIAR]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIIAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIIAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIIAR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIIAR_OCB_OCI_GPEXIIAR_IAR]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_TAG_ADDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_TAG_ADDR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_TAG_ADDR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_TAG_ADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_TAG_ADDR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_TAG_ADDR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_TAG_ADDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_TAG_ADDR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_TAG_ADDR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_TAG_ADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_TAG_ADDR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_TAG_ADDR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_TAG_ADDR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_TAG_ADDR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_TAG_ADDR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_TAG_ADDR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_TAG_ADDR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_TAG_ADDR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_ERR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_ERR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_ERR]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_ERR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_ERR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_ERR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_ERR]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_ERR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_POPULATE_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_POPULATE_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_POPULATE_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_POPULATE_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_POPULATE_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_POPULATE_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_POPULATE_PENDING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_POPULATE_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_POPULATE_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_POPULATE_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_POPULATE_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_POPULATE_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_POPULATE_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_POPULATE_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_POPULATE_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_POPULATE_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_POPULATE_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_POPULATE_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_POPULATE_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_POPULATE_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_POPULATE_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_POPULATE_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_POPULATE_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_POPULATE_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_POPULATE_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_POPULATE_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_POPULATE_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_POPULATE_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_POPULATE_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_POPULATE_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_VALID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_VALID(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_VALID,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_VALID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_VALID]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_VALID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_VALID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_VALID,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_VALID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_VALID]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_VALID]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_VALID(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_VALID,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_VALID_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDCAC_VALID]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIEDR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIEDR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIEDR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIEDR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIEDR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIEDR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIEDR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIEDR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIEDR]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIEDR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIEDR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIEDR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIEDR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIEDR]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIEDR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIEDR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIEDR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIEDR_OCB_OCI_GPEXIRAMEDR_EDR]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR7]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR7(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR7;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR7]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR7]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR7(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR7;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR7, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR7]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR7]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR7(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR7));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR7, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR7]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR7_OCB_OCI_GPEXIVDR6_GPR7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR7_OCB_OCI_GPEXIVDR6_GPR7(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR7));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR7_OCB_OCI_GPEXIVDR6_GPR7,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR7_OCB_OCI_GPEXIVDR6_GPR7_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR7_OCB_OCI_GPEXIVDR6_GPR7 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR7_OCB_OCI_GPEXIVDR6_GPR7]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR7_OCB_OCI_GPEXIVDR6_GPR7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR7_OCB_OCI_GPEXIVDR6_GPR7(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR7));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR7_OCB_OCI_GPEXIVDR6_GPR7,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR7_OCB_OCI_GPEXIVDR6_GPR7_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR7_OCB_OCI_GPEXIVDR6_GPR7 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR7_OCB_OCI_GPEXIVDR6_GPR7]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR7_OCB_OCI_GPEXIVDR6_GPR7]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR7_OCB_OCI_GPEXIVDR6_GPR7(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR7));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR7_OCB_OCI_GPEXIVDR6_GPR7,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR7_OCB_OCI_GPEXIVDR6_GPR7_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR7_OCB_OCI_GPEXIVDR6_GPR7 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR7_OCB_OCI_GPEXIVDR6_GPR7]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6_6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6_6,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6_6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6_6]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6_6,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6_6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6_6]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6_6]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6_6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6_6,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6_6_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6_6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6_6]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6_7(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6_7,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6_7_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6_7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6_7]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6_7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6_7,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6_7_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6_7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6_7]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6_7]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6_7(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6_7,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6_7_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6_7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR6_7]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_DORP3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_DORP3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_DORP3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_DORP3]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_DORP3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_DORP3(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_DORP3;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_DORP3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_DORP3]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_DORP3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_DORP3(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_DORP3));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_DORP3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_DORP3]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_DORP3_QUOTIENT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_DORP3_QUOTIENT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_DORP3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_DORP3_QUOTIENT,
           TP_TPCHIP_OCC_OCI_OCB_DORP3_QUOTIENT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_DORP3_QUOTIENT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_DORP3_QUOTIENT]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_DORP3_QUOTIENT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_DORP3_QUOTIENT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_DORP3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_DORP3_QUOTIENT,
           TP_TPCHIP_OCC_OCI_OCB_DORP3_QUOTIENT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_DORP3_QUOTIENT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_DORP3_QUOTIENT]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_DORP3_QUOTIENT]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_DORP3_QUOTIENT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_DORP3));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_DORP3_QUOTIENT,
           TP_TPCHIP_OCC_OCI_OCB_DORP3_QUOTIENT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_DORP3_QUOTIENT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_DORP3_QUOTIENT]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_DORP3_REMAINDER]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_DORP3_REMAINDER(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_DORP3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_DORP3_REMAINDER,
           TP_TPCHIP_OCC_OCI_OCB_DORP3_REMAINDER_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_DORP3_REMAINDER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_DORP3_REMAINDER]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_DORP3_REMAINDER]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_DORP3_REMAINDER(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_DORP3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_DORP3_REMAINDER,
           TP_TPCHIP_OCC_OCI_OCB_DORP3_REMAINDER_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_DORP3_REMAINDER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_DORP3_REMAINDER]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_DORP3_REMAINDER]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_DORP3_REMAINDER(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_DORP3));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_DORP3_REMAINDER,
           TP_TPCHIP_OCC_OCI_OCB_DORP3_REMAINDER_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_DORP3_REMAINDER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_DORP3_REMAINDER]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OCBSHI3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OCBSHI3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OCBSHI3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OCBSHI3]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OCBSHI3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OCBSHI3(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OCBSHI3;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OCBSHI3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OCBSHI3]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OCBSHI3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OCBSHI3(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCBSHI3));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OCBSHI3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OCBSHI3]


//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OCBSLI1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OCBSLI1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OCBSLI1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OCBSLI1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OCBSLI1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OCBSLI1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OCBSLI1;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OCBSLI1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OCBSLI1]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OCBSLI1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OCBSLI1(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCBSLI1));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OCBSLI1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OCBSLI1]


//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_RW]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_RW;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_RW]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_RW, TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_RW]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_WO_CLEAR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_WO_CLEAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_WO_CLEAR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_WO_CLEAR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_WO_CLEAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_WO_CLEAR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_RW, TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_WO_CLEAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_WO_CLEAR]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_WO_OR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_WO_OR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_WO_OR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_WO_OR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_RW, TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_WO_OR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_OCB_OCI_OCCFLG6_OCC_FLAGS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_OCB_OCI_OCCFLG6_OCC_FLAGS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_RW, TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_OCB_OCI_OCCFLG6_OCC_FLAGS,
           TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_OCB_OCI_OCCFLG6_OCC_FLAGS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_OCB_OCI_OCCFLG6_OCC_FLAGS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_OCB_OCI_OCCFLG6_OCC_FLAGS]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_OCB_OCI_OCCFLG6_OCC_FLAGS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_OCB_OCI_OCCFLG6_OCC_FLAGS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_RW, TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_OCB_OCI_OCCFLG6_OCC_FLAGS,
           TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_OCB_OCI_OCCFLG6_OCC_FLAGS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_OCB_OCI_OCCFLG6_OCC_FLAGS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_OCB_OCI_OCCFLG6_OCC_FLAGS]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_OCB_OCI_OCCFLG6_OCC_FLAGS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_OCB_OCI_OCCFLG6_OCC_FLAGS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_RW, TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_OCB_OCI_OCCFLG6_OCC_FLAGS,
           TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_OCB_OCI_OCCFLG6_OCC_FLAGS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_OCB_OCI_OCCFLG6_OCC_FLAGS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG6_OCB_OCI_OCCFLG6_OCC_FLAGS]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT0Q1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT0Q1;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT0Q1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q1]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q1(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT0Q1));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT0Q1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q1]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q1_OCB_OCI_OPIT0Q1RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q1_OCB_OCI_OPIT0Q1RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT0Q1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT0Q1_OCB_OCI_OPIT0Q1RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT0Q1_OCB_OCI_OPIT0Q1RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT0Q1_OCB_OCI_OPIT0Q1RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q1_OCB_OCI_OPIT0Q1RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q1_OCB_OCI_OPIT0Q1RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q1_OCB_OCI_OPIT0Q1RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT0Q1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT0Q1_OCB_OCI_OPIT0Q1RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT0Q1_OCB_OCI_OPIT0Q1RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT0Q1_OCB_OCI_OPIT0Q1RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q1_OCB_OCI_OPIT0Q1RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q1_OCB_OCI_OPIT0Q1RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q1_OCB_OCI_OPIT0Q1RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT0Q1));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT0Q1_OCB_OCI_OPIT0Q1RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT0Q1_OCB_OCI_OPIT0Q1RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT0Q1_OCB_OCI_OPIT0Q1RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q1_OCB_OCI_OPIT0Q1RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q5RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q5RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT0Q5RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q5RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q5RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q5RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT0Q5RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT0Q5RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q5RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q5RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q5RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT0Q5RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT0Q5RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q5RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q5RR_OCB_OCI_OPIT0Q5RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q5RR_OCB_OCI_OPIT0Q5RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT0Q5RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT0Q5RR_OCB_OCI_OPIT0Q5RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT0Q5RR_OCB_OCI_OPIT0Q5RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT0Q5RR_OCB_OCI_OPIT0Q5RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q5RR_OCB_OCI_OPIT0Q5RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q5RR_OCB_OCI_OPIT0Q5RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q5RR_OCB_OCI_OPIT0Q5RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT0Q5RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT0Q5RR_OCB_OCI_OPIT0Q5RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT0Q5RR_OCB_OCI_OPIT0Q5RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT0Q5RR_OCB_OCI_OPIT0Q5RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q5RR_OCB_OCI_OPIT0Q5RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q5RR_OCB_OCI_OPIT0Q5RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q5RR_OCB_OCI_OPIT0Q5RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT0Q5RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT0Q5RR_OCB_OCI_OPIT0Q5RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT0Q5RR_OCB_OCI_OPIT0Q5RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT0Q5RR_OCB_OCI_OPIT0Q5RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q5RR_OCB_OCI_OPIT0Q5RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q5RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT1Q5RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT1Q5RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q5RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q5RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT1Q5RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT1Q5RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT1Q5RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q5RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q5RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT1Q5RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT1Q5RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT1Q5RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q5RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q5RR_OCB_OCI_OPIT1Q5RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT1Q5RR_OCB_OCI_OPIT1Q5RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT1Q5RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT1Q5RR_OCB_OCI_OPIT1Q5RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT1Q5RR_OCB_OCI_OPIT1Q5RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT1Q5RR_OCB_OCI_OPIT1Q5RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q5RR_OCB_OCI_OPIT1Q5RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q5RR_OCB_OCI_OPIT1Q5RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT1Q5RR_OCB_OCI_OPIT1Q5RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT1Q5RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT1Q5RR_OCB_OCI_OPIT1Q5RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT1Q5RR_OCB_OCI_OPIT1Q5RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT1Q5RR_OCB_OCI_OPIT1Q5RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q5RR_OCB_OCI_OPIT1Q5RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q5RR_OCB_OCI_OPIT1Q5RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT1Q5RR_OCB_OCI_OPIT1Q5RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT1Q5RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT1Q5RR_OCB_OCI_OPIT1Q5RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT1Q5RR_OCB_OCI_OPIT1Q5RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT1Q5RR_OCB_OCI_OPIT1Q5RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q5RR_OCB_OCI_OPIT1Q5RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q5RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT2Q5RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT2Q5RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q5RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q5RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT2Q5RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT2Q5RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT2Q5RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q5RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q5RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT2Q5RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT2Q5RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT2Q5RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q5RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q5RR_OCB_OCI_OPIT2Q5RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT2Q5RR_OCB_OCI_OPIT2Q5RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT2Q5RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT2Q5RR_OCB_OCI_OPIT2Q5RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT2Q5RR_OCB_OCI_OPIT2Q5RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT2Q5RR_OCB_OCI_OPIT2Q5RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q5RR_OCB_OCI_OPIT2Q5RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q5RR_OCB_OCI_OPIT2Q5RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT2Q5RR_OCB_OCI_OPIT2Q5RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT2Q5RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT2Q5RR_OCB_OCI_OPIT2Q5RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT2Q5RR_OCB_OCI_OPIT2Q5RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT2Q5RR_OCB_OCI_OPIT2Q5RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q5RR_OCB_OCI_OPIT2Q5RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q5RR_OCB_OCI_OPIT2Q5RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT2Q5RR_OCB_OCI_OPIT2Q5RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT2Q5RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT2Q5RR_OCB_OCI_OPIT2Q5RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT2Q5RR_OCB_OCI_OPIT2Q5RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT2Q5RR_OCB_OCI_OPIT2Q5RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q5RR_OCB_OCI_OPIT2Q5RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5_OCB_OCI_OPIT3Q5RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5_OCB_OCI_OPIT3Q5RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5_OCB_OCI_OPIT3Q5RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5_OCB_OCI_OPIT3Q5RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5_OCB_OCI_OPIT3Q5RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5_OCB_OCI_OPIT3Q5RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5_OCB_OCI_OPIT3Q5RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5_OCB_OCI_OPIT3Q5RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5_OCB_OCI_OPIT3Q5RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5_OCB_OCI_OPIT3Q5RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5_OCB_OCI_OPIT3Q5RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5_OCB_OCI_OPIT3Q5RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5_OCB_OCI_OPIT3Q5RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5_OCB_OCI_OPIT3Q5RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5_OCB_OCI_OPIT3Q5RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5_OCB_OCI_OPIT3Q5RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5_OCB_OCI_OPIT3Q5RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5_OCB_OCI_OPIT3Q5RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5RR_OCB_OCI_OPIT3Q5RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5RR_OCB_OCI_OPIT3Q5RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5RR_OCB_OCI_OPIT3Q5RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5RR_OCB_OCI_OPIT3Q5RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5RR_OCB_OCI_OPIT3Q5RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5RR_OCB_OCI_OPIT3Q5RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5RR_OCB_OCI_OPIT3Q5RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5RR_OCB_OCI_OPIT3Q5RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5RR_OCB_OCI_OPIT3Q5RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5RR_OCB_OCI_OPIT3Q5RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5RR_OCB_OCI_OPIT3Q5RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5RR_OCB_OCI_OPIT3Q5RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5RR_OCB_OCI_OPIT3Q5RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5RR_OCB_OCI_OPIT3Q5RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5RR_OCB_OCI_OPIT3Q5RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5RR_OCB_OCI_OPIT3Q5RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5RR_OCB_OCI_OPIT3Q5RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q5RR_OCB_OCI_OPIT3Q5RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT4Q3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q3]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q3(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT4Q3;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT4Q3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q3]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q3(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q3));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT4Q3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q3]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q3_OCB_OCI_OPIT4Q3RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q3_OCB_OCI_OPIT4Q3RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4Q3_OCB_OCI_OPIT4Q3RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT4Q3_OCB_OCI_OPIT4Q3RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4Q3_OCB_OCI_OPIT4Q3RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q3_OCB_OCI_OPIT4Q3RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q3_OCB_OCI_OPIT4Q3RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q3_OCB_OCI_OPIT4Q3RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4Q3_OCB_OCI_OPIT4Q3RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT4Q3_OCB_OCI_OPIT4Q3RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4Q3_OCB_OCI_OPIT4Q3RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q3_OCB_OCI_OPIT4Q3RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q3_OCB_OCI_OPIT4Q3RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q3_OCB_OCI_OPIT4Q3RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q3));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4Q3_OCB_OCI_OPIT4Q3RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT4Q3_OCB_OCI_OPIT4Q3RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4Q3_OCB_OCI_OPIT4Q3RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q3_OCB_OCI_OPIT4Q3RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5RR_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5RR_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5RR_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5RR_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5RR_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5RR_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5RR_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5RR_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5RR_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5RR_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5RR_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5RR_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5RR_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5RR_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5RR_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5RR_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5RR_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5RR_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q5RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT5Q5RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT5Q5RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q5RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q5RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT5Q5RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT5Q5RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT5Q5RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q5RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q5RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT5Q5RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5Q5RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT5Q5RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q5RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q5RR_OCB_OCI_OPIT5Q5RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5Q5RR_OCB_OCI_OPIT5Q5RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5Q5RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5Q5RR_OCB_OCI_OPIT5Q5RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT5Q5RR_OCB_OCI_OPIT5Q5RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5Q5RR_OCB_OCI_OPIT5Q5RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q5RR_OCB_OCI_OPIT5Q5RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q5RR_OCB_OCI_OPIT5Q5RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5Q5RR_OCB_OCI_OPIT5Q5RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5Q5RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5Q5RR_OCB_OCI_OPIT5Q5RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT5Q5RR_OCB_OCI_OPIT5Q5RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5Q5RR_OCB_OCI_OPIT5Q5RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q5RR_OCB_OCI_OPIT5Q5RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q5RR_OCB_OCI_OPIT5Q5RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT5Q5RR_OCB_OCI_OPIT5Q5RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5Q5RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5Q5RR_OCB_OCI_OPIT5Q5RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT5Q5RR_OCB_OCI_OPIT5Q5RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5Q5RR_OCB_OCI_OPIT5Q5RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q5RR_OCB_OCI_OPIT5Q5RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5RR_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5RR_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5RR_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5RR_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5RR_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5RR_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5RR_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5RR_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5RR_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5RR_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5RR_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5RR_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5RR_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5RR_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5RR_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5RR_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5RR_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q5RR_OCB_OCI_OPIT6Q5RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5RR_OCB_OCI_OPIT7Q5RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5RR_OCB_OCI_OPIT7Q5RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5RR_OCB_OCI_OPIT7Q5RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5RR_OCB_OCI_OPIT7Q5RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5RR_OCB_OCI_OPIT7Q5RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5RR_OCB_OCI_OPIT7Q5RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5RR_OCB_OCI_OPIT7Q5RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5RR_OCB_OCI_OPIT7Q5RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5RR_OCB_OCI_OPIT7Q5RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5RR_OCB_OCI_OPIT7Q5RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5RR_OCB_OCI_OPIT7Q5RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5RR_OCB_OCI_OPIT7Q5RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5RR_OCB_OCI_OPIT7Q5RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5RR_OCB_OCI_OPIT7Q5RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5RR_OCB_OCI_OPIT7Q5RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5RR_OCB_OCI_OPIT7Q5RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5RR_OCB_OCI_OPIT7Q5RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q5RR_OCB_OCI_OPIT7Q5RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q7]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q7(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT7Q7;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q7]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q7]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q7(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT7Q7;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT7Q7, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q7]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q7]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q7(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT7Q7));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT7Q7, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q7]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q7_OCB_OCI_OPIT7Q7RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q7_OCB_OCI_OPIT7Q7RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT7Q7));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT7Q7_OCB_OCI_OPIT7Q7RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT7Q7_OCB_OCI_OPIT7Q7RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT7Q7_OCB_OCI_OPIT7Q7RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q7_OCB_OCI_OPIT7Q7RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q7_OCB_OCI_OPIT7Q7RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q7_OCB_OCI_OPIT7Q7RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT7Q7));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT7Q7_OCB_OCI_OPIT7Q7RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT7Q7_OCB_OCI_OPIT7Q7RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT7Q7_OCB_OCI_OPIT7Q7RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q7_OCB_OCI_OPIT7Q7RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q7_OCB_OCI_OPIT7Q7RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q7_OCB_OCI_OPIT7Q7RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT7Q7));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT7Q7_OCB_OCI_OPIT7Q7RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT7Q7_OCB_OCI_OPIT7Q7RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT7Q7_OCB_OCI_OPIT7Q7RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q7_OCB_OCI_OPIT7Q7RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C14]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT8C14(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C14;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C14]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C14]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C14(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C14;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C14, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C14]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C14]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT8C14(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C14));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C14, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C14]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C14_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C14_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C14));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C14_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C14_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C14_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C14_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C14_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C14_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C14));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C14_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C14_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C14_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C14_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C14_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C14_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C14));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C14_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C14_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C14_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C14_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C14_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C14_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C14));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C14_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C14_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C14_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C14_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C14_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C14_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C14));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C14_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C14_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C14_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C14_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C14_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C14_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C14));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C14_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C14_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C14_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C14_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C23]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT8C23(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C23;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C23]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C23]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C23(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C23;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C23, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C23]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C23]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT8C23(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C23));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C23, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C23]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C23_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C23_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C23));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C23_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C23_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C23_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C23_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C23_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C23_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C23));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C23_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C23_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C23_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C23_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C23_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C23_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C23));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C23_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C23_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C23_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C23_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C23_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C23_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C23));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C23_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C23_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C23_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C23_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C23_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C23_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C23));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C23_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C23_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C23_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C23_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C23_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C23_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C23));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C23_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C23_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C23_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C23_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C2RR_PAYLOAD]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
