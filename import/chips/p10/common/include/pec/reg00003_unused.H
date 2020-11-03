/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/pec/reg00003_unused.H $       */
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

#ifndef __PEC_REG00003_H_UNUSED__
#define __PEC_REG00003_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace pec
{
#endif


//>> PREP_[EPS_FIR_ANY_LOCAL_ERR_MASK]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_FIR_ANY_LOCAL_ERR_MASK(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_FIR_ANY_LOCAL_ERR_MASK;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_FIR_ANY_LOCAL_ERR_MASK]

//>> GET_[EPS_FIR_ANY_LOCAL_ERR_MASK]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_FIR_ANY_LOCAL_ERR_MASK(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_FIR_ANY_LOCAL_ERR_MASK;
#endif
    return fapi2::getScom(i_target, EPS_FIR_ANY_LOCAL_ERR_MASK, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_FIR_ANY_LOCAL_ERR_MASK]

//>> PUT_[EPS_FIR_ANY_LOCAL_ERR_MASK]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_FIR_ANY_LOCAL_ERR_MASK(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return fapi2::putScom(i_target, EPS_FIR_ANY_LOCAL_ERR_MASK, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_FIR_ANY_LOCAL_ERR_MASK]


//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.insertFromRight<EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.insertFromRight<EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.setBit<EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB]

//>> CLEAR_[EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.clearBit<EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB]

//>> GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return i_data.extractToRight<EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB]

//>> GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB]
static inline bool GET_EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return i_data.getBit<EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.insertFromRight<EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.insertFromRight<EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.setBit<EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB]

//>> CLEAR_[EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.clearBit<EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB]

//>> GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return i_data.extractToRight<EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB]

//>> GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB]
static inline bool GET_EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return i_data.getBit<EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.insertFromRight<EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.insertFromRight<EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.setBit<EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB]

//>> CLEAR_[EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.clearBit<EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB]

//>> GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return i_data.extractToRight<EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB]

//>> GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB]
static inline bool GET_EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return i_data.getBit<EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.insertFromRight<EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.insertFromRight<EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.setBit<EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB]

//>> CLEAR_[EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.clearBit<EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB]

//>> GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return i_data.extractToRight<EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB]

//>> GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB]
static inline bool GET_EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return i_data.getBit<EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.insertFromRight<EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.insertFromRight<EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.setBit<EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB]

//>> CLEAR_[EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.clearBit<EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB]

//>> GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return i_data.extractToRight<EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB]

//>> GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB]
static inline bool GET_EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return i_data.getBit<EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB]

//>> PREP_[EPS_THERM_WSUB_SKITTER_DATA1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_THERM_WSUB_SKITTER_DATA1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB_SKITTER_DATA1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_THERM_WSUB_SKITTER_DATA1]

//>> GET_[EPS_THERM_WSUB_SKITTER_DATA1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_THERM_WSUB_SKITTER_DATA1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB_SKITTER_DATA1;
#endif
    return fapi2::getScom(i_target, EPS_THERM_WSUB_SKITTER_DATA1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_DATA1]

//>> PUT_[EPS_THERM_WSUB_SKITTER_DATA1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_THERM_WSUB_SKITTER_DATA1(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_DATA1));
#endif
    return fapi2::putScom(i_target, EPS_THERM_WSUB_SKITTER_DATA1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_THERM_WSUB_SKITTER_DATA1]


//>> PREP_[LXSTOP_INTERRUPT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_LXSTOP_INTERRUPT_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = LXSTOP_INTERRUPT_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[LXSTOP_INTERRUPT_REG]

//>> GET_[LXSTOP_INTERRUPT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_LXSTOP_INTERRUPT_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = LXSTOP_INTERRUPT_REG;
#endif
    return fapi2::getScom(i_target, LXSTOP_INTERRUPT_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[LXSTOP_INTERRUPT_REG]

//>> PUT_[LXSTOP_INTERRUPT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_LXSTOP_INTERRUPT_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(LXSTOP_INTERRUPT_REG));
#endif
    return fapi2::putScom(i_target, LXSTOP_INTERRUPT_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[LXSTOP_INTERRUPT_REG]


//>> SET_[LXSTOP_INTERRUPT_REG_LXSTOP]
static inline fapi2::buffer<uint64_t>& SET_LXSTOP_INTERRUPT_REG_LXSTOP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LXSTOP_INTERRUPT_REG));
#endif
    return o_data.insertFromRight<LXSTOP_INTERRUPT_REG_LXSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access LXSTOP_INTERRUPT_REG_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LXSTOP_INTERRUPT_REG_LXSTOP]

//>> SET_[LXSTOP_INTERRUPT_REG_LXSTOP]
static inline fapi2::buffer<uint64_t>& SET_LXSTOP_INTERRUPT_REG_LXSTOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LXSTOP_INTERRUPT_REG));
#endif
    return o_data.insertFromRight<LXSTOP_INTERRUPT_REG_LXSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access LXSTOP_INTERRUPT_REG_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LXSTOP_INTERRUPT_REG_LXSTOP]

//>> SET_[LXSTOP_INTERRUPT_REG_LXSTOP]
static inline fapi2::buffer<uint64_t>& SET_LXSTOP_INTERRUPT_REG_LXSTOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LXSTOP_INTERRUPT_REG));
#endif
    return o_data.setBit<LXSTOP_INTERRUPT_REG_LXSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access LXSTOP_INTERRUPT_REG_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LXSTOP_INTERRUPT_REG_LXSTOP]

//>> CLEAR_[LXSTOP_INTERRUPT_REG_LXSTOP]
static inline fapi2::buffer<uint64_t>& CLEAR_LXSTOP_INTERRUPT_REG_LXSTOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LXSTOP_INTERRUPT_REG));
#endif
    return o_data.clearBit<LXSTOP_INTERRUPT_REG_LXSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access LXSTOP_INTERRUPT_REG_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[LXSTOP_INTERRUPT_REG_LXSTOP]

//>> GET_[LXSTOP_INTERRUPT_REG_LXSTOP]
static inline fapi2::buffer<uint64_t>& GET_LXSTOP_INTERRUPT_REG_LXSTOP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LXSTOP_INTERRUPT_REG));
#endif
    return i_data.extractToRight<LXSTOP_INTERRUPT_REG_LXSTOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access LXSTOP_INTERRUPT_REG_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LXSTOP_INTERRUPT_REG_LXSTOP]

//>> GET_[LXSTOP_INTERRUPT_REG_LXSTOP]
static inline bool GET_LXSTOP_INTERRUPT_REG_LXSTOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LXSTOP_INTERRUPT_REG));
#endif
    return i_data.getBit<LXSTOP_INTERRUPT_REG_LXSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access LXSTOP_INTERRUPT_REG_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LXSTOP_INTERRUPT_REG_LXSTOP]

//>> PREP_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG]

//>> GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG;
#endif
    return fapi2::getScom(i_target, PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG]

//>> PUT_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return fapi2::putScom(i_target, PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG]


//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.setBit<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE]

//>> CLEAR_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.clearBit<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE]

//>> GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE]

//>> GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE]
static inline bool GET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return i_data.getBit<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.setBit<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE]

//>> CLEAR_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.clearBit<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE]

//>> GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE]
static inline fapi2::buffer<uint64_t>& GET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE]

//>> GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE]
static inline bool GET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return i_data.getBit<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.setBit<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE]

//>> CLEAR_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.clearBit<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE]

//>> GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE]
static inline fapi2::buffer<uint64_t>& GET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE]

//>> GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE]
static inline bool GET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return i_data.getBit<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_RESERVED_03_05]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_RESERVED_03_05(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_RESERVED_03_05,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_RESERVED_03_05_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_RESERVED_03_05 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_RESERVED_03_05]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_RESERVED_03_05]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_RESERVED_03_05(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_RESERVED_03_05,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_RESERVED_03_05_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_RESERVED_03_05 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_RESERVED_03_05]

//>> GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_RESERVED_03_05]
static inline fapi2::buffer<uint64_t>& GET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_RESERVED_03_05(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_RESERVED_03_05,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_RESERVED_03_05_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_RESERVED_03_05 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_RESERVED_03_05]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_VALUE]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_VALUE,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_VALUE]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_VALUE]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_VALUE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_VALUE,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_VALUE]

//>> GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_VALUE]
static inline fapi2::buffer<uint64_t>& GET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_VALUE,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_VALUE]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_OUTSTANDING_COUNT]
static inline fapi2::buffer<uint64_t>&
SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_OUTSTANDING_COUNT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_OUTSTANDING_COUNT,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_OUTSTANDING_COUNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_OUTSTANDING_COUNT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_OUTSTANDING_COUNT]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_OUTSTANDING_COUNT]
static inline fapi2::buffer<uint64_t>&
SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_OUTSTANDING_COUNT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_OUTSTANDING_COUNT,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_OUTSTANDING_COUNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_OUTSTANDING_COUNT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_OUTSTANDING_COUNT]

//>> GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_OUTSTANDING_COUNT]
static inline fapi2::buffer<uint64_t>&
GET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_OUTSTANDING_COUNT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_OUTSTANDING_COUNT,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_OUTSTANDING_COUNT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_OUTSTANDING_COUNT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_OUTSTANDING_COUNT]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_CRESP_ATAG_VALUE]
static inline fapi2::buffer<uint64_t>&
SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_CRESP_ATAG_VALUE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_CRESP_ATAG_VALUE,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_CRESP_ATAG_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_CRESP_ATAG_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_CRESP_ATAG_VALUE]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_CRESP_ATAG_VALUE]
static inline fapi2::buffer<uint64_t>&
SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_CRESP_ATAG_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_CRESP_ATAG_VALUE,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_CRESP_ATAG_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_CRESP_ATAG_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_CRESP_ATAG_VALUE]

//>> GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_CRESP_ATAG_VALUE]
static inline fapi2::buffer<uint64_t>&
GET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_CRESP_ATAG_VALUE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_CRESP_ATAG_VALUE,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_CRESP_ATAG_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_CRESP_ATAG_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_CRESP_ATAG_VALUE]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_CRESP_ATAG_DELTA_VALUE]
static inline fapi2::buffer<uint64_t>&
SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_CRESP_ATAG_DELTA_VALUE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_CRESP_ATAG_DELTA_VALUE,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_CRESP_ATAG_DELTA_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_CRESP_ATAG_DELTA_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_CRESP_ATAG_DELTA_VALUE]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_CRESP_ATAG_DELTA_VALUE]
static inline fapi2::buffer<uint64_t>&
SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_CRESP_ATAG_DELTA_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_CRESP_ATAG_DELTA_VALUE,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_CRESP_ATAG_DELTA_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_CRESP_ATAG_DELTA_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_CRESP_ATAG_DELTA_VALUE]

//>> GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_CRESP_ATAG_DELTA_VALUE]
static inline fapi2::buffer<uint64_t>&
GET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_CRESP_ATAG_DELTA_VALUE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_CRESP_ATAG_DELTA_VALUE,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_CRESP_ATAG_DELTA_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_CRESP_ATAG_DELTA_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_CRESP_ATAG_DELTA_VALUE]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SAMPLE_RANGE_COUNT]
static inline fapi2::buffer<uint64_t>&
SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SAMPLE_RANGE_COUNT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SAMPLE_RANGE_COUNT,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SAMPLE_RANGE_COUNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SAMPLE_RANGE_COUNT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SAMPLE_RANGE_COUNT]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SAMPLE_RANGE_COUNT]
static inline fapi2::buffer<uint64_t>&
SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SAMPLE_RANGE_COUNT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SAMPLE_RANGE_COUNT,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SAMPLE_RANGE_COUNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SAMPLE_RANGE_COUNT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SAMPLE_RANGE_COUNT]

//>> GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SAMPLE_RANGE_COUNT]
static inline fapi2::buffer<uint64_t>&
GET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SAMPLE_RANGE_COUNT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SAMPLE_RANGE_COUNT,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SAMPLE_RANGE_COUNT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SAMPLE_RANGE_COUNT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SAMPLE_RANGE_COUNT]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_RATE_CHANGE_DELTA]
static inline fapi2::buffer<uint64_t>&
SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_RATE_CHANGE_DELTA(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_RATE_CHANGE_DELTA,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_RATE_CHANGE_DELTA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_RATE_CHANGE_DELTA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_RATE_CHANGE_DELTA]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_RATE_CHANGE_DELTA]
static inline fapi2::buffer<uint64_t>&
SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_RATE_CHANGE_DELTA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_RATE_CHANGE_DELTA,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_RATE_CHANGE_DELTA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_RATE_CHANGE_DELTA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_RATE_CHANGE_DELTA]

//>> GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_RATE_CHANGE_DELTA]
static inline fapi2::buffer<uint64_t>&
GET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_RATE_CHANGE_DELTA(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_RATE_CHANGE_DELTA,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_RATE_CHANGE_DELTA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_RATE_CHANGE_DELTA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_RATE_CHANGE_DELTA]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_RATE_CHANGE_DELTA]
static inline fapi2::buffer<uint64_t>&
SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_RATE_CHANGE_DELTA(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_RATE_CHANGE_DELTA,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_RATE_CHANGE_DELTA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_RATE_CHANGE_DELTA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_RATE_CHANGE_DELTA]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_RATE_CHANGE_DELTA]
static inline fapi2::buffer<uint64_t>&
SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_RATE_CHANGE_DELTA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_RATE_CHANGE_DELTA,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_RATE_CHANGE_DELTA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_RATE_CHANGE_DELTA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_RATE_CHANGE_DELTA]

//>> GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_RATE_CHANGE_DELTA]
static inline fapi2::buffer<uint64_t>&
GET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_RATE_CHANGE_DELTA(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_RATE_CHANGE_DELTA,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_RATE_CHANGE_DELTA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_RATE_CHANGE_DELTA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_RATE_CHANGE_DELTA]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_DECREMENT_RATE]
static inline fapi2::buffer<uint64_t>&
SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_DECREMENT_RATE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_DECREMENT_RATE,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_DECREMENT_RATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_DECREMENT_RATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_DECREMENT_RATE]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_DECREMENT_RATE]
static inline fapi2::buffer<uint64_t>&
SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_DECREMENT_RATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_DECREMENT_RATE,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_DECREMENT_RATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_DECREMENT_RATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_DECREMENT_RATE]

//>> GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_DECREMENT_RATE]
static inline fapi2::buffer<uint64_t>&
GET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_DECREMENT_RATE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_DECREMENT_RATE,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_DECREMENT_RATE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_DECREMENT_RATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_DECREMENT_RATE]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_MINIMUM_DECREMENT_RATE]
static inline fapi2::buffer<uint64_t>&
SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_MINIMUM_DECREMENT_RATE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_MINIMUM_DECREMENT_RATE,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_MINIMUM_DECREMENT_RATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_MINIMUM_DECREMENT_RATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_MINIMUM_DECREMENT_RATE]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_MINIMUM_DECREMENT_RATE]
static inline fapi2::buffer<uint64_t>&
SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_MINIMUM_DECREMENT_RATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_MINIMUM_DECREMENT_RATE,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_MINIMUM_DECREMENT_RATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_MINIMUM_DECREMENT_RATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_MINIMUM_DECREMENT_RATE]

//>> GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_MINIMUM_DECREMENT_RATE]
static inline fapi2::buffer<uint64_t>&
GET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_MINIMUM_DECREMENT_RATE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_MINIMUM_DECREMENT_RATE,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_MINIMUM_DECREMENT_RATE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_MINIMUM_DECREMENT_RATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_MINIMUM_DECREMENT_RATE]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_DECREMENT_RATE]
static inline fapi2::buffer<uint64_t>&
SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_DECREMENT_RATE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_DECREMENT_RATE,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_DECREMENT_RATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_DECREMENT_RATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_DECREMENT_RATE]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_DECREMENT_RATE]
static inline fapi2::buffer<uint64_t>&
SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_DECREMENT_RATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_DECREMENT_RATE,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_DECREMENT_RATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_DECREMENT_RATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_DECREMENT_RATE]

//>> GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_DECREMENT_RATE]
static inline fapi2::buffer<uint64_t>&
GET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_DECREMENT_RATE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_DECREMENT_RATE,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_DECREMENT_RATE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_DECREMENT_RATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_DECREMENT_RATE]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_MINIMUM_DECREMENT_RATE]
static inline fapi2::buffer<uint64_t>&
SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_MINIMUM_DECREMENT_RATE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_MINIMUM_DECREMENT_RATE,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_MINIMUM_DECREMENT_RATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_MINIMUM_DECREMENT_RATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_MINIMUM_DECREMENT_RATE]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_MINIMUM_DECREMENT_RATE]
static inline fapi2::buffer<uint64_t>&
SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_MINIMUM_DECREMENT_RATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_MINIMUM_DECREMENT_RATE,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_MINIMUM_DECREMENT_RATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_MINIMUM_DECREMENT_RATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_MINIMUM_DECREMENT_RATE]

//>> GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_MINIMUM_DECREMENT_RATE]
static inline fapi2::buffer<uint64_t>&
GET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_MINIMUM_DECREMENT_RATE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_MINIMUM_DECREMENT_RATE,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_MINIMUM_DECREMENT_RATE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_MINIMUM_DECREMENT_RATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_MINIMUM_DECREMENT_RATE]

//>> PREP_[PHASE_COUNTER_RESET]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PHASE_COUNTER_RESET(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PHASE_COUNTER_RESET;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PHASE_COUNTER_RESET]

//>> GET_[PHASE_COUNTER_RESET]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PHASE_COUNTER_RESET(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PHASE_COUNTER_RESET;
#endif
    return fapi2::getScom(i_target, PHASE_COUNTER_RESET, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PHASE_COUNTER_RESET]

//>> PUT_[PHASE_COUNTER_RESET]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PHASE_COUNTER_RESET(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PHASE_COUNTER_RESET));
#endif
    return fapi2::putScom(i_target, PHASE_COUNTER_RESET, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PHASE_COUNTER_RESET]


//>> SET_[PHASE_COUNTER_RESET_PHASECOUNTER_RESET]
static inline fapi2::buffer<uint64_t>& SET_PHASE_COUNTER_RESET_PHASECOUNTER_RESET(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHASE_COUNTER_RESET));
#endif
    return o_data.insertFromRight<PHASE_COUNTER_RESET_PHASECOUNTER_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PHASE_COUNTER_RESET_PHASECOUNTER_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHASE_COUNTER_RESET_PHASECOUNTER_RESET]

//>> SET_[PHASE_COUNTER_RESET_PHASECOUNTER_RESET]
static inline fapi2::buffer<uint64_t>& SET_PHASE_COUNTER_RESET_PHASECOUNTER_RESET(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHASE_COUNTER_RESET));
#endif
    return o_data.insertFromRight<PHASE_COUNTER_RESET_PHASECOUNTER_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PHASE_COUNTER_RESET_PHASECOUNTER_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHASE_COUNTER_RESET_PHASECOUNTER_RESET]

//>> SET_[PHASE_COUNTER_RESET_PHASECOUNTER_RESET]
static inline fapi2::buffer<uint64_t>& SET_PHASE_COUNTER_RESET_PHASECOUNTER_RESET(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHASE_COUNTER_RESET));
#endif
    return o_data.setBit<PHASE_COUNTER_RESET_PHASECOUNTER_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access PHASE_COUNTER_RESET_PHASECOUNTER_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHASE_COUNTER_RESET_PHASECOUNTER_RESET]

//>> CLEAR_[PHASE_COUNTER_RESET_PHASECOUNTER_RESET]
static inline fapi2::buffer<uint64_t>& CLEAR_PHASE_COUNTER_RESET_PHASECOUNTER_RESET(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHASE_COUNTER_RESET));
#endif
    return o_data.clearBit<PHASE_COUNTER_RESET_PHASECOUNTER_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access PHASE_COUNTER_RESET_PHASECOUNTER_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHASE_COUNTER_RESET_PHASECOUNTER_RESET]

//>> GET_[PHASE_COUNTER_RESET_PHASECOUNTER_RESET]
static inline fapi2::buffer<uint64_t>& GET_PHASE_COUNTER_RESET_PHASECOUNTER_RESET(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHASE_COUNTER_RESET));
#endif
    return i_data.extractToRight<PHASE_COUNTER_RESET_PHASECOUNTER_RESET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PHASE_COUNTER_RESET_PHASECOUNTER_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHASE_COUNTER_RESET_PHASECOUNTER_RESET]

//>> GET_[PHASE_COUNTER_RESET_PHASECOUNTER_RESET]
static inline bool GET_PHASE_COUNTER_RESET_PHASECOUNTER_RESET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHASE_COUNTER_RESET));
#endif
    return i_data.getBit<PHASE_COUNTER_RESET_PHASECOUNTER_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access PHASE_COUNTER_RESET_PHASECOUNTER_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHASE_COUNTER_RESET_PHASECOUNTER_RESET]

//>> PREP_[TOP0_PIPEDINCTL2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TOP0_PIPEDINCTL2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP0_PIPEDINCTL2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TOP0_PIPEDINCTL2]

//>> GET_[TOP0_PIPEDINCTL2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TOP0_PIPEDINCTL2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP0_PIPEDINCTL2;
#endif
    return fapi2::getScom(i_target, TOP0_PIPEDINCTL2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TOP0_PIPEDINCTL2]

//>> PUT_[TOP0_PIPEDINCTL2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TOP0_PIPEDINCTL2(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL2));
#endif
    return fapi2::putScom(i_target, TOP0_PIPEDINCTL2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TOP0_PIPEDINCTL2]


//>> SET_[TOP0_PIPEDINCTL2_PIPEDINCTL2_RESERVED_63_0]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDINCTL2_PIPEDINCTL2_RESERVED_63_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL2));
#endif
    return o_data.insertFromRight<TOP0_PIPEDINCTL2_PIPEDINCTL2_RESERVED_63_0,
           TOP0_PIPEDINCTL2_PIPEDINCTL2_RESERVED_63_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_PIPEDINCTL2_PIPEDINCTL2_RESERVED_63_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDINCTL2_PIPEDINCTL2_RESERVED_63_0]

//>> SET_[TOP0_PIPEDINCTL2_PIPEDINCTL2_RESERVED_63_0]
static inline fapi2::buffer<uint64_t>& SET_TOP0_PIPEDINCTL2_PIPEDINCTL2_RESERVED_63_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL2));
#endif
    return o_data.insertFromRight<TOP0_PIPEDINCTL2_PIPEDINCTL2_RESERVED_63_0,
           TOP0_PIPEDINCTL2_PIPEDINCTL2_RESERVED_63_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_PIPEDINCTL2_PIPEDINCTL2_RESERVED_63_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_PIPEDINCTL2_PIPEDINCTL2_RESERVED_63_0]

//>> GET_[TOP0_PIPEDINCTL2_PIPEDINCTL2_RESERVED_63_0]
static inline fapi2::buffer<uint64_t>& GET_TOP0_PIPEDINCTL2_PIPEDINCTL2_RESERVED_63_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_PIPEDINCTL2));
#endif
    return i_data.extractToRight<TOP0_PIPEDINCTL2_PIPEDINCTL2_RESERVED_63_0,
           TOP0_PIPEDINCTL2_PIPEDINCTL2_RESERVED_63_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_PIPEDINCTL2_PIPEDINCTL2_RESERVED_63_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_PIPEDINCTL2_PIPEDINCTL2_RESERVED_63_0]

//>> PREP_[TOP1_PIPEDINCTL4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TOP1_PIPEDINCTL4(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP1_PIPEDINCTL4;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TOP1_PIPEDINCTL4]

//>> GET_[TOP1_PIPEDINCTL4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TOP1_PIPEDINCTL4(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP1_PIPEDINCTL4;
#endif
    return fapi2::getScom(i_target, TOP1_PIPEDINCTL4, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TOP1_PIPEDINCTL4]

//>> PUT_[TOP1_PIPEDINCTL4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TOP1_PIPEDINCTL4(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL4));
#endif
    return fapi2::putScom(i_target, TOP1_PIPEDINCTL4, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TOP1_PIPEDINCTL4]


//>> SET_[TOP1_PIPEDINCTL4_PIPEDINCTL4_RESERVED_63_0]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL4_PIPEDINCTL4_RESERVED_63_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL4));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL4_PIPEDINCTL4_RESERVED_63_0,
           TOP1_PIPEDINCTL4_PIPEDINCTL4_RESERVED_63_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDINCTL4_PIPEDINCTL4_RESERVED_63_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL4_PIPEDINCTL4_RESERVED_63_0]

//>> SET_[TOP1_PIPEDINCTL4_PIPEDINCTL4_RESERVED_63_0]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDINCTL4_PIPEDINCTL4_RESERVED_63_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL4));
#endif
    return o_data.insertFromRight<TOP1_PIPEDINCTL4_PIPEDINCTL4_RESERVED_63_0,
           TOP1_PIPEDINCTL4_PIPEDINCTL4_RESERVED_63_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDINCTL4_PIPEDINCTL4_RESERVED_63_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDINCTL4_PIPEDINCTL4_RESERVED_63_0]

//>> GET_[TOP1_PIPEDINCTL4_PIPEDINCTL4_RESERVED_63_0]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDINCTL4_PIPEDINCTL4_RESERVED_63_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDINCTL4));
#endif
    return i_data.extractToRight<TOP1_PIPEDINCTL4_PIPEDINCTL4_RESERVED_63_0,
           TOP1_PIPEDINCTL4_PIPEDINCTL4_RESERVED_63_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDINCTL4_PIPEDINCTL4_RESERVED_63_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDINCTL4_PIPEDINCTL4_RESERVED_63_0]

//>> PREP_[TOP1_PIPEDOUTCTL4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TOP1_PIPEDOUTCTL4(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP1_PIPEDOUTCTL4;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TOP1_PIPEDOUTCTL4]

//>> GET_[TOP1_PIPEDOUTCTL4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TOP1_PIPEDOUTCTL4(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP1_PIPEDOUTCTL4;
#endif
    return fapi2::getScom(i_target, TOP1_PIPEDOUTCTL4, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TOP1_PIPEDOUTCTL4]

//>> PUT_[TOP1_PIPEDOUTCTL4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TOP1_PIPEDOUTCTL4(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL4));
#endif
    return fapi2::putScom(i_target, TOP1_PIPEDOUTCTL4, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TOP1_PIPEDOUTCTL4]


//>> SET_[TOP1_PIPEDOUTCTL4_PIPEDOUTCTL4_RESERVED_63_0]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL4_PIPEDOUTCTL4_RESERVED_63_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL4));
#endif
    return o_data.insertFromRight<TOP1_PIPEDOUTCTL4_PIPEDOUTCTL4_RESERVED_63_0,
           TOP1_PIPEDOUTCTL4_PIPEDOUTCTL4_RESERVED_63_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_PIPEDOUTCTL4_PIPEDOUTCTL4_RESERVED_63_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL4_PIPEDOUTCTL4_RESERVED_63_0]

//>> SET_[TOP1_PIPEDOUTCTL4_PIPEDOUTCTL4_RESERVED_63_0]
static inline fapi2::buffer<uint64_t>& SET_TOP1_PIPEDOUTCTL4_PIPEDOUTCTL4_RESERVED_63_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL4));
#endif
    return o_data.insertFromRight<TOP1_PIPEDOUTCTL4_PIPEDOUTCTL4_RESERVED_63_0,
           TOP1_PIPEDOUTCTL4_PIPEDOUTCTL4_RESERVED_63_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_PIPEDOUTCTL4_PIPEDOUTCTL4_RESERVED_63_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_PIPEDOUTCTL4_PIPEDOUTCTL4_RESERVED_63_0]

//>> GET_[TOP1_PIPEDOUTCTL4_PIPEDOUTCTL4_RESERVED_63_0]
static inline fapi2::buffer<uint64_t>& GET_TOP1_PIPEDOUTCTL4_PIPEDOUTCTL4_RESERVED_63_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_PIPEDOUTCTL4));
#endif
    return i_data.extractToRight<TOP1_PIPEDOUTCTL4_PIPEDOUTCTL4_RESERVED_63_0,
           TOP1_PIPEDOUTCTL4_PIPEDOUTCTL4_RESERVED_63_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_PIPEDOUTCTL4_PIPEDOUTCTL4_RESERVED_63_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_PIPEDOUTCTL4_PIPEDOUTCTL4_RESERVED_63_0]

//>> PREP_[TRA0_TR0_CONFIG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TRA0_TR0_CONFIG_3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA0_TR0_CONFIG_3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TRA0_TR0_CONFIG_3]

//>> GET_[TRA0_TR0_CONFIG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TRA0_TR0_CONFIG_3(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA0_TR0_CONFIG_3;
#endif
    return fapi2::getScom(i_target, TRA0_TR0_CONFIG_3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_3]

//>> PUT_[TRA0_TR0_CONFIG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TRA0_TR0_CONFIG_3(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_3));
#endif
    return fapi2::putScom(i_target, TRA0_TR0_CONFIG_3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TRA0_TR0_CONFIG_3]


//>> SET_[TRA0_TR0_CONFIG_3_C]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_3_C(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_3));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_3_C,
           TRA0_TR0_CONFIG_3_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TRA0_TR0_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_3_C]

//>> SET_[TRA0_TR0_CONFIG_3_C]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_3_C(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_3));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_3_C,
           TRA0_TR0_CONFIG_3_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TRA0_TR0_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_3_C]

//>> GET_[TRA0_TR0_CONFIG_3_C]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_3_C(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_3));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_3_C,
           TRA0_TR0_CONFIG_3_C_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TRA0_TR0_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_3_C]

//>> SET_[TRA0_TR0_CONFIG_3_D]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_3_D(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_3));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_3_D,
           TRA0_TR0_CONFIG_3_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TRA0_TR0_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_3_D]

//>> SET_[TRA0_TR0_CONFIG_3_D]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_3_D(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_3));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_3_D,
           TRA0_TR0_CONFIG_3_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TRA0_TR0_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_3_D]

//>> GET_[TRA0_TR0_CONFIG_3_D]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_3_D(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_3));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_3_D,
           TRA0_TR0_CONFIG_3_D_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TRA0_TR0_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_3_D]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
