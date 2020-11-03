/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/pauc/reg00014_unused.H $      */
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

#ifndef __PAUC_REG00014_H_UNUSED__
#define __PAUC_REG00014_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace pauc
{
#endif


//>> PREP_[DL_PPE_WRAP_SCOM_FUNC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_DL_PPE_WRAP_SCOM_FUNC(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DL_PPE_WRAP_SCOM_FUNC;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[DL_PPE_WRAP_SCOM_FUNC]

//>> GET_[DL_PPE_WRAP_SCOM_FUNC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_DL_PPE_WRAP_SCOM_FUNC(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DL_PPE_WRAP_SCOM_FUNC;
#endif
    return fapi2::getScom(i_target, DL_PPE_WRAP_SCOM_FUNC, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[DL_PPE_WRAP_SCOM_FUNC]

//>> PUT_[DL_PPE_WRAP_SCOM_FUNC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_DL_PPE_WRAP_SCOM_FUNC(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FUNC));
#endif
    return fapi2::putScom(i_target, DL_PPE_WRAP_SCOM_FUNC, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[DL_PPE_WRAP_SCOM_FUNC]


//>> SET_[DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FUNC));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE]

//>> SET_[DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FUNC));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE]

//>> SET_[DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FUNC));
#endif
    return o_data.setBit<DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE]

//>> CLEAR_[DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FUNC));
#endif
    return o_data.clearBit<DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE]

//>> GET_[DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FUNC));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE]

//>> GET_[DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE]
static inline bool GET_DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FUNC));
#endif
    return i_data.getBit<DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE]

//>> SET_[DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FUNC));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE]

//>> SET_[DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FUNC));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE]

//>> SET_[DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FUNC));
#endif
    return o_data.setBit<DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE]

//>> CLEAR_[DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FUNC));
#endif
    return o_data.clearBit<DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE]

//>> GET_[DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FUNC));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE]

//>> GET_[DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE]
static inline bool GET_DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FUNC));
#endif
    return i_data.getBit<DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE]

//>> SET_[DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FUNC));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT]

//>> SET_[DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FUNC));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT]

//>> SET_[DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FUNC));
#endif
    return o_data.setBit<DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT]

//>> CLEAR_[DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FUNC));
#endif
    return o_data.clearBit<DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT]

//>> GET_[DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FUNC));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT]

//>> GET_[DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT]
static inline bool GET_DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FUNC));
#endif
    return i_data.getBit<DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT]

//>> SET_[DL_PPE_WRAP_SCOM_FUNC_PPE_FUNC_SPARES]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_SCOM_FUNC_PPE_FUNC_SPARES(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FUNC));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_SCOM_FUNC_PPE_FUNC_SPARES,
           DL_PPE_WRAP_SCOM_FUNC_PPE_FUNC_SPARES_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_SCOM_FUNC_PPE_FUNC_SPARES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_SCOM_FUNC_PPE_FUNC_SPARES]

//>> SET_[DL_PPE_WRAP_SCOM_FUNC_PPE_FUNC_SPARES]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_SCOM_FUNC_PPE_FUNC_SPARES(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FUNC));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_SCOM_FUNC_PPE_FUNC_SPARES,
           DL_PPE_WRAP_SCOM_FUNC_PPE_FUNC_SPARES_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_SCOM_FUNC_PPE_FUNC_SPARES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_SCOM_FUNC_PPE_FUNC_SPARES]

//>> GET_[DL_PPE_WRAP_SCOM_FUNC_PPE_FUNC_SPARES]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_SCOM_FUNC_PPE_FUNC_SPARES(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FUNC));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_SCOM_FUNC_PPE_FUNC_SPARES,
           DL_PPE_WRAP_SCOM_FUNC_PPE_FUNC_SPARES_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_SCOM_FUNC_PPE_FUNC_SPARES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_SCOM_FUNC_PPE_FUNC_SPARES]

//>> PREP_[PB_DOB23_DIB23_INT_ERR_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_DOB23_DIB23_INT_ERR_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_DOB23_DIB23_INT_ERR_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_DOB23_DIB23_INT_ERR_REG]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_DOB23_DIB23_INT_ERR_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_DOB23_DIB23_INT_ERR_REG;
#endif
    return fapi2::getScom(i_target, PB_DOB23_DIB23_INT_ERR_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG]

//>> PUT_[PB_DOB23_DIB23_INT_ERR_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_DOB23_DIB23_INT_ERR_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return fapi2::putScom(i_target, PB_DOB23_DIB23_INT_ERR_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_DOB23_DIB23_INT_ERR_REG]


//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW]

//>> PREP_[PB_MAILBOX_10_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_MAILBOX_10_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_MAILBOX_10_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_MAILBOX_10_REG]

//>> GET_[PB_MAILBOX_10_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_MAILBOX_10_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_MAILBOX_10_REG;
#endif
    return fapi2::getScom(i_target, PB_MAILBOX_10_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_MAILBOX_10_REG]

//>> PUT_[PB_MAILBOX_10_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_MAILBOX_10_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_MAILBOX_10_REG));
#endif
    return fapi2::putScom(i_target, PB_MAILBOX_10_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_MAILBOX_10_REG]


//>> PREP_[PB_MAILBOX_11_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_MAILBOX_11_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_MAILBOX_11_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_MAILBOX_11_REG]

//>> GET_[PB_MAILBOX_11_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_MAILBOX_11_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_MAILBOX_11_REG;
#endif
    return fapi2::getScom(i_target, PB_MAILBOX_11_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_MAILBOX_11_REG]

//>> PUT_[PB_MAILBOX_11_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_MAILBOX_11_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_MAILBOX_11_REG));
#endif
    return fapi2::putScom(i_target, PB_MAILBOX_11_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_MAILBOX_11_REG]


//>> PREP_[PB_PMU2_CNPM_COUNTER]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_PMU2_CNPM_COUNTER(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_PMU2_CNPM_COUNTER;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_PMU2_CNPM_COUNTER]

//>> GET_[PB_PMU2_CNPM_COUNTER]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_PMU2_CNPM_COUNTER(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_PMU2_CNPM_COUNTER;
#endif
    return fapi2::getScom(i_target, PB_PMU2_CNPM_COUNTER, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_PMU2_CNPM_COUNTER]

//>> PUT_[PB_PMU2_CNPM_COUNTER]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_PMU2_CNPM_COUNTER(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_PMU2_CNPM_COUNTER));
#endif
    return fapi2::putScom(i_target, PB_PMU2_CNPM_COUNTER, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_PMU2_CNPM_COUNTER]


//>> SET_[PB_PMU2_CNPM_COUNTER_0]
static inline fapi2::buffer<uint64_t>& SET_PB_PMU2_CNPM_COUNTER_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU2_CNPM_COUNTER));
#endif
    return o_data.insertFromRight<PB_PMU2_CNPM_COUNTER_0,
           PB_PMU2_CNPM_COUNTER_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PMU2_CNPM_COUNTER_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PMU2_CNPM_COUNTER_0]

//>> SET_[PB_PMU2_CNPM_COUNTER_0]
static inline fapi2::buffer<uint64_t>& SET_PB_PMU2_CNPM_COUNTER_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU2_CNPM_COUNTER));
#endif
    return o_data.insertFromRight<PB_PMU2_CNPM_COUNTER_0,
           PB_PMU2_CNPM_COUNTER_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PMU2_CNPM_COUNTER_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PMU2_CNPM_COUNTER_0]

//>> GET_[PB_PMU2_CNPM_COUNTER_0]
static inline fapi2::buffer<uint64_t>& GET_PB_PMU2_CNPM_COUNTER_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU2_CNPM_COUNTER));
#endif
    return i_data.extractToRight<PB_PMU2_CNPM_COUNTER_0,
           PB_PMU2_CNPM_COUNTER_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PMU2_CNPM_COUNTER_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PMU2_CNPM_COUNTER_0]

//>> SET_[PB_PMU2_CNPM_COUNTER_1]
static inline fapi2::buffer<uint64_t>& SET_PB_PMU2_CNPM_COUNTER_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU2_CNPM_COUNTER));
#endif
    return o_data.insertFromRight<PB_PMU2_CNPM_COUNTER_1,
           PB_PMU2_CNPM_COUNTER_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PMU2_CNPM_COUNTER_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PMU2_CNPM_COUNTER_1]

//>> SET_[PB_PMU2_CNPM_COUNTER_1]
static inline fapi2::buffer<uint64_t>& SET_PB_PMU2_CNPM_COUNTER_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU2_CNPM_COUNTER));
#endif
    return o_data.insertFromRight<PB_PMU2_CNPM_COUNTER_1,
           PB_PMU2_CNPM_COUNTER_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PMU2_CNPM_COUNTER_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PMU2_CNPM_COUNTER_1]

//>> GET_[PB_PMU2_CNPM_COUNTER_1]
static inline fapi2::buffer<uint64_t>& GET_PB_PMU2_CNPM_COUNTER_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU2_CNPM_COUNTER));
#endif
    return i_data.extractToRight<PB_PMU2_CNPM_COUNTER_1,
           PB_PMU2_CNPM_COUNTER_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PMU2_CNPM_COUNTER_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PMU2_CNPM_COUNTER_1]

//>> SET_[PB_PMU2_CNPM_COUNTER_2]
static inline fapi2::buffer<uint64_t>& SET_PB_PMU2_CNPM_COUNTER_2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU2_CNPM_COUNTER));
#endif
    return o_data.insertFromRight<PB_PMU2_CNPM_COUNTER_2,
           PB_PMU2_CNPM_COUNTER_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PMU2_CNPM_COUNTER_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PMU2_CNPM_COUNTER_2]

//>> SET_[PB_PMU2_CNPM_COUNTER_2]
static inline fapi2::buffer<uint64_t>& SET_PB_PMU2_CNPM_COUNTER_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU2_CNPM_COUNTER));
#endif
    return o_data.insertFromRight<PB_PMU2_CNPM_COUNTER_2,
           PB_PMU2_CNPM_COUNTER_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PMU2_CNPM_COUNTER_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PMU2_CNPM_COUNTER_2]

//>> GET_[PB_PMU2_CNPM_COUNTER_2]
static inline fapi2::buffer<uint64_t>& GET_PB_PMU2_CNPM_COUNTER_2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU2_CNPM_COUNTER));
#endif
    return i_data.extractToRight<PB_PMU2_CNPM_COUNTER_2,
           PB_PMU2_CNPM_COUNTER_2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PMU2_CNPM_COUNTER_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PMU2_CNPM_COUNTER_2]

//>> SET_[PB_PMU2_CNPM_COUNTER_3]
static inline fapi2::buffer<uint64_t>& SET_PB_PMU2_CNPM_COUNTER_3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU2_CNPM_COUNTER));
#endif
    return o_data.insertFromRight<PB_PMU2_CNPM_COUNTER_3,
           PB_PMU2_CNPM_COUNTER_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PMU2_CNPM_COUNTER_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PMU2_CNPM_COUNTER_3]

//>> SET_[PB_PMU2_CNPM_COUNTER_3]
static inline fapi2::buffer<uint64_t>& SET_PB_PMU2_CNPM_COUNTER_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU2_CNPM_COUNTER));
#endif
    return o_data.insertFromRight<PB_PMU2_CNPM_COUNTER_3,
           PB_PMU2_CNPM_COUNTER_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PMU2_CNPM_COUNTER_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PMU2_CNPM_COUNTER_3]

//>> GET_[PB_PMU2_CNPM_COUNTER_3]
static inline fapi2::buffer<uint64_t>& GET_PB_PMU2_CNPM_COUNTER_3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU2_CNPM_COUNTER));
#endif
    return i_data.extractToRight<PB_PMU2_CNPM_COUNTER_3,
           PB_PMU2_CNPM_COUNTER_3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PMU2_CNPM_COUNTER_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PMU2_CNPM_COUNTER_3]

//>> PREP_[RCMD_RATE_CFG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_RCMD_RATE_CFG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RCMD_RATE_CFG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[RCMD_RATE_CFG]

//>> GET_[RCMD_RATE_CFG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_RCMD_RATE_CFG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RCMD_RATE_CFG;
#endif
    return fapi2::getScom(i_target, RCMD_RATE_CFG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[RCMD_RATE_CFG]

//>> PUT_[RCMD_RATE_CFG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_RCMD_RATE_CFG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return fapi2::putScom(i_target, RCMD_RATE_CFG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[RCMD_RATE_CFG]


//>> SET_[RCMD_RATE_CFG_X_RCMD_RATE]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_X_RCMD_RATE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_X_RCMD_RATE,
           RCMD_RATE_CFG_X_RCMD_RATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access RCMD_RATE_CFG_X_RCMD_RATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_X_RCMD_RATE]

//>> SET_[RCMD_RATE_CFG_X_RCMD_RATE]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_X_RCMD_RATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_X_RCMD_RATE,
           RCMD_RATE_CFG_X_RCMD_RATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access RCMD_RATE_CFG_X_RCMD_RATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_X_RCMD_RATE]

//>> GET_[RCMD_RATE_CFG_X_RCMD_RATE]
static inline fapi2::buffer<uint64_t>& GET_RCMD_RATE_CFG_X_RCMD_RATE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return i_data.extractToRight<RCMD_RATE_CFG_X_RCMD_RATE,
           RCMD_RATE_CFG_X_RCMD_RATE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access RCMD_RATE_CFG_X_RCMD_RATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RCMD_RATE_CFG_X_RCMD_RATE]

//>> SET_[RCMD_RATE_CFG_Y_RCMD_RATE]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_Y_RCMD_RATE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_Y_RCMD_RATE,
           RCMD_RATE_CFG_Y_RCMD_RATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_RCMD_RATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_Y_RCMD_RATE]

//>> SET_[RCMD_RATE_CFG_Y_RCMD_RATE]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_Y_RCMD_RATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_Y_RCMD_RATE,
           RCMD_RATE_CFG_Y_RCMD_RATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_RCMD_RATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_Y_RCMD_RATE]

//>> GET_[RCMD_RATE_CFG_Y_RCMD_RATE]
static inline fapi2::buffer<uint64_t>& GET_RCMD_RATE_CFG_Y_RCMD_RATE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return i_data.extractToRight<RCMD_RATE_CFG_Y_RCMD_RATE,
           RCMD_RATE_CFG_Y_RCMD_RATE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_RCMD_RATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RCMD_RATE_CFG_Y_RCMD_RATE]

//>> SET_[RCMD_RATE_CFG_X_RCMD_RATE_ADDER]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_X_RCMD_RATE_ADDER(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_X_RCMD_RATE_ADDER,
           RCMD_RATE_CFG_X_RCMD_RATE_ADDER_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access RCMD_RATE_CFG_X_RCMD_RATE_ADDER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_X_RCMD_RATE_ADDER]

//>> SET_[RCMD_RATE_CFG_X_RCMD_RATE_ADDER]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_X_RCMD_RATE_ADDER(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_X_RCMD_RATE_ADDER,
           RCMD_RATE_CFG_X_RCMD_RATE_ADDER_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access RCMD_RATE_CFG_X_RCMD_RATE_ADDER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_X_RCMD_RATE_ADDER]

//>> GET_[RCMD_RATE_CFG_X_RCMD_RATE_ADDER]
static inline fapi2::buffer<uint64_t>& GET_RCMD_RATE_CFG_X_RCMD_RATE_ADDER(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return i_data.extractToRight<RCMD_RATE_CFG_X_RCMD_RATE_ADDER,
           RCMD_RATE_CFG_X_RCMD_RATE_ADDER_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access RCMD_RATE_CFG_X_RCMD_RATE_ADDER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RCMD_RATE_CFG_X_RCMD_RATE_ADDER]

//>> SET_[RCMD_RATE_CFG_Y_RCMD_RATE_ADDER]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_Y_RCMD_RATE_ADDER(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_Y_RCMD_RATE_ADDER,
           RCMD_RATE_CFG_Y_RCMD_RATE_ADDER_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_RCMD_RATE_ADDER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_Y_RCMD_RATE_ADDER]

//>> SET_[RCMD_RATE_CFG_Y_RCMD_RATE_ADDER]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_Y_RCMD_RATE_ADDER(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_Y_RCMD_RATE_ADDER,
           RCMD_RATE_CFG_Y_RCMD_RATE_ADDER_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_RCMD_RATE_ADDER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_Y_RCMD_RATE_ADDER]

//>> GET_[RCMD_RATE_CFG_Y_RCMD_RATE_ADDER]
static inline fapi2::buffer<uint64_t>& GET_RCMD_RATE_CFG_Y_RCMD_RATE_ADDER(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return i_data.extractToRight<RCMD_RATE_CFG_Y_RCMD_RATE_ADDER,
           RCMD_RATE_CFG_Y_RCMD_RATE_ADDER_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_RCMD_RATE_ADDER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RCMD_RATE_CFG_Y_RCMD_RATE_ADDER]

//>> SET_[RCMD_RATE_CFG_X_DISABLE_TURBO]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_X_DISABLE_TURBO(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_X_DISABLE_TURBO,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access RCMD_RATE_CFG_X_DISABLE_TURBO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_X_DISABLE_TURBO]

//>> SET_[RCMD_RATE_CFG_X_DISABLE_TURBO]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_X_DISABLE_TURBO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_X_DISABLE_TURBO,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access RCMD_RATE_CFG_X_DISABLE_TURBO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_X_DISABLE_TURBO]

//>> SET_[RCMD_RATE_CFG_X_DISABLE_TURBO]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_X_DISABLE_TURBO(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.setBit<RCMD_RATE_CFG_X_DISABLE_TURBO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access RCMD_RATE_CFG_X_DISABLE_TURBO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_X_DISABLE_TURBO]

//>> CLEAR_[RCMD_RATE_CFG_X_DISABLE_TURBO]
static inline fapi2::buffer<uint64_t>& CLEAR_RCMD_RATE_CFG_X_DISABLE_TURBO(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.clearBit<RCMD_RATE_CFG_X_DISABLE_TURBO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access RCMD_RATE_CFG_X_DISABLE_TURBO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RCMD_RATE_CFG_X_DISABLE_TURBO]

//>> GET_[RCMD_RATE_CFG_X_DISABLE_TURBO]
static inline fapi2::buffer<uint64_t>& GET_RCMD_RATE_CFG_X_DISABLE_TURBO(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return i_data.extractToRight<RCMD_RATE_CFG_X_DISABLE_TURBO,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access RCMD_RATE_CFG_X_DISABLE_TURBO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RCMD_RATE_CFG_X_DISABLE_TURBO]

//>> GET_[RCMD_RATE_CFG_X_DISABLE_TURBO]
static inline bool GET_RCMD_RATE_CFG_X_DISABLE_TURBO(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return i_data.getBit<RCMD_RATE_CFG_X_DISABLE_TURBO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access RCMD_RATE_CFG_X_DISABLE_TURBO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RCMD_RATE_CFG_X_DISABLE_TURBO]

//>> SET_[RCMD_RATE_CFG_X_CMD_GAP_REFERENCE]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_X_CMD_GAP_REFERENCE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_X_CMD_GAP_REFERENCE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access RCMD_RATE_CFG_X_CMD_GAP_REFERENCE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_X_CMD_GAP_REFERENCE]

//>> SET_[RCMD_RATE_CFG_X_CMD_GAP_REFERENCE]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_X_CMD_GAP_REFERENCE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_X_CMD_GAP_REFERENCE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access RCMD_RATE_CFG_X_CMD_GAP_REFERENCE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_X_CMD_GAP_REFERENCE]

//>> SET_[RCMD_RATE_CFG_X_CMD_GAP_REFERENCE]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_X_CMD_GAP_REFERENCE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.setBit<RCMD_RATE_CFG_X_CMD_GAP_REFERENCE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access RCMD_RATE_CFG_X_CMD_GAP_REFERENCE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_X_CMD_GAP_REFERENCE]

//>> CLEAR_[RCMD_RATE_CFG_X_CMD_GAP_REFERENCE]
static inline fapi2::buffer<uint64_t>& CLEAR_RCMD_RATE_CFG_X_CMD_GAP_REFERENCE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.clearBit<RCMD_RATE_CFG_X_CMD_GAP_REFERENCE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access RCMD_RATE_CFG_X_CMD_GAP_REFERENCE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RCMD_RATE_CFG_X_CMD_GAP_REFERENCE]

//>> GET_[RCMD_RATE_CFG_X_CMD_GAP_REFERENCE]
static inline fapi2::buffer<uint64_t>& GET_RCMD_RATE_CFG_X_CMD_GAP_REFERENCE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return i_data.extractToRight<RCMD_RATE_CFG_X_CMD_GAP_REFERENCE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access RCMD_RATE_CFG_X_CMD_GAP_REFERENCE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RCMD_RATE_CFG_X_CMD_GAP_REFERENCE]

//>> GET_[RCMD_RATE_CFG_X_CMD_GAP_REFERENCE]
static inline bool GET_RCMD_RATE_CFG_X_CMD_GAP_REFERENCE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return i_data.getBit<RCMD_RATE_CFG_X_CMD_GAP_REFERENCE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access RCMD_RATE_CFG_X_CMD_GAP_REFERENCE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RCMD_RATE_CFG_X_CMD_GAP_REFERENCE]

//>> SET_[RCMD_RATE_CFG_X_CMD_GAP_MODE]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_X_CMD_GAP_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_X_CMD_GAP_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access RCMD_RATE_CFG_X_CMD_GAP_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_X_CMD_GAP_MODE]

//>> SET_[RCMD_RATE_CFG_X_CMD_GAP_MODE]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_X_CMD_GAP_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_X_CMD_GAP_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access RCMD_RATE_CFG_X_CMD_GAP_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_X_CMD_GAP_MODE]

//>> SET_[RCMD_RATE_CFG_X_CMD_GAP_MODE]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_X_CMD_GAP_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.setBit<RCMD_RATE_CFG_X_CMD_GAP_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access RCMD_RATE_CFG_X_CMD_GAP_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_X_CMD_GAP_MODE]

//>> CLEAR_[RCMD_RATE_CFG_X_CMD_GAP_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_RCMD_RATE_CFG_X_CMD_GAP_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.clearBit<RCMD_RATE_CFG_X_CMD_GAP_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access RCMD_RATE_CFG_X_CMD_GAP_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RCMD_RATE_CFG_X_CMD_GAP_MODE]

//>> GET_[RCMD_RATE_CFG_X_CMD_GAP_MODE]
static inline fapi2::buffer<uint64_t>& GET_RCMD_RATE_CFG_X_CMD_GAP_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return i_data.extractToRight<RCMD_RATE_CFG_X_CMD_GAP_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access RCMD_RATE_CFG_X_CMD_GAP_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RCMD_RATE_CFG_X_CMD_GAP_MODE]

//>> GET_[RCMD_RATE_CFG_X_CMD_GAP_MODE]
static inline bool GET_RCMD_RATE_CFG_X_CMD_GAP_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return i_data.getBit<RCMD_RATE_CFG_X_CMD_GAP_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access RCMD_RATE_CFG_X_CMD_GAP_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RCMD_RATE_CFG_X_CMD_GAP_MODE]

//>> SET_[RCMD_RATE_CFG_X_CMD_GAP_TABLE]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_X_CMD_GAP_TABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_X_CMD_GAP_TABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access RCMD_RATE_CFG_X_CMD_GAP_TABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_X_CMD_GAP_TABLE]

//>> SET_[RCMD_RATE_CFG_X_CMD_GAP_TABLE]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_X_CMD_GAP_TABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_X_CMD_GAP_TABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access RCMD_RATE_CFG_X_CMD_GAP_TABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_X_CMD_GAP_TABLE]

//>> SET_[RCMD_RATE_CFG_X_CMD_GAP_TABLE]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_X_CMD_GAP_TABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.setBit<RCMD_RATE_CFG_X_CMD_GAP_TABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access RCMD_RATE_CFG_X_CMD_GAP_TABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_X_CMD_GAP_TABLE]

//>> CLEAR_[RCMD_RATE_CFG_X_CMD_GAP_TABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_RCMD_RATE_CFG_X_CMD_GAP_TABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.clearBit<RCMD_RATE_CFG_X_CMD_GAP_TABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access RCMD_RATE_CFG_X_CMD_GAP_TABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RCMD_RATE_CFG_X_CMD_GAP_TABLE]

//>> GET_[RCMD_RATE_CFG_X_CMD_GAP_TABLE]
static inline fapi2::buffer<uint64_t>& GET_RCMD_RATE_CFG_X_CMD_GAP_TABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return i_data.extractToRight<RCMD_RATE_CFG_X_CMD_GAP_TABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access RCMD_RATE_CFG_X_CMD_GAP_TABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RCMD_RATE_CFG_X_CMD_GAP_TABLE]

//>> GET_[RCMD_RATE_CFG_X_CMD_GAP_TABLE]
static inline bool GET_RCMD_RATE_CFG_X_CMD_GAP_TABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return i_data.getBit<RCMD_RATE_CFG_X_CMD_GAP_TABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access RCMD_RATE_CFG_X_CMD_GAP_TABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RCMD_RATE_CFG_X_CMD_GAP_TABLE]

//>> SET_[RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK]

//>> SET_[RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK]

//>> SET_[RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.setBit<RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK]

//>> CLEAR_[RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK]
static inline fapi2::buffer<uint64_t>& CLEAR_RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.clearBit<RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK]

//>> GET_[RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK]
static inline fapi2::buffer<uint64_t>& GET_RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return i_data.extractToRight<RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK]

//>> GET_[RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK]
static inline bool GET_RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return i_data.getBit<RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK]

//>> SET_[RCMD_RATE_CFG_X_CMD_GAP_CFG]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_X_CMD_GAP_CFG(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_X_CMD_GAP_CFG,
           RCMD_RATE_CFG_X_CMD_GAP_CFG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access RCMD_RATE_CFG_X_CMD_GAP_CFG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_X_CMD_GAP_CFG]

//>> SET_[RCMD_RATE_CFG_X_CMD_GAP_CFG]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_X_CMD_GAP_CFG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_X_CMD_GAP_CFG,
           RCMD_RATE_CFG_X_CMD_GAP_CFG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access RCMD_RATE_CFG_X_CMD_GAP_CFG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_X_CMD_GAP_CFG]

//>> GET_[RCMD_RATE_CFG_X_CMD_GAP_CFG]
static inline fapi2::buffer<uint64_t>& GET_RCMD_RATE_CFG_X_CMD_GAP_CFG(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return i_data.extractToRight<RCMD_RATE_CFG_X_CMD_GAP_CFG,
           RCMD_RATE_CFG_X_CMD_GAP_CFG_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access RCMD_RATE_CFG_X_CMD_GAP_CFG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RCMD_RATE_CFG_X_CMD_GAP_CFG]

//>> SET_[RCMD_RATE_CFG_Y_DISABLE_TURBO]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_Y_DISABLE_TURBO(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_Y_DISABLE_TURBO,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_DISABLE_TURBO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_Y_DISABLE_TURBO]

//>> SET_[RCMD_RATE_CFG_Y_DISABLE_TURBO]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_Y_DISABLE_TURBO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_Y_DISABLE_TURBO,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_DISABLE_TURBO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_Y_DISABLE_TURBO]

//>> SET_[RCMD_RATE_CFG_Y_DISABLE_TURBO]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_Y_DISABLE_TURBO(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.setBit<RCMD_RATE_CFG_Y_DISABLE_TURBO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_DISABLE_TURBO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_Y_DISABLE_TURBO]

//>> CLEAR_[RCMD_RATE_CFG_Y_DISABLE_TURBO]
static inline fapi2::buffer<uint64_t>& CLEAR_RCMD_RATE_CFG_Y_DISABLE_TURBO(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.clearBit<RCMD_RATE_CFG_Y_DISABLE_TURBO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_DISABLE_TURBO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RCMD_RATE_CFG_Y_DISABLE_TURBO]

//>> GET_[RCMD_RATE_CFG_Y_DISABLE_TURBO]
static inline fapi2::buffer<uint64_t>& GET_RCMD_RATE_CFG_Y_DISABLE_TURBO(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return i_data.extractToRight<RCMD_RATE_CFG_Y_DISABLE_TURBO,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_DISABLE_TURBO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RCMD_RATE_CFG_Y_DISABLE_TURBO]

//>> GET_[RCMD_RATE_CFG_Y_DISABLE_TURBO]
static inline bool GET_RCMD_RATE_CFG_Y_DISABLE_TURBO(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return i_data.getBit<RCMD_RATE_CFG_Y_DISABLE_TURBO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_DISABLE_TURBO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RCMD_RATE_CFG_Y_DISABLE_TURBO]

//>> SET_[RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE]

//>> SET_[RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE]

//>> SET_[RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.setBit<RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE]

//>> CLEAR_[RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE]
static inline fapi2::buffer<uint64_t>& CLEAR_RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.clearBit<RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE]

//>> GET_[RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE]
static inline fapi2::buffer<uint64_t>& GET_RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return i_data.extractToRight<RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE]

//>> GET_[RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE]
static inline bool GET_RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return i_data.getBit<RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE]

//>> SET_[RCMD_RATE_CFG_Y_CMD_GAP_MODE]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_Y_CMD_GAP_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_Y_CMD_GAP_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_CMD_GAP_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_Y_CMD_GAP_MODE]

//>> SET_[RCMD_RATE_CFG_Y_CMD_GAP_MODE]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_Y_CMD_GAP_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_Y_CMD_GAP_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_CMD_GAP_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_Y_CMD_GAP_MODE]

//>> SET_[RCMD_RATE_CFG_Y_CMD_GAP_MODE]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_Y_CMD_GAP_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.setBit<RCMD_RATE_CFG_Y_CMD_GAP_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_CMD_GAP_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_Y_CMD_GAP_MODE]

//>> CLEAR_[RCMD_RATE_CFG_Y_CMD_GAP_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_RCMD_RATE_CFG_Y_CMD_GAP_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.clearBit<RCMD_RATE_CFG_Y_CMD_GAP_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_CMD_GAP_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RCMD_RATE_CFG_Y_CMD_GAP_MODE]

//>> GET_[RCMD_RATE_CFG_Y_CMD_GAP_MODE]
static inline fapi2::buffer<uint64_t>& GET_RCMD_RATE_CFG_Y_CMD_GAP_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return i_data.extractToRight<RCMD_RATE_CFG_Y_CMD_GAP_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_CMD_GAP_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RCMD_RATE_CFG_Y_CMD_GAP_MODE]

//>> GET_[RCMD_RATE_CFG_Y_CMD_GAP_MODE]
static inline bool GET_RCMD_RATE_CFG_Y_CMD_GAP_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return i_data.getBit<RCMD_RATE_CFG_Y_CMD_GAP_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_CMD_GAP_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RCMD_RATE_CFG_Y_CMD_GAP_MODE]

//>> SET_[RCMD_RATE_CFG_Y_CMD_GAP_TABLE]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_Y_CMD_GAP_TABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_Y_CMD_GAP_TABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_CMD_GAP_TABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_Y_CMD_GAP_TABLE]

//>> SET_[RCMD_RATE_CFG_Y_CMD_GAP_TABLE]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_Y_CMD_GAP_TABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_Y_CMD_GAP_TABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_CMD_GAP_TABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_Y_CMD_GAP_TABLE]

//>> SET_[RCMD_RATE_CFG_Y_CMD_GAP_TABLE]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_Y_CMD_GAP_TABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.setBit<RCMD_RATE_CFG_Y_CMD_GAP_TABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_CMD_GAP_TABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_Y_CMD_GAP_TABLE]

//>> CLEAR_[RCMD_RATE_CFG_Y_CMD_GAP_TABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_RCMD_RATE_CFG_Y_CMD_GAP_TABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.clearBit<RCMD_RATE_CFG_Y_CMD_GAP_TABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_CMD_GAP_TABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RCMD_RATE_CFG_Y_CMD_GAP_TABLE]

//>> GET_[RCMD_RATE_CFG_Y_CMD_GAP_TABLE]
static inline fapi2::buffer<uint64_t>& GET_RCMD_RATE_CFG_Y_CMD_GAP_TABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return i_data.extractToRight<RCMD_RATE_CFG_Y_CMD_GAP_TABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_CMD_GAP_TABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RCMD_RATE_CFG_Y_CMD_GAP_TABLE]

//>> GET_[RCMD_RATE_CFG_Y_CMD_GAP_TABLE]
static inline bool GET_RCMD_RATE_CFG_Y_CMD_GAP_TABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return i_data.getBit<RCMD_RATE_CFG_Y_CMD_GAP_TABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_CMD_GAP_TABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RCMD_RATE_CFG_Y_CMD_GAP_TABLE]

//>> SET_[RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK]

//>> SET_[RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK]

//>> SET_[RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.setBit<RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK]

//>> CLEAR_[RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK]
static inline fapi2::buffer<uint64_t>& CLEAR_RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.clearBit<RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK]

//>> GET_[RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK]
static inline fapi2::buffer<uint64_t>& GET_RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return i_data.extractToRight<RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK]

//>> GET_[RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK]
static inline bool GET_RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return i_data.getBit<RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK]

//>> SET_[RCMD_RATE_CFG_Y_CMD_GAP_CFG]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_Y_CMD_GAP_CFG(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_Y_CMD_GAP_CFG,
           RCMD_RATE_CFG_Y_CMD_GAP_CFG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_CMD_GAP_CFG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_Y_CMD_GAP_CFG]

//>> SET_[RCMD_RATE_CFG_Y_CMD_GAP_CFG]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_Y_CMD_GAP_CFG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_Y_CMD_GAP_CFG,
           RCMD_RATE_CFG_Y_CMD_GAP_CFG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_CMD_GAP_CFG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_Y_CMD_GAP_CFG]

//>> GET_[RCMD_RATE_CFG_Y_CMD_GAP_CFG]
static inline fapi2::buffer<uint64_t>& GET_RCMD_RATE_CFG_Y_CMD_GAP_CFG(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return i_data.extractToRight<RCMD_RATE_CFG_Y_CMD_GAP_CFG,
           RCMD_RATE_CFG_Y_CMD_GAP_CFG_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_CMD_GAP_CFG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RCMD_RATE_CFG_Y_CMD_GAP_CFG]

//>> PREP_[EPS_DBG_TRACE_REG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_DBG_TRACE_REG_1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_DBG_TRACE_REG_1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_DBG_TRACE_REG_1]

//>> GET_[EPS_DBG_TRACE_REG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_DBG_TRACE_REG_1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_DBG_TRACE_REG_1;
#endif
    return fapi2::getScom(i_target, EPS_DBG_TRACE_REG_1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1]

//>> PUT_[EPS_DBG_TRACE_REG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_DBG_TRACE_REG_1(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return fapi2::putScom(i_target, EPS_DBG_TRACE_REG_1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_DBG_TRACE_REG_1]


//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO,
           EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO,
           EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO]

//>> GET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO,
           EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO,
           EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO,
           EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO]

//>> GET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO,
           EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO]

//>> SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO,
           EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO]

//>> SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO,
           EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO]

//>> GET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO,
           EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO,
           EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO,
           EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO]

//>> GET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO,
           EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO,
           EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO,
           EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO]

//>> GET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO,
           EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO]

//>> SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO,
           EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO]

//>> SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO,
           EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO]

//>> GET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO,
           EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN]

//>> GET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN]

//>> GET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN]
static inline bool GET_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN]

//>> GET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN]

//>> GET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN]
static inline bool GET_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN]

//>> GET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN]

//>> GET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN]
static inline bool GET_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN]

//>> GET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN]

//>> GET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN]
static inline bool GET_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN]

//>> GET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN]

//>> GET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN]
static inline bool GET_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN]

//>> GET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN]

//>> GET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN]
static inline bool GET_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK]

//>> GET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK]

//>> GET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK]
static inline bool GET_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK]

//>> GET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK]

//>> GET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK]
static inline bool GET_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK]

//>> GET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK]

//>> GET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK]
static inline bool GET_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK]

//>> GET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK]

//>> GET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK]
static inline bool GET_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK]

//>> GET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK]

//>> GET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK]
static inline bool GET_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK]

//>> GET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK]

//>> GET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK]
static inline bool GET_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT,
           EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT,
           EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT]

//>> GET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT,
           EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR]

//>> GET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR]

//>> GET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR]
static inline bool GET_EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT,
           EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT,
           EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT]

//>> GET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT,
           EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR]

//>> GET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR]

//>> GET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR]
static inline bool GET_EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR]

//>> PREP_[TRA1_TR0_CONFIG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TRA1_TR0_CONFIG_1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA1_TR0_CONFIG_1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TRA1_TR0_CONFIG_1]

//>> GET_[TRA1_TR0_CONFIG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TRA1_TR0_CONFIG_1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA1_TR0_CONFIG_1;
#endif
    return fapi2::getScom(i_target, TRA1_TR0_CONFIG_1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TRA1_TR0_CONFIG_1]

//>> PUT_[TRA1_TR0_CONFIG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TRA1_TR0_CONFIG_1(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_1));
#endif
    return fapi2::putScom(i_target, TRA1_TR0_CONFIG_1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TRA1_TR0_CONFIG_1]


//>> SET_[TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_1));
#endif
    return o_data.insertFromRight<TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87,
           TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>> SET_[TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_1));
#endif
    return o_data.insertFromRight<TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87,
           TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>> GET_[TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]
static inline fapi2::buffer<uint64_t>& GET_TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_1));
#endif
    return i_data.extractToRight<TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87,
           TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>> PREP_[DL_PPE_WRAP_SCOM_FUNC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_DL_PPE_WRAP_SCOM_FUNC(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    scomt::last_scom = DL_PPE_WRAP_SCOM_FUNC;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[DL_PPE_WRAP_SCOM_FUNC]

//>> GET_[DL_PPE_WRAP_SCOM_FUNC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_DL_PPE_WRAP_SCOM_FUNC(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    scomt::last_scom = DL_PPE_WRAP_SCOM_FUNC;
#endif
    return fapi2::getScom(i_target, DL_PPE_WRAP_SCOM_FUNC, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[DL_PPE_WRAP_SCOM_FUNC]

//>> PUT_[DL_PPE_WRAP_SCOM_FUNC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_DL_PPE_WRAP_SCOM_FUNC(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FUNC));
#endif
    return fapi2::putScom(i_target, DL_PPE_WRAP_SCOM_FUNC, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[DL_PPE_WRAP_SCOM_FUNC]


//>> SET_[DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FUNC));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE]

//>> SET_[DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FUNC));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE]

//>> SET_[DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FUNC));
#endif
    return o_data.setBit<DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE]

//>> CLEAR_[DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FUNC));
#endif
    return o_data.clearBit<DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE]

//>> GET_[DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FUNC));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE]

//>> GET_[DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE]
static inline bool GET_DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FUNC));
#endif
    return i_data.getBit<DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_SCOM_FUNC_EOL_SLOW_TOGGLE]

//>> SET_[DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FUNC));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE]

//>> SET_[DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FUNC));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE]

//>> SET_[DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FUNC));
#endif
    return o_data.setBit<DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE]

//>> CLEAR_[DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FUNC));
#endif
    return o_data.clearBit<DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE]

//>> GET_[DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FUNC));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE]

//>> GET_[DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE]
static inline bool GET_DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FUNC));
#endif
    return i_data.getBit<DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_SCOM_FUNC_EOL_FAST_TOGGLE]

//>> SET_[DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FUNC));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT]

//>> SET_[DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FUNC));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT]

//>> SET_[DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FUNC));
#endif
    return o_data.setBit<DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT]

//>> CLEAR_[DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FUNC));
#endif
    return o_data.clearBit<DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT]

//>> GET_[DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FUNC));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT]

//>> GET_[DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT]
static inline bool GET_DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FUNC));
#endif
    return i_data.getBit<DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_SCOM_FUNC_PPE_INTERRUPT]

//>> SET_[DL_PPE_WRAP_SCOM_FUNC_PPE_FUNC_SPARES]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_SCOM_FUNC_PPE_FUNC_SPARES(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FUNC));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_SCOM_FUNC_PPE_FUNC_SPARES,
           DL_PPE_WRAP_SCOM_FUNC_PPE_FUNC_SPARES_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_SCOM_FUNC_PPE_FUNC_SPARES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_SCOM_FUNC_PPE_FUNC_SPARES]

//>> SET_[DL_PPE_WRAP_SCOM_FUNC_PPE_FUNC_SPARES]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_SCOM_FUNC_PPE_FUNC_SPARES(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FUNC));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_SCOM_FUNC_PPE_FUNC_SPARES,
           DL_PPE_WRAP_SCOM_FUNC_PPE_FUNC_SPARES_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_SCOM_FUNC_PPE_FUNC_SPARES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_SCOM_FUNC_PPE_FUNC_SPARES]

//>> GET_[DL_PPE_WRAP_SCOM_FUNC_PPE_FUNC_SPARES]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_SCOM_FUNC_PPE_FUNC_SPARES(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_SCOM_FUNC));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_SCOM_FUNC_PPE_FUNC_SPARES,
           DL_PPE_WRAP_SCOM_FUNC_PPE_FUNC_SPARES_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_SCOM_FUNC_PPE_FUNC_SPARES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_SCOM_FUNC_PPE_FUNC_SPARES]

//>> PREP_[EPS_DBG_TRACE_REG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_DBG_TRACE_REG_1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_DBG_TRACE_REG_1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_DBG_TRACE_REG_1]

//>> GET_[EPS_DBG_TRACE_REG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_DBG_TRACE_REG_1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_DBG_TRACE_REG_1;
#endif
    return fapi2::getScom(i_target, EPS_DBG_TRACE_REG_1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1]

//>> PUT_[EPS_DBG_TRACE_REG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_DBG_TRACE_REG_1(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return fapi2::putScom(i_target, EPS_DBG_TRACE_REG_1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_DBG_TRACE_REG_1]


//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO,
           EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO,
           EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO]

//>> GET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO,
           EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO,
           EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO,
           EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO]

//>> GET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO,
           EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO]

//>> SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO,
           EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO]

//>> SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO,
           EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO]

//>> GET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO,
           EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO,
           EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO,
           EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO]

//>> GET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO,
           EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO,
           EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO,
           EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO]

//>> GET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO,
           EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO]

//>> SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO,
           EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO]

//>> SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO,
           EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO]

//>> GET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO,
           EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN]

//>> GET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN]

//>> GET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN]
static inline bool GET_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN]

//>> GET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN]

//>> GET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN]
static inline bool GET_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN]

//>> GET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN]

//>> GET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN]
static inline bool GET_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN]

//>> GET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN]

//>> GET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN]
static inline bool GET_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN]

//>> GET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN]

//>> GET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN]
static inline bool GET_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN]

//>> GET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN]

//>> GET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN]
static inline bool GET_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK]

//>> GET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK]

//>> GET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK]
static inline bool GET_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK]

//>> GET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK]

//>> GET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK]
static inline bool GET_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK]

//>> GET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK]

//>> GET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK]
static inline bool GET_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK]

//>> GET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK]

//>> GET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK]
static inline bool GET_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK]

//>> GET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK]

//>> GET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK]
static inline bool GET_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK]

//>> GET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK]

//>> GET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK]
static inline bool GET_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT,
           EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT,
           EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT]

//>> GET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT,
           EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR]

//>> GET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR]

//>> GET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR]
static inline bool GET_EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT,
           EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT,
           EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT]

//>> GET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT,
           EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR]

//>> GET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR]

//>> GET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR]
static inline bool GET_EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR]

//>> PREP_[PB_DOB23_DIB23_INT_ERR_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_DOB23_DIB23_INT_ERR_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_DOB23_DIB23_INT_ERR_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_DOB23_DIB23_INT_ERR_REG]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_DOB23_DIB23_INT_ERR_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_DOB23_DIB23_INT_ERR_REG;
#endif
    return fapi2::getScom(i_target, PB_DOB23_DIB23_INT_ERR_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG]

//>> PUT_[PB_DOB23_DIB23_INT_ERR_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_DOB23_DIB23_INT_ERR_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return fapi2::putScom(i_target, PB_DOB23_DIB23_INT_ERR_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_DOB23_DIB23_INT_ERR_REG]


//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PBITERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_RTAG_PERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_MISC_PERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_EVENPERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_ODDPERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_EVENPERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_ODDPERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_EVENPERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_ODDPERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_EVENPERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_ODDPERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC0_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F0VC1_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC0_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_F1VC1_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC0_PREFETCH_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_VC1_PREFETCH_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN0_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_EVN1_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PBITERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_PERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_MISC_PERR]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD0_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_ODD1_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_RTAG_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_DATA_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC0_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_IB23_VC1_OVERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC0_OVER_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF0VC1_OVER_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC0_OVER_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.insertFromRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW]

//>> SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.setBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW]

//>> CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return o_data.clearBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.extractToRight<PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW]

//>> GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW]
static inline bool GET_PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_DOB23_DIB23_INT_ERR_REG));
#endif
    return i_data.getBit<PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_DOB23_DIB23_INT_ERR_REG_OB23_DIBF1VC1_OVER_UNDERFLOW]

//>> PREP_[PB_MAILBOX_10_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_MAILBOX_10_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_MAILBOX_10_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_MAILBOX_10_REG]

//>> GET_[PB_MAILBOX_10_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_MAILBOX_10_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_MAILBOX_10_REG;
#endif
    return fapi2::getScom(i_target, PB_MAILBOX_10_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_MAILBOX_10_REG]

//>> PUT_[PB_MAILBOX_10_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_MAILBOX_10_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_MAILBOX_10_REG));
#endif
    return fapi2::putScom(i_target, PB_MAILBOX_10_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_MAILBOX_10_REG]


//>> PREP_[PB_MAILBOX_11_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_MAILBOX_11_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_MAILBOX_11_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_MAILBOX_11_REG]

//>> GET_[PB_MAILBOX_11_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_MAILBOX_11_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_MAILBOX_11_REG;
#endif
    return fapi2::getScom(i_target, PB_MAILBOX_11_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_MAILBOX_11_REG]

//>> PUT_[PB_MAILBOX_11_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_MAILBOX_11_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_MAILBOX_11_REG));
#endif
    return fapi2::putScom(i_target, PB_MAILBOX_11_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_MAILBOX_11_REG]


//>> PREP_[PB_PMU2_CNPM_COUNTER]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_PMU2_CNPM_COUNTER(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_PMU2_CNPM_COUNTER;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_PMU2_CNPM_COUNTER]

//>> GET_[PB_PMU2_CNPM_COUNTER]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_PMU2_CNPM_COUNTER(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_PMU2_CNPM_COUNTER;
#endif
    return fapi2::getScom(i_target, PB_PMU2_CNPM_COUNTER, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_PMU2_CNPM_COUNTER]

//>> PUT_[PB_PMU2_CNPM_COUNTER]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_PMU2_CNPM_COUNTER(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_PMU2_CNPM_COUNTER));
#endif
    return fapi2::putScom(i_target, PB_PMU2_CNPM_COUNTER, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_PMU2_CNPM_COUNTER]


//>> SET_[PB_PMU2_CNPM_COUNTER_0]
static inline fapi2::buffer<uint64_t>& SET_PB_PMU2_CNPM_COUNTER_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU2_CNPM_COUNTER));
#endif
    return o_data.insertFromRight<PB_PMU2_CNPM_COUNTER_0,
           PB_PMU2_CNPM_COUNTER_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PMU2_CNPM_COUNTER_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PMU2_CNPM_COUNTER_0]

//>> SET_[PB_PMU2_CNPM_COUNTER_0]
static inline fapi2::buffer<uint64_t>& SET_PB_PMU2_CNPM_COUNTER_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU2_CNPM_COUNTER));
#endif
    return o_data.insertFromRight<PB_PMU2_CNPM_COUNTER_0,
           PB_PMU2_CNPM_COUNTER_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PMU2_CNPM_COUNTER_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PMU2_CNPM_COUNTER_0]

//>> GET_[PB_PMU2_CNPM_COUNTER_0]
static inline fapi2::buffer<uint64_t>& GET_PB_PMU2_CNPM_COUNTER_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU2_CNPM_COUNTER));
#endif
    return i_data.extractToRight<PB_PMU2_CNPM_COUNTER_0,
           PB_PMU2_CNPM_COUNTER_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PMU2_CNPM_COUNTER_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PMU2_CNPM_COUNTER_0]

//>> SET_[PB_PMU2_CNPM_COUNTER_1]
static inline fapi2::buffer<uint64_t>& SET_PB_PMU2_CNPM_COUNTER_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU2_CNPM_COUNTER));
#endif
    return o_data.insertFromRight<PB_PMU2_CNPM_COUNTER_1,
           PB_PMU2_CNPM_COUNTER_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PMU2_CNPM_COUNTER_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PMU2_CNPM_COUNTER_1]

//>> SET_[PB_PMU2_CNPM_COUNTER_1]
static inline fapi2::buffer<uint64_t>& SET_PB_PMU2_CNPM_COUNTER_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU2_CNPM_COUNTER));
#endif
    return o_data.insertFromRight<PB_PMU2_CNPM_COUNTER_1,
           PB_PMU2_CNPM_COUNTER_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PMU2_CNPM_COUNTER_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PMU2_CNPM_COUNTER_1]

//>> GET_[PB_PMU2_CNPM_COUNTER_1]
static inline fapi2::buffer<uint64_t>& GET_PB_PMU2_CNPM_COUNTER_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU2_CNPM_COUNTER));
#endif
    return i_data.extractToRight<PB_PMU2_CNPM_COUNTER_1,
           PB_PMU2_CNPM_COUNTER_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PMU2_CNPM_COUNTER_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PMU2_CNPM_COUNTER_1]

//>> SET_[PB_PMU2_CNPM_COUNTER_2]
static inline fapi2::buffer<uint64_t>& SET_PB_PMU2_CNPM_COUNTER_2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU2_CNPM_COUNTER));
#endif
    return o_data.insertFromRight<PB_PMU2_CNPM_COUNTER_2,
           PB_PMU2_CNPM_COUNTER_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PMU2_CNPM_COUNTER_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PMU2_CNPM_COUNTER_2]

//>> SET_[PB_PMU2_CNPM_COUNTER_2]
static inline fapi2::buffer<uint64_t>& SET_PB_PMU2_CNPM_COUNTER_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU2_CNPM_COUNTER));
#endif
    return o_data.insertFromRight<PB_PMU2_CNPM_COUNTER_2,
           PB_PMU2_CNPM_COUNTER_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PMU2_CNPM_COUNTER_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PMU2_CNPM_COUNTER_2]

//>> GET_[PB_PMU2_CNPM_COUNTER_2]
static inline fapi2::buffer<uint64_t>& GET_PB_PMU2_CNPM_COUNTER_2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU2_CNPM_COUNTER));
#endif
    return i_data.extractToRight<PB_PMU2_CNPM_COUNTER_2,
           PB_PMU2_CNPM_COUNTER_2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PMU2_CNPM_COUNTER_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PMU2_CNPM_COUNTER_2]

//>> SET_[PB_PMU2_CNPM_COUNTER_3]
static inline fapi2::buffer<uint64_t>& SET_PB_PMU2_CNPM_COUNTER_3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU2_CNPM_COUNTER));
#endif
    return o_data.insertFromRight<PB_PMU2_CNPM_COUNTER_3,
           PB_PMU2_CNPM_COUNTER_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_PMU2_CNPM_COUNTER_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PMU2_CNPM_COUNTER_3]

//>> SET_[PB_PMU2_CNPM_COUNTER_3]
static inline fapi2::buffer<uint64_t>& SET_PB_PMU2_CNPM_COUNTER_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU2_CNPM_COUNTER));
#endif
    return o_data.insertFromRight<PB_PMU2_CNPM_COUNTER_3,
           PB_PMU2_CNPM_COUNTER_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_PMU2_CNPM_COUNTER_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PMU2_CNPM_COUNTER_3]

//>> GET_[PB_PMU2_CNPM_COUNTER_3]
static inline fapi2::buffer<uint64_t>& GET_PB_PMU2_CNPM_COUNTER_3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PMU2_CNPM_COUNTER));
#endif
    return i_data.extractToRight<PB_PMU2_CNPM_COUNTER_3,
           PB_PMU2_CNPM_COUNTER_3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_PMU2_CNPM_COUNTER_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PMU2_CNPM_COUNTER_3]

//>> PREP_[RCMD_RATE_CFG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_RCMD_RATE_CFG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RCMD_RATE_CFG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[RCMD_RATE_CFG]

//>> GET_[RCMD_RATE_CFG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_RCMD_RATE_CFG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RCMD_RATE_CFG;
#endif
    return fapi2::getScom(i_target, RCMD_RATE_CFG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[RCMD_RATE_CFG]

//>> PUT_[RCMD_RATE_CFG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_RCMD_RATE_CFG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return fapi2::putScom(i_target, RCMD_RATE_CFG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[RCMD_RATE_CFG]


//>> SET_[RCMD_RATE_CFG_X_RCMD_RATE]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_X_RCMD_RATE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_X_RCMD_RATE,
           RCMD_RATE_CFG_X_RCMD_RATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access RCMD_RATE_CFG_X_RCMD_RATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_X_RCMD_RATE]

//>> SET_[RCMD_RATE_CFG_X_RCMD_RATE]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_X_RCMD_RATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_X_RCMD_RATE,
           RCMD_RATE_CFG_X_RCMD_RATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access RCMD_RATE_CFG_X_RCMD_RATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_X_RCMD_RATE]

//>> GET_[RCMD_RATE_CFG_X_RCMD_RATE]
static inline fapi2::buffer<uint64_t>& GET_RCMD_RATE_CFG_X_RCMD_RATE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return i_data.extractToRight<RCMD_RATE_CFG_X_RCMD_RATE,
           RCMD_RATE_CFG_X_RCMD_RATE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access RCMD_RATE_CFG_X_RCMD_RATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RCMD_RATE_CFG_X_RCMD_RATE]

//>> SET_[RCMD_RATE_CFG_Y_RCMD_RATE]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_Y_RCMD_RATE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_Y_RCMD_RATE,
           RCMD_RATE_CFG_Y_RCMD_RATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_RCMD_RATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_Y_RCMD_RATE]

//>> SET_[RCMD_RATE_CFG_Y_RCMD_RATE]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_Y_RCMD_RATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_Y_RCMD_RATE,
           RCMD_RATE_CFG_Y_RCMD_RATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_RCMD_RATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_Y_RCMD_RATE]

//>> GET_[RCMD_RATE_CFG_Y_RCMD_RATE]
static inline fapi2::buffer<uint64_t>& GET_RCMD_RATE_CFG_Y_RCMD_RATE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return i_data.extractToRight<RCMD_RATE_CFG_Y_RCMD_RATE,
           RCMD_RATE_CFG_Y_RCMD_RATE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_RCMD_RATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RCMD_RATE_CFG_Y_RCMD_RATE]

//>> SET_[RCMD_RATE_CFG_X_RCMD_RATE_ADDER]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_X_RCMD_RATE_ADDER(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_X_RCMD_RATE_ADDER,
           RCMD_RATE_CFG_X_RCMD_RATE_ADDER_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access RCMD_RATE_CFG_X_RCMD_RATE_ADDER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_X_RCMD_RATE_ADDER]

//>> SET_[RCMD_RATE_CFG_X_RCMD_RATE_ADDER]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_X_RCMD_RATE_ADDER(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_X_RCMD_RATE_ADDER,
           RCMD_RATE_CFG_X_RCMD_RATE_ADDER_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access RCMD_RATE_CFG_X_RCMD_RATE_ADDER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_X_RCMD_RATE_ADDER]

//>> GET_[RCMD_RATE_CFG_X_RCMD_RATE_ADDER]
static inline fapi2::buffer<uint64_t>& GET_RCMD_RATE_CFG_X_RCMD_RATE_ADDER(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return i_data.extractToRight<RCMD_RATE_CFG_X_RCMD_RATE_ADDER,
           RCMD_RATE_CFG_X_RCMD_RATE_ADDER_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access RCMD_RATE_CFG_X_RCMD_RATE_ADDER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RCMD_RATE_CFG_X_RCMD_RATE_ADDER]

//>> SET_[RCMD_RATE_CFG_Y_RCMD_RATE_ADDER]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_Y_RCMD_RATE_ADDER(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_Y_RCMD_RATE_ADDER,
           RCMD_RATE_CFG_Y_RCMD_RATE_ADDER_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_RCMD_RATE_ADDER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_Y_RCMD_RATE_ADDER]

//>> SET_[RCMD_RATE_CFG_Y_RCMD_RATE_ADDER]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_Y_RCMD_RATE_ADDER(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_Y_RCMD_RATE_ADDER,
           RCMD_RATE_CFG_Y_RCMD_RATE_ADDER_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_RCMD_RATE_ADDER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_Y_RCMD_RATE_ADDER]

//>> GET_[RCMD_RATE_CFG_Y_RCMD_RATE_ADDER]
static inline fapi2::buffer<uint64_t>& GET_RCMD_RATE_CFG_Y_RCMD_RATE_ADDER(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return i_data.extractToRight<RCMD_RATE_CFG_Y_RCMD_RATE_ADDER,
           RCMD_RATE_CFG_Y_RCMD_RATE_ADDER_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_RCMD_RATE_ADDER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RCMD_RATE_CFG_Y_RCMD_RATE_ADDER]

//>> SET_[RCMD_RATE_CFG_X_DISABLE_TURBO]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_X_DISABLE_TURBO(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_X_DISABLE_TURBO,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access RCMD_RATE_CFG_X_DISABLE_TURBO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_X_DISABLE_TURBO]

//>> SET_[RCMD_RATE_CFG_X_DISABLE_TURBO]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_X_DISABLE_TURBO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_X_DISABLE_TURBO,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access RCMD_RATE_CFG_X_DISABLE_TURBO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_X_DISABLE_TURBO]

//>> SET_[RCMD_RATE_CFG_X_DISABLE_TURBO]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_X_DISABLE_TURBO(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.setBit<RCMD_RATE_CFG_X_DISABLE_TURBO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access RCMD_RATE_CFG_X_DISABLE_TURBO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_X_DISABLE_TURBO]

//>> CLEAR_[RCMD_RATE_CFG_X_DISABLE_TURBO]
static inline fapi2::buffer<uint64_t>& CLEAR_RCMD_RATE_CFG_X_DISABLE_TURBO(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.clearBit<RCMD_RATE_CFG_X_DISABLE_TURBO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access RCMD_RATE_CFG_X_DISABLE_TURBO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RCMD_RATE_CFG_X_DISABLE_TURBO]

//>> GET_[RCMD_RATE_CFG_X_DISABLE_TURBO]
static inline fapi2::buffer<uint64_t>& GET_RCMD_RATE_CFG_X_DISABLE_TURBO(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return i_data.extractToRight<RCMD_RATE_CFG_X_DISABLE_TURBO,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access RCMD_RATE_CFG_X_DISABLE_TURBO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RCMD_RATE_CFG_X_DISABLE_TURBO]

//>> GET_[RCMD_RATE_CFG_X_DISABLE_TURBO]
static inline bool GET_RCMD_RATE_CFG_X_DISABLE_TURBO(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return i_data.getBit<RCMD_RATE_CFG_X_DISABLE_TURBO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access RCMD_RATE_CFG_X_DISABLE_TURBO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RCMD_RATE_CFG_X_DISABLE_TURBO]

//>> SET_[RCMD_RATE_CFG_X_CMD_GAP_REFERENCE]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_X_CMD_GAP_REFERENCE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_X_CMD_GAP_REFERENCE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access RCMD_RATE_CFG_X_CMD_GAP_REFERENCE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_X_CMD_GAP_REFERENCE]

//>> SET_[RCMD_RATE_CFG_X_CMD_GAP_REFERENCE]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_X_CMD_GAP_REFERENCE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_X_CMD_GAP_REFERENCE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access RCMD_RATE_CFG_X_CMD_GAP_REFERENCE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_X_CMD_GAP_REFERENCE]

//>> SET_[RCMD_RATE_CFG_X_CMD_GAP_REFERENCE]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_X_CMD_GAP_REFERENCE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.setBit<RCMD_RATE_CFG_X_CMD_GAP_REFERENCE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access RCMD_RATE_CFG_X_CMD_GAP_REFERENCE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_X_CMD_GAP_REFERENCE]

//>> CLEAR_[RCMD_RATE_CFG_X_CMD_GAP_REFERENCE]
static inline fapi2::buffer<uint64_t>& CLEAR_RCMD_RATE_CFG_X_CMD_GAP_REFERENCE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.clearBit<RCMD_RATE_CFG_X_CMD_GAP_REFERENCE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access RCMD_RATE_CFG_X_CMD_GAP_REFERENCE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RCMD_RATE_CFG_X_CMD_GAP_REFERENCE]

//>> GET_[RCMD_RATE_CFG_X_CMD_GAP_REFERENCE]
static inline fapi2::buffer<uint64_t>& GET_RCMD_RATE_CFG_X_CMD_GAP_REFERENCE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return i_data.extractToRight<RCMD_RATE_CFG_X_CMD_GAP_REFERENCE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access RCMD_RATE_CFG_X_CMD_GAP_REFERENCE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RCMD_RATE_CFG_X_CMD_GAP_REFERENCE]

//>> GET_[RCMD_RATE_CFG_X_CMD_GAP_REFERENCE]
static inline bool GET_RCMD_RATE_CFG_X_CMD_GAP_REFERENCE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return i_data.getBit<RCMD_RATE_CFG_X_CMD_GAP_REFERENCE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access RCMD_RATE_CFG_X_CMD_GAP_REFERENCE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RCMD_RATE_CFG_X_CMD_GAP_REFERENCE]

//>> SET_[RCMD_RATE_CFG_X_CMD_GAP_MODE]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_X_CMD_GAP_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_X_CMD_GAP_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access RCMD_RATE_CFG_X_CMD_GAP_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_X_CMD_GAP_MODE]

//>> SET_[RCMD_RATE_CFG_X_CMD_GAP_MODE]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_X_CMD_GAP_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_X_CMD_GAP_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access RCMD_RATE_CFG_X_CMD_GAP_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_X_CMD_GAP_MODE]

//>> SET_[RCMD_RATE_CFG_X_CMD_GAP_MODE]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_X_CMD_GAP_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.setBit<RCMD_RATE_CFG_X_CMD_GAP_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access RCMD_RATE_CFG_X_CMD_GAP_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_X_CMD_GAP_MODE]

//>> CLEAR_[RCMD_RATE_CFG_X_CMD_GAP_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_RCMD_RATE_CFG_X_CMD_GAP_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.clearBit<RCMD_RATE_CFG_X_CMD_GAP_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access RCMD_RATE_CFG_X_CMD_GAP_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RCMD_RATE_CFG_X_CMD_GAP_MODE]

//>> GET_[RCMD_RATE_CFG_X_CMD_GAP_MODE]
static inline fapi2::buffer<uint64_t>& GET_RCMD_RATE_CFG_X_CMD_GAP_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return i_data.extractToRight<RCMD_RATE_CFG_X_CMD_GAP_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access RCMD_RATE_CFG_X_CMD_GAP_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RCMD_RATE_CFG_X_CMD_GAP_MODE]

//>> GET_[RCMD_RATE_CFG_X_CMD_GAP_MODE]
static inline bool GET_RCMD_RATE_CFG_X_CMD_GAP_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return i_data.getBit<RCMD_RATE_CFG_X_CMD_GAP_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access RCMD_RATE_CFG_X_CMD_GAP_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RCMD_RATE_CFG_X_CMD_GAP_MODE]

//>> SET_[RCMD_RATE_CFG_X_CMD_GAP_TABLE]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_X_CMD_GAP_TABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_X_CMD_GAP_TABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access RCMD_RATE_CFG_X_CMD_GAP_TABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_X_CMD_GAP_TABLE]

//>> SET_[RCMD_RATE_CFG_X_CMD_GAP_TABLE]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_X_CMD_GAP_TABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_X_CMD_GAP_TABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access RCMD_RATE_CFG_X_CMD_GAP_TABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_X_CMD_GAP_TABLE]

//>> SET_[RCMD_RATE_CFG_X_CMD_GAP_TABLE]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_X_CMD_GAP_TABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.setBit<RCMD_RATE_CFG_X_CMD_GAP_TABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access RCMD_RATE_CFG_X_CMD_GAP_TABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_X_CMD_GAP_TABLE]

//>> CLEAR_[RCMD_RATE_CFG_X_CMD_GAP_TABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_RCMD_RATE_CFG_X_CMD_GAP_TABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.clearBit<RCMD_RATE_CFG_X_CMD_GAP_TABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access RCMD_RATE_CFG_X_CMD_GAP_TABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RCMD_RATE_CFG_X_CMD_GAP_TABLE]

//>> GET_[RCMD_RATE_CFG_X_CMD_GAP_TABLE]
static inline fapi2::buffer<uint64_t>& GET_RCMD_RATE_CFG_X_CMD_GAP_TABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return i_data.extractToRight<RCMD_RATE_CFG_X_CMD_GAP_TABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access RCMD_RATE_CFG_X_CMD_GAP_TABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RCMD_RATE_CFG_X_CMD_GAP_TABLE]

//>> GET_[RCMD_RATE_CFG_X_CMD_GAP_TABLE]
static inline bool GET_RCMD_RATE_CFG_X_CMD_GAP_TABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return i_data.getBit<RCMD_RATE_CFG_X_CMD_GAP_TABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access RCMD_RATE_CFG_X_CMD_GAP_TABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RCMD_RATE_CFG_X_CMD_GAP_TABLE]

//>> SET_[RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK]

//>> SET_[RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK]

//>> SET_[RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.setBit<RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK]

//>> CLEAR_[RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK]
static inline fapi2::buffer<uint64_t>& CLEAR_RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.clearBit<RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK]

//>> GET_[RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK]
static inline fapi2::buffer<uint64_t>& GET_RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return i_data.extractToRight<RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK]

//>> GET_[RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK]
static inline bool GET_RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return i_data.getBit<RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[RCMD_RATE_CFG_X_DISABLE_CREDIT_BANK]

//>> SET_[RCMD_RATE_CFG_X_CMD_GAP_CFG]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_X_CMD_GAP_CFG(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_X_CMD_GAP_CFG,
           RCMD_RATE_CFG_X_CMD_GAP_CFG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access RCMD_RATE_CFG_X_CMD_GAP_CFG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_X_CMD_GAP_CFG]

//>> SET_[RCMD_RATE_CFG_X_CMD_GAP_CFG]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_X_CMD_GAP_CFG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_X_CMD_GAP_CFG,
           RCMD_RATE_CFG_X_CMD_GAP_CFG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access RCMD_RATE_CFG_X_CMD_GAP_CFG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_X_CMD_GAP_CFG]

//>> GET_[RCMD_RATE_CFG_X_CMD_GAP_CFG]
static inline fapi2::buffer<uint64_t>& GET_RCMD_RATE_CFG_X_CMD_GAP_CFG(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return i_data.extractToRight<RCMD_RATE_CFG_X_CMD_GAP_CFG,
           RCMD_RATE_CFG_X_CMD_GAP_CFG_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access RCMD_RATE_CFG_X_CMD_GAP_CFG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RCMD_RATE_CFG_X_CMD_GAP_CFG]

//>> SET_[RCMD_RATE_CFG_Y_DISABLE_TURBO]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_Y_DISABLE_TURBO(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_Y_DISABLE_TURBO,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_DISABLE_TURBO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_Y_DISABLE_TURBO]

//>> SET_[RCMD_RATE_CFG_Y_DISABLE_TURBO]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_Y_DISABLE_TURBO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_Y_DISABLE_TURBO,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_DISABLE_TURBO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_Y_DISABLE_TURBO]

//>> SET_[RCMD_RATE_CFG_Y_DISABLE_TURBO]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_Y_DISABLE_TURBO(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.setBit<RCMD_RATE_CFG_Y_DISABLE_TURBO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_DISABLE_TURBO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_Y_DISABLE_TURBO]

//>> CLEAR_[RCMD_RATE_CFG_Y_DISABLE_TURBO]
static inline fapi2::buffer<uint64_t>& CLEAR_RCMD_RATE_CFG_Y_DISABLE_TURBO(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.clearBit<RCMD_RATE_CFG_Y_DISABLE_TURBO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_DISABLE_TURBO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RCMD_RATE_CFG_Y_DISABLE_TURBO]

//>> GET_[RCMD_RATE_CFG_Y_DISABLE_TURBO]
static inline fapi2::buffer<uint64_t>& GET_RCMD_RATE_CFG_Y_DISABLE_TURBO(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return i_data.extractToRight<RCMD_RATE_CFG_Y_DISABLE_TURBO,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_DISABLE_TURBO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RCMD_RATE_CFG_Y_DISABLE_TURBO]

//>> GET_[RCMD_RATE_CFG_Y_DISABLE_TURBO]
static inline bool GET_RCMD_RATE_CFG_Y_DISABLE_TURBO(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return i_data.getBit<RCMD_RATE_CFG_Y_DISABLE_TURBO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_DISABLE_TURBO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RCMD_RATE_CFG_Y_DISABLE_TURBO]

//>> SET_[RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE]

//>> SET_[RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE]

//>> SET_[RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.setBit<RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE]

//>> CLEAR_[RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE]
static inline fapi2::buffer<uint64_t>& CLEAR_RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.clearBit<RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE]

//>> GET_[RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE]
static inline fapi2::buffer<uint64_t>& GET_RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return i_data.extractToRight<RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE]

//>> GET_[RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE]
static inline bool GET_RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return i_data.getBit<RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RCMD_RATE_CFG_Y_CMD_GAP_REFERENCE]

//>> SET_[RCMD_RATE_CFG_Y_CMD_GAP_MODE]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_Y_CMD_GAP_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_Y_CMD_GAP_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_CMD_GAP_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_Y_CMD_GAP_MODE]

//>> SET_[RCMD_RATE_CFG_Y_CMD_GAP_MODE]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_Y_CMD_GAP_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_Y_CMD_GAP_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_CMD_GAP_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_Y_CMD_GAP_MODE]

//>> SET_[RCMD_RATE_CFG_Y_CMD_GAP_MODE]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_Y_CMD_GAP_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.setBit<RCMD_RATE_CFG_Y_CMD_GAP_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_CMD_GAP_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_Y_CMD_GAP_MODE]

//>> CLEAR_[RCMD_RATE_CFG_Y_CMD_GAP_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_RCMD_RATE_CFG_Y_CMD_GAP_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.clearBit<RCMD_RATE_CFG_Y_CMD_GAP_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_CMD_GAP_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RCMD_RATE_CFG_Y_CMD_GAP_MODE]

//>> GET_[RCMD_RATE_CFG_Y_CMD_GAP_MODE]
static inline fapi2::buffer<uint64_t>& GET_RCMD_RATE_CFG_Y_CMD_GAP_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return i_data.extractToRight<RCMD_RATE_CFG_Y_CMD_GAP_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_CMD_GAP_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RCMD_RATE_CFG_Y_CMD_GAP_MODE]

//>> GET_[RCMD_RATE_CFG_Y_CMD_GAP_MODE]
static inline bool GET_RCMD_RATE_CFG_Y_CMD_GAP_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return i_data.getBit<RCMD_RATE_CFG_Y_CMD_GAP_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_CMD_GAP_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RCMD_RATE_CFG_Y_CMD_GAP_MODE]

//>> SET_[RCMD_RATE_CFG_Y_CMD_GAP_TABLE]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_Y_CMD_GAP_TABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_Y_CMD_GAP_TABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_CMD_GAP_TABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_Y_CMD_GAP_TABLE]

//>> SET_[RCMD_RATE_CFG_Y_CMD_GAP_TABLE]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_Y_CMD_GAP_TABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_Y_CMD_GAP_TABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_CMD_GAP_TABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_Y_CMD_GAP_TABLE]

//>> SET_[RCMD_RATE_CFG_Y_CMD_GAP_TABLE]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_Y_CMD_GAP_TABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.setBit<RCMD_RATE_CFG_Y_CMD_GAP_TABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_CMD_GAP_TABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_Y_CMD_GAP_TABLE]

//>> CLEAR_[RCMD_RATE_CFG_Y_CMD_GAP_TABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_RCMD_RATE_CFG_Y_CMD_GAP_TABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.clearBit<RCMD_RATE_CFG_Y_CMD_GAP_TABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_CMD_GAP_TABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RCMD_RATE_CFG_Y_CMD_GAP_TABLE]

//>> GET_[RCMD_RATE_CFG_Y_CMD_GAP_TABLE]
static inline fapi2::buffer<uint64_t>& GET_RCMD_RATE_CFG_Y_CMD_GAP_TABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return i_data.extractToRight<RCMD_RATE_CFG_Y_CMD_GAP_TABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_CMD_GAP_TABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RCMD_RATE_CFG_Y_CMD_GAP_TABLE]

//>> GET_[RCMD_RATE_CFG_Y_CMD_GAP_TABLE]
static inline bool GET_RCMD_RATE_CFG_Y_CMD_GAP_TABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return i_data.getBit<RCMD_RATE_CFG_Y_CMD_GAP_TABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_CMD_GAP_TABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RCMD_RATE_CFG_Y_CMD_GAP_TABLE]

//>> SET_[RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK]

//>> SET_[RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK]

//>> SET_[RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.setBit<RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK]

//>> CLEAR_[RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK]
static inline fapi2::buffer<uint64_t>& CLEAR_RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.clearBit<RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK]

//>> GET_[RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK]
static inline fapi2::buffer<uint64_t>& GET_RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return i_data.extractToRight<RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK]

//>> GET_[RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK]
static inline bool GET_RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return i_data.getBit<RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[RCMD_RATE_CFG_Y_DISABLE_CREDIT_BANK]

//>> SET_[RCMD_RATE_CFG_Y_CMD_GAP_CFG]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_Y_CMD_GAP_CFG(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_Y_CMD_GAP_CFG,
           RCMD_RATE_CFG_Y_CMD_GAP_CFG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_CMD_GAP_CFG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_Y_CMD_GAP_CFG]

//>> SET_[RCMD_RATE_CFG_Y_CMD_GAP_CFG]
static inline fapi2::buffer<uint64_t>& SET_RCMD_RATE_CFG_Y_CMD_GAP_CFG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return o_data.insertFromRight<RCMD_RATE_CFG_Y_CMD_GAP_CFG,
           RCMD_RATE_CFG_Y_CMD_GAP_CFG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_CMD_GAP_CFG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RCMD_RATE_CFG_Y_CMD_GAP_CFG]

//>> GET_[RCMD_RATE_CFG_Y_CMD_GAP_CFG]
static inline fapi2::buffer<uint64_t>& GET_RCMD_RATE_CFG_Y_CMD_GAP_CFG(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RCMD_RATE_CFG));
#endif
    return i_data.extractToRight<RCMD_RATE_CFG_Y_CMD_GAP_CFG,
           RCMD_RATE_CFG_Y_CMD_GAP_CFG_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access RCMD_RATE_CFG_Y_CMD_GAP_CFG chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RCMD_RATE_CFG_Y_CMD_GAP_CFG]

//>> PREP_[TRA1_TR0_CONFIG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TRA1_TR0_CONFIG_1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    scomt::last_scom = TRA1_TR0_CONFIG_1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TRA1_TR0_CONFIG_1]

//>> GET_[TRA1_TR0_CONFIG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TRA1_TR0_CONFIG_1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    scomt::last_scom = TRA1_TR0_CONFIG_1;
#endif
    return fapi2::getScom(i_target, TRA1_TR0_CONFIG_1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TRA1_TR0_CONFIG_1]

//>> PUT_[TRA1_TR0_CONFIG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TRA1_TR0_CONFIG_1(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_1));
#endif
    return fapi2::putScom(i_target, TRA1_TR0_CONFIG_1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TRA1_TR0_CONFIG_1]


//>> SET_[TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_1));
#endif
    return o_data.insertFromRight<TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87,
           TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>> SET_[TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_1));
#endif
    return o_data.insertFromRight<TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87,
           TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>> GET_[TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]
static inline fapi2::buffer<uint64_t>& GET_TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_1));
#endif
    return i_data.extractToRight<TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87,
           TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
