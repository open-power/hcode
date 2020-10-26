/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/mcc/reg00001_unused.H $       */
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

#ifndef __MCC_REG00001_H_UNUSED__
#define __MCC_REG00001_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace mcc
{
#endif


//>> PREP_[WDF_DSTL_ECC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_WDF_DSTL_ECC(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = WDF_DSTL_ECC;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[WDF_DSTL_ECC]

//>> GET_[WDF_DSTL_ECC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_WDF_DSTL_ECC(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = WDF_DSTL_ECC;
#endif
    return fapi2::getScom(i_target, WDF_DSTL_ECC, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[WDF_DSTL_ECC]

//>> PUT_[WDF_DSTL_ECC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_WDF_DSTL_ECC(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(WDF_DSTL_ECC));
#endif
    return fapi2::putScom(i_target, WDF_DSTL_ECC, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[WDF_DSTL_ECC]


//>> SET_[WDF_DSTL_ECC_0_ERR_TYPE]
static inline fapi2::buffer<uint64_t>& SET_WDF_DSTL_ECC_0_ERR_TYPE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_DSTL_ECC));
#endif
    return o_data.insertFromRight<WDF_DSTL_ECC_0_ERR_TYPE,
           WDF_DSTL_ECC_0_ERR_TYPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WDF_DSTL_ECC_0_ERR_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_DSTL_ECC_0_ERR_TYPE]

//>> SET_[WDF_DSTL_ECC_0_ERR_TYPE]
static inline fapi2::buffer<uint64_t>& SET_WDF_DSTL_ECC_0_ERR_TYPE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_DSTL_ECC));
#endif
    return o_data.insertFromRight<WDF_DSTL_ECC_0_ERR_TYPE,
           WDF_DSTL_ECC_0_ERR_TYPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WDF_DSTL_ECC_0_ERR_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_DSTL_ECC_0_ERR_TYPE]

//>> GET_[WDF_DSTL_ECC_0_ERR_TYPE]
static inline fapi2::buffer<uint64_t>& GET_WDF_DSTL_ECC_0_ERR_TYPE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_DSTL_ECC));
#endif
    return i_data.extractToRight<WDF_DSTL_ECC_0_ERR_TYPE,
           WDF_DSTL_ECC_0_ERR_TYPE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WDF_DSTL_ECC_0_ERR_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WDF_DSTL_ECC_0_ERR_TYPE]

//>> SET_[WDF_DSTL_ECC_0_SYNDROME]
static inline fapi2::buffer<uint64_t>& SET_WDF_DSTL_ECC_0_SYNDROME(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_DSTL_ECC));
#endif
    return o_data.insertFromRight<WDF_DSTL_ECC_0_SYNDROME,
           WDF_DSTL_ECC_0_SYNDROME_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WDF_DSTL_ECC_0_SYNDROME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_DSTL_ECC_0_SYNDROME]

//>> SET_[WDF_DSTL_ECC_0_SYNDROME]
static inline fapi2::buffer<uint64_t>& SET_WDF_DSTL_ECC_0_SYNDROME(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_DSTL_ECC));
#endif
    return o_data.insertFromRight<WDF_DSTL_ECC_0_SYNDROME,
           WDF_DSTL_ECC_0_SYNDROME_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WDF_DSTL_ECC_0_SYNDROME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_DSTL_ECC_0_SYNDROME]

//>> GET_[WDF_DSTL_ECC_0_SYNDROME]
static inline fapi2::buffer<uint64_t>& GET_WDF_DSTL_ECC_0_SYNDROME(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_DSTL_ECC));
#endif
    return i_data.extractToRight<WDF_DSTL_ECC_0_SYNDROME,
           WDF_DSTL_ECC_0_SYNDROME_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WDF_DSTL_ECC_0_SYNDROME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WDF_DSTL_ECC_0_SYNDROME]

//>> SET_[WDF_DSTL_ECC_1_ERR_TYPE]
static inline fapi2::buffer<uint64_t>& SET_WDF_DSTL_ECC_1_ERR_TYPE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_DSTL_ECC));
#endif
    return o_data.insertFromRight<WDF_DSTL_ECC_1_ERR_TYPE,
           WDF_DSTL_ECC_1_ERR_TYPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WDF_DSTL_ECC_1_ERR_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_DSTL_ECC_1_ERR_TYPE]

//>> SET_[WDF_DSTL_ECC_1_ERR_TYPE]
static inline fapi2::buffer<uint64_t>& SET_WDF_DSTL_ECC_1_ERR_TYPE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_DSTL_ECC));
#endif
    return o_data.insertFromRight<WDF_DSTL_ECC_1_ERR_TYPE,
           WDF_DSTL_ECC_1_ERR_TYPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WDF_DSTL_ECC_1_ERR_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_DSTL_ECC_1_ERR_TYPE]

//>> GET_[WDF_DSTL_ECC_1_ERR_TYPE]
static inline fapi2::buffer<uint64_t>& GET_WDF_DSTL_ECC_1_ERR_TYPE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_DSTL_ECC));
#endif
    return i_data.extractToRight<WDF_DSTL_ECC_1_ERR_TYPE,
           WDF_DSTL_ECC_1_ERR_TYPE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WDF_DSTL_ECC_1_ERR_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WDF_DSTL_ECC_1_ERR_TYPE]

//>> SET_[WDF_DSTL_ECC_1_SYNDROME]
static inline fapi2::buffer<uint64_t>& SET_WDF_DSTL_ECC_1_SYNDROME(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_DSTL_ECC));
#endif
    return o_data.insertFromRight<WDF_DSTL_ECC_1_SYNDROME,
           WDF_DSTL_ECC_1_SYNDROME_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WDF_DSTL_ECC_1_SYNDROME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_DSTL_ECC_1_SYNDROME]

//>> SET_[WDF_DSTL_ECC_1_SYNDROME]
static inline fapi2::buffer<uint64_t>& SET_WDF_DSTL_ECC_1_SYNDROME(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_DSTL_ECC));
#endif
    return o_data.insertFromRight<WDF_DSTL_ECC_1_SYNDROME,
           WDF_DSTL_ECC_1_SYNDROME_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WDF_DSTL_ECC_1_SYNDROME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_DSTL_ECC_1_SYNDROME]

//>> GET_[WDF_DSTL_ECC_1_SYNDROME]
static inline fapi2::buffer<uint64_t>& GET_WDF_DSTL_ECC_1_SYNDROME(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_DSTL_ECC));
#endif
    return i_data.extractToRight<WDF_DSTL_ECC_1_SYNDROME,
           WDF_DSTL_ECC_1_SYNDROME_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WDF_DSTL_ECC_1_SYNDROME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WDF_DSTL_ECC_1_SYNDROME]

//>> SET_[WDF_DSTL_ECC_2_ERR_TYPE]
static inline fapi2::buffer<uint64_t>& SET_WDF_DSTL_ECC_2_ERR_TYPE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_DSTL_ECC));
#endif
    return o_data.insertFromRight<WDF_DSTL_ECC_2_ERR_TYPE,
           WDF_DSTL_ECC_2_ERR_TYPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WDF_DSTL_ECC_2_ERR_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_DSTL_ECC_2_ERR_TYPE]

//>> SET_[WDF_DSTL_ECC_2_ERR_TYPE]
static inline fapi2::buffer<uint64_t>& SET_WDF_DSTL_ECC_2_ERR_TYPE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_DSTL_ECC));
#endif
    return o_data.insertFromRight<WDF_DSTL_ECC_2_ERR_TYPE,
           WDF_DSTL_ECC_2_ERR_TYPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WDF_DSTL_ECC_2_ERR_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_DSTL_ECC_2_ERR_TYPE]

//>> GET_[WDF_DSTL_ECC_2_ERR_TYPE]
static inline fapi2::buffer<uint64_t>& GET_WDF_DSTL_ECC_2_ERR_TYPE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_DSTL_ECC));
#endif
    return i_data.extractToRight<WDF_DSTL_ECC_2_ERR_TYPE,
           WDF_DSTL_ECC_2_ERR_TYPE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WDF_DSTL_ECC_2_ERR_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WDF_DSTL_ECC_2_ERR_TYPE]

//>> SET_[WDF_DSTL_ECC_2_SYNDROME]
static inline fapi2::buffer<uint64_t>& SET_WDF_DSTL_ECC_2_SYNDROME(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_DSTL_ECC));
#endif
    return o_data.insertFromRight<WDF_DSTL_ECC_2_SYNDROME,
           WDF_DSTL_ECC_2_SYNDROME_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WDF_DSTL_ECC_2_SYNDROME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_DSTL_ECC_2_SYNDROME]

//>> SET_[WDF_DSTL_ECC_2_SYNDROME]
static inline fapi2::buffer<uint64_t>& SET_WDF_DSTL_ECC_2_SYNDROME(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_DSTL_ECC));
#endif
    return o_data.insertFromRight<WDF_DSTL_ECC_2_SYNDROME,
           WDF_DSTL_ECC_2_SYNDROME_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WDF_DSTL_ECC_2_SYNDROME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_DSTL_ECC_2_SYNDROME]

//>> GET_[WDF_DSTL_ECC_2_SYNDROME]
static inline fapi2::buffer<uint64_t>& GET_WDF_DSTL_ECC_2_SYNDROME(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_DSTL_ECC));
#endif
    return i_data.extractToRight<WDF_DSTL_ECC_2_SYNDROME,
           WDF_DSTL_ECC_2_SYNDROME_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WDF_DSTL_ECC_2_SYNDROME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WDF_DSTL_ECC_2_SYNDROME]

//>> SET_[WDF_DSTL_ECC_3_ERR_TYPE]
static inline fapi2::buffer<uint64_t>& SET_WDF_DSTL_ECC_3_ERR_TYPE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_DSTL_ECC));
#endif
    return o_data.insertFromRight<WDF_DSTL_ECC_3_ERR_TYPE,
           WDF_DSTL_ECC_3_ERR_TYPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WDF_DSTL_ECC_3_ERR_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_DSTL_ECC_3_ERR_TYPE]

//>> SET_[WDF_DSTL_ECC_3_ERR_TYPE]
static inline fapi2::buffer<uint64_t>& SET_WDF_DSTL_ECC_3_ERR_TYPE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_DSTL_ECC));
#endif
    return o_data.insertFromRight<WDF_DSTL_ECC_3_ERR_TYPE,
           WDF_DSTL_ECC_3_ERR_TYPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WDF_DSTL_ECC_3_ERR_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_DSTL_ECC_3_ERR_TYPE]

//>> GET_[WDF_DSTL_ECC_3_ERR_TYPE]
static inline fapi2::buffer<uint64_t>& GET_WDF_DSTL_ECC_3_ERR_TYPE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_DSTL_ECC));
#endif
    return i_data.extractToRight<WDF_DSTL_ECC_3_ERR_TYPE,
           WDF_DSTL_ECC_3_ERR_TYPE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WDF_DSTL_ECC_3_ERR_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WDF_DSTL_ECC_3_ERR_TYPE]

//>> SET_[WDF_DSTL_ECC_3_SYNDROME]
static inline fapi2::buffer<uint64_t>& SET_WDF_DSTL_ECC_3_SYNDROME(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_DSTL_ECC));
#endif
    return o_data.insertFromRight<WDF_DSTL_ECC_3_SYNDROME,
           WDF_DSTL_ECC_3_SYNDROME_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WDF_DSTL_ECC_3_SYNDROME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_DSTL_ECC_3_SYNDROME]

//>> SET_[WDF_DSTL_ECC_3_SYNDROME]
static inline fapi2::buffer<uint64_t>& SET_WDF_DSTL_ECC_3_SYNDROME(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_DSTL_ECC));
#endif
    return o_data.insertFromRight<WDF_DSTL_ECC_3_SYNDROME,
           WDF_DSTL_ECC_3_SYNDROME_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WDF_DSTL_ECC_3_SYNDROME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_DSTL_ECC_3_SYNDROME]

//>> GET_[WDF_DSTL_ECC_3_SYNDROME]
static inline fapi2::buffer<uint64_t>& GET_WDF_DSTL_ECC_3_SYNDROME(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_DSTL_ECC));
#endif
    return i_data.extractToRight<WDF_DSTL_ECC_3_SYNDROME,
           WDF_DSTL_ECC_3_SYNDROME_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WDF_DSTL_ECC_3_SYNDROME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WDF_DSTL_ECC_3_SYNDROME]

//>> PREP_[WDF_ECC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_WDF_ECC(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = WDF_ECC;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[WDF_ECC]

//>> GET_[WDF_ECC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_WDF_ECC(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = WDF_ECC;
#endif
    return fapi2::getScom(i_target, WDF_ECC, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[WDF_ECC]

//>> PUT_[WDF_ECC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_WDF_ECC(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(WDF_ECC));
#endif
    return fapi2::putScom(i_target, WDF_ECC, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[WDF_ECC]


//>> SET_[WDF_ECC_0_ERR_TYPE]
static inline fapi2::buffer<uint64_t>& SET_WDF_ECC_0_ERR_TYPE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_ECC));
#endif
    return o_data.insertFromRight<WDF_ECC_0_ERR_TYPE,
           WDF_ECC_0_ERR_TYPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WDF_ECC_0_ERR_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_ECC_0_ERR_TYPE]

//>> SET_[WDF_ECC_0_ERR_TYPE]
static inline fapi2::buffer<uint64_t>& SET_WDF_ECC_0_ERR_TYPE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_ECC));
#endif
    return o_data.insertFromRight<WDF_ECC_0_ERR_TYPE,
           WDF_ECC_0_ERR_TYPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WDF_ECC_0_ERR_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_ECC_0_ERR_TYPE]

//>> GET_[WDF_ECC_0_ERR_TYPE]
static inline fapi2::buffer<uint64_t>& GET_WDF_ECC_0_ERR_TYPE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_ECC));
#endif
    return i_data.extractToRight<WDF_ECC_0_ERR_TYPE,
           WDF_ECC_0_ERR_TYPE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WDF_ECC_0_ERR_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WDF_ECC_0_ERR_TYPE]

//>> SET_[WDF_ECC_0_SYNDROME]
static inline fapi2::buffer<uint64_t>& SET_WDF_ECC_0_SYNDROME(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_ECC));
#endif
    return o_data.insertFromRight<WDF_ECC_0_SYNDROME,
           WDF_ECC_0_SYNDROME_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WDF_ECC_0_SYNDROME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_ECC_0_SYNDROME]

//>> SET_[WDF_ECC_0_SYNDROME]
static inline fapi2::buffer<uint64_t>& SET_WDF_ECC_0_SYNDROME(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_ECC));
#endif
    return o_data.insertFromRight<WDF_ECC_0_SYNDROME,
           WDF_ECC_0_SYNDROME_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WDF_ECC_0_SYNDROME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_ECC_0_SYNDROME]

//>> GET_[WDF_ECC_0_SYNDROME]
static inline fapi2::buffer<uint64_t>& GET_WDF_ECC_0_SYNDROME(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_ECC));
#endif
    return i_data.extractToRight<WDF_ECC_0_SYNDROME,
           WDF_ECC_0_SYNDROME_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WDF_ECC_0_SYNDROME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WDF_ECC_0_SYNDROME]

//>> SET_[WDF_ECC_1_ERR_TYPE]
static inline fapi2::buffer<uint64_t>& SET_WDF_ECC_1_ERR_TYPE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_ECC));
#endif
    return o_data.insertFromRight<WDF_ECC_1_ERR_TYPE,
           WDF_ECC_1_ERR_TYPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WDF_ECC_1_ERR_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_ECC_1_ERR_TYPE]

//>> SET_[WDF_ECC_1_ERR_TYPE]
static inline fapi2::buffer<uint64_t>& SET_WDF_ECC_1_ERR_TYPE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_ECC));
#endif
    return o_data.insertFromRight<WDF_ECC_1_ERR_TYPE,
           WDF_ECC_1_ERR_TYPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WDF_ECC_1_ERR_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_ECC_1_ERR_TYPE]

//>> GET_[WDF_ECC_1_ERR_TYPE]
static inline fapi2::buffer<uint64_t>& GET_WDF_ECC_1_ERR_TYPE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_ECC));
#endif
    return i_data.extractToRight<WDF_ECC_1_ERR_TYPE,
           WDF_ECC_1_ERR_TYPE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WDF_ECC_1_ERR_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WDF_ECC_1_ERR_TYPE]

//>> SET_[WDF_ECC_1_SYNDROME]
static inline fapi2::buffer<uint64_t>& SET_WDF_ECC_1_SYNDROME(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_ECC));
#endif
    return o_data.insertFromRight<WDF_ECC_1_SYNDROME,
           WDF_ECC_1_SYNDROME_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WDF_ECC_1_SYNDROME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_ECC_1_SYNDROME]

//>> SET_[WDF_ECC_1_SYNDROME]
static inline fapi2::buffer<uint64_t>& SET_WDF_ECC_1_SYNDROME(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_ECC));
#endif
    return o_data.insertFromRight<WDF_ECC_1_SYNDROME,
           WDF_ECC_1_SYNDROME_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WDF_ECC_1_SYNDROME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_ECC_1_SYNDROME]

//>> GET_[WDF_ECC_1_SYNDROME]
static inline fapi2::buffer<uint64_t>& GET_WDF_ECC_1_SYNDROME(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_ECC));
#endif
    return i_data.extractToRight<WDF_ECC_1_SYNDROME,
           WDF_ECC_1_SYNDROME_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WDF_ECC_1_SYNDROME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WDF_ECC_1_SYNDROME]

//>> SET_[WDF_ECC_2_ERR_TYPE]
static inline fapi2::buffer<uint64_t>& SET_WDF_ECC_2_ERR_TYPE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_ECC));
#endif
    return o_data.insertFromRight<WDF_ECC_2_ERR_TYPE,
           WDF_ECC_2_ERR_TYPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WDF_ECC_2_ERR_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_ECC_2_ERR_TYPE]

//>> SET_[WDF_ECC_2_ERR_TYPE]
static inline fapi2::buffer<uint64_t>& SET_WDF_ECC_2_ERR_TYPE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_ECC));
#endif
    return o_data.insertFromRight<WDF_ECC_2_ERR_TYPE,
           WDF_ECC_2_ERR_TYPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WDF_ECC_2_ERR_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_ECC_2_ERR_TYPE]

//>> GET_[WDF_ECC_2_ERR_TYPE]
static inline fapi2::buffer<uint64_t>& GET_WDF_ECC_2_ERR_TYPE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_ECC));
#endif
    return i_data.extractToRight<WDF_ECC_2_ERR_TYPE,
           WDF_ECC_2_ERR_TYPE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WDF_ECC_2_ERR_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WDF_ECC_2_ERR_TYPE]

//>> SET_[WDF_ECC_2_SYNDROME]
static inline fapi2::buffer<uint64_t>& SET_WDF_ECC_2_SYNDROME(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_ECC));
#endif
    return o_data.insertFromRight<WDF_ECC_2_SYNDROME,
           WDF_ECC_2_SYNDROME_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WDF_ECC_2_SYNDROME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_ECC_2_SYNDROME]

//>> SET_[WDF_ECC_2_SYNDROME]
static inline fapi2::buffer<uint64_t>& SET_WDF_ECC_2_SYNDROME(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_ECC));
#endif
    return o_data.insertFromRight<WDF_ECC_2_SYNDROME,
           WDF_ECC_2_SYNDROME_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WDF_ECC_2_SYNDROME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_ECC_2_SYNDROME]

//>> GET_[WDF_ECC_2_SYNDROME]
static inline fapi2::buffer<uint64_t>& GET_WDF_ECC_2_SYNDROME(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_ECC));
#endif
    return i_data.extractToRight<WDF_ECC_2_SYNDROME,
           WDF_ECC_2_SYNDROME_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WDF_ECC_2_SYNDROME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WDF_ECC_2_SYNDROME]

//>> SET_[WDF_ECC_3_ERR_TYPE]
static inline fapi2::buffer<uint64_t>& SET_WDF_ECC_3_ERR_TYPE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_ECC));
#endif
    return o_data.insertFromRight<WDF_ECC_3_ERR_TYPE,
           WDF_ECC_3_ERR_TYPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WDF_ECC_3_ERR_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_ECC_3_ERR_TYPE]

//>> SET_[WDF_ECC_3_ERR_TYPE]
static inline fapi2::buffer<uint64_t>& SET_WDF_ECC_3_ERR_TYPE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_ECC));
#endif
    return o_data.insertFromRight<WDF_ECC_3_ERR_TYPE,
           WDF_ECC_3_ERR_TYPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WDF_ECC_3_ERR_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_ECC_3_ERR_TYPE]

//>> GET_[WDF_ECC_3_ERR_TYPE]
static inline fapi2::buffer<uint64_t>& GET_WDF_ECC_3_ERR_TYPE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_ECC));
#endif
    return i_data.extractToRight<WDF_ECC_3_ERR_TYPE,
           WDF_ECC_3_ERR_TYPE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WDF_ECC_3_ERR_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WDF_ECC_3_ERR_TYPE]

//>> SET_[WDF_ECC_3_SYNDROME]
static inline fapi2::buffer<uint64_t>& SET_WDF_ECC_3_SYNDROME(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_ECC));
#endif
    return o_data.insertFromRight<WDF_ECC_3_SYNDROME,
           WDF_ECC_3_SYNDROME_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_mcc Invalid dial access WDF_ECC_3_SYNDROME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_ECC_3_SYNDROME]

//>> SET_[WDF_ECC_3_SYNDROME]
static inline fapi2::buffer<uint64_t>& SET_WDF_ECC_3_SYNDROME(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_ECC));
#endif
    return o_data.insertFromRight<WDF_ECC_3_SYNDROME,
           WDF_ECC_3_SYNDROME_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_mcc Invalid dial access WDF_ECC_3_SYNDROME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[WDF_ECC_3_SYNDROME]

//>> GET_[WDF_ECC_3_SYNDROME]
static inline fapi2::buffer<uint64_t>& GET_WDF_ECC_3_SYNDROME(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WDF_ECC));
#endif
    return i_data.extractToRight<WDF_ECC_3_SYNDROME,
           WDF_ECC_3_SYNDROME_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_mcc Invalid dial access WDF_ECC_3_SYNDROME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[WDF_ECC_3_SYNDROME]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
