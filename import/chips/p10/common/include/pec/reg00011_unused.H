/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/pec/reg00011_unused.H $       */
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

#ifndef __PEC_REG00011_H_UNUSED__
#define __PEC_REG00011_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace pec
{
#endif


//>> PREP_[IOPFIR_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOPFIR_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOPFIR_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOPFIR_RW]

//>> GET_[IOPFIR_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOPFIR_RW(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOPFIR_RW;
#endif
    return fapi2::getScom(i_target, IOPFIR_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOPFIR_RW]

//>> PUT_[IOPFIR_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOPFIR_RW(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return fapi2::putScom(i_target, IOPFIR_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOPFIR_RW]

//>> PREP_[IOPFIR_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOPFIR_WO_AND(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOPFIR_WO_AND;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOPFIR_WO_AND]

//>> GET_[IOPFIR_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOPFIR_WO_AND(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOPFIR_WO_AND;
#endif
    return fapi2::getScom(i_target, IOPFIR_WO_AND, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOPFIR_WO_AND]

//>> PUT_[IOPFIR_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOPFIR_WO_AND(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return fapi2::putScom(i_target, IOPFIR_WO_AND, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOPFIR_WO_AND]

//>> PREP_[IOPFIR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOPFIR_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOPFIR_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOPFIR_WO_OR]

//>> GET_[IOPFIR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOPFIR_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOPFIR_WO_OR;
#endif
    return fapi2::getScom(i_target, IOPFIR_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOPFIR_WO_OR]

//>> PUT_[IOPFIR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOPFIR_WO_OR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return fapi2::putScom(i_target, IOPFIR_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOPFIR_WO_OR]


//>> SET_[IOPFIR_PHY0_ECC_CE_ERR]
static inline fapi2::buffer<uint64_t>& SET_IOPFIR_PHY0_ECC_CE_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<IOPFIR_PHY0_ECC_CE_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access IOPFIR_PHY0_ECC_CE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOPFIR_PHY0_ECC_CE_ERR]

//>> SET_[IOPFIR_PHY0_ECC_CE_ERR]
static inline fapi2::buffer<uint64_t>& SET_IOPFIR_PHY0_ECC_CE_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<IOPFIR_PHY0_ECC_CE_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access IOPFIR_PHY0_ECC_CE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOPFIR_PHY0_ECC_CE_ERR]

//>> SET_[IOPFIR_PHY0_ECC_CE_ERR]
static inline fapi2::buffer<uint64_t>& SET_IOPFIR_PHY0_ECC_CE_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return o_data.setBit<IOPFIR_PHY0_ECC_CE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access IOPFIR_PHY0_ECC_CE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOPFIR_PHY0_ECC_CE_ERR]

//>> CLEAR_[IOPFIR_PHY0_ECC_CE_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_IOPFIR_PHY0_ECC_CE_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return o_data.clearBit<IOPFIR_PHY0_ECC_CE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access IOPFIR_PHY0_ECC_CE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOPFIR_PHY0_ECC_CE_ERR]

//>> GET_[IOPFIR_PHY0_ECC_CE_ERR]
static inline fapi2::buffer<uint64_t>& GET_IOPFIR_PHY0_ECC_CE_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return i_data.extractToRight<IOPFIR_PHY0_ECC_CE_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access IOPFIR_PHY0_ECC_CE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOPFIR_PHY0_ECC_CE_ERR]

//>> GET_[IOPFIR_PHY0_ECC_CE_ERR]
static inline bool GET_IOPFIR_PHY0_ECC_CE_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return i_data.getBit<IOPFIR_PHY0_ECC_CE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access IOPFIR_PHY0_ECC_CE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOPFIR_PHY0_ECC_CE_ERR]

//>> SET_[IOPFIR_PHY0_ECC_UE_ERR]
static inline fapi2::buffer<uint64_t>& SET_IOPFIR_PHY0_ECC_UE_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<IOPFIR_PHY0_ECC_UE_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access IOPFIR_PHY0_ECC_UE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOPFIR_PHY0_ECC_UE_ERR]

//>> SET_[IOPFIR_PHY0_ECC_UE_ERR]
static inline fapi2::buffer<uint64_t>& SET_IOPFIR_PHY0_ECC_UE_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<IOPFIR_PHY0_ECC_UE_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access IOPFIR_PHY0_ECC_UE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOPFIR_PHY0_ECC_UE_ERR]

//>> SET_[IOPFIR_PHY0_ECC_UE_ERR]
static inline fapi2::buffer<uint64_t>& SET_IOPFIR_PHY0_ECC_UE_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return o_data.setBit<IOPFIR_PHY0_ECC_UE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access IOPFIR_PHY0_ECC_UE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOPFIR_PHY0_ECC_UE_ERR]

//>> CLEAR_[IOPFIR_PHY0_ECC_UE_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_IOPFIR_PHY0_ECC_UE_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return o_data.clearBit<IOPFIR_PHY0_ECC_UE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access IOPFIR_PHY0_ECC_UE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOPFIR_PHY0_ECC_UE_ERR]

//>> GET_[IOPFIR_PHY0_ECC_UE_ERR]
static inline fapi2::buffer<uint64_t>& GET_IOPFIR_PHY0_ECC_UE_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return i_data.extractToRight<IOPFIR_PHY0_ECC_UE_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access IOPFIR_PHY0_ECC_UE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOPFIR_PHY0_ECC_UE_ERR]

//>> GET_[IOPFIR_PHY0_ECC_UE_ERR]
static inline bool GET_IOPFIR_PHY0_ECC_UE_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return i_data.getBit<IOPFIR_PHY0_ECC_UE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access IOPFIR_PHY0_ECC_UE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOPFIR_PHY0_ECC_UE_ERR]

//>> SET_[IOPFIR_PHY1_ECC_CE_ERR]
static inline fapi2::buffer<uint64_t>& SET_IOPFIR_PHY1_ECC_CE_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<IOPFIR_PHY1_ECC_CE_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access IOPFIR_PHY1_ECC_CE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOPFIR_PHY1_ECC_CE_ERR]

//>> SET_[IOPFIR_PHY1_ECC_CE_ERR]
static inline fapi2::buffer<uint64_t>& SET_IOPFIR_PHY1_ECC_CE_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<IOPFIR_PHY1_ECC_CE_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access IOPFIR_PHY1_ECC_CE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOPFIR_PHY1_ECC_CE_ERR]

//>> SET_[IOPFIR_PHY1_ECC_CE_ERR]
static inline fapi2::buffer<uint64_t>& SET_IOPFIR_PHY1_ECC_CE_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return o_data.setBit<IOPFIR_PHY1_ECC_CE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access IOPFIR_PHY1_ECC_CE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOPFIR_PHY1_ECC_CE_ERR]

//>> CLEAR_[IOPFIR_PHY1_ECC_CE_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_IOPFIR_PHY1_ECC_CE_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return o_data.clearBit<IOPFIR_PHY1_ECC_CE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access IOPFIR_PHY1_ECC_CE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOPFIR_PHY1_ECC_CE_ERR]

//>> GET_[IOPFIR_PHY1_ECC_CE_ERR]
static inline fapi2::buffer<uint64_t>& GET_IOPFIR_PHY1_ECC_CE_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return i_data.extractToRight<IOPFIR_PHY1_ECC_CE_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access IOPFIR_PHY1_ECC_CE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOPFIR_PHY1_ECC_CE_ERR]

//>> GET_[IOPFIR_PHY1_ECC_CE_ERR]
static inline bool GET_IOPFIR_PHY1_ECC_CE_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return i_data.getBit<IOPFIR_PHY1_ECC_CE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access IOPFIR_PHY1_ECC_CE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOPFIR_PHY1_ECC_CE_ERR]

//>> SET_[IOPFIR_PHY1_ECC_UE_ERR]
static inline fapi2::buffer<uint64_t>& SET_IOPFIR_PHY1_ECC_UE_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<IOPFIR_PHY1_ECC_UE_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access IOPFIR_PHY1_ECC_UE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOPFIR_PHY1_ECC_UE_ERR]

//>> SET_[IOPFIR_PHY1_ECC_UE_ERR]
static inline fapi2::buffer<uint64_t>& SET_IOPFIR_PHY1_ECC_UE_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<IOPFIR_PHY1_ECC_UE_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access IOPFIR_PHY1_ECC_UE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOPFIR_PHY1_ECC_UE_ERR]

//>> SET_[IOPFIR_PHY1_ECC_UE_ERR]
static inline fapi2::buffer<uint64_t>& SET_IOPFIR_PHY1_ECC_UE_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return o_data.setBit<IOPFIR_PHY1_ECC_UE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access IOPFIR_PHY1_ECC_UE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOPFIR_PHY1_ECC_UE_ERR]

//>> CLEAR_[IOPFIR_PHY1_ECC_UE_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_IOPFIR_PHY1_ECC_UE_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return o_data.clearBit<IOPFIR_PHY1_ECC_UE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access IOPFIR_PHY1_ECC_UE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOPFIR_PHY1_ECC_UE_ERR]

//>> GET_[IOPFIR_PHY1_ECC_UE_ERR]
static inline fapi2::buffer<uint64_t>& GET_IOPFIR_PHY1_ECC_UE_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return i_data.extractToRight<IOPFIR_PHY1_ECC_UE_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access IOPFIR_PHY1_ECC_UE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOPFIR_PHY1_ECC_UE_ERR]

//>> GET_[IOPFIR_PHY1_ECC_UE_ERR]
static inline bool GET_IOPFIR_PHY1_ECC_UE_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return i_data.getBit<IOPFIR_PHY1_ECC_UE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access IOPFIR_PHY1_ECC_UE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOPFIR_PHY1_ECC_UE_ERR]

//>> SET_[IOPFIR_SCOM0_ECC_CE]
static inline fapi2::buffer<uint64_t>& SET_IOPFIR_SCOM0_ECC_CE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<IOPFIR_SCOM0_ECC_CE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access IOPFIR_SCOM0_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOPFIR_SCOM0_ECC_CE]

//>> SET_[IOPFIR_SCOM0_ECC_CE]
static inline fapi2::buffer<uint64_t>& SET_IOPFIR_SCOM0_ECC_CE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<IOPFIR_SCOM0_ECC_CE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access IOPFIR_SCOM0_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOPFIR_SCOM0_ECC_CE]

//>> SET_[IOPFIR_SCOM0_ECC_CE]
static inline fapi2::buffer<uint64_t>& SET_IOPFIR_SCOM0_ECC_CE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return o_data.setBit<IOPFIR_SCOM0_ECC_CE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access IOPFIR_SCOM0_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOPFIR_SCOM0_ECC_CE]

//>> CLEAR_[IOPFIR_SCOM0_ECC_CE]
static inline fapi2::buffer<uint64_t>& CLEAR_IOPFIR_SCOM0_ECC_CE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return o_data.clearBit<IOPFIR_SCOM0_ECC_CE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access IOPFIR_SCOM0_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOPFIR_SCOM0_ECC_CE]

//>> GET_[IOPFIR_SCOM0_ECC_CE]
static inline fapi2::buffer<uint64_t>& GET_IOPFIR_SCOM0_ECC_CE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return i_data.extractToRight<IOPFIR_SCOM0_ECC_CE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access IOPFIR_SCOM0_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOPFIR_SCOM0_ECC_CE]

//>> GET_[IOPFIR_SCOM0_ECC_CE]
static inline bool GET_IOPFIR_SCOM0_ECC_CE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return i_data.getBit<IOPFIR_SCOM0_ECC_CE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access IOPFIR_SCOM0_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOPFIR_SCOM0_ECC_CE]

//>> SET_[IOPFIR_SCOM0_ECC_UE]
static inline fapi2::buffer<uint64_t>& SET_IOPFIR_SCOM0_ECC_UE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<IOPFIR_SCOM0_ECC_UE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access IOPFIR_SCOM0_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOPFIR_SCOM0_ECC_UE]

//>> SET_[IOPFIR_SCOM0_ECC_UE]
static inline fapi2::buffer<uint64_t>& SET_IOPFIR_SCOM0_ECC_UE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<IOPFIR_SCOM0_ECC_UE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access IOPFIR_SCOM0_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOPFIR_SCOM0_ECC_UE]

//>> SET_[IOPFIR_SCOM0_ECC_UE]
static inline fapi2::buffer<uint64_t>& SET_IOPFIR_SCOM0_ECC_UE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return o_data.setBit<IOPFIR_SCOM0_ECC_UE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access IOPFIR_SCOM0_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOPFIR_SCOM0_ECC_UE]

//>> CLEAR_[IOPFIR_SCOM0_ECC_UE]
static inline fapi2::buffer<uint64_t>& CLEAR_IOPFIR_SCOM0_ECC_UE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return o_data.clearBit<IOPFIR_SCOM0_ECC_UE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access IOPFIR_SCOM0_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOPFIR_SCOM0_ECC_UE]

//>> GET_[IOPFIR_SCOM0_ECC_UE]
static inline fapi2::buffer<uint64_t>& GET_IOPFIR_SCOM0_ECC_UE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return i_data.extractToRight<IOPFIR_SCOM0_ECC_UE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access IOPFIR_SCOM0_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOPFIR_SCOM0_ECC_UE]

//>> GET_[IOPFIR_SCOM0_ECC_UE]
static inline bool GET_IOPFIR_SCOM0_ECC_UE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return i_data.getBit<IOPFIR_SCOM0_ECC_UE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access IOPFIR_SCOM0_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOPFIR_SCOM0_ECC_UE]

//>> SET_[IOPFIR_SCOM1_ECC_CE]
static inline fapi2::buffer<uint64_t>& SET_IOPFIR_SCOM1_ECC_CE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<IOPFIR_SCOM1_ECC_CE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access IOPFIR_SCOM1_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOPFIR_SCOM1_ECC_CE]

//>> SET_[IOPFIR_SCOM1_ECC_CE]
static inline fapi2::buffer<uint64_t>& SET_IOPFIR_SCOM1_ECC_CE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<IOPFIR_SCOM1_ECC_CE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access IOPFIR_SCOM1_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOPFIR_SCOM1_ECC_CE]

//>> SET_[IOPFIR_SCOM1_ECC_CE]
static inline fapi2::buffer<uint64_t>& SET_IOPFIR_SCOM1_ECC_CE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return o_data.setBit<IOPFIR_SCOM1_ECC_CE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access IOPFIR_SCOM1_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOPFIR_SCOM1_ECC_CE]

//>> CLEAR_[IOPFIR_SCOM1_ECC_CE]
static inline fapi2::buffer<uint64_t>& CLEAR_IOPFIR_SCOM1_ECC_CE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return o_data.clearBit<IOPFIR_SCOM1_ECC_CE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access IOPFIR_SCOM1_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOPFIR_SCOM1_ECC_CE]

//>> GET_[IOPFIR_SCOM1_ECC_CE]
static inline fapi2::buffer<uint64_t>& GET_IOPFIR_SCOM1_ECC_CE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return i_data.extractToRight<IOPFIR_SCOM1_ECC_CE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access IOPFIR_SCOM1_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOPFIR_SCOM1_ECC_CE]

//>> GET_[IOPFIR_SCOM1_ECC_CE]
static inline bool GET_IOPFIR_SCOM1_ECC_CE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return i_data.getBit<IOPFIR_SCOM1_ECC_CE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access IOPFIR_SCOM1_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOPFIR_SCOM1_ECC_CE]

//>> SET_[IOPFIR_SCOM1_ECC_UE]
static inline fapi2::buffer<uint64_t>& SET_IOPFIR_SCOM1_ECC_UE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<IOPFIR_SCOM1_ECC_UE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access IOPFIR_SCOM1_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOPFIR_SCOM1_ECC_UE]

//>> SET_[IOPFIR_SCOM1_ECC_UE]
static inline fapi2::buffer<uint64_t>& SET_IOPFIR_SCOM1_ECC_UE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<IOPFIR_SCOM1_ECC_UE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access IOPFIR_SCOM1_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOPFIR_SCOM1_ECC_UE]

//>> SET_[IOPFIR_SCOM1_ECC_UE]
static inline fapi2::buffer<uint64_t>& SET_IOPFIR_SCOM1_ECC_UE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return o_data.setBit<IOPFIR_SCOM1_ECC_UE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access IOPFIR_SCOM1_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOPFIR_SCOM1_ECC_UE]

//>> CLEAR_[IOPFIR_SCOM1_ECC_UE]
static inline fapi2::buffer<uint64_t>& CLEAR_IOPFIR_SCOM1_ECC_UE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return o_data.clearBit<IOPFIR_SCOM1_ECC_UE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access IOPFIR_SCOM1_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOPFIR_SCOM1_ECC_UE]

//>> GET_[IOPFIR_SCOM1_ECC_UE]
static inline fapi2::buffer<uint64_t>& GET_IOPFIR_SCOM1_ECC_UE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return i_data.extractToRight<IOPFIR_SCOM1_ECC_UE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access IOPFIR_SCOM1_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOPFIR_SCOM1_ECC_UE]

//>> GET_[IOPFIR_SCOM1_ECC_UE]
static inline bool GET_IOPFIR_SCOM1_ECC_UE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return i_data.getBit<IOPFIR_SCOM1_ECC_UE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access IOPFIR_SCOM1_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOPFIR_SCOM1_ECC_UE]

//>> SET_[IOPFIR_SCRUB0_ECC_CE]
static inline fapi2::buffer<uint64_t>& SET_IOPFIR_SCRUB0_ECC_CE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<IOPFIR_SCRUB0_ECC_CE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access IOPFIR_SCRUB0_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOPFIR_SCRUB0_ECC_CE]

//>> SET_[IOPFIR_SCRUB0_ECC_CE]
static inline fapi2::buffer<uint64_t>& SET_IOPFIR_SCRUB0_ECC_CE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<IOPFIR_SCRUB0_ECC_CE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access IOPFIR_SCRUB0_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOPFIR_SCRUB0_ECC_CE]

//>> SET_[IOPFIR_SCRUB0_ECC_CE]
static inline fapi2::buffer<uint64_t>& SET_IOPFIR_SCRUB0_ECC_CE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return o_data.setBit<IOPFIR_SCRUB0_ECC_CE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access IOPFIR_SCRUB0_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOPFIR_SCRUB0_ECC_CE]

//>> CLEAR_[IOPFIR_SCRUB0_ECC_CE]
static inline fapi2::buffer<uint64_t>& CLEAR_IOPFIR_SCRUB0_ECC_CE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return o_data.clearBit<IOPFIR_SCRUB0_ECC_CE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access IOPFIR_SCRUB0_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOPFIR_SCRUB0_ECC_CE]

//>> GET_[IOPFIR_SCRUB0_ECC_CE]
static inline fapi2::buffer<uint64_t>& GET_IOPFIR_SCRUB0_ECC_CE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return i_data.extractToRight<IOPFIR_SCRUB0_ECC_CE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access IOPFIR_SCRUB0_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOPFIR_SCRUB0_ECC_CE]

//>> GET_[IOPFIR_SCRUB0_ECC_CE]
static inline bool GET_IOPFIR_SCRUB0_ECC_CE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return i_data.getBit<IOPFIR_SCRUB0_ECC_CE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access IOPFIR_SCRUB0_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOPFIR_SCRUB0_ECC_CE]

//>> SET_[IOPFIR_SCRUB0_ECC_UE]
static inline fapi2::buffer<uint64_t>& SET_IOPFIR_SCRUB0_ECC_UE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<IOPFIR_SCRUB0_ECC_UE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access IOPFIR_SCRUB0_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOPFIR_SCRUB0_ECC_UE]

//>> SET_[IOPFIR_SCRUB0_ECC_UE]
static inline fapi2::buffer<uint64_t>& SET_IOPFIR_SCRUB0_ECC_UE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<IOPFIR_SCRUB0_ECC_UE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access IOPFIR_SCRUB0_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOPFIR_SCRUB0_ECC_UE]

//>> SET_[IOPFIR_SCRUB0_ECC_UE]
static inline fapi2::buffer<uint64_t>& SET_IOPFIR_SCRUB0_ECC_UE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return o_data.setBit<IOPFIR_SCRUB0_ECC_UE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access IOPFIR_SCRUB0_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOPFIR_SCRUB0_ECC_UE]

//>> CLEAR_[IOPFIR_SCRUB0_ECC_UE]
static inline fapi2::buffer<uint64_t>& CLEAR_IOPFIR_SCRUB0_ECC_UE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return o_data.clearBit<IOPFIR_SCRUB0_ECC_UE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access IOPFIR_SCRUB0_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOPFIR_SCRUB0_ECC_UE]

//>> GET_[IOPFIR_SCRUB0_ECC_UE]
static inline fapi2::buffer<uint64_t>& GET_IOPFIR_SCRUB0_ECC_UE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return i_data.extractToRight<IOPFIR_SCRUB0_ECC_UE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access IOPFIR_SCRUB0_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOPFIR_SCRUB0_ECC_UE]

//>> GET_[IOPFIR_SCRUB0_ECC_UE]
static inline bool GET_IOPFIR_SCRUB0_ECC_UE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return i_data.getBit<IOPFIR_SCRUB0_ECC_UE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access IOPFIR_SCRUB0_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOPFIR_SCRUB0_ECC_UE]

//>> SET_[IOPFIR_SCRUB1_ECC_CE]
static inline fapi2::buffer<uint64_t>& SET_IOPFIR_SCRUB1_ECC_CE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<IOPFIR_SCRUB1_ECC_CE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access IOPFIR_SCRUB1_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOPFIR_SCRUB1_ECC_CE]

//>> SET_[IOPFIR_SCRUB1_ECC_CE]
static inline fapi2::buffer<uint64_t>& SET_IOPFIR_SCRUB1_ECC_CE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<IOPFIR_SCRUB1_ECC_CE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access IOPFIR_SCRUB1_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOPFIR_SCRUB1_ECC_CE]

//>> SET_[IOPFIR_SCRUB1_ECC_CE]
static inline fapi2::buffer<uint64_t>& SET_IOPFIR_SCRUB1_ECC_CE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return o_data.setBit<IOPFIR_SCRUB1_ECC_CE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access IOPFIR_SCRUB1_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOPFIR_SCRUB1_ECC_CE]

//>> CLEAR_[IOPFIR_SCRUB1_ECC_CE]
static inline fapi2::buffer<uint64_t>& CLEAR_IOPFIR_SCRUB1_ECC_CE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return o_data.clearBit<IOPFIR_SCRUB1_ECC_CE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access IOPFIR_SCRUB1_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOPFIR_SCRUB1_ECC_CE]

//>> GET_[IOPFIR_SCRUB1_ECC_CE]
static inline fapi2::buffer<uint64_t>& GET_IOPFIR_SCRUB1_ECC_CE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return i_data.extractToRight<IOPFIR_SCRUB1_ECC_CE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access IOPFIR_SCRUB1_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOPFIR_SCRUB1_ECC_CE]

//>> GET_[IOPFIR_SCRUB1_ECC_CE]
static inline bool GET_IOPFIR_SCRUB1_ECC_CE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return i_data.getBit<IOPFIR_SCRUB1_ECC_CE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access IOPFIR_SCRUB1_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOPFIR_SCRUB1_ECC_CE]

//>> SET_[IOPFIR_SCRUB1_ECC_UE]
static inline fapi2::buffer<uint64_t>& SET_IOPFIR_SCRUB1_ECC_UE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<IOPFIR_SCRUB1_ECC_UE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access IOPFIR_SCRUB1_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOPFIR_SCRUB1_ECC_UE]

//>> SET_[IOPFIR_SCRUB1_ECC_UE]
static inline fapi2::buffer<uint64_t>& SET_IOPFIR_SCRUB1_ECC_UE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<IOPFIR_SCRUB1_ECC_UE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access IOPFIR_SCRUB1_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOPFIR_SCRUB1_ECC_UE]

//>> SET_[IOPFIR_SCRUB1_ECC_UE]
static inline fapi2::buffer<uint64_t>& SET_IOPFIR_SCRUB1_ECC_UE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return o_data.setBit<IOPFIR_SCRUB1_ECC_UE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access IOPFIR_SCRUB1_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOPFIR_SCRUB1_ECC_UE]

//>> CLEAR_[IOPFIR_SCRUB1_ECC_UE]
static inline fapi2::buffer<uint64_t>& CLEAR_IOPFIR_SCRUB1_ECC_UE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return o_data.clearBit<IOPFIR_SCRUB1_ECC_UE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access IOPFIR_SCRUB1_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[IOPFIR_SCRUB1_ECC_UE]

//>> GET_[IOPFIR_SCRUB1_ECC_UE]
static inline fapi2::buffer<uint64_t>& GET_IOPFIR_SCRUB1_ECC_UE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return i_data.extractToRight<IOPFIR_SCRUB1_ECC_UE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access IOPFIR_SCRUB1_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOPFIR_SCRUB1_ECC_UE]

//>> GET_[IOPFIR_SCRUB1_ECC_UE]
static inline bool GET_IOPFIR_SCRUB1_ECC_UE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIR_RW, IOPFIR_WO_AND, IOPFIR_WO_OR));
#endif
    return i_data.getBit<IOPFIR_SCRUB1_ECC_UE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access IOPFIR_SCRUB1_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOPFIR_SCRUB1_ECC_UE]

//>> PREP_[IOPFIRACT1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOPFIRACT1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOPFIRACT1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOPFIRACT1]

//>> GET_[IOPFIRACT1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOPFIRACT1(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOPFIRACT1;
#endif
    return fapi2::getScom(i_target, IOPFIRACT1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOPFIRACT1]

//>> PUT_[IOPFIRACT1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOPFIRACT1(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOPFIRACT1));
#endif
    return fapi2::putScom(i_target, IOPFIRACT1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOPFIRACT1]


//>> SET_[IOPFIRACT1_FIR_ACTION1]
static inline fapi2::buffer<uint64_t>& SET_IOPFIRACT1_FIR_ACTION1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIRACT1));
#endif
    return o_data.insertFromRight<IOPFIRACT1_FIR_ACTION1,
           IOPFIRACT1_FIR_ACTION1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access IOPFIRACT1_FIR_ACTION1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOPFIRACT1_FIR_ACTION1]

//>> SET_[IOPFIRACT1_FIR_ACTION1]
static inline fapi2::buffer<uint64_t>& SET_IOPFIRACT1_FIR_ACTION1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIRACT1));
#endif
    return o_data.insertFromRight<IOPFIRACT1_FIR_ACTION1,
           IOPFIRACT1_FIR_ACTION1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access IOPFIRACT1_FIR_ACTION1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOPFIRACT1_FIR_ACTION1]

//>> GET_[IOPFIRACT1_FIR_ACTION1]
static inline fapi2::buffer<uint64_t>& GET_IOPFIRACT1_FIR_ACTION1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIRACT1));
#endif
    return i_data.extractToRight<IOPFIRACT1_FIR_ACTION1,
           IOPFIRACT1_FIR_ACTION1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access IOPFIRACT1_FIR_ACTION1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOPFIRACT1_FIR_ACTION1]

//>> PREP_[IXCS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IXCS(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IXCS;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IXCS]

//>> GET_[IXCS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IXCS(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IXCS;
#endif
    return fapi2::getScom(i_target, IXCS, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IXCS]

//>> PUT_[IXCS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IXCS(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IXCS));
#endif
    return fapi2::putScom(i_target, IXCS, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IXCS]


//>> PREP_[IXDATA0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IXDATA0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IXDATA0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IXDATA0]

//>> GET_[IXDATA0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IXDATA0(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IXDATA0;
#endif
    return fapi2::getScom(i_target, IXDATA0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IXDATA0]

//>> PUT_[IXDATA0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IXDATA0(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IXDATA0));
#endif
    return fapi2::putScom(i_target, IXDATA0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IXDATA0]


//>> SET_[IXDATA0_DATA]
static inline fapi2::buffer<uint64_t>& SET_IXDATA0_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IXDATA0));
#endif
    return o_data.insertFromRight<IXDATA0_DATA,
           IXDATA0_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access IXDATA0_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IXDATA0_DATA]

//>> SET_[IXDATA0_DATA]
static inline fapi2::buffer<uint64_t>& SET_IXDATA0_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IXDATA0));
#endif
    return o_data.insertFromRight<IXDATA0_DATA,
           IXDATA0_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access IXDATA0_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IXDATA0_DATA]

//>> GET_[IXDATA0_DATA]
static inline fapi2::buffer<uint64_t>& GET_IXDATA0_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IXDATA0));
#endif
    return i_data.extractToRight<IXDATA0_DATA,
           IXDATA0_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access IXDATA0_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IXDATA0_DATA]

//>> PREP_[IXRADR0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IXRADR0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IXRADR0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IXRADR0]

//>> GET_[IXRADR0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IXRADR0(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IXRADR0;
#endif
    return fapi2::getScom(i_target, IXRADR0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IXRADR0]

//>> PUT_[IXRADR0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IXRADR0(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IXRADR0));
#endif
    return fapi2::putScom(i_target, IXRADR0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IXRADR0]


//>> SET_[IXRADR0_ADDR]
static inline fapi2::buffer<uint64_t>& SET_IXRADR0_ADDR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IXRADR0));
#endif
    return o_data.insertFromRight<IXRADR0_ADDR,
           IXRADR0_ADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access IXRADR0_ADDR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IXRADR0_ADDR]

//>> SET_[IXRADR0_ADDR]
static inline fapi2::buffer<uint64_t>& SET_IXRADR0_ADDR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IXRADR0));
#endif
    return o_data.insertFromRight<IXRADR0_ADDR,
           IXRADR0_ADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access IXRADR0_ADDR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IXRADR0_ADDR]

//>> GET_[IXRADR0_ADDR]
static inline fapi2::buffer<uint64_t>& GET_IXRADR0_ADDR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IXRADR0));
#endif
    return i_data.extractToRight<IXRADR0_ADDR,
           IXRADR0_ADDR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access IXRADR0_ADDR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IXRADR0_ADDR]

//>> PREP_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG]

//>> GET_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG;
#endif
    return fapi2::getScom(i_target, PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG]

//>> PUT_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG));
#endif
    return fapi2::putScom(i_target, PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG]


//>> SET_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK0]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK0,
           PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK0]

//>> SET_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK0]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK0,
           PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK0]

//>> GET_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK0]
static inline fapi2::buffer<uint64_t>& GET_PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK0,
           PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK0]

//>> SET_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK1]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK1,
           PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK1]

//>> SET_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK1]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK1,
           PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK1]

//>> GET_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK1]
static inline fapi2::buffer<uint64_t>& GET_PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK1,
           PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK1]

//>> SET_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE]

//>> SET_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE]

//>> SET_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG));
#endif
    return o_data.setBit<PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE]

//>> CLEAR_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG));
#endif
    return o_data.clearBit<PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE]

//>> GET_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE]

//>> GET_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE]
static inline bool GET_PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG));
#endif
    return i_data.getBit<PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE]

//>> PREP_[PIPEDINCTL3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PIPEDINCTL3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PIPEDINCTL3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PIPEDINCTL3]

//>> GET_[PIPEDINCTL3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PIPEDINCTL3(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PIPEDINCTL3;
#endif
    return fapi2::getScom(i_target, PIPEDINCTL3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PIPEDINCTL3]

//>> PUT_[PIPEDINCTL3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PIPEDINCTL3(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PIPEDINCTL3));
#endif
    return fapi2::putScom(i_target, PIPEDINCTL3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PIPEDINCTL3]


//>> SET_[PIPEDINCTL3_PHY1_HANDSHAKE_RESULT]
static inline fapi2::buffer<uint64_t>& SET_PIPEDINCTL3_PHY1_HANDSHAKE_RESULT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDINCTL3));
#endif
    return o_data.insertFromRight<PIPEDINCTL3_PHY1_HANDSHAKE_RESULT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PIPEDINCTL3_PHY1_HANDSHAKE_RESULT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDINCTL3_PHY1_HANDSHAKE_RESULT]

//>> SET_[PIPEDINCTL3_PHY1_HANDSHAKE_RESULT]
static inline fapi2::buffer<uint64_t>& SET_PIPEDINCTL3_PHY1_HANDSHAKE_RESULT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDINCTL3));
#endif
    return o_data.insertFromRight<PIPEDINCTL3_PHY1_HANDSHAKE_RESULT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PIPEDINCTL3_PHY1_HANDSHAKE_RESULT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDINCTL3_PHY1_HANDSHAKE_RESULT]

//>> SET_[PIPEDINCTL3_PHY1_HANDSHAKE_RESULT]
static inline fapi2::buffer<uint64_t>& SET_PIPEDINCTL3_PHY1_HANDSHAKE_RESULT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDINCTL3));
#endif
    return o_data.setBit<PIPEDINCTL3_PHY1_HANDSHAKE_RESULT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access PIPEDINCTL3_PHY1_HANDSHAKE_RESULT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDINCTL3_PHY1_HANDSHAKE_RESULT]

//>> CLEAR_[PIPEDINCTL3_PHY1_HANDSHAKE_RESULT]
static inline fapi2::buffer<uint64_t>& CLEAR_PIPEDINCTL3_PHY1_HANDSHAKE_RESULT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDINCTL3));
#endif
    return o_data.clearBit<PIPEDINCTL3_PHY1_HANDSHAKE_RESULT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access PIPEDINCTL3_PHY1_HANDSHAKE_RESULT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PIPEDINCTL3_PHY1_HANDSHAKE_RESULT]

//>> GET_[PIPEDINCTL3_PHY1_HANDSHAKE_RESULT]
static inline fapi2::buffer<uint64_t>& GET_PIPEDINCTL3_PHY1_HANDSHAKE_RESULT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDINCTL3));
#endif
    return i_data.extractToRight<PIPEDINCTL3_PHY1_HANDSHAKE_RESULT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PIPEDINCTL3_PHY1_HANDSHAKE_RESULT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PIPEDINCTL3_PHY1_HANDSHAKE_RESULT]

//>> GET_[PIPEDINCTL3_PHY1_HANDSHAKE_RESULT]
static inline bool GET_PIPEDINCTL3_PHY1_HANDSHAKE_RESULT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDINCTL3));
#endif
    return i_data.getBit<PIPEDINCTL3_PHY1_HANDSHAKE_RESULT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access PIPEDINCTL3_PHY1_HANDSHAKE_RESULT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PIPEDINCTL3_PHY1_HANDSHAKE_RESULT]

//>> SET_[PIPEDINCTL3_PHY0_HANDSHAKE_RESULT]
static inline fapi2::buffer<uint64_t>& SET_PIPEDINCTL3_PHY0_HANDSHAKE_RESULT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDINCTL3));
#endif
    return o_data.insertFromRight<PIPEDINCTL3_PHY0_HANDSHAKE_RESULT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PIPEDINCTL3_PHY0_HANDSHAKE_RESULT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDINCTL3_PHY0_HANDSHAKE_RESULT]

//>> SET_[PIPEDINCTL3_PHY0_HANDSHAKE_RESULT]
static inline fapi2::buffer<uint64_t>& SET_PIPEDINCTL3_PHY0_HANDSHAKE_RESULT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDINCTL3));
#endif
    return o_data.insertFromRight<PIPEDINCTL3_PHY0_HANDSHAKE_RESULT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PIPEDINCTL3_PHY0_HANDSHAKE_RESULT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDINCTL3_PHY0_HANDSHAKE_RESULT]

//>> SET_[PIPEDINCTL3_PHY0_HANDSHAKE_RESULT]
static inline fapi2::buffer<uint64_t>& SET_PIPEDINCTL3_PHY0_HANDSHAKE_RESULT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDINCTL3));
#endif
    return o_data.setBit<PIPEDINCTL3_PHY0_HANDSHAKE_RESULT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access PIPEDINCTL3_PHY0_HANDSHAKE_RESULT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDINCTL3_PHY0_HANDSHAKE_RESULT]

//>> CLEAR_[PIPEDINCTL3_PHY0_HANDSHAKE_RESULT]
static inline fapi2::buffer<uint64_t>& CLEAR_PIPEDINCTL3_PHY0_HANDSHAKE_RESULT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDINCTL3));
#endif
    return o_data.clearBit<PIPEDINCTL3_PHY0_HANDSHAKE_RESULT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access PIPEDINCTL3_PHY0_HANDSHAKE_RESULT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PIPEDINCTL3_PHY0_HANDSHAKE_RESULT]

//>> GET_[PIPEDINCTL3_PHY0_HANDSHAKE_RESULT]
static inline fapi2::buffer<uint64_t>& GET_PIPEDINCTL3_PHY0_HANDSHAKE_RESULT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDINCTL3));
#endif
    return i_data.extractToRight<PIPEDINCTL3_PHY0_HANDSHAKE_RESULT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PIPEDINCTL3_PHY0_HANDSHAKE_RESULT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PIPEDINCTL3_PHY0_HANDSHAKE_RESULT]

//>> GET_[PIPEDINCTL3_PHY0_HANDSHAKE_RESULT]
static inline bool GET_PIPEDINCTL3_PHY0_HANDSHAKE_RESULT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDINCTL3));
#endif
    return i_data.getBit<PIPEDINCTL3_PHY0_HANDSHAKE_RESULT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access PIPEDINCTL3_PHY0_HANDSHAKE_RESULT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PIPEDINCTL3_PHY0_HANDSHAKE_RESULT]

//>> SET_[PIPEDINCTL3_RESERVED_61_4]
static inline fapi2::buffer<uint64_t>& SET_PIPEDINCTL3_RESERVED_61_4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDINCTL3));
#endif
    return o_data.insertFromRight<PIPEDINCTL3_RESERVED_61_4,
           PIPEDINCTL3_RESERVED_61_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PIPEDINCTL3_RESERVED_61_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDINCTL3_RESERVED_61_4]

//>> SET_[PIPEDINCTL3_RESERVED_61_4]
static inline fapi2::buffer<uint64_t>& SET_PIPEDINCTL3_RESERVED_61_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDINCTL3));
#endif
    return o_data.insertFromRight<PIPEDINCTL3_RESERVED_61_4,
           PIPEDINCTL3_RESERVED_61_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PIPEDINCTL3_RESERVED_61_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDINCTL3_RESERVED_61_4]

//>> GET_[PIPEDINCTL3_RESERVED_61_4]
static inline fapi2::buffer<uint64_t>& GET_PIPEDINCTL3_RESERVED_61_4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDINCTL3));
#endif
    return i_data.extractToRight<PIPEDINCTL3_RESERVED_61_4,
           PIPEDINCTL3_RESERVED_61_4_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PIPEDINCTL3_RESERVED_61_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PIPEDINCTL3_RESERVED_61_4]

//>> SET_[PIPEDINCTL3_PHY1_DTB]
static inline fapi2::buffer<uint64_t>& SET_PIPEDINCTL3_PHY1_DTB(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDINCTL3));
#endif
    return o_data.insertFromRight<PIPEDINCTL3_PHY1_DTB,
           PIPEDINCTL3_PHY1_DTB_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PIPEDINCTL3_PHY1_DTB chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDINCTL3_PHY1_DTB]

//>> SET_[PIPEDINCTL3_PHY1_DTB]
static inline fapi2::buffer<uint64_t>& SET_PIPEDINCTL3_PHY1_DTB(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDINCTL3));
#endif
    return o_data.insertFromRight<PIPEDINCTL3_PHY1_DTB,
           PIPEDINCTL3_PHY1_DTB_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PIPEDINCTL3_PHY1_DTB chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDINCTL3_PHY1_DTB]

//>> GET_[PIPEDINCTL3_PHY1_DTB]
static inline fapi2::buffer<uint64_t>& GET_PIPEDINCTL3_PHY1_DTB(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDINCTL3));
#endif
    return i_data.extractToRight<PIPEDINCTL3_PHY1_DTB,
           PIPEDINCTL3_PHY1_DTB_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PIPEDINCTL3_PHY1_DTB chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PIPEDINCTL3_PHY1_DTB]

//>> SET_[PIPEDINCTL3_PHY0_DTB]
static inline fapi2::buffer<uint64_t>& SET_PIPEDINCTL3_PHY0_DTB(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDINCTL3));
#endif
    return o_data.insertFromRight<PIPEDINCTL3_PHY0_DTB,
           PIPEDINCTL3_PHY0_DTB_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PIPEDINCTL3_PHY0_DTB chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDINCTL3_PHY0_DTB]

//>> SET_[PIPEDINCTL3_PHY0_DTB]
static inline fapi2::buffer<uint64_t>& SET_PIPEDINCTL3_PHY0_DTB(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDINCTL3));
#endif
    return o_data.insertFromRight<PIPEDINCTL3_PHY0_DTB,
           PIPEDINCTL3_PHY0_DTB_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PIPEDINCTL3_PHY0_DTB chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDINCTL3_PHY0_DTB]

//>> GET_[PIPEDINCTL3_PHY0_DTB]
static inline fapi2::buffer<uint64_t>& GET_PIPEDINCTL3_PHY0_DTB(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDINCTL3));
#endif
    return i_data.extractToRight<PIPEDINCTL3_PHY0_DTB,
           PIPEDINCTL3_PHY0_DTB_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PIPEDINCTL3_PHY0_DTB chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PIPEDINCTL3_PHY0_DTB]

//>> PREP_[PIPEDOUTCTL0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PIPEDOUTCTL0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PIPEDOUTCTL0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PIPEDOUTCTL0]

//>> GET_[PIPEDOUTCTL0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PIPEDOUTCTL0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PIPEDOUTCTL0;
#endif
    return fapi2::getScom(i_target, PIPEDOUTCTL0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PIPEDOUTCTL0]

//>> PUT_[PIPEDOUTCTL0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PIPEDOUTCTL0(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return fapi2::putScom(i_target, PIPEDOUTCTL0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PIPEDOUTCTL0]


//>> SET_[PIPEDOUTCTL0_RESERVED_63_59]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL0_RESERVED_63_59(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<PIPEDOUTCTL0_RESERVED_63_59,
           PIPEDOUTCTL0_RESERVED_63_59_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PIPEDOUTCTL0_RESERVED_63_59 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL0_RESERVED_63_59]

//>> SET_[PIPEDOUTCTL0_RESERVED_63_59]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL0_RESERVED_63_59(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<PIPEDOUTCTL0_RESERVED_63_59,
           PIPEDOUTCTL0_RESERVED_63_59_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PIPEDOUTCTL0_RESERVED_63_59 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL0_RESERVED_63_59]

//>> GET_[PIPEDOUTCTL0_RESERVED_63_59]
static inline fapi2::buffer<uint64_t>& GET_PIPEDOUTCTL0_RESERVED_63_59(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return i_data.extractToRight<PIPEDOUTCTL0_RESERVED_63_59,
           PIPEDOUTCTL0_RESERVED_63_59_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PIPEDOUTCTL0_RESERVED_63_59 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PIPEDOUTCTL0_RESERVED_63_59]

//>> SET_[PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN]

//>> SET_[PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN]

//>> SET_[PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return o_data.setBit<PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN]

//>> CLEAR_[PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return o_data.clearBit<PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN]

//>> GET_[PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& GET_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return i_data.extractToRight<PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN]

//>> GET_[PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN]
static inline bool GET_PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return i_data.getBit<PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PIPEDOUTCTL0_PHY1_REFB_LANE_CLK_EN]

//>> SET_[PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN]

//>> SET_[PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN]

//>> SET_[PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return o_data.setBit<PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN]

//>> CLEAR_[PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return o_data.clearBit<PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN]

//>> GET_[PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& GET_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return i_data.extractToRight<PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN]

//>> GET_[PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN]
static inline bool GET_PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return i_data.getBit<PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PIPEDOUTCTL0_PHY1_REFB_CLKDET_EN]

//>> SET_[PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN]

//>> SET_[PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN]

//>> SET_[PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return o_data.setBit<PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN]

//>> CLEAR_[PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return o_data.clearBit<PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN]

//>> GET_[PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& GET_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return i_data.extractToRight<PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN]

//>> GET_[PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN]
static inline bool GET_PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return i_data.getBit<PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PIPEDOUTCTL0_PHY1_REFA_LANE_CLK_EN]

//>> SET_[PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN]

//>> SET_[PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN]

//>> SET_[PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return o_data.setBit<PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN]

//>> CLEAR_[PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return o_data.clearBit<PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN]

//>> GET_[PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& GET_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return i_data.extractToRight<PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN]

//>> GET_[PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN]
static inline bool GET_PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return i_data.getBit<PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PIPEDOUTCTL0_PHY1_REFA_CLKDET_EN]

//>> SET_[PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN]

//>> SET_[PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN]

//>> SET_[PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return o_data.setBit<PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN]

//>> CLEAR_[PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return o_data.clearBit<PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN]

//>> GET_[PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& GET_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return i_data.extractToRight<PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN]

//>> GET_[PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN]
static inline bool GET_PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return i_data.getBit<PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PIPEDOUTCTL0_PHY0_REFB_LANE_CLK_EN]

//>> SET_[PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN]

//>> SET_[PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN]

//>> SET_[PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return o_data.setBit<PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN]

//>> CLEAR_[PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return o_data.clearBit<PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN]

//>> GET_[PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& GET_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return i_data.extractToRight<PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN]

//>> GET_[PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN]
static inline bool GET_PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return i_data.getBit<PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PIPEDOUTCTL0_PHY0_REFB_CLKDET_EN]

//>> SET_[PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN]

//>> SET_[PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN]

//>> SET_[PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return o_data.setBit<PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN]

//>> CLEAR_[PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return o_data.clearBit<PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN]

//>> GET_[PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN]
static inline fapi2::buffer<uint64_t>& GET_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return i_data.extractToRight<PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN]

//>> GET_[PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN]
static inline bool GET_PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return i_data.getBit<PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PIPEDOUTCTL0_PHY0_REFA_LANE_CLK_EN]

//>> SET_[PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN]

//>> SET_[PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN]

//>> SET_[PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return o_data.setBit<PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN]

//>> CLEAR_[PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return o_data.clearBit<PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN]

//>> GET_[PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN]
static inline fapi2::buffer<uint64_t>& GET_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return i_data.extractToRight<PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN]

//>> GET_[PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN]
static inline bool GET_PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return i_data.getBit<PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PIPEDOUTCTL0_PHY0_REFA_CLKDET_EN]

//>> SET_[PIPEDOUTCTL0_RESERVED_50_42]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL0_RESERVED_50_42(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<PIPEDOUTCTL0_RESERVED_50_42,
           PIPEDOUTCTL0_RESERVED_50_42_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PIPEDOUTCTL0_RESERVED_50_42 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL0_RESERVED_50_42]

//>> SET_[PIPEDOUTCTL0_RESERVED_50_42]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL0_RESERVED_50_42(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<PIPEDOUTCTL0_RESERVED_50_42,
           PIPEDOUTCTL0_RESERVED_50_42_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PIPEDOUTCTL0_RESERVED_50_42 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL0_RESERVED_50_42]

//>> GET_[PIPEDOUTCTL0_RESERVED_50_42]
static inline fapi2::buffer<uint64_t>& GET_PIPEDOUTCTL0_RESERVED_50_42(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return i_data.extractToRight<PIPEDOUTCTL0_RESERVED_50_42,
           PIPEDOUTCTL0_RESERVED_50_42_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PIPEDOUTCTL0_RESERVED_50_42 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PIPEDOUTCTL0_RESERVED_50_42]

//>> SET_[PIPEDOUTCTL0_PHY_RTUNE_REQ]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL0_PHY_RTUNE_REQ(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<PIPEDOUTCTL0_PHY_RTUNE_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PIPEDOUTCTL0_PHY_RTUNE_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL0_PHY_RTUNE_REQ]

//>> SET_[PIPEDOUTCTL0_PHY_RTUNE_REQ]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL0_PHY_RTUNE_REQ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<PIPEDOUTCTL0_PHY_RTUNE_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PIPEDOUTCTL0_PHY_RTUNE_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL0_PHY_RTUNE_REQ]

//>> SET_[PIPEDOUTCTL0_PHY_RTUNE_REQ]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL0_PHY_RTUNE_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return o_data.setBit<PIPEDOUTCTL0_PHY_RTUNE_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access PIPEDOUTCTL0_PHY_RTUNE_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL0_PHY_RTUNE_REQ]

//>> CLEAR_[PIPEDOUTCTL0_PHY_RTUNE_REQ]
static inline fapi2::buffer<uint64_t>& CLEAR_PIPEDOUTCTL0_PHY_RTUNE_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return o_data.clearBit<PIPEDOUTCTL0_PHY_RTUNE_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access PIPEDOUTCTL0_PHY_RTUNE_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PIPEDOUTCTL0_PHY_RTUNE_REQ]

//>> GET_[PIPEDOUTCTL0_PHY_RTUNE_REQ]
static inline fapi2::buffer<uint64_t>& GET_PIPEDOUTCTL0_PHY_RTUNE_REQ(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return i_data.extractToRight<PIPEDOUTCTL0_PHY_RTUNE_REQ,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PIPEDOUTCTL0_PHY_RTUNE_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PIPEDOUTCTL0_PHY_RTUNE_REQ]

//>> GET_[PIPEDOUTCTL0_PHY_RTUNE_REQ]
static inline bool GET_PIPEDOUTCTL0_PHY_RTUNE_REQ(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return i_data.getBit<PIPEDOUTCTL0_PHY_RTUNE_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access PIPEDOUTCTL0_PHY_RTUNE_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PIPEDOUTCTL0_PHY_RTUNE_REQ]

//>> SET_[PIPEDOUTCTL0_RESERVED_40_0]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL0_RESERVED_40_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<PIPEDOUTCTL0_RESERVED_40_0,
           PIPEDOUTCTL0_RESERVED_40_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PIPEDOUTCTL0_RESERVED_40_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL0_RESERVED_40_0]

//>> SET_[PIPEDOUTCTL0_RESERVED_40_0]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL0_RESERVED_40_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return o_data.insertFromRight<PIPEDOUTCTL0_RESERVED_40_0,
           PIPEDOUTCTL0_RESERVED_40_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PIPEDOUTCTL0_RESERVED_40_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL0_RESERVED_40_0]

//>> GET_[PIPEDOUTCTL0_RESERVED_40_0]
static inline fapi2::buffer<uint64_t>& GET_PIPEDOUTCTL0_RESERVED_40_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL0));
#endif
    return i_data.extractToRight<PIPEDOUTCTL0_RESERVED_40_0,
           PIPEDOUTCTL0_RESERVED_40_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PIPEDOUTCTL0_RESERVED_40_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PIPEDOUTCTL0_RESERVED_40_0]

//>> PREP_[EPS_DBG_TRACE_MODE_REG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_DBG_TRACE_MODE_REG_2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_DBG_TRACE_MODE_REG_2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_DBG_TRACE_MODE_REG_2]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_DBG_TRACE_MODE_REG_2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_DBG_TRACE_MODE_REG_2;
#endif
    return fapi2::getScom(i_target, EPS_DBG_TRACE_MODE_REG_2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2]

//>> PUT_[EPS_DBG_TRACE_MODE_REG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_DBG_TRACE_MODE_REG_2(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return fapi2::putScom(i_target, EPS_DBG_TRACE_MODE_REG_2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_DBG_TRACE_MODE_REG_2]


//>> SET_[EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE,
           EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE,
           EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE,
           EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.setBit<EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]

//>> CLEAR_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]
static inline bool GET_EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.getBit<EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.setBit<EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]

//>> CLEAR_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]
static inline bool GET_EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.getBit<EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.setBit<EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]

//>> CLEAR_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]
static inline bool GET_EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.getBit<EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.setBit<EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]

//>> CLEAR_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]
static inline bool GET_EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.getBit<EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.setBit<EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]

//>> CLEAR_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]
static inline bool GET_EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.getBit<EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.setBit<EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]

//>> CLEAR_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]
static inline bool GET_EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.getBit<EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK,
           EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK,
           EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK,
           EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK]

//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
