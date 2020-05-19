/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/mc/reg00002_unused.H $        */
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

#ifndef __MC_REG00002_H_UNUSED__
#define __MC_REG00002_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace mc
{
#endif


//>> PREP_[MBA_SCOMFIR_DBG0_SCOM0Q]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_MBA_SCOMFIR_DBG0_SCOM0Q(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = MBA_SCOMFIR_DBG0_SCOM0Q;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[MBA_SCOMFIR_DBG0_SCOM0Q]

//>> GET_[MBA_SCOMFIR_DBG0_SCOM0Q]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_MBA_SCOMFIR_DBG0_SCOM0Q(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = MBA_SCOMFIR_DBG0_SCOM0Q;
#endif
    return fapi2::getScom(i_target, MBA_SCOMFIR_DBG0_SCOM0Q, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[MBA_SCOMFIR_DBG0_SCOM0Q]

//>> PUT_[MBA_SCOMFIR_DBG0_SCOM0Q]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_MBA_SCOMFIR_DBG0_SCOM0Q(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_DBG0_SCOM0Q));
#endif
    return fapi2::putScom(i_target, MBA_SCOMFIR_DBG0_SCOM0Q, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[MBA_SCOMFIR_DBG0_SCOM0Q]


//>> SET_[MBA_SCOMFIR_DBG0_SCOM0Q_DBG0_SCOM0Q_DEBUG_BUS_0_43]
static inline fapi2::buffer<uint64_t>& SET_MBA_SCOMFIR_DBG0_SCOM0Q_DBG0_SCOM0Q_DEBUG_BUS_0_43(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_DBG0_SCOM0Q));
#endif
    return o_data.insertFromRight<MBA_SCOMFIR_DBG0_SCOM0Q_DBG0_SCOM0Q_DEBUG_BUS_0_43,
           MBA_SCOMFIR_DBG0_SCOM0Q_DBG0_SCOM0Q_DEBUG_BUS_0_43_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access MBA_SCOMFIR_DBG0_SCOM0Q_DBG0_SCOM0Q_DEBUG_BUS_0_43 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[MBA_SCOMFIR_DBG0_SCOM0Q_DBG0_SCOM0Q_DEBUG_BUS_0_43]

//>> SET_[MBA_SCOMFIR_DBG0_SCOM0Q_DBG0_SCOM0Q_DEBUG_BUS_0_43]
static inline fapi2::buffer<uint64_t>& SET_MBA_SCOMFIR_DBG0_SCOM0Q_DBG0_SCOM0Q_DEBUG_BUS_0_43(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_DBG0_SCOM0Q));
#endif
    return o_data.insertFromRight<MBA_SCOMFIR_DBG0_SCOM0Q_DBG0_SCOM0Q_DEBUG_BUS_0_43,
           MBA_SCOMFIR_DBG0_SCOM0Q_DBG0_SCOM0Q_DEBUG_BUS_0_43_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access MBA_SCOMFIR_DBG0_SCOM0Q_DBG0_SCOM0Q_DEBUG_BUS_0_43 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[MBA_SCOMFIR_DBG0_SCOM0Q_DBG0_SCOM0Q_DEBUG_BUS_0_43]

//>> GET_[MBA_SCOMFIR_DBG0_SCOM0Q_DBG0_SCOM0Q_DEBUG_BUS_0_43]
static inline fapi2::buffer<uint64_t>& GET_MBA_SCOMFIR_DBG0_SCOM0Q_DBG0_SCOM0Q_DEBUG_BUS_0_43(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_DBG0_SCOM0Q));
#endif
    return i_data.extractToRight<MBA_SCOMFIR_DBG0_SCOM0Q_DBG0_SCOM0Q_DEBUG_BUS_0_43,
           MBA_SCOMFIR_DBG0_SCOM0Q_DBG0_SCOM0Q_DEBUG_BUS_0_43_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access MBA_SCOMFIR_DBG0_SCOM0Q_DBG0_SCOM0Q_DEBUG_BUS_0_43 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[MBA_SCOMFIR_DBG0_SCOM0Q_DBG0_SCOM0Q_DEBUG_BUS_0_43]

//>> PREP_[MBA_SCOMFIR_WATMSKA0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_MBA_SCOMFIR_WATMSKA0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = MBA_SCOMFIR_WATMSKA0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[MBA_SCOMFIR_WATMSKA0]

//>> GET_[MBA_SCOMFIR_WATMSKA0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_MBA_SCOMFIR_WATMSKA0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = MBA_SCOMFIR_WATMSKA0;
#endif
    return fapi2::getScom(i_target, MBA_SCOMFIR_WATMSKA0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[MBA_SCOMFIR_WATMSKA0]

//>> PUT_[MBA_SCOMFIR_WATMSKA0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_MBA_SCOMFIR_WATMSKA0(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_WATMSKA0));
#endif
    return fapi2::putScom(i_target, MBA_SCOMFIR_WATMSKA0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[MBA_SCOMFIR_WATMSKA0]


//>> SET_[MBA_SCOMFIR_WATMSKA0_WAT_MASK_A0]
static inline fapi2::buffer<uint64_t>& SET_MBA_SCOMFIR_WATMSKA0_WAT_MASK_A0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_WATMSKA0));
#endif
    return o_data.insertFromRight<MBA_SCOMFIR_WATMSKA0_WAT_MASK_A0,
           MBA_SCOMFIR_WATMSKA0_WAT_MASK_A0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access MBA_SCOMFIR_WATMSKA0_WAT_MASK_A0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[MBA_SCOMFIR_WATMSKA0_WAT_MASK_A0]

//>> SET_[MBA_SCOMFIR_WATMSKA0_WAT_MASK_A0]
static inline fapi2::buffer<uint64_t>& SET_MBA_SCOMFIR_WATMSKA0_WAT_MASK_A0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_WATMSKA0));
#endif
    return o_data.insertFromRight<MBA_SCOMFIR_WATMSKA0_WAT_MASK_A0,
           MBA_SCOMFIR_WATMSKA0_WAT_MASK_A0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access MBA_SCOMFIR_WATMSKA0_WAT_MASK_A0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[MBA_SCOMFIR_WATMSKA0_WAT_MASK_A0]

//>> GET_[MBA_SCOMFIR_WATMSKA0_WAT_MASK_A0]
static inline fapi2::buffer<uint64_t>& GET_MBA_SCOMFIR_WATMSKA0_WAT_MASK_A0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MBA_SCOMFIR_WATMSKA0));
#endif
    return i_data.extractToRight<MBA_SCOMFIR_WATMSKA0_WAT_MASK_A0,
           MBA_SCOMFIR_WATMSKA0_WAT_MASK_A0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access MBA_SCOMFIR_WATMSKA0_WAT_MASK_A0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[MBA_SCOMFIR_WATMSKA0_WAT_MASK_A0]

//>> PREP_[TRA1_TR0_CONFIG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TRA1_TR0_CONFIG_3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA1_TR0_CONFIG_3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TRA1_TR0_CONFIG_3]

//>> GET_[TRA1_TR0_CONFIG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TRA1_TR0_CONFIG_3(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA1_TR0_CONFIG_3;
#endif
    return fapi2::getScom(i_target, TRA1_TR0_CONFIG_3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TRA1_TR0_CONFIG_3]

//>> PUT_[TRA1_TR0_CONFIG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TRA1_TR0_CONFIG_3(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_3));
#endif
    return fapi2::putScom(i_target, TRA1_TR0_CONFIG_3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TRA1_TR0_CONFIG_3]


//>> SET_[TRA1_TR0_CONFIG_3_C]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_CONFIG_3_C(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_3));
#endif
    return o_data.insertFromRight<TRA1_TR0_CONFIG_3_C,
           TRA1_TR0_CONFIG_3_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access TRA1_TR0_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_CONFIG_3_C]

//>> SET_[TRA1_TR0_CONFIG_3_C]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_CONFIG_3_C(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_3));
#endif
    return o_data.insertFromRight<TRA1_TR0_CONFIG_3_C,
           TRA1_TR0_CONFIG_3_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access TRA1_TR0_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_CONFIG_3_C]

//>> GET_[TRA1_TR0_CONFIG_3_C]
static inline fapi2::buffer<uint64_t>& GET_TRA1_TR0_CONFIG_3_C(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_3));
#endif
    return i_data.extractToRight<TRA1_TR0_CONFIG_3_C,
           TRA1_TR0_CONFIG_3_C_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access TRA1_TR0_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA1_TR0_CONFIG_3_C]

//>> SET_[TRA1_TR0_CONFIG_3_D]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_CONFIG_3_D(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_3));
#endif
    return o_data.insertFromRight<TRA1_TR0_CONFIG_3_D,
           TRA1_TR0_CONFIG_3_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mc Invalid dial access TRA1_TR0_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_CONFIG_3_D]

//>> SET_[TRA1_TR0_CONFIG_3_D]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_CONFIG_3_D(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_3));
#endif
    return o_data.insertFromRight<TRA1_TR0_CONFIG_3_D,
           TRA1_TR0_CONFIG_3_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mc Invalid dial access TRA1_TR0_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_CONFIG_3_D]

//>> GET_[TRA1_TR0_CONFIG_3_D]
static inline fapi2::buffer<uint64_t>& GET_TRA1_TR0_CONFIG_3_D(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_3));
#endif
    return i_data.extractToRight<TRA1_TR0_CONFIG_3_D,
           TRA1_TR0_CONFIG_3_D_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mc Invalid dial access TRA1_TR0_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA1_TR0_CONFIG_3_D]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
