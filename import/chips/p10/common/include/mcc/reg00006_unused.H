/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/mcc/reg00006_unused.H $       */
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

#ifndef __MCC_REG00006_H_UNUSED__
#define __MCC_REG00006_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace mcc
{
#endif


//>> PREP_[DSTL_DSTLPSAVE2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_DSTL_DSTLPSAVE2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DSTL_DSTLPSAVE2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[DSTL_DSTLPSAVE2]

//>> GET_[DSTL_DSTLPSAVE2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_DSTL_DSTLPSAVE2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DSTL_DSTLPSAVE2;
#endif
    return fapi2::getScom(i_target, DSTL_DSTLPSAVE2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[DSTL_DSTLPSAVE2]

//>> PUT_[DSTL_DSTLPSAVE2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_DSTL_DSTLPSAVE2(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(DSTL_DSTLPSAVE2));
#endif
    return fapi2::putScom(i_target, DSTL_DSTLPSAVE2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[DSTL_DSTLPSAVE2]


//>> SET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_LUC]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_LUC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLPSAVE2));
#endif
    return o_data.insertFromRight<DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_LUC,
           DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_LUC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_LUC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_LUC]

//>> SET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_LUC]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_LUC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLPSAVE2));
#endif
    return o_data.insertFromRight<DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_LUC,
           DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_LUC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_LUC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_LUC]

//>> GET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_LUC]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_LUC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLPSAVE2));
#endif
    return i_data.extractToRight<DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_LUC,
           DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_LUC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_LUC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_LUC]

//>> SET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_HUC]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_HUC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLPSAVE2));
#endif
    return o_data.insertFromRight<DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_HUC,
           DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_HUC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_HUC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_HUC]

//>> SET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_HUC]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_HUC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLPSAVE2));
#endif
    return o_data.insertFromRight<DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_HUC,
           DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_HUC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_HUC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_HUC]

//>> GET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_HUC]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_HUC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLPSAVE2));
#endif
    return i_data.extractToRight<DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_HUC,
           DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_HUC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_HUC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_HUC]

//>> SET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_LUT]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_LUT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLPSAVE2));
#endif
    return o_data.insertFromRight<DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_LUT,
           DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_LUT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_LUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_LUT]

//>> SET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_LUT]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_LUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLPSAVE2));
#endif
    return o_data.insertFromRight<DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_LUT,
           DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_LUT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_LUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_LUT]

//>> GET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_LUT]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_LUT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLPSAVE2));
#endif
    return i_data.extractToRight<DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_LUT,
           DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_LUT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_LUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_LUT]

//>> SET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_HUT]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_HUT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLPSAVE2));
#endif
    return o_data.insertFromRight<DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_HUT,
           DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_HUT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_HUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_HUT]

//>> SET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_HUT]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_HUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLPSAVE2));
#endif
    return o_data.insertFromRight<DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_HUT,
           DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_HUT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_HUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_HUT]

//>> GET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_HUT]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_HUT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLPSAVE2));
#endif
    return i_data.extractToRight<DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_HUT,
           DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_HUT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_HUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_HUT]

//>> SET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_SPARE]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_SPARE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLPSAVE2));
#endif
    return o_data.insertFromRight<DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_SPARE,
           DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_SPARE]

//>> SET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_SPARE]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_SPARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLPSAVE2));
#endif
    return o_data.insertFromRight<DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_SPARE,
           DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_SPARE]

//>> GET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_SPARE]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_SPARE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLPSAVE2));
#endif
    return i_data.extractToRight<DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_SPARE,
           DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_SPARE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_A_SPARE]

//>> SET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_LUC]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_LUC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLPSAVE2));
#endif
    return o_data.insertFromRight<DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_LUC,
           DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_LUC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_LUC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_LUC]

//>> SET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_LUC]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_LUC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLPSAVE2));
#endif
    return o_data.insertFromRight<DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_LUC,
           DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_LUC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_LUC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_LUC]

//>> GET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_LUC]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_LUC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLPSAVE2));
#endif
    return i_data.extractToRight<DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_LUC,
           DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_LUC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_LUC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_LUC]

//>> SET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_HUC]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_HUC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLPSAVE2));
#endif
    return o_data.insertFromRight<DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_HUC,
           DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_HUC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_HUC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_HUC]

//>> SET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_HUC]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_HUC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLPSAVE2));
#endif
    return o_data.insertFromRight<DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_HUC,
           DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_HUC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_HUC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_HUC]

//>> GET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_HUC]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_HUC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLPSAVE2));
#endif
    return i_data.extractToRight<DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_HUC,
           DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_HUC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_HUC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_HUC]

//>> SET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_LUT]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_LUT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLPSAVE2));
#endif
    return o_data.insertFromRight<DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_LUT,
           DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_LUT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_LUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_LUT]

//>> SET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_LUT]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_LUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLPSAVE2));
#endif
    return o_data.insertFromRight<DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_LUT,
           DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_LUT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_LUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_LUT]

//>> GET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_LUT]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_LUT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLPSAVE2));
#endif
    return i_data.extractToRight<DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_LUT,
           DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_LUT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_LUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_LUT]

//>> SET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_HUT]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_HUT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLPSAVE2));
#endif
    return o_data.insertFromRight<DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_HUT,
           DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_HUT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_HUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_HUT]

//>> SET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_HUT]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_HUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLPSAVE2));
#endif
    return o_data.insertFromRight<DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_HUT,
           DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_HUT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_HUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_HUT]

//>> GET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_HUT]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_HUT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLPSAVE2));
#endif
    return i_data.extractToRight<DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_HUT,
           DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_HUT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_HUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_HUT]

//>> SET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_SPARE]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_SPARE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLPSAVE2));
#endif
    return o_data.insertFromRight<DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_SPARE,
           DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_SPARE]

//>> SET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_SPARE]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_SPARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLPSAVE2));
#endif
    return o_data.insertFromRight<DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_SPARE,
           DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_SPARE]

//>> GET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_SPARE]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_SPARE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLPSAVE2));
#endif
    return i_data.extractToRight<DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_SPARE,
           DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_SPARE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_B_SPARE]

//>> SET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_WSIZE]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLPSAVE2_SLAVE_PSAVE_WSIZE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLPSAVE2));
#endif
    return o_data.insertFromRight<DSTL_DSTLPSAVE2_SLAVE_PSAVE_WSIZE,
           DSTL_DSTLPSAVE2_SLAVE_PSAVE_WSIZE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLPSAVE2_SLAVE_PSAVE_WSIZE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_WSIZE]

//>> SET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_WSIZE]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLPSAVE2_SLAVE_PSAVE_WSIZE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLPSAVE2));
#endif
    return o_data.insertFromRight<DSTL_DSTLPSAVE2_SLAVE_PSAVE_WSIZE,
           DSTL_DSTLPSAVE2_SLAVE_PSAVE_WSIZE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLPSAVE2_SLAVE_PSAVE_WSIZE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_WSIZE]

//>> GET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_WSIZE]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLPSAVE2_SLAVE_PSAVE_WSIZE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLPSAVE2));
#endif
    return i_data.extractToRight<DSTL_DSTLPSAVE2_SLAVE_PSAVE_WSIZE,
           DSTL_DSTLPSAVE2_SLAVE_PSAVE_WSIZE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLPSAVE2_SLAVE_PSAVE_WSIZE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLPSAVE2_SLAVE_PSAVE_WSIZE]

//>> SET_[DSTL_DSTLPSAVE2_RESERVED_59_63]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLPSAVE2_RESERVED_59_63(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLPSAVE2));
#endif
    return o_data.insertFromRight<DSTL_DSTLPSAVE2_RESERVED_59_63,
           DSTL_DSTLPSAVE2_RESERVED_59_63_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access DSTL_DSTLPSAVE2_RESERVED_59_63 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLPSAVE2_RESERVED_59_63]

//>> SET_[DSTL_DSTLPSAVE2_RESERVED_59_63]
static inline fapi2::buffer<uint64_t>& SET_DSTL_DSTLPSAVE2_RESERVED_59_63(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLPSAVE2));
#endif
    return o_data.insertFromRight<DSTL_DSTLPSAVE2_RESERVED_59_63,
           DSTL_DSTLPSAVE2_RESERVED_59_63_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access DSTL_DSTLPSAVE2_RESERVED_59_63 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DSTL_DSTLPSAVE2_RESERVED_59_63]

//>> GET_[DSTL_DSTLPSAVE2_RESERVED_59_63]
static inline fapi2::buffer<uint64_t>& GET_DSTL_DSTLPSAVE2_RESERVED_59_63(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DSTL_DSTLPSAVE2));
#endif
    return i_data.extractToRight<DSTL_DSTLPSAVE2_RESERVED_59_63,
           DSTL_DSTLPSAVE2_RESERVED_59_63_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access DSTL_DSTLPSAVE2_RESERVED_59_63 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DSTL_DSTLPSAVE2_RESERVED_59_63]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
