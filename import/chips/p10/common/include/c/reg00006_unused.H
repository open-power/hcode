/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/c/reg00006_unused.H $         */
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

#ifndef __C_REG00006_H_UNUSED__
#define __C_REG00006_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace c
{
#endif


//>> PREP_[CPMS_CERR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CPMS_CERR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_CERR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CPMS_CERR]

//>> GET_[CPMS_CERR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CPMS_CERR(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_CERR;
#endif
    return fapi2::getScom(i_target, CPMS_CERR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CPMS_CERR]

//>> PUT_[CPMS_CERR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CPMS_CERR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return fapi2::putScom(i_target, CPMS_CERR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CPMS_CERR]


//>> SET_[CPMS_CERR_L3_PFET_SEQ_ERR]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CERR_L3_PFET_SEQ_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return o_data.insertFromRight<CPMS_CERR_L3_PFET_SEQ_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access CPMS_CERR_L3_PFET_SEQ_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CERR_L3_PFET_SEQ_ERR]

//>> SET_[CPMS_CERR_L3_PFET_SEQ_ERR]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CERR_L3_PFET_SEQ_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return o_data.insertFromRight<CPMS_CERR_L3_PFET_SEQ_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access CPMS_CERR_L3_PFET_SEQ_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CERR_L3_PFET_SEQ_ERR]

//>> SET_[CPMS_CERR_L3_PFET_SEQ_ERR]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CERR_L3_PFET_SEQ_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return o_data.setBit<CPMS_CERR_L3_PFET_SEQ_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access CPMS_CERR_L3_PFET_SEQ_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CERR_L3_PFET_SEQ_ERR]

//>> CLEAR_[CPMS_CERR_L3_PFET_SEQ_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_CERR_L3_PFET_SEQ_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return o_data.clearBit<CPMS_CERR_L3_PFET_SEQ_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access CPMS_CERR_L3_PFET_SEQ_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_CERR_L3_PFET_SEQ_ERR]

//>> GET_[CPMS_CERR_L3_PFET_SEQ_ERR]
static inline fapi2::buffer<uint64_t>& GET_CPMS_CERR_L3_PFET_SEQ_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return i_data.extractToRight<CPMS_CERR_L3_PFET_SEQ_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access CPMS_CERR_L3_PFET_SEQ_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CERR_L3_PFET_SEQ_ERR]

//>> GET_[CPMS_CERR_L3_PFET_SEQ_ERR]
static inline bool GET_CPMS_CERR_L3_PFET_SEQ_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return i_data.getBit<CPMS_CERR_L3_PFET_SEQ_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access CPMS_CERR_L3_PFET_SEQ_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CERR_L3_PFET_SEQ_ERR]

//>> SET_[CPMS_CERR_CL2_PFET_SEQ_ERR]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CERR_CL2_PFET_SEQ_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return o_data.insertFromRight<CPMS_CERR_CL2_PFET_SEQ_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access CPMS_CERR_CL2_PFET_SEQ_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CERR_CL2_PFET_SEQ_ERR]

//>> SET_[CPMS_CERR_CL2_PFET_SEQ_ERR]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CERR_CL2_PFET_SEQ_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return o_data.insertFromRight<CPMS_CERR_CL2_PFET_SEQ_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access CPMS_CERR_CL2_PFET_SEQ_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CERR_CL2_PFET_SEQ_ERR]

//>> SET_[CPMS_CERR_CL2_PFET_SEQ_ERR]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CERR_CL2_PFET_SEQ_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return o_data.setBit<CPMS_CERR_CL2_PFET_SEQ_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access CPMS_CERR_CL2_PFET_SEQ_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CERR_CL2_PFET_SEQ_ERR]

//>> CLEAR_[CPMS_CERR_CL2_PFET_SEQ_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_CERR_CL2_PFET_SEQ_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return o_data.clearBit<CPMS_CERR_CL2_PFET_SEQ_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access CPMS_CERR_CL2_PFET_SEQ_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_CERR_CL2_PFET_SEQ_ERR]

//>> GET_[CPMS_CERR_CL2_PFET_SEQ_ERR]
static inline fapi2::buffer<uint64_t>& GET_CPMS_CERR_CL2_PFET_SEQ_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return i_data.extractToRight<CPMS_CERR_CL2_PFET_SEQ_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access CPMS_CERR_CL2_PFET_SEQ_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CERR_CL2_PFET_SEQ_ERR]

//>> GET_[CPMS_CERR_CL2_PFET_SEQ_ERR]
static inline bool GET_CPMS_CERR_CL2_PFET_SEQ_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return i_data.getBit<CPMS_CERR_CL2_PFET_SEQ_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access CPMS_CERR_CL2_PFET_SEQ_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CERR_CL2_PFET_SEQ_ERR]

//>> SET_[CPMS_CERR_MMA_PFET_SEQ_ERR]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CERR_MMA_PFET_SEQ_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return o_data.insertFromRight<CPMS_CERR_MMA_PFET_SEQ_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access CPMS_CERR_MMA_PFET_SEQ_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CERR_MMA_PFET_SEQ_ERR]

//>> SET_[CPMS_CERR_MMA_PFET_SEQ_ERR]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CERR_MMA_PFET_SEQ_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return o_data.insertFromRight<CPMS_CERR_MMA_PFET_SEQ_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access CPMS_CERR_MMA_PFET_SEQ_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CERR_MMA_PFET_SEQ_ERR]

//>> SET_[CPMS_CERR_MMA_PFET_SEQ_ERR]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CERR_MMA_PFET_SEQ_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return o_data.setBit<CPMS_CERR_MMA_PFET_SEQ_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access CPMS_CERR_MMA_PFET_SEQ_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CERR_MMA_PFET_SEQ_ERR]

//>> CLEAR_[CPMS_CERR_MMA_PFET_SEQ_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_CERR_MMA_PFET_SEQ_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return o_data.clearBit<CPMS_CERR_MMA_PFET_SEQ_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access CPMS_CERR_MMA_PFET_SEQ_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_CERR_MMA_PFET_SEQ_ERR]

//>> GET_[CPMS_CERR_MMA_PFET_SEQ_ERR]
static inline fapi2::buffer<uint64_t>& GET_CPMS_CERR_MMA_PFET_SEQ_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return i_data.extractToRight<CPMS_CERR_MMA_PFET_SEQ_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access CPMS_CERR_MMA_PFET_SEQ_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CERR_MMA_PFET_SEQ_ERR]

//>> GET_[CPMS_CERR_MMA_PFET_SEQ_ERR]
static inline bool GET_CPMS_CERR_MMA_PFET_SEQ_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return i_data.getBit<CPMS_CERR_MMA_PFET_SEQ_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access CPMS_CERR_MMA_PFET_SEQ_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CERR_MMA_PFET_SEQ_ERR]

//>> SET_[CPMS_CERR_DDS_ERR]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CERR_DDS_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return o_data.insertFromRight<CPMS_CERR_DDS_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access CPMS_CERR_DDS_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CERR_DDS_ERR]

//>> SET_[CPMS_CERR_DDS_ERR]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CERR_DDS_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return o_data.insertFromRight<CPMS_CERR_DDS_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access CPMS_CERR_DDS_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CERR_DDS_ERR]

//>> SET_[CPMS_CERR_DDS_ERR]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CERR_DDS_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return o_data.setBit<CPMS_CERR_DDS_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access CPMS_CERR_DDS_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CERR_DDS_ERR]

//>> CLEAR_[CPMS_CERR_DDS_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_CERR_DDS_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return o_data.clearBit<CPMS_CERR_DDS_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access CPMS_CERR_DDS_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_CERR_DDS_ERR]

//>> GET_[CPMS_CERR_DDS_ERR]
static inline fapi2::buffer<uint64_t>& GET_CPMS_CERR_DDS_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return i_data.extractToRight<CPMS_CERR_DDS_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access CPMS_CERR_DDS_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CERR_DDS_ERR]

//>> GET_[CPMS_CERR_DDS_ERR]
static inline bool GET_CPMS_CERR_DDS_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return i_data.getBit<CPMS_CERR_DDS_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access CPMS_CERR_DDS_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CERR_DDS_ERR]

//>> SET_[CPMS_CERR_L3_CLOCK_SYNC_ERR]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CERR_L3_CLOCK_SYNC_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return o_data.insertFromRight<CPMS_CERR_L3_CLOCK_SYNC_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access CPMS_CERR_L3_CLOCK_SYNC_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CERR_L3_CLOCK_SYNC_ERR]

//>> SET_[CPMS_CERR_L3_CLOCK_SYNC_ERR]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CERR_L3_CLOCK_SYNC_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return o_data.insertFromRight<CPMS_CERR_L3_CLOCK_SYNC_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access CPMS_CERR_L3_CLOCK_SYNC_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CERR_L3_CLOCK_SYNC_ERR]

//>> SET_[CPMS_CERR_L3_CLOCK_SYNC_ERR]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CERR_L3_CLOCK_SYNC_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return o_data.setBit<CPMS_CERR_L3_CLOCK_SYNC_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access CPMS_CERR_L3_CLOCK_SYNC_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CERR_L3_CLOCK_SYNC_ERR]

//>> CLEAR_[CPMS_CERR_L3_CLOCK_SYNC_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_CERR_L3_CLOCK_SYNC_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return o_data.clearBit<CPMS_CERR_L3_CLOCK_SYNC_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access CPMS_CERR_L3_CLOCK_SYNC_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_CERR_L3_CLOCK_SYNC_ERR]

//>> GET_[CPMS_CERR_L3_CLOCK_SYNC_ERR]
static inline fapi2::buffer<uint64_t>& GET_CPMS_CERR_L3_CLOCK_SYNC_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return i_data.extractToRight<CPMS_CERR_L3_CLOCK_SYNC_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access CPMS_CERR_L3_CLOCK_SYNC_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CERR_L3_CLOCK_SYNC_ERR]

//>> GET_[CPMS_CERR_L3_CLOCK_SYNC_ERR]
static inline bool GET_CPMS_CERR_L3_CLOCK_SYNC_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return i_data.getBit<CPMS_CERR_L3_CLOCK_SYNC_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access CPMS_CERR_L3_CLOCK_SYNC_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CERR_L3_CLOCK_SYNC_ERR]

//>> SET_[CPMS_CERR_CL2_CLOCK_SYNC_ERR]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CERR_CL2_CLOCK_SYNC_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return o_data.insertFromRight<CPMS_CERR_CL2_CLOCK_SYNC_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access CPMS_CERR_CL2_CLOCK_SYNC_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CERR_CL2_CLOCK_SYNC_ERR]

//>> SET_[CPMS_CERR_CL2_CLOCK_SYNC_ERR]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CERR_CL2_CLOCK_SYNC_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return o_data.insertFromRight<CPMS_CERR_CL2_CLOCK_SYNC_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access CPMS_CERR_CL2_CLOCK_SYNC_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CERR_CL2_CLOCK_SYNC_ERR]

//>> SET_[CPMS_CERR_CL2_CLOCK_SYNC_ERR]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CERR_CL2_CLOCK_SYNC_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return o_data.setBit<CPMS_CERR_CL2_CLOCK_SYNC_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access CPMS_CERR_CL2_CLOCK_SYNC_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CERR_CL2_CLOCK_SYNC_ERR]

//>> CLEAR_[CPMS_CERR_CL2_CLOCK_SYNC_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_CERR_CL2_CLOCK_SYNC_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return o_data.clearBit<CPMS_CERR_CL2_CLOCK_SYNC_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access CPMS_CERR_CL2_CLOCK_SYNC_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_CERR_CL2_CLOCK_SYNC_ERR]

//>> GET_[CPMS_CERR_CL2_CLOCK_SYNC_ERR]
static inline fapi2::buffer<uint64_t>& GET_CPMS_CERR_CL2_CLOCK_SYNC_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return i_data.extractToRight<CPMS_CERR_CL2_CLOCK_SYNC_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access CPMS_CERR_CL2_CLOCK_SYNC_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CERR_CL2_CLOCK_SYNC_ERR]

//>> GET_[CPMS_CERR_CL2_CLOCK_SYNC_ERR]
static inline bool GET_CPMS_CERR_CL2_CLOCK_SYNC_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return i_data.getBit<CPMS_CERR_CL2_CLOCK_SYNC_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access CPMS_CERR_CL2_CLOCK_SYNC_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CERR_CL2_CLOCK_SYNC_ERR]

//>> SET_[CPMS_CERR_DPT_ACCESS_ERROR]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CERR_DPT_ACCESS_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return o_data.insertFromRight<CPMS_CERR_DPT_ACCESS_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access CPMS_CERR_DPT_ACCESS_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CERR_DPT_ACCESS_ERROR]

//>> SET_[CPMS_CERR_DPT_ACCESS_ERROR]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CERR_DPT_ACCESS_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return o_data.insertFromRight<CPMS_CERR_DPT_ACCESS_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access CPMS_CERR_DPT_ACCESS_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CERR_DPT_ACCESS_ERROR]

//>> SET_[CPMS_CERR_DPT_ACCESS_ERROR]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CERR_DPT_ACCESS_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return o_data.setBit<CPMS_CERR_DPT_ACCESS_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access CPMS_CERR_DPT_ACCESS_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CERR_DPT_ACCESS_ERROR]

//>> CLEAR_[CPMS_CERR_DPT_ACCESS_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_CERR_DPT_ACCESS_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return o_data.clearBit<CPMS_CERR_DPT_ACCESS_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access CPMS_CERR_DPT_ACCESS_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_CERR_DPT_ACCESS_ERROR]

//>> GET_[CPMS_CERR_DPT_ACCESS_ERROR]
static inline fapi2::buffer<uint64_t>& GET_CPMS_CERR_DPT_ACCESS_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return i_data.extractToRight<CPMS_CERR_DPT_ACCESS_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access CPMS_CERR_DPT_ACCESS_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CERR_DPT_ACCESS_ERROR]

//>> GET_[CPMS_CERR_DPT_ACCESS_ERROR]
static inline bool GET_CPMS_CERR_DPT_ACCESS_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return i_data.getBit<CPMS_CERR_DPT_ACCESS_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access CPMS_CERR_DPT_ACCESS_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CERR_DPT_ACCESS_ERROR]

//>> SET_[CPMS_CERR_PROXY_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CERR_PROXY_UNDERFLOW(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return o_data.insertFromRight<CPMS_CERR_PROXY_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access CPMS_CERR_PROXY_UNDERFLOW chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CERR_PROXY_UNDERFLOW]

//>> SET_[CPMS_CERR_PROXY_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CERR_PROXY_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return o_data.insertFromRight<CPMS_CERR_PROXY_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access CPMS_CERR_PROXY_UNDERFLOW chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CERR_PROXY_UNDERFLOW]

//>> SET_[CPMS_CERR_PROXY_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CERR_PROXY_UNDERFLOW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return o_data.setBit<CPMS_CERR_PROXY_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access CPMS_CERR_PROXY_UNDERFLOW chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CERR_PROXY_UNDERFLOW]

//>> CLEAR_[CPMS_CERR_PROXY_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_CERR_PROXY_UNDERFLOW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return o_data.clearBit<CPMS_CERR_PROXY_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access CPMS_CERR_PROXY_UNDERFLOW chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_CERR_PROXY_UNDERFLOW]

//>> GET_[CPMS_CERR_PROXY_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_CPMS_CERR_PROXY_UNDERFLOW(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return i_data.extractToRight<CPMS_CERR_PROXY_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access CPMS_CERR_PROXY_UNDERFLOW chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CERR_PROXY_UNDERFLOW]

//>> GET_[CPMS_CERR_PROXY_UNDERFLOW]
static inline bool GET_CPMS_CERR_PROXY_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return i_data.getBit<CPMS_CERR_PROXY_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access CPMS_CERR_PROXY_UNDERFLOW chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CERR_PROXY_UNDERFLOW]

//>> SET_[CPMS_CERR_PITCH_SATURATED]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CERR_PITCH_SATURATED(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return o_data.insertFromRight<CPMS_CERR_PITCH_SATURATED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access CPMS_CERR_PITCH_SATURATED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CERR_PITCH_SATURATED]

//>> SET_[CPMS_CERR_PITCH_SATURATED]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CERR_PITCH_SATURATED(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return o_data.insertFromRight<CPMS_CERR_PITCH_SATURATED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access CPMS_CERR_PITCH_SATURATED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CERR_PITCH_SATURATED]

//>> SET_[CPMS_CERR_PITCH_SATURATED]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CERR_PITCH_SATURATED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return o_data.setBit<CPMS_CERR_PITCH_SATURATED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access CPMS_CERR_PITCH_SATURATED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CERR_PITCH_SATURATED]

//>> CLEAR_[CPMS_CERR_PITCH_SATURATED]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_CERR_PITCH_SATURATED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return o_data.clearBit<CPMS_CERR_PITCH_SATURATED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access CPMS_CERR_PITCH_SATURATED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_CERR_PITCH_SATURATED]

//>> GET_[CPMS_CERR_PITCH_SATURATED]
static inline fapi2::buffer<uint64_t>& GET_CPMS_CERR_PITCH_SATURATED(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return i_data.extractToRight<CPMS_CERR_PITCH_SATURATED,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access CPMS_CERR_PITCH_SATURATED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CERR_PITCH_SATURATED]

//>> GET_[CPMS_CERR_PITCH_SATURATED]
static inline bool GET_CPMS_CERR_PITCH_SATURATED(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return i_data.getBit<CPMS_CERR_PITCH_SATURATED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access CPMS_CERR_PITCH_SATURATED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CERR_PITCH_SATURATED]

//>> SET_[CPMS_CERR_FTC_DEBUG_EVENT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CERR_FTC_DEBUG_EVENT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return o_data.insertFromRight<CPMS_CERR_FTC_DEBUG_EVENT,
           CPMS_CERR_FTC_DEBUG_EVENT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access CPMS_CERR_FTC_DEBUG_EVENT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CERR_FTC_DEBUG_EVENT]

//>> SET_[CPMS_CERR_FTC_DEBUG_EVENT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CERR_FTC_DEBUG_EVENT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return o_data.insertFromRight<CPMS_CERR_FTC_DEBUG_EVENT,
           CPMS_CERR_FTC_DEBUG_EVENT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access CPMS_CERR_FTC_DEBUG_EVENT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CERR_FTC_DEBUG_EVENT]

//>> GET_[CPMS_CERR_FTC_DEBUG_EVENT]
static inline fapi2::buffer<uint64_t>& GET_CPMS_CERR_FTC_DEBUG_EVENT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERR));
#endif
    return i_data.extractToRight<CPMS_CERR_FTC_DEBUG_EVENT,
           CPMS_CERR_FTC_DEBUG_EVENT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access CPMS_CERR_FTC_DEBUG_EVENT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CERR_FTC_DEBUG_EVENT]

//>> PREP_[CPMS_DMSR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CPMS_DMSR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_DMSR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CPMS_DMSR]

//>> GET_[CPMS_DMSR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CPMS_DMSR(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_DMSR;
#endif
    return fapi2::getScom(i_target, CPMS_DMSR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CPMS_DMSR]

//>> PUT_[CPMS_DMSR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CPMS_DMSR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CPMS_DMSR));
#endif
    return fapi2::putScom(i_target, CPMS_DMSR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CPMS_DMSR]


//>> SET_[CPMS_DMSR_0_COUNT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DMSR_0_COUNT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DMSR));
#endif
    return o_data.insertFromRight<CPMS_DMSR_0_COUNT,
           CPMS_DMSR_0_COUNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access CPMS_DMSR_0_COUNT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DMSR_0_COUNT]

//>> SET_[CPMS_DMSR_0_COUNT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DMSR_0_COUNT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DMSR));
#endif
    return o_data.insertFromRight<CPMS_DMSR_0_COUNT,
           CPMS_DMSR_0_COUNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access CPMS_DMSR_0_COUNT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DMSR_0_COUNT]

//>> GET_[CPMS_DMSR_0_COUNT]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DMSR_0_COUNT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DMSR));
#endif
    return i_data.extractToRight<CPMS_DMSR_0_COUNT,
           CPMS_DMSR_0_COUNT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access CPMS_DMSR_0_COUNT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DMSR_0_COUNT]

//>> SET_[CPMS_DMSR_1_COUNT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DMSR_1_COUNT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DMSR));
#endif
    return o_data.insertFromRight<CPMS_DMSR_1_COUNT,
           CPMS_DMSR_1_COUNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access CPMS_DMSR_1_COUNT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DMSR_1_COUNT]

//>> SET_[CPMS_DMSR_1_COUNT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DMSR_1_COUNT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DMSR));
#endif
    return o_data.insertFromRight<CPMS_DMSR_1_COUNT,
           CPMS_DMSR_1_COUNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access CPMS_DMSR_1_COUNT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DMSR_1_COUNT]

//>> GET_[CPMS_DMSR_1_COUNT]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DMSR_1_COUNT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DMSR));
#endif
    return i_data.extractToRight<CPMS_DMSR_1_COUNT,
           CPMS_DMSR_1_COUNT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access CPMS_DMSR_1_COUNT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DMSR_1_COUNT]

//>> PREP_[CPMS_DPPR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CPMS_DPPR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_DPPR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CPMS_DPPR]

//>> GET_[CPMS_DPPR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CPMS_DPPR(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_DPPR;
#endif
    return fapi2::getScom(i_target, CPMS_DPPR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CPMS_DPPR]

//>> PUT_[CPMS_DPPR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CPMS_DPPR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return fapi2::putScom(i_target, CPMS_DPPR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CPMS_DPPR]

//>> PREP_[CPMS_DPPR_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CPMS_DPPR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_DPPR_WO_CLEAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CPMS_DPPR_WO_CLEAR]

//>> GET_[CPMS_DPPR_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CPMS_DPPR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_DPPR_WO_CLEAR;
#endif
    return fapi2::getScom(i_target, CPMS_DPPR_WO_CLEAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CPMS_DPPR_WO_CLEAR]

//>> PUT_[CPMS_DPPR_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CPMS_DPPR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return fapi2::putScom(i_target, CPMS_DPPR_WO_CLEAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CPMS_DPPR_WO_CLEAR]

//>> PREP_[CPMS_DPPR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CPMS_DPPR_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_DPPR_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CPMS_DPPR_WO_OR]

//>> GET_[CPMS_DPPR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CPMS_DPPR_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_DPPR_WO_OR;
#endif
    return fapi2::getScom(i_target, CPMS_DPPR_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CPMS_DPPR_WO_OR]

//>> PUT_[CPMS_DPPR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CPMS_DPPR_WO_OR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return fapi2::putScom(i_target, CPMS_DPPR_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CPMS_DPPR_WO_OR]


//>> SET_[CPMS_DPPR_PITCH_ABORT_INTERRUPT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DPPR_PITCH_ABORT_INTERRUPT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_DPPR_PITCH_ABORT_INTERRUPT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access CPMS_DPPR_PITCH_ABORT_INTERRUPT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DPPR_PITCH_ABORT_INTERRUPT_ENABLE]

//>> SET_[CPMS_DPPR_PITCH_ABORT_INTERRUPT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DPPR_PITCH_ABORT_INTERRUPT_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_DPPR_PITCH_ABORT_INTERRUPT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access CPMS_DPPR_PITCH_ABORT_INTERRUPT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DPPR_PITCH_ABORT_INTERRUPT_ENABLE]

//>> SET_[CPMS_DPPR_PITCH_ABORT_INTERRUPT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DPPR_PITCH_ABORT_INTERRUPT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.setBit<CPMS_DPPR_PITCH_ABORT_INTERRUPT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access CPMS_DPPR_PITCH_ABORT_INTERRUPT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DPPR_PITCH_ABORT_INTERRUPT_ENABLE]

//>> CLEAR_[CPMS_DPPR_PITCH_ABORT_INTERRUPT_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_DPPR_PITCH_ABORT_INTERRUPT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.clearBit<CPMS_DPPR_PITCH_ABORT_INTERRUPT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access CPMS_DPPR_PITCH_ABORT_INTERRUPT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_DPPR_PITCH_ABORT_INTERRUPT_ENABLE]

//>> GET_[CPMS_DPPR_PITCH_ABORT_INTERRUPT_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DPPR_PITCH_ABORT_INTERRUPT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return i_data.extractToRight<CPMS_DPPR_PITCH_ABORT_INTERRUPT_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access CPMS_DPPR_PITCH_ABORT_INTERRUPT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DPPR_PITCH_ABORT_INTERRUPT_ENABLE]

//>> GET_[CPMS_DPPR_PITCH_ABORT_INTERRUPT_ENABLE]
static inline bool GET_CPMS_DPPR_PITCH_ABORT_INTERRUPT_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return i_data.getBit<CPMS_DPPR_PITCH_ABORT_INTERRUPT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access CPMS_DPPR_PITCH_ABORT_INTERRUPT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DPPR_PITCH_ABORT_INTERRUPT_ENABLE]

//>> SET_[CPMS_DPPR_PTSR_EVENT_SELECT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DPPR_PTSR_EVENT_SELECT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_DPPR_PTSR_EVENT_SELECT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access CPMS_DPPR_PTSR_EVENT_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DPPR_PTSR_EVENT_SELECT]

//>> SET_[CPMS_DPPR_PTSR_EVENT_SELECT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DPPR_PTSR_EVENT_SELECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_DPPR_PTSR_EVENT_SELECT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access CPMS_DPPR_PTSR_EVENT_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DPPR_PTSR_EVENT_SELECT]

//>> SET_[CPMS_DPPR_PTSR_EVENT_SELECT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DPPR_PTSR_EVENT_SELECT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.setBit<CPMS_DPPR_PTSR_EVENT_SELECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access CPMS_DPPR_PTSR_EVENT_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DPPR_PTSR_EVENT_SELECT]

//>> CLEAR_[CPMS_DPPR_PTSR_EVENT_SELECT]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_DPPR_PTSR_EVENT_SELECT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.clearBit<CPMS_DPPR_PTSR_EVENT_SELECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access CPMS_DPPR_PTSR_EVENT_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_DPPR_PTSR_EVENT_SELECT]

//>> GET_[CPMS_DPPR_PTSR_EVENT_SELECT]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DPPR_PTSR_EVENT_SELECT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return i_data.extractToRight<CPMS_DPPR_PTSR_EVENT_SELECT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access CPMS_DPPR_PTSR_EVENT_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DPPR_PTSR_EVENT_SELECT]

//>> GET_[CPMS_DPPR_PTSR_EVENT_SELECT]
static inline bool GET_CPMS_DPPR_PTSR_EVENT_SELECT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return i_data.getBit<CPMS_DPPR_PTSR_EVENT_SELECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access CPMS_DPPR_PTSR_EVENT_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DPPR_PTSR_EVENT_SELECT]

//>> SET_[CPMS_DPPR_ENERGY_PROXY_RESET_MODE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DPPR_ENERGY_PROXY_RESET_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_DPPR_ENERGY_PROXY_RESET_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access CPMS_DPPR_ENERGY_PROXY_RESET_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DPPR_ENERGY_PROXY_RESET_MODE]

//>> SET_[CPMS_DPPR_ENERGY_PROXY_RESET_MODE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DPPR_ENERGY_PROXY_RESET_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_DPPR_ENERGY_PROXY_RESET_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access CPMS_DPPR_ENERGY_PROXY_RESET_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DPPR_ENERGY_PROXY_RESET_MODE]

//>> SET_[CPMS_DPPR_ENERGY_PROXY_RESET_MODE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DPPR_ENERGY_PROXY_RESET_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.setBit<CPMS_DPPR_ENERGY_PROXY_RESET_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access CPMS_DPPR_ENERGY_PROXY_RESET_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DPPR_ENERGY_PROXY_RESET_MODE]

//>> CLEAR_[CPMS_DPPR_ENERGY_PROXY_RESET_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_DPPR_ENERGY_PROXY_RESET_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.clearBit<CPMS_DPPR_ENERGY_PROXY_RESET_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access CPMS_DPPR_ENERGY_PROXY_RESET_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_DPPR_ENERGY_PROXY_RESET_MODE]

//>> GET_[CPMS_DPPR_ENERGY_PROXY_RESET_MODE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DPPR_ENERGY_PROXY_RESET_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return i_data.extractToRight<CPMS_DPPR_ENERGY_PROXY_RESET_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access CPMS_DPPR_ENERGY_PROXY_RESET_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DPPR_ENERGY_PROXY_RESET_MODE]

//>> GET_[CPMS_DPPR_ENERGY_PROXY_RESET_MODE]
static inline bool GET_CPMS_DPPR_ENERGY_PROXY_RESET_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return i_data.getBit<CPMS_DPPR_ENERGY_PROXY_RESET_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access CPMS_DPPR_ENERGY_PROXY_RESET_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DPPR_ENERGY_PROXY_RESET_MODE]

//>> SET_[CPMS_DPPR_PIL_THROTTLE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DPPR_PIL_THROTTLE_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_DPPR_PIL_THROTTLE_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access CPMS_DPPR_PIL_THROTTLE_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DPPR_PIL_THROTTLE_ENABLE]

//>> SET_[CPMS_DPPR_PIL_THROTTLE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DPPR_PIL_THROTTLE_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_DPPR_PIL_THROTTLE_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access CPMS_DPPR_PIL_THROTTLE_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DPPR_PIL_THROTTLE_ENABLE]

//>> SET_[CPMS_DPPR_PIL_THROTTLE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DPPR_PIL_THROTTLE_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.setBit<CPMS_DPPR_PIL_THROTTLE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access CPMS_DPPR_PIL_THROTTLE_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DPPR_PIL_THROTTLE_ENABLE]

//>> CLEAR_[CPMS_DPPR_PIL_THROTTLE_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_DPPR_PIL_THROTTLE_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.clearBit<CPMS_DPPR_PIL_THROTTLE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access CPMS_DPPR_PIL_THROTTLE_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_DPPR_PIL_THROTTLE_ENABLE]

//>> GET_[CPMS_DPPR_PIL_THROTTLE_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DPPR_PIL_THROTTLE_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return i_data.extractToRight<CPMS_DPPR_PIL_THROTTLE_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access CPMS_DPPR_PIL_THROTTLE_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DPPR_PIL_THROTTLE_ENABLE]

//>> GET_[CPMS_DPPR_PIL_THROTTLE_ENABLE]
static inline bool GET_CPMS_DPPR_PIL_THROTTLE_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return i_data.getBit<CPMS_DPPR_PIL_THROTTLE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access CPMS_DPPR_PIL_THROTTLE_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DPPR_PIL_THROTTLE_ENABLE]

//>> SET_[CPMS_DPPR_OCP_THROTTLE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DPPR_OCP_THROTTLE_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_DPPR_OCP_THROTTLE_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access CPMS_DPPR_OCP_THROTTLE_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DPPR_OCP_THROTTLE_ENABLE]

//>> SET_[CPMS_DPPR_OCP_THROTTLE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DPPR_OCP_THROTTLE_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_DPPR_OCP_THROTTLE_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access CPMS_DPPR_OCP_THROTTLE_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DPPR_OCP_THROTTLE_ENABLE]

//>> SET_[CPMS_DPPR_OCP_THROTTLE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DPPR_OCP_THROTTLE_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.setBit<CPMS_DPPR_OCP_THROTTLE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access CPMS_DPPR_OCP_THROTTLE_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DPPR_OCP_THROTTLE_ENABLE]

//>> CLEAR_[CPMS_DPPR_OCP_THROTTLE_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_DPPR_OCP_THROTTLE_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.clearBit<CPMS_DPPR_OCP_THROTTLE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access CPMS_DPPR_OCP_THROTTLE_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_DPPR_OCP_THROTTLE_ENABLE]

//>> GET_[CPMS_DPPR_OCP_THROTTLE_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DPPR_OCP_THROTTLE_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return i_data.extractToRight<CPMS_DPPR_OCP_THROTTLE_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access CPMS_DPPR_OCP_THROTTLE_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DPPR_OCP_THROTTLE_ENABLE]

//>> GET_[CPMS_DPPR_OCP_THROTTLE_ENABLE]
static inline bool GET_CPMS_DPPR_OCP_THROTTLE_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return i_data.getBit<CPMS_DPPR_OCP_THROTTLE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access CPMS_DPPR_OCP_THROTTLE_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DPPR_OCP_THROTTLE_ENABLE]

//>> SET_[CPMS_DPPR_OCP_INTERRUPT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DPPR_OCP_INTERRUPT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_DPPR_OCP_INTERRUPT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access CPMS_DPPR_OCP_INTERRUPT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DPPR_OCP_INTERRUPT_ENABLE]

//>> SET_[CPMS_DPPR_OCP_INTERRUPT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DPPR_OCP_INTERRUPT_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_DPPR_OCP_INTERRUPT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access CPMS_DPPR_OCP_INTERRUPT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DPPR_OCP_INTERRUPT_ENABLE]

//>> SET_[CPMS_DPPR_OCP_INTERRUPT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DPPR_OCP_INTERRUPT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.setBit<CPMS_DPPR_OCP_INTERRUPT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access CPMS_DPPR_OCP_INTERRUPT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DPPR_OCP_INTERRUPT_ENABLE]

//>> CLEAR_[CPMS_DPPR_OCP_INTERRUPT_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_DPPR_OCP_INTERRUPT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.clearBit<CPMS_DPPR_OCP_INTERRUPT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access CPMS_DPPR_OCP_INTERRUPT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_DPPR_OCP_INTERRUPT_ENABLE]

//>> GET_[CPMS_DPPR_OCP_INTERRUPT_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DPPR_OCP_INTERRUPT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return i_data.extractToRight<CPMS_DPPR_OCP_INTERRUPT_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access CPMS_DPPR_OCP_INTERRUPT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DPPR_OCP_INTERRUPT_ENABLE]

//>> GET_[CPMS_DPPR_OCP_INTERRUPT_ENABLE]
static inline bool GET_CPMS_DPPR_OCP_INTERRUPT_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return i_data.getBit<CPMS_DPPR_OCP_INTERRUPT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access CPMS_DPPR_OCP_INTERRUPT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DPPR_OCP_INTERRUPT_ENABLE]

//>> SET_[CPMS_DPPR_OCP_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DPPR_OCP_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_DPPR_OCP_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access CPMS_DPPR_OCP_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DPPR_OCP_ENABLE]

//>> SET_[CPMS_DPPR_OCP_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DPPR_OCP_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_DPPR_OCP_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access CPMS_DPPR_OCP_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DPPR_OCP_ENABLE]

//>> SET_[CPMS_DPPR_OCP_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DPPR_OCP_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.setBit<CPMS_DPPR_OCP_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access CPMS_DPPR_OCP_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DPPR_OCP_ENABLE]

//>> CLEAR_[CPMS_DPPR_OCP_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_DPPR_OCP_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.clearBit<CPMS_DPPR_OCP_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access CPMS_DPPR_OCP_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_DPPR_OCP_ENABLE]

//>> GET_[CPMS_DPPR_OCP_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DPPR_OCP_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return i_data.extractToRight<CPMS_DPPR_OCP_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access CPMS_DPPR_OCP_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DPPR_OCP_ENABLE]

//>> GET_[CPMS_DPPR_OCP_ENABLE]
static inline bool GET_CPMS_DPPR_OCP_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return i_data.getBit<CPMS_DPPR_OCP_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access CPMS_DPPR_OCP_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DPPR_OCP_ENABLE]

//>> SET_[CPMS_DPPR_SPARE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DPPR_SPARE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_DPPR_SPARE,
           CPMS_DPPR_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access CPMS_DPPR_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DPPR_SPARE]

//>> SET_[CPMS_DPPR_SPARE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DPPR_SPARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_DPPR_SPARE,
           CPMS_DPPR_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access CPMS_DPPR_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DPPR_SPARE]

//>> GET_[CPMS_DPPR_SPARE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DPPR_SPARE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return i_data.extractToRight<CPMS_DPPR_SPARE,
           CPMS_DPPR_SPARE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access CPMS_DPPR_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DPPR_SPARE]

//>> SET_[CPMS_DPPR_PP0_THRESH_SCALE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DPPR_PP0_THRESH_SCALE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_DPPR_PP0_THRESH_SCALE,
           CPMS_DPPR_PP0_THRESH_SCALE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access CPMS_DPPR_PP0_THRESH_SCALE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DPPR_PP0_THRESH_SCALE]

//>> SET_[CPMS_DPPR_PP0_THRESH_SCALE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DPPR_PP0_THRESH_SCALE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_DPPR_PP0_THRESH_SCALE,
           CPMS_DPPR_PP0_THRESH_SCALE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access CPMS_DPPR_PP0_THRESH_SCALE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DPPR_PP0_THRESH_SCALE]

//>> GET_[CPMS_DPPR_PP0_THRESH_SCALE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DPPR_PP0_THRESH_SCALE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return i_data.extractToRight<CPMS_DPPR_PP0_THRESH_SCALE,
           CPMS_DPPR_PP0_THRESH_SCALE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access CPMS_DPPR_PP0_THRESH_SCALE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DPPR_PP0_THRESH_SCALE]

//>> SET_[CPMS_DPPR_PP0_THRESH_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DPPR_PP0_THRESH_VALUE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_DPPR_PP0_THRESH_VALUE,
           CPMS_DPPR_PP0_THRESH_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access CPMS_DPPR_PP0_THRESH_VALUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DPPR_PP0_THRESH_VALUE]

//>> SET_[CPMS_DPPR_PP0_THRESH_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DPPR_PP0_THRESH_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_DPPR_PP0_THRESH_VALUE,
           CPMS_DPPR_PP0_THRESH_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access CPMS_DPPR_PP0_THRESH_VALUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DPPR_PP0_THRESH_VALUE]

//>> GET_[CPMS_DPPR_PP0_THRESH_VALUE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DPPR_PP0_THRESH_VALUE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return i_data.extractToRight<CPMS_DPPR_PP0_THRESH_VALUE,
           CPMS_DPPR_PP0_THRESH_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access CPMS_DPPR_PP0_THRESH_VALUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DPPR_PP0_THRESH_VALUE]

//>> SET_[CPMS_DPPR_PP1_THRESH_SCALE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DPPR_PP1_THRESH_SCALE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_DPPR_PP1_THRESH_SCALE,
           CPMS_DPPR_PP1_THRESH_SCALE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access CPMS_DPPR_PP1_THRESH_SCALE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DPPR_PP1_THRESH_SCALE]

//>> SET_[CPMS_DPPR_PP1_THRESH_SCALE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DPPR_PP1_THRESH_SCALE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_DPPR_PP1_THRESH_SCALE,
           CPMS_DPPR_PP1_THRESH_SCALE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access CPMS_DPPR_PP1_THRESH_SCALE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DPPR_PP1_THRESH_SCALE]

//>> GET_[CPMS_DPPR_PP1_THRESH_SCALE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DPPR_PP1_THRESH_SCALE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return i_data.extractToRight<CPMS_DPPR_PP1_THRESH_SCALE,
           CPMS_DPPR_PP1_THRESH_SCALE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access CPMS_DPPR_PP1_THRESH_SCALE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DPPR_PP1_THRESH_SCALE]

//>> SET_[CPMS_DPPR_PP1_THRESH_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DPPR_PP1_THRESH_VALUE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_DPPR_PP1_THRESH_VALUE,
           CPMS_DPPR_PP1_THRESH_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access CPMS_DPPR_PP1_THRESH_VALUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DPPR_PP1_THRESH_VALUE]

//>> SET_[CPMS_DPPR_PP1_THRESH_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DPPR_PP1_THRESH_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_DPPR_PP1_THRESH_VALUE,
           CPMS_DPPR_PP1_THRESH_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access CPMS_DPPR_PP1_THRESH_VALUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DPPR_PP1_THRESH_VALUE]

//>> GET_[CPMS_DPPR_PP1_THRESH_VALUE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DPPR_PP1_THRESH_VALUE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return i_data.extractToRight<CPMS_DPPR_PP1_THRESH_VALUE,
           CPMS_DPPR_PP1_THRESH_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access CPMS_DPPR_PP1_THRESH_VALUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DPPR_PP1_THRESH_VALUE]

//>> SET_[CPMS_DPPR_OCP_WAIT_FOR_GRANT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DPPR_OCP_WAIT_FOR_GRANT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_DPPR_OCP_WAIT_FOR_GRANT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access CPMS_DPPR_OCP_WAIT_FOR_GRANT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DPPR_OCP_WAIT_FOR_GRANT]

//>> SET_[CPMS_DPPR_OCP_WAIT_FOR_GRANT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DPPR_OCP_WAIT_FOR_GRANT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_DPPR_OCP_WAIT_FOR_GRANT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access CPMS_DPPR_OCP_WAIT_FOR_GRANT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DPPR_OCP_WAIT_FOR_GRANT]

//>> SET_[CPMS_DPPR_OCP_WAIT_FOR_GRANT]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DPPR_OCP_WAIT_FOR_GRANT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.setBit<CPMS_DPPR_OCP_WAIT_FOR_GRANT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access CPMS_DPPR_OCP_WAIT_FOR_GRANT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DPPR_OCP_WAIT_FOR_GRANT]

//>> CLEAR_[CPMS_DPPR_OCP_WAIT_FOR_GRANT]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_DPPR_OCP_WAIT_FOR_GRANT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.clearBit<CPMS_DPPR_OCP_WAIT_FOR_GRANT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access CPMS_DPPR_OCP_WAIT_FOR_GRANT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_DPPR_OCP_WAIT_FOR_GRANT]

//>> GET_[CPMS_DPPR_OCP_WAIT_FOR_GRANT]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DPPR_OCP_WAIT_FOR_GRANT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return i_data.extractToRight<CPMS_DPPR_OCP_WAIT_FOR_GRANT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access CPMS_DPPR_OCP_WAIT_FOR_GRANT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DPPR_OCP_WAIT_FOR_GRANT]

//>> GET_[CPMS_DPPR_OCP_WAIT_FOR_GRANT]
static inline bool GET_CPMS_DPPR_OCP_WAIT_FOR_GRANT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return i_data.getBit<CPMS_DPPR_OCP_WAIT_FOR_GRANT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access CPMS_DPPR_OCP_WAIT_FOR_GRANT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DPPR_OCP_WAIT_FOR_GRANT]

//>> SET_[CPMS_DPPR_OCP_LOCAL_MSB_MAX]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DPPR_OCP_LOCAL_MSB_MAX(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_DPPR_OCP_LOCAL_MSB_MAX,
           CPMS_DPPR_OCP_LOCAL_MSB_MAX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access CPMS_DPPR_OCP_LOCAL_MSB_MAX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DPPR_OCP_LOCAL_MSB_MAX]

//>> SET_[CPMS_DPPR_OCP_LOCAL_MSB_MAX]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DPPR_OCP_LOCAL_MSB_MAX(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_DPPR_OCP_LOCAL_MSB_MAX,
           CPMS_DPPR_OCP_LOCAL_MSB_MAX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access CPMS_DPPR_OCP_LOCAL_MSB_MAX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DPPR_OCP_LOCAL_MSB_MAX]

//>> GET_[CPMS_DPPR_OCP_LOCAL_MSB_MAX]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DPPR_OCP_LOCAL_MSB_MAX(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return i_data.extractToRight<CPMS_DPPR_OCP_LOCAL_MSB_MAX,
           CPMS_DPPR_OCP_LOCAL_MSB_MAX_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access CPMS_DPPR_OCP_LOCAL_MSB_MAX chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DPPR_OCP_LOCAL_MSB_MAX]

//>> SET_[CPMS_DPPR_OCP_LOCAL_OVERAGE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DPPR_OCP_LOCAL_OVERAGE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_DPPR_OCP_LOCAL_OVERAGE,
           CPMS_DPPR_OCP_LOCAL_OVERAGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access CPMS_DPPR_OCP_LOCAL_OVERAGE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DPPR_OCP_LOCAL_OVERAGE]

//>> SET_[CPMS_DPPR_OCP_LOCAL_OVERAGE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DPPR_OCP_LOCAL_OVERAGE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_DPPR_OCP_LOCAL_OVERAGE,
           CPMS_DPPR_OCP_LOCAL_OVERAGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access CPMS_DPPR_OCP_LOCAL_OVERAGE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DPPR_OCP_LOCAL_OVERAGE]

//>> GET_[CPMS_DPPR_OCP_LOCAL_OVERAGE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DPPR_OCP_LOCAL_OVERAGE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return i_data.extractToRight<CPMS_DPPR_OCP_LOCAL_OVERAGE,
           CPMS_DPPR_OCP_LOCAL_OVERAGE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access CPMS_DPPR_OCP_LOCAL_OVERAGE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DPPR_OCP_LOCAL_OVERAGE]

//>> SET_[CPMS_DPPR_OCP_LOCAL_TANK_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DPPR_OCP_LOCAL_TANK_VALUE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_DPPR_OCP_LOCAL_TANK_VALUE,
           CPMS_DPPR_OCP_LOCAL_TANK_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access CPMS_DPPR_OCP_LOCAL_TANK_VALUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DPPR_OCP_LOCAL_TANK_VALUE]

//>> SET_[CPMS_DPPR_OCP_LOCAL_TANK_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DPPR_OCP_LOCAL_TANK_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_DPPR_OCP_LOCAL_TANK_VALUE,
           CPMS_DPPR_OCP_LOCAL_TANK_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access CPMS_DPPR_OCP_LOCAL_TANK_VALUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DPPR_OCP_LOCAL_TANK_VALUE]

//>> GET_[CPMS_DPPR_OCP_LOCAL_TANK_VALUE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DPPR_OCP_LOCAL_TANK_VALUE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return i_data.extractToRight<CPMS_DPPR_OCP_LOCAL_TANK_VALUE,
           CPMS_DPPR_OCP_LOCAL_TANK_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access CPMS_DPPR_OCP_LOCAL_TANK_VALUE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DPPR_OCP_LOCAL_TANK_VALUE]

//>> SET_[CPMS_DPPR_OCP_PITCH_OVERRIDE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DPPR_OCP_PITCH_OVERRIDE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_DPPR_OCP_PITCH_OVERRIDE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access CPMS_DPPR_OCP_PITCH_OVERRIDE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DPPR_OCP_PITCH_OVERRIDE]

//>> SET_[CPMS_DPPR_OCP_PITCH_OVERRIDE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DPPR_OCP_PITCH_OVERRIDE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_DPPR_OCP_PITCH_OVERRIDE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access CPMS_DPPR_OCP_PITCH_OVERRIDE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DPPR_OCP_PITCH_OVERRIDE]

//>> SET_[CPMS_DPPR_OCP_PITCH_OVERRIDE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DPPR_OCP_PITCH_OVERRIDE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.setBit<CPMS_DPPR_OCP_PITCH_OVERRIDE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access CPMS_DPPR_OCP_PITCH_OVERRIDE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DPPR_OCP_PITCH_OVERRIDE]

//>> CLEAR_[CPMS_DPPR_OCP_PITCH_OVERRIDE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_DPPR_OCP_PITCH_OVERRIDE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.clearBit<CPMS_DPPR_OCP_PITCH_OVERRIDE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access CPMS_DPPR_OCP_PITCH_OVERRIDE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_DPPR_OCP_PITCH_OVERRIDE]

//>> GET_[CPMS_DPPR_OCP_PITCH_OVERRIDE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DPPR_OCP_PITCH_OVERRIDE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return i_data.extractToRight<CPMS_DPPR_OCP_PITCH_OVERRIDE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access CPMS_DPPR_OCP_PITCH_OVERRIDE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DPPR_OCP_PITCH_OVERRIDE]

//>> GET_[CPMS_DPPR_OCP_PITCH_OVERRIDE]
static inline bool GET_CPMS_DPPR_OCP_PITCH_OVERRIDE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return i_data.getBit<CPMS_DPPR_OCP_PITCH_OVERRIDE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access CPMS_DPPR_OCP_PITCH_OVERRIDE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DPPR_OCP_PITCH_OVERRIDE]

//>> SET_[CPMS_DPPR_OCP_OVERRIDE_HISTORY]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DPPR_OCP_OVERRIDE_HISTORY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_DPPR_OCP_OVERRIDE_HISTORY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access CPMS_DPPR_OCP_OVERRIDE_HISTORY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DPPR_OCP_OVERRIDE_HISTORY]

//>> SET_[CPMS_DPPR_OCP_OVERRIDE_HISTORY]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DPPR_OCP_OVERRIDE_HISTORY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_DPPR_OCP_OVERRIDE_HISTORY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access CPMS_DPPR_OCP_OVERRIDE_HISTORY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DPPR_OCP_OVERRIDE_HISTORY]

//>> SET_[CPMS_DPPR_OCP_OVERRIDE_HISTORY]
static inline fapi2::buffer<uint64_t>& SET_CPMS_DPPR_OCP_OVERRIDE_HISTORY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.setBit<CPMS_DPPR_OCP_OVERRIDE_HISTORY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access CPMS_DPPR_OCP_OVERRIDE_HISTORY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_DPPR_OCP_OVERRIDE_HISTORY]

//>> CLEAR_[CPMS_DPPR_OCP_OVERRIDE_HISTORY]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_DPPR_OCP_OVERRIDE_HISTORY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return o_data.clearBit<CPMS_DPPR_OCP_OVERRIDE_HISTORY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access CPMS_DPPR_OCP_OVERRIDE_HISTORY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_DPPR_OCP_OVERRIDE_HISTORY]

//>> GET_[CPMS_DPPR_OCP_OVERRIDE_HISTORY]
static inline fapi2::buffer<uint64_t>& GET_CPMS_DPPR_OCP_OVERRIDE_HISTORY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return i_data.extractToRight<CPMS_DPPR_OCP_OVERRIDE_HISTORY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access CPMS_DPPR_OCP_OVERRIDE_HISTORY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DPPR_OCP_OVERRIDE_HISTORY]

//>> GET_[CPMS_DPPR_OCP_OVERRIDE_HISTORY]
static inline bool GET_CPMS_DPPR_OCP_OVERRIDE_HISTORY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DPPR, CPMS_DPPR_WO_CLEAR, CPMS_DPPR_WO_OR));
#endif
    return i_data.getBit<CPMS_DPPR_OCP_OVERRIDE_HISTORY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access CPMS_DPPR_OCP_OVERRIDE_HISTORY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DPPR_OCP_OVERRIDE_HISTORY]

//>> PREP_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3;
#endif
    return fapi2::getScom(i_target, EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3]

//>> PUT_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return fapi2::putScom(i_target, EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3]


//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_48]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_48(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_48,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_48 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_48]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_48]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_48(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_48,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_48 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_48]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_48]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_48(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.setBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_48>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_48 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_48]

//>> CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_48]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_48(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.clearBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_48>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_48 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_48]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_48]
static inline fapi2::buffer<uint64_t>& GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_48(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return i_data.extractToRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_48,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_48 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_48]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_48]
static inline bool GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_48(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return i_data.getBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_48>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_48 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_48]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_49]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_49(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_49,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_49 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_49]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_49]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_49(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_49,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_49 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_49]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_49]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_49(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.setBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_49>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_49 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_49]

//>> CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_49]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_49(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.clearBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_49>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_49 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_49]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_49]
static inline fapi2::buffer<uint64_t>& GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_49(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return i_data.extractToRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_49,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_49 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_49]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_49]
static inline bool GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_49(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return i_data.getBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_49>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_49 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_49]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_50]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_50(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_50,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_50 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_50]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_50]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_50(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_50,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_50 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_50]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_50]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_50(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.setBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_50>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_50 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_50]

//>> CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_50]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_50(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.clearBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_50>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_50 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_50]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_50]
static inline fapi2::buffer<uint64_t>& GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_50(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return i_data.extractToRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_50,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_50 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_50]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_50]
static inline bool GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_50(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return i_data.getBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_50>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_50 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_50]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_51]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_51(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_51,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_51 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_51]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_51]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_51(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_51,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_51 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_51]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_51]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_51(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.setBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_51>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_51 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_51]

//>> CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_51]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_51(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.clearBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_51>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_51 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_51]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_51]
static inline fapi2::buffer<uint64_t>& GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_51(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return i_data.extractToRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_51,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_51 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_51]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_51]
static inline bool GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_51(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return i_data.getBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_51>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_51 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_51]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_52]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_52(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_52,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_52 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_52]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_52]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_52(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_52,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_52 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_52]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_52]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_52(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.setBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_52>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_52 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_52]

//>> CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_52]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_52(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.clearBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_52>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_52 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_52]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_52]
static inline fapi2::buffer<uint64_t>& GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_52(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return i_data.extractToRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_52,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_52 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_52]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_52]
static inline bool GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_52(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return i_data.getBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_52>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_52 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_52]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_53]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_53(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_53,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_53 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_53]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_53]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_53(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_53,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_53 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_53]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_53]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_53(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.setBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_53>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_53 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_53]

//>> CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_53]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_53(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.clearBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_53>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_53 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_53]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_53]
static inline fapi2::buffer<uint64_t>& GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_53(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return i_data.extractToRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_53,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_53 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_53]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_53]
static inline bool GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_53(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return i_data.getBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_53>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_53 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_53]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_54]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_54(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_54,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_54 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_54]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_54]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_54(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_54,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_54 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_54]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_54]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_54(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.setBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_54>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_54 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_54]

//>> CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_54]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_54(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.clearBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_54>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_54 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_54]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_54]
static inline fapi2::buffer<uint64_t>& GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_54(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return i_data.extractToRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_54,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_54 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_54]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_54]
static inline bool GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_54(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return i_data.getBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_54>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_54 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_54]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_55]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_55(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_55,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_55 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_55]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_55]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_55(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_55,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_55 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_55]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_55]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_55(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.setBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_55>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_55 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_55]

//>> CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_55]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_55(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.clearBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_55>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_55 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_55]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_55]
static inline fapi2::buffer<uint64_t>& GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_55(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return i_data.extractToRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_55,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_55 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_55]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_55]
static inline bool GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_55(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return i_data.getBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_55>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_55 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_55]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_56]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_56(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_56,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_56 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_56]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_56]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_56(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_56,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_56 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_56]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_56]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_56(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.setBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_56>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_56 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_56]

//>> CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_56]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_56(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.clearBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_56>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_56 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_56]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_56]
static inline fapi2::buffer<uint64_t>& GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_56(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return i_data.extractToRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_56,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_56 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_56]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_56]
static inline bool GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_56(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return i_data.getBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_56>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_56 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_56]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_57]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_57(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_57,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_57 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_57]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_57]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_57(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_57,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_57 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_57]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_57]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_57(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.setBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_57>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_57 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_57]

//>> CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_57]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_57(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.clearBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_57>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_57 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_57]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_57]
static inline fapi2::buffer<uint64_t>& GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_57(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return i_data.extractToRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_57,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_57 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_57]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_57]
static inline bool GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_57(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return i_data.getBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_57>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_57 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_57]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_58]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_58(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_58,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_58 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_58]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_58]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_58(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_58,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_58 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_58]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_58]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_58(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.setBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_58>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_58 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_58]

//>> CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_58]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_58(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.clearBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_58>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_58 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_58]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_58]
static inline fapi2::buffer<uint64_t>& GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_58(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return i_data.extractToRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_58,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_58 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_58]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_58]
static inline bool GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_58(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return i_data.getBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_58>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_58 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_58]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_59]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_59(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_59,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_59 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_59]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_59]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_59(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_59,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_59 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_59]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_59]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_59(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.setBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_59>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_59 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_59]

//>> CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_59]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_59(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.clearBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_59>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_59 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_59]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_59]
static inline fapi2::buffer<uint64_t>& GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_59(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return i_data.extractToRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_59,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_59 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_59]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_59]
static inline bool GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_59(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return i_data.getBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_59>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_59 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_59]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_60]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_60(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_60,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_60 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_60]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_60]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_60(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_60,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_60 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_60]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_60]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_60(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.setBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_60>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_60 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_60]

//>> CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_60]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_60(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.clearBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_60>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_60 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_60]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_60]
static inline fapi2::buffer<uint64_t>& GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_60(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return i_data.extractToRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_60,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_60 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_60]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_60]
static inline bool GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_60(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return i_data.getBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_60>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_60 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_60]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_61]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_61(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_61,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_61 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_61]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_61]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_61(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_61,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_61 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_61]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_61]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_61(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.setBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_61>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_61 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_61]

//>> CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_61]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_61(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.clearBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_61>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_61 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_61]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_61]
static inline fapi2::buffer<uint64_t>& GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_61(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return i_data.extractToRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_61,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_61 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_61]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_61]
static inline bool GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_61(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return i_data.getBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_61>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_61 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_61]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_62]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_62(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_62,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_62 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_62]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_62]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_62(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_62,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_62 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_62]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_62]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_62(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.setBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_62>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_62 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_62]

//>> CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_62]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_62(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.clearBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_62>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_62 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_62]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_62]
static inline fapi2::buffer<uint64_t>& GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_62(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return i_data.extractToRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_62,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_62 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_62]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_62]
static inline bool GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_62(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return i_data.getBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_62>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_62 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_62]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_63]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_63(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_63,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_63 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_63]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_63]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_63(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.insertFromRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_63,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_63 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_63]

//>> SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_63]
static inline fapi2::buffer<uint64_t>& SET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_63(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.setBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_63>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_63 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_63]

//>> CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_63]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_63(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return o_data.clearBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_63>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_63 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_63]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_63]
static inline fapi2::buffer<uint64_t>& GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_63(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return i_data.extractToRight<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_63,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_63 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_63]

//>> GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_63]
static inline bool GET_EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_63(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3));
#endif
    return i_data.getBit<EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_63>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_63 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_IFU_IFRE_IFCER_UNIT_HOLD_OUT3_63]

//>> PREP_[EC_PC_COMMON_SPR_V0_HMER_RW_WAND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_COMMON_SPR_V0_HMER_RW_WAND(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_COMMON_SPR_V0_HMER_RW_WAND;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_COMMON_SPR_V0_HMER_RW_WAND]

//>> GET_[EC_PC_COMMON_SPR_V0_HMER_RW_WAND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_COMMON_SPR_V0_HMER_RW_WAND(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_COMMON_SPR_V0_HMER_RW_WAND;
#endif
    return fapi2::getScom(i_target, EC_PC_COMMON_SPR_V0_HMER_RW_WAND, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V0_HMER_RW_WAND]

//>> PUT_[EC_PC_COMMON_SPR_V0_HMER_RW_WAND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_COMMON_SPR_V0_HMER_RW_WAND(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return fapi2::putScom(i_target, EC_PC_COMMON_SPR_V0_HMER_RW_WAND, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_COMMON_SPR_V0_HMER_RW_WAND]

//>> PREP_[EC_PC_COMMON_SPR_V0_HMER_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_COMMON_SPR_V0_HMER_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_COMMON_SPR_V0_HMER_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_COMMON_SPR_V0_HMER_WO_OR]

//>> GET_[EC_PC_COMMON_SPR_V0_HMER_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_COMMON_SPR_V0_HMER_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_COMMON_SPR_V0_HMER_WO_OR;
#endif
    return fapi2::getScom(i_target, EC_PC_COMMON_SPR_V0_HMER_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V0_HMER_WO_OR]

//>> PUT_[EC_PC_COMMON_SPR_V0_HMER_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_COMMON_SPR_V0_HMER_WO_OR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return fapi2::putScom(i_target, EC_PC_COMMON_SPR_V0_HMER_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_COMMON_SPR_V0_HMER_WO_OR]


//>> SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_MALFUNCTION_ALERT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_MALFUNCTION_ALERT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_MALFUNCTION_ALERT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_MALFUNCTION_ALERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_MALFUNCTION_ALERT]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_MALFUNCTION_ALERT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_MALFUNCTION_ALERT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_MALFUNCTION_ALERT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_MALFUNCTION_ALERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_MALFUNCTION_ALERT]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_MALFUNCTION_ALERT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_MALFUNCTION_ALERT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_MALFUNCTION_ALERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_MALFUNCTION_ALERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_MALFUNCTION_ALERT]

//>> CLEAR_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_MALFUNCTION_ALERT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_MALFUNCTION_ALERT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_MALFUNCTION_ALERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_MALFUNCTION_ALERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_MALFUNCTION_ALERT]

//>> GET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_MALFUNCTION_ALERT]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_MALFUNCTION_ALERT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_MALFUNCTION_ALERT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_MALFUNCTION_ALERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_MALFUNCTION_ALERT]

//>> GET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_MALFUNCTION_ALERT]
static inline bool GET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_MALFUNCTION_ALERT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_MALFUNCTION_ALERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_MALFUNCTION_ALERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_MALFUNCTION_ALERT]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_1]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_SPARE_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V0_HMER_SPARE_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_1]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_1]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_SPARE_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V0_HMER_SPARE_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_1]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_1]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_SPARE_1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V0_HMER_SPARE_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_1]

//>> CLEAR_[EC_PC_COMMON_SPR_V0_HMER_SPARE_1]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V0_HMER_SPARE_1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V0_HMER_SPARE_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V0_HMER_SPARE_1]

//>> GET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_1]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V0_HMER_SPARE_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V0_HMER_SPARE_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_1]

//>> GET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_1]
static inline bool GET_EC_PC_COMMON_SPR_V0_HMER_SPARE_1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V0_HMER_SPARE_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_1]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_DONE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_DONE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_DONE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_DONE]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_DONE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_DONE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_DONE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_DONE]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_DONE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_DONE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_DONE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_DONE]

//>> CLEAR_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_DONE]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_DONE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_DONE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_DONE]

//>> GET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_DONE]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_DONE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_DONE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_DONE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_DONE]

//>> GET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_DONE]
static inline bool GET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_DONE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_DONE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_DONE]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SUSPEND_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SUSPEND_MODE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SUSPEND_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SUSPEND_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SUSPEND_MODE]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SUSPEND_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SUSPEND_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SUSPEND_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SUSPEND_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SUSPEND_MODE]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SUSPEND_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SUSPEND_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SUSPEND_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SUSPEND_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SUSPEND_MODE]

//>> CLEAR_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SUSPEND_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SUSPEND_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SUSPEND_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SUSPEND_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SUSPEND_MODE]

//>> GET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SUSPEND_MODE]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SUSPEND_MODE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SUSPEND_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SUSPEND_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SUSPEND_MODE]

//>> GET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SUSPEND_MODE]
static inline bool GET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SUSPEND_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SUSPEND_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SUSPEND_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SUSPEND_MODE]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFAC_ERR]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFAC_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFAC_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFAC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFAC_ERR]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFAC_ERR]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFAC_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFAC_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFAC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFAC_ERR]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFAC_ERR]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFAC_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFAC_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFAC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFAC_ERR]

//>> CLEAR_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFAC_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFAC_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFAC_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFAC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFAC_ERR]

//>> GET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFAC_ERR]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFAC_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFAC_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFAC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFAC_ERR]

//>> GET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFAC_ERR]
static inline bool GET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFAC_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFAC_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFAC_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFAC_ERR]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFX_ERR]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFX_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFX_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFX_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFX_ERR]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFX_ERR]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFX_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFX_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFX_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFX_ERR]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFX_ERR]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFX_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFX_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFX_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFX_ERR]

//>> CLEAR_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFX_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFX_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFX_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFX_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFX_ERR]

//>> GET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFX_ERR]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFX_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFX_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFX_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFX_ERR]

//>> GET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFX_ERR]
static inline bool GET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFX_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFX_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFX_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TFX_ERR]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_6]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_SPARE_6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V0_HMER_SPARE_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_6]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_6]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_SPARE_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V0_HMER_SPARE_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_6]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_6]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_SPARE_6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V0_HMER_SPARE_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_6]

//>> CLEAR_[EC_PC_COMMON_SPR_V0_HMER_SPARE_6]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V0_HMER_SPARE_6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V0_HMER_SPARE_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V0_HMER_SPARE_6]

//>> GET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_6]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V0_HMER_SPARE_6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V0_HMER_SPARE_6,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_6]

//>> GET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_6]
static inline bool GET_EC_PC_COMMON_SPR_V0_HMER_SPARE_6(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V0_HMER_SPARE_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_6]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_7]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_SPARE_7(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V0_HMER_SPARE_7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_7]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_7]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_SPARE_7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V0_HMER_SPARE_7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_7]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_7]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_SPARE_7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V0_HMER_SPARE_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_7]

//>> CLEAR_[EC_PC_COMMON_SPR_V0_HMER_SPARE_7]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V0_HMER_SPARE_7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V0_HMER_SPARE_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V0_HMER_SPARE_7]

//>> GET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_7]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V0_HMER_SPARE_7(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V0_HMER_SPARE_7,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_7]

//>> GET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_7]
static inline bool GET_EC_PC_COMMON_SPR_V0_HMER_SPARE_7(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V0_HMER_SPARE_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_7]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_FAIL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_FAIL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_FAIL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_FAIL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_FAIL]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_FAIL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_FAIL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_FAIL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_FAIL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_FAIL]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_FAIL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_FAIL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_FAIL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_FAIL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_FAIL]

//>> CLEAR_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_FAIL]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_FAIL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_FAIL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_FAIL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_FAIL]

//>> GET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_FAIL]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_FAIL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_FAIL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_FAIL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_FAIL]

//>> GET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_FAIL]
static inline bool GET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_FAIL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_FAIL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_FAIL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_FAIL]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_DONE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_DONE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_DONE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_DONE]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_DONE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_DONE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_DONE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_DONE]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_DONE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_DONE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_DONE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_DONE]

//>> CLEAR_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_DONE]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_DONE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_DONE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_DONE]

//>> GET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_DONE]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_DONE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_DONE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_DONE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_DONE]

//>> GET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_DONE]
static inline bool GET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_DONE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_DONE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_DONE]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_10]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_SPARE_10(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V0_HMER_SPARE_10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_10]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_10]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_SPARE_10(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V0_HMER_SPARE_10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_10]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_10]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_SPARE_10(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V0_HMER_SPARE_10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_10]

//>> CLEAR_[EC_PC_COMMON_SPR_V0_HMER_SPARE_10]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V0_HMER_SPARE_10(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V0_HMER_SPARE_10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V0_HMER_SPARE_10]

//>> GET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_10]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V0_HMER_SPARE_10(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V0_HMER_SPARE_10,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_10]

//>> GET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_10]
static inline bool GET_EC_PC_COMMON_SPR_V0_HMER_SPARE_10(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V0_HMER_SPARE_10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_10]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_AGAIN]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_AGAIN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_AGAIN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_AGAIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_AGAIN]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_AGAIN]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_AGAIN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_AGAIN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_AGAIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_AGAIN]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_AGAIN]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_AGAIN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_AGAIN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_AGAIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_AGAIN]

//>> CLEAR_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_AGAIN]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_AGAIN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_AGAIN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_AGAIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_AGAIN]

//>> GET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_AGAIN]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_AGAIN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_AGAIN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_AGAIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_AGAIN]

//>> GET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_AGAIN]
static inline bool GET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_AGAIN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_AGAIN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_AGAIN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_PROC_RCVY_AGAIN]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_12]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_SPARE_12(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V0_HMER_SPARE_12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_12]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_12]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_SPARE_12(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V0_HMER_SPARE_12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_12]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_12]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_SPARE_12(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V0_HMER_SPARE_12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_12]

//>> CLEAR_[EC_PC_COMMON_SPR_V0_HMER_SPARE_12]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V0_HMER_SPARE_12(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V0_HMER_SPARE_12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V0_HMER_SPARE_12]

//>> GET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_12]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V0_HMER_SPARE_12(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V0_HMER_SPARE_12,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_12]

//>> GET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_12]
static inline bool GET_EC_PC_COMMON_SPR_V0_HMER_SPARE_12(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V0_HMER_SPARE_12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_12]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_13]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_SPARE_13(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V0_HMER_SPARE_13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_13]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_13]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_SPARE_13(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V0_HMER_SPARE_13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_13]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_13]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_SPARE_13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V0_HMER_SPARE_13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_13]

//>> CLEAR_[EC_PC_COMMON_SPR_V0_HMER_SPARE_13]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V0_HMER_SPARE_13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V0_HMER_SPARE_13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V0_HMER_SPARE_13]

//>> GET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_13]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V0_HMER_SPARE_13(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V0_HMER_SPARE_13,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_13]

//>> GET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_13]
static inline bool GET_EC_PC_COMMON_SPR_V0_HMER_SPARE_13(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V0_HMER_SPARE_13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_13]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_14]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_SPARE_14(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V0_HMER_SPARE_14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_14]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_14]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_SPARE_14(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V0_HMER_SPARE_14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_14]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_14]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_SPARE_14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V0_HMER_SPARE_14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_14]

//>> CLEAR_[EC_PC_COMMON_SPR_V0_HMER_SPARE_14]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V0_HMER_SPARE_14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V0_HMER_SPARE_14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V0_HMER_SPARE_14]

//>> GET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_14]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V0_HMER_SPARE_14(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V0_HMER_SPARE_14,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_14]

//>> GET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_14]
static inline bool GET_EC_PC_COMMON_SPR_V0_HMER_SPARE_14(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V0_HMER_SPARE_14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_14]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_15]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_SPARE_15(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V0_HMER_SPARE_15,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_15]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_15]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_SPARE_15(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V0_HMER_SPARE_15,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_15]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_15]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_SPARE_15(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V0_HMER_SPARE_15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_15]

//>> CLEAR_[EC_PC_COMMON_SPR_V0_HMER_SPARE_15]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V0_HMER_SPARE_15(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V0_HMER_SPARE_15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V0_HMER_SPARE_15]

//>> GET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_15]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V0_HMER_SPARE_15(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V0_HMER_SPARE_15,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_15]

//>> GET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_15]
static inline bool GET_EC_PC_COMMON_SPR_V0_HMER_SPARE_15(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V0_HMER_SPARE_15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_15]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SCOM_FIR_HMI]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SCOM_FIR_HMI(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SCOM_FIR_HMI,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SCOM_FIR_HMI chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SCOM_FIR_HMI]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SCOM_FIR_HMI]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SCOM_FIR_HMI(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SCOM_FIR_HMI,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SCOM_FIR_HMI chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SCOM_FIR_HMI]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SCOM_FIR_HMI]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SCOM_FIR_HMI(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SCOM_FIR_HMI>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SCOM_FIR_HMI chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SCOM_FIR_HMI]

//>> CLEAR_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SCOM_FIR_HMI]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SCOM_FIR_HMI(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SCOM_FIR_HMI>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SCOM_FIR_HMI chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SCOM_FIR_HMI]

//>> GET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SCOM_FIR_HMI]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SCOM_FIR_HMI(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SCOM_FIR_HMI,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SCOM_FIR_HMI chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SCOM_FIR_HMI]

//>> GET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SCOM_FIR_HMI]
static inline bool GET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SCOM_FIR_HMI(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SCOM_FIR_HMI>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SCOM_FIR_HMI chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_SCOM_FIR_HMI]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_THD_WAKE_BLOCKED_TM_SUSPEND]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_THD_WAKE_BLOCKED_TM_SUSPEND(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_THD_WAKE_BLOCKED_TM_SUSPEND,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_THD_WAKE_BLOCKED_TM_SUSPEND chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_THD_WAKE_BLOCKED_TM_SUSPEND]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_THD_WAKE_BLOCKED_TM_SUSPEND]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_THD_WAKE_BLOCKED_TM_SUSPEND(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_THD_WAKE_BLOCKED_TM_SUSPEND,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_THD_WAKE_BLOCKED_TM_SUSPEND chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_THD_WAKE_BLOCKED_TM_SUSPEND]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_THD_WAKE_BLOCKED_TM_SUSPEND]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_THD_WAKE_BLOCKED_TM_SUSPEND(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_THD_WAKE_BLOCKED_TM_SUSPEND>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_THD_WAKE_BLOCKED_TM_SUSPEND chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_THD_WAKE_BLOCKED_TM_SUSPEND]

//>> CLEAR_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_THD_WAKE_BLOCKED_TM_SUSPEND]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_THD_WAKE_BLOCKED_TM_SUSPEND(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_THD_WAKE_BLOCKED_TM_SUSPEND>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_THD_WAKE_BLOCKED_TM_SUSPEND chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_THD_WAKE_BLOCKED_TM_SUSPEND]

//>> GET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_THD_WAKE_BLOCKED_TM_SUSPEND]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_THD_WAKE_BLOCKED_TM_SUSPEND(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_THD_WAKE_BLOCKED_TM_SUSPEND,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_THD_WAKE_BLOCKED_TM_SUSPEND chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_THD_WAKE_BLOCKED_TM_SUSPEND]

//>> GET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_THD_WAKE_BLOCKED_TM_SUSPEND]
static inline bool GET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_THD_WAKE_BLOCKED_TM_SUSPEND(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_THD_WAKE_BLOCKED_TM_SUSPEND>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_THD_WAKE_BLOCKED_TM_SUSPEND chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_THD_WAKE_BLOCKED_TM_SUSPEND]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TRIG_FIR_HMI]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TRIG_FIR_HMI(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TRIG_FIR_HMI,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TRIG_FIR_HMI chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TRIG_FIR_HMI]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TRIG_FIR_HMI]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TRIG_FIR_HMI(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TRIG_FIR_HMI,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TRIG_FIR_HMI chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TRIG_FIR_HMI]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TRIG_FIR_HMI]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TRIG_FIR_HMI(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TRIG_FIR_HMI>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TRIG_FIR_HMI chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TRIG_FIR_HMI]

//>> CLEAR_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TRIG_FIR_HMI]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TRIG_FIR_HMI(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TRIG_FIR_HMI>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TRIG_FIR_HMI chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TRIG_FIR_HMI]

//>> GET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TRIG_FIR_HMI]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TRIG_FIR_HMI(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TRIG_FIR_HMI,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TRIG_FIR_HMI chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TRIG_FIR_HMI]

//>> GET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TRIG_FIR_HMI]
static inline bool GET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TRIG_FIR_HMI(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TRIG_FIR_HMI>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TRIG_FIR_HMI chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_TRIG_FIR_HMI]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_19]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_SPARE_19(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V0_HMER_SPARE_19,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_19]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_19]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_SPARE_19(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V0_HMER_SPARE_19,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_19]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_19]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_SPARE_19(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V0_HMER_SPARE_19>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_19]

//>> CLEAR_[EC_PC_COMMON_SPR_V0_HMER_SPARE_19]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V0_HMER_SPARE_19(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V0_HMER_SPARE_19>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V0_HMER_SPARE_19]

//>> GET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_19]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V0_HMER_SPARE_19(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V0_HMER_SPARE_19,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_19]

//>> GET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_19]
static inline bool GET_EC_PC_COMMON_SPR_V0_HMER_SPARE_19(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V0_HMER_SPARE_19>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_19]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_20]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_SPARE_20(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V0_HMER_SPARE_20,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_20]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_20]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_SPARE_20(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V0_HMER_SPARE_20,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_20]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_20]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_SPARE_20(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.setBit<EC_PC_COMMON_SPR_V0_HMER_SPARE_20>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_20]

//>> CLEAR_[EC_PC_COMMON_SPR_V0_HMER_SPARE_20]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_COMMON_SPR_V0_HMER_SPARE_20(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.clearBit<EC_PC_COMMON_SPR_V0_HMER_SPARE_20>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_COMMON_SPR_V0_HMER_SPARE_20]

//>> GET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_20]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V0_HMER_SPARE_20(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V0_HMER_SPARE_20,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_20]

//>> GET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_20]
static inline bool GET_EC_PC_COMMON_SPR_V0_HMER_SPARE_20(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return i_data.getBit<EC_PC_COMMON_SPR_V0_HMER_SPARE_20>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_SPARE_20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V0_HMER_SPARE_20]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_STATUS]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_STATUS,
           EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_STATUS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_STATUS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_STATUS]

//>> SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_STATUS]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_STATUS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return o_data.insertFromRight<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_STATUS,
           EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_STATUS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_STATUS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_STATUS]

//>> GET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_STATUS]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_STATUS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_COMMON_SPR_V0_HMER_RW_WAND, EC_PC_COMMON_SPR_V0_HMER_WO_OR));
#endif
    return i_data.extractToRight<EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_STATUS,
           EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_STATUS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_STATUS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_COMMON_SPR_V0_HMER_V0_HMER_XSCOM_STATUS]

//>> PREP_[EC_PC_FIR_CORE_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_FIR_CORE_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_FIR_CORE_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_FIR_CORE_RW]

//>> GET_[EC_PC_FIR_CORE_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_FIR_CORE_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_FIR_CORE_RW;
#endif
    return fapi2::getScom(i_target, EC_PC_FIR_CORE_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_FIR_CORE_RW]

//>> PUT_[EC_PC_FIR_CORE_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_FIR_CORE_RW(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_CORE_RW, EC_PC_FIR_CORE_WO_AND, EC_PC_FIR_CORE_WO_OR));
#endif
    return fapi2::putScom(i_target, EC_PC_FIR_CORE_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_FIR_CORE_RW]

//>> PREP_[EC_PC_FIR_CORE_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_FIR_CORE_WO_AND(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_FIR_CORE_WO_AND;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_FIR_CORE_WO_AND]

//>> GET_[EC_PC_FIR_CORE_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_FIR_CORE_WO_AND(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_FIR_CORE_WO_AND;
#endif
    return fapi2::getScom(i_target, EC_PC_FIR_CORE_WO_AND, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_FIR_CORE_WO_AND]

//>> PUT_[EC_PC_FIR_CORE_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_FIR_CORE_WO_AND(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_CORE_RW, EC_PC_FIR_CORE_WO_AND, EC_PC_FIR_CORE_WO_OR));
#endif
    return fapi2::putScom(i_target, EC_PC_FIR_CORE_WO_AND, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_FIR_CORE_WO_AND]

//>> PREP_[EC_PC_FIR_CORE_FIRMASK_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_FIR_CORE_FIRMASK_WO_AND(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_FIR_CORE_FIRMASK_WO_AND;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_FIR_CORE_FIRMASK_WO_AND]

//>> GET_[EC_PC_FIR_CORE_FIRMASK_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_FIR_CORE_FIRMASK_WO_AND(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_FIR_CORE_FIRMASK_WO_AND;
#endif
    return fapi2::getScom(i_target, EC_PC_FIR_CORE_FIRMASK_WO_AND, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_FIR_CORE_FIRMASK_WO_AND]

//>> PUT_[EC_PC_FIR_CORE_FIRMASK_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_FIR_CORE_FIRMASK_WO_AND(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_CORE_FIRMASK_RW, EC_PC_FIR_CORE_FIRMASK_WO_AND, EC_PC_FIR_CORE_FIRMASK_WO_OR));
#endif
    return fapi2::putScom(i_target, EC_PC_FIR_CORE_FIRMASK_WO_AND, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_FIR_CORE_FIRMASK_WO_AND]

//>> PREP_[EC_PC_FIR_CORE_FIRMASK_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_FIR_CORE_FIRMASK_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_FIR_CORE_FIRMASK_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_FIR_CORE_FIRMASK_WO_OR]

//>> GET_[EC_PC_FIR_CORE_FIRMASK_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_FIR_CORE_FIRMASK_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_FIR_CORE_FIRMASK_WO_OR;
#endif
    return fapi2::getScom(i_target, EC_PC_FIR_CORE_FIRMASK_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_FIR_CORE_FIRMASK_WO_OR]

//>> PUT_[EC_PC_FIR_CORE_FIRMASK_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_FIR_CORE_FIRMASK_WO_OR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_CORE_FIRMASK_RW, EC_PC_FIR_CORE_FIRMASK_WO_AND, EC_PC_FIR_CORE_FIRMASK_WO_OR));
#endif
    return fapi2::putScom(i_target, EC_PC_FIR_CORE_FIRMASK_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_FIR_CORE_FIRMASK_WO_OR]


//>> PREP_[EC_PC_FIR_ERR_INJ]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_FIR_ERR_INJ(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_FIR_ERR_INJ;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_FIR_ERR_INJ]

//>> GET_[EC_PC_FIR_ERR_INJ]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_FIR_ERR_INJ(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_FIR_ERR_INJ;
#endif
    return fapi2::getScom(i_target, EC_PC_FIR_ERR_INJ, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_FIR_ERR_INJ]

//>> PUT_[EC_PC_FIR_ERR_INJ]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_FIR_ERR_INJ(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return fapi2::putScom(i_target, EC_PC_FIR_ERR_INJ, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_FIR_ERR_INJ]


//>> SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_LSU]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_ERR_INJ_ERR_INJ_TO_LSU(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.insertFromRight<EC_PC_FIR_ERR_INJ_ERR_INJ_TO_LSU,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TO_LSU chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_LSU]

//>> SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_LSU]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_ERR_INJ_ERR_INJ_TO_LSU(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.insertFromRight<EC_PC_FIR_ERR_INJ_ERR_INJ_TO_LSU,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TO_LSU chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_LSU]

//>> SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_LSU]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_ERR_INJ_ERR_INJ_TO_LSU(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.setBit<EC_PC_FIR_ERR_INJ_ERR_INJ_TO_LSU>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TO_LSU chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_LSU]

//>> CLEAR_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_LSU]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_FIR_ERR_INJ_ERR_INJ_TO_LSU(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.clearBit<EC_PC_FIR_ERR_INJ_ERR_INJ_TO_LSU>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TO_LSU chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_LSU]

//>> GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_LSU]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_FIR_ERR_INJ_ERR_INJ_TO_LSU(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return i_data.extractToRight<EC_PC_FIR_ERR_INJ_ERR_INJ_TO_LSU,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TO_LSU chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_LSU]

//>> GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_LSU]
static inline bool GET_EC_PC_FIR_ERR_INJ_ERR_INJ_TO_LSU(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return i_data.getBit<EC_PC_FIR_ERR_INJ_ERR_INJ_TO_LSU>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TO_LSU chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_LSU]

//>> SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_IFU]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_ERR_INJ_ERR_INJ_TO_IFU(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.insertFromRight<EC_PC_FIR_ERR_INJ_ERR_INJ_TO_IFU,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TO_IFU chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_IFU]

//>> SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_IFU]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_ERR_INJ_ERR_INJ_TO_IFU(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.insertFromRight<EC_PC_FIR_ERR_INJ_ERR_INJ_TO_IFU,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TO_IFU chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_IFU]

//>> SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_IFU]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_ERR_INJ_ERR_INJ_TO_IFU(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.setBit<EC_PC_FIR_ERR_INJ_ERR_INJ_TO_IFU>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TO_IFU chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_IFU]

//>> CLEAR_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_IFU]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_FIR_ERR_INJ_ERR_INJ_TO_IFU(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.clearBit<EC_PC_FIR_ERR_INJ_ERR_INJ_TO_IFU>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TO_IFU chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_IFU]

//>> GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_IFU]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_FIR_ERR_INJ_ERR_INJ_TO_IFU(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return i_data.extractToRight<EC_PC_FIR_ERR_INJ_ERR_INJ_TO_IFU,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TO_IFU chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_IFU]

//>> GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_IFU]
static inline bool GET_EC_PC_FIR_ERR_INJ_ERR_INJ_TO_IFU(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return i_data.getBit<EC_PC_FIR_ERR_INJ_ERR_INJ_TO_IFU>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TO_IFU chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_IFU]

//>> SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_ISU]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_ERR_INJ_ERR_INJ_TO_ISU(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.insertFromRight<EC_PC_FIR_ERR_INJ_ERR_INJ_TO_ISU,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TO_ISU chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_ISU]

//>> SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_ISU]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_ERR_INJ_ERR_INJ_TO_ISU(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.insertFromRight<EC_PC_FIR_ERR_INJ_ERR_INJ_TO_ISU,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TO_ISU chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_ISU]

//>> SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_ISU]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_ERR_INJ_ERR_INJ_TO_ISU(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.setBit<EC_PC_FIR_ERR_INJ_ERR_INJ_TO_ISU>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TO_ISU chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_ISU]

//>> CLEAR_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_ISU]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_FIR_ERR_INJ_ERR_INJ_TO_ISU(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.clearBit<EC_PC_FIR_ERR_INJ_ERR_INJ_TO_ISU>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TO_ISU chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_ISU]

//>> GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_ISU]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_FIR_ERR_INJ_ERR_INJ_TO_ISU(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return i_data.extractToRight<EC_PC_FIR_ERR_INJ_ERR_INJ_TO_ISU,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TO_ISU chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_ISU]

//>> GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_ISU]
static inline bool GET_EC_PC_FIR_ERR_INJ_ERR_INJ_TO_ISU(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return i_data.getBit<EC_PC_FIR_ERR_INJ_ERR_INJ_TO_ISU>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TO_ISU chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_ISU]

//>> SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_VSU]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_ERR_INJ_ERR_INJ_TO_VSU(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.insertFromRight<EC_PC_FIR_ERR_INJ_ERR_INJ_TO_VSU,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TO_VSU chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_VSU]

//>> SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_VSU]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_ERR_INJ_ERR_INJ_TO_VSU(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.insertFromRight<EC_PC_FIR_ERR_INJ_ERR_INJ_TO_VSU,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TO_VSU chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_VSU]

//>> SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_VSU]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_ERR_INJ_ERR_INJ_TO_VSU(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.setBit<EC_PC_FIR_ERR_INJ_ERR_INJ_TO_VSU>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TO_VSU chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_VSU]

//>> CLEAR_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_VSU]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_FIR_ERR_INJ_ERR_INJ_TO_VSU(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.clearBit<EC_PC_FIR_ERR_INJ_ERR_INJ_TO_VSU>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TO_VSU chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_VSU]

//>> GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_VSU]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_FIR_ERR_INJ_ERR_INJ_TO_VSU(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return i_data.extractToRight<EC_PC_FIR_ERR_INJ_ERR_INJ_TO_VSU,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TO_VSU chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_VSU]

//>> GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_VSU]
static inline bool GET_EC_PC_FIR_ERR_INJ_ERR_INJ_TO_VSU(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return i_data.getBit<EC_PC_FIR_ERR_INJ_ERR_INJ_TO_VSU>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TO_VSU chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_VSU]

//>> SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_PC]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_ERR_INJ_ERR_INJ_TO_PC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.insertFromRight<EC_PC_FIR_ERR_INJ_ERR_INJ_TO_PC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TO_PC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_PC]

//>> SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_PC]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_ERR_INJ_ERR_INJ_TO_PC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.insertFromRight<EC_PC_FIR_ERR_INJ_ERR_INJ_TO_PC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TO_PC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_PC]

//>> SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_PC]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_ERR_INJ_ERR_INJ_TO_PC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.setBit<EC_PC_FIR_ERR_INJ_ERR_INJ_TO_PC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TO_PC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_PC]

//>> CLEAR_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_PC]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_FIR_ERR_INJ_ERR_INJ_TO_PC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.clearBit<EC_PC_FIR_ERR_INJ_ERR_INJ_TO_PC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TO_PC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_PC]

//>> GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_PC]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_FIR_ERR_INJ_ERR_INJ_TO_PC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return i_data.extractToRight<EC_PC_FIR_ERR_INJ_ERR_INJ_TO_PC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TO_PC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_PC]

//>> GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_PC]
static inline bool GET_EC_PC_FIR_ERR_INJ_ERR_INJ_TO_PC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return i_data.getBit<EC_PC_FIR_ERR_INJ_ERR_INJ_TO_PC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TO_PC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_PC]

//>> SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_MMU]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_ERR_INJ_ERR_INJ_TO_MMU(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.insertFromRight<EC_PC_FIR_ERR_INJ_ERR_INJ_TO_MMU,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TO_MMU chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_MMU]

//>> SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_MMU]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_ERR_INJ_ERR_INJ_TO_MMU(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.insertFromRight<EC_PC_FIR_ERR_INJ_ERR_INJ_TO_MMU,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TO_MMU chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_MMU]

//>> SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_MMU]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_ERR_INJ_ERR_INJ_TO_MMU(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.setBit<EC_PC_FIR_ERR_INJ_ERR_INJ_TO_MMU>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TO_MMU chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_MMU]

//>> CLEAR_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_MMU]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_FIR_ERR_INJ_ERR_INJ_TO_MMU(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.clearBit<EC_PC_FIR_ERR_INJ_ERR_INJ_TO_MMU>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TO_MMU chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_MMU]

//>> GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_MMU]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_FIR_ERR_INJ_ERR_INJ_TO_MMU(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return i_data.extractToRight<EC_PC_FIR_ERR_INJ_ERR_INJ_TO_MMU,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TO_MMU chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_MMU]

//>> GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_MMU]
static inline bool GET_EC_PC_FIR_ERR_INJ_ERR_INJ_TO_MMU(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return i_data.getBit<EC_PC_FIR_ERR_INJ_ERR_INJ_TO_MMU>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TO_MMU chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TO_MMU]

//>> SET_[EC_PC_FIR_ERR_INJ_ERROR_PULSE_OR_LEVEL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_ERR_INJ_ERROR_PULSE_OR_LEVEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.insertFromRight<EC_PC_FIR_ERR_INJ_ERROR_PULSE_OR_LEVEL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERROR_PULSE_OR_LEVEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_ERR_INJ_ERROR_PULSE_OR_LEVEL]

//>> SET_[EC_PC_FIR_ERR_INJ_ERROR_PULSE_OR_LEVEL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_ERR_INJ_ERROR_PULSE_OR_LEVEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.insertFromRight<EC_PC_FIR_ERR_INJ_ERROR_PULSE_OR_LEVEL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERROR_PULSE_OR_LEVEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_ERR_INJ_ERROR_PULSE_OR_LEVEL]

//>> SET_[EC_PC_FIR_ERR_INJ_ERROR_PULSE_OR_LEVEL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_ERR_INJ_ERROR_PULSE_OR_LEVEL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.setBit<EC_PC_FIR_ERR_INJ_ERROR_PULSE_OR_LEVEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERROR_PULSE_OR_LEVEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_ERR_INJ_ERROR_PULSE_OR_LEVEL]

//>> CLEAR_[EC_PC_FIR_ERR_INJ_ERROR_PULSE_OR_LEVEL]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_FIR_ERR_INJ_ERROR_PULSE_OR_LEVEL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.clearBit<EC_PC_FIR_ERR_INJ_ERROR_PULSE_OR_LEVEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERROR_PULSE_OR_LEVEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_FIR_ERR_INJ_ERROR_PULSE_OR_LEVEL]

//>> GET_[EC_PC_FIR_ERR_INJ_ERROR_PULSE_OR_LEVEL]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_FIR_ERR_INJ_ERROR_PULSE_OR_LEVEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return i_data.extractToRight<EC_PC_FIR_ERR_INJ_ERROR_PULSE_OR_LEVEL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERROR_PULSE_OR_LEVEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_FIR_ERR_INJ_ERROR_PULSE_OR_LEVEL]

//>> GET_[EC_PC_FIR_ERR_INJ_ERROR_PULSE_OR_LEVEL]
static inline bool GET_EC_PC_FIR_ERR_INJ_ERROR_PULSE_OR_LEVEL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return i_data.getBit<EC_PC_FIR_ERR_INJ_ERROR_PULSE_OR_LEVEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERROR_PULSE_OR_LEVEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_FIR_ERR_INJ_ERROR_PULSE_OR_LEVEL]

//>> SET_[EC_PC_FIR_ERR_INJ_CLEAR_STICKY_LEVEL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_ERR_INJ_CLEAR_STICKY_LEVEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.insertFromRight<EC_PC_FIR_ERR_INJ_CLEAR_STICKY_LEVEL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_CLEAR_STICKY_LEVEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_ERR_INJ_CLEAR_STICKY_LEVEL]

//>> SET_[EC_PC_FIR_ERR_INJ_CLEAR_STICKY_LEVEL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_ERR_INJ_CLEAR_STICKY_LEVEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.insertFromRight<EC_PC_FIR_ERR_INJ_CLEAR_STICKY_LEVEL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_CLEAR_STICKY_LEVEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_ERR_INJ_CLEAR_STICKY_LEVEL]

//>> SET_[EC_PC_FIR_ERR_INJ_CLEAR_STICKY_LEVEL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_ERR_INJ_CLEAR_STICKY_LEVEL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.setBit<EC_PC_FIR_ERR_INJ_CLEAR_STICKY_LEVEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_CLEAR_STICKY_LEVEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_ERR_INJ_CLEAR_STICKY_LEVEL]

//>> CLEAR_[EC_PC_FIR_ERR_INJ_CLEAR_STICKY_LEVEL]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_FIR_ERR_INJ_CLEAR_STICKY_LEVEL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.clearBit<EC_PC_FIR_ERR_INJ_CLEAR_STICKY_LEVEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_CLEAR_STICKY_LEVEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_FIR_ERR_INJ_CLEAR_STICKY_LEVEL]

//>> GET_[EC_PC_FIR_ERR_INJ_CLEAR_STICKY_LEVEL]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_FIR_ERR_INJ_CLEAR_STICKY_LEVEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return i_data.extractToRight<EC_PC_FIR_ERR_INJ_CLEAR_STICKY_LEVEL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_CLEAR_STICKY_LEVEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_FIR_ERR_INJ_CLEAR_STICKY_LEVEL]

//>> GET_[EC_PC_FIR_ERR_INJ_CLEAR_STICKY_LEVEL]
static inline bool GET_EC_PC_FIR_ERR_INJ_CLEAR_STICKY_LEVEL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return i_data.getBit<EC_PC_FIR_ERR_INJ_CLEAR_STICKY_LEVEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_CLEAR_STICKY_LEVEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_FIR_ERR_INJ_CLEAR_STICKY_LEVEL]

//>> SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_SCOM_WRITE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_ERR_INJ_ERR_INJ_SCOM_WRITE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.insertFromRight<EC_PC_FIR_ERR_INJ_ERR_INJ_SCOM_WRITE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_SCOM_WRITE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_SCOM_WRITE]

//>> SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_SCOM_WRITE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_ERR_INJ_ERR_INJ_SCOM_WRITE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.insertFromRight<EC_PC_FIR_ERR_INJ_ERR_INJ_SCOM_WRITE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_SCOM_WRITE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_SCOM_WRITE]

//>> SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_SCOM_WRITE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_ERR_INJ_ERR_INJ_SCOM_WRITE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.setBit<EC_PC_FIR_ERR_INJ_ERR_INJ_SCOM_WRITE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_SCOM_WRITE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_SCOM_WRITE]

//>> CLEAR_[EC_PC_FIR_ERR_INJ_ERR_INJ_SCOM_WRITE]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_FIR_ERR_INJ_ERR_INJ_SCOM_WRITE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.clearBit<EC_PC_FIR_ERR_INJ_ERR_INJ_SCOM_WRITE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_SCOM_WRITE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_FIR_ERR_INJ_ERR_INJ_SCOM_WRITE]

//>> GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_SCOM_WRITE]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_FIR_ERR_INJ_ERR_INJ_SCOM_WRITE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return i_data.extractToRight<EC_PC_FIR_ERR_INJ_ERR_INJ_SCOM_WRITE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_SCOM_WRITE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_SCOM_WRITE]

//>> GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_SCOM_WRITE]
static inline bool GET_EC_PC_FIR_ERR_INJ_ERR_INJ_SCOM_WRITE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return i_data.getBit<EC_PC_FIR_ERR_INJ_ERR_INJ_SCOM_WRITE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_SCOM_WRITE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_SCOM_WRITE]

//>> SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.insertFromRight<EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER]

//>> SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.insertFromRight<EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER]

//>> SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.setBit<EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER]

//>> CLEAR_[EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.clearBit<EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER]

//>> GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return i_data.extractToRight<EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER]

//>> GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER]
static inline bool GET_EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return i_data.getBit<EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER]

//>> SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER1]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.insertFromRight<EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER1]

//>> SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER1]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.insertFromRight<EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER1]

//>> SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER1]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.setBit<EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER1]

//>> CLEAR_[EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER1]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.clearBit<EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER1]

//>> GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER1]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return i_data.extractToRight<EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER1]

//>> GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER1]
static inline bool GET_EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return i_data.getBit<EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TRIGGER1]

//>> SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TOD_TAP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_ERR_INJ_ERR_INJ_TOD_TAP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.insertFromRight<EC_PC_FIR_ERR_INJ_ERR_INJ_TOD_TAP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TOD_TAP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TOD_TAP]

//>> SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TOD_TAP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_ERR_INJ_ERR_INJ_TOD_TAP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.insertFromRight<EC_PC_FIR_ERR_INJ_ERR_INJ_TOD_TAP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TOD_TAP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TOD_TAP]

//>> SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TOD_TAP]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_ERR_INJ_ERR_INJ_TOD_TAP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.setBit<EC_PC_FIR_ERR_INJ_ERR_INJ_TOD_TAP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TOD_TAP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TOD_TAP]

//>> CLEAR_[EC_PC_FIR_ERR_INJ_ERR_INJ_TOD_TAP]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_FIR_ERR_INJ_ERR_INJ_TOD_TAP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.clearBit<EC_PC_FIR_ERR_INJ_ERR_INJ_TOD_TAP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TOD_TAP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_FIR_ERR_INJ_ERR_INJ_TOD_TAP]

//>> GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TOD_TAP]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_FIR_ERR_INJ_ERR_INJ_TOD_TAP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return i_data.extractToRight<EC_PC_FIR_ERR_INJ_ERR_INJ_TOD_TAP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TOD_TAP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TOD_TAP]

//>> GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TOD_TAP]
static inline bool GET_EC_PC_FIR_ERR_INJ_ERR_INJ_TOD_TAP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return i_data.getBit<EC_PC_FIR_ERR_INJ_ERR_INJ_TOD_TAP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TOD_TAP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TOD_TAP]

//>> SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_BLOCK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_ERR_INJ_ERR_INJ_BLOCK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.insertFromRight<EC_PC_FIR_ERR_INJ_ERR_INJ_BLOCK,
           EC_PC_FIR_ERR_INJ_ERR_INJ_BLOCK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_BLOCK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_BLOCK]

//>> SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_BLOCK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_ERR_INJ_ERR_INJ_BLOCK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.insertFromRight<EC_PC_FIR_ERR_INJ_ERR_INJ_BLOCK,
           EC_PC_FIR_ERR_INJ_ERR_INJ_BLOCK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_BLOCK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_BLOCK]

//>> GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_BLOCK]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_FIR_ERR_INJ_ERR_INJ_BLOCK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return i_data.extractToRight<EC_PC_FIR_ERR_INJ_ERR_INJ_BLOCK,
           EC_PC_FIR_ERR_INJ_ERR_INJ_BLOCK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_BLOCK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_BLOCK]

//>> SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_DELAY_AFTER_BLOCK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_ERR_INJ_ERR_INJ_DELAY_AFTER_BLOCK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.insertFromRight<EC_PC_FIR_ERR_INJ_ERR_INJ_DELAY_AFTER_BLOCK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_DELAY_AFTER_BLOCK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_DELAY_AFTER_BLOCK]

//>> SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_DELAY_AFTER_BLOCK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_ERR_INJ_ERR_INJ_DELAY_AFTER_BLOCK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.insertFromRight<EC_PC_FIR_ERR_INJ_ERR_INJ_DELAY_AFTER_BLOCK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_DELAY_AFTER_BLOCK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_DELAY_AFTER_BLOCK]

//>> SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_DELAY_AFTER_BLOCK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_ERR_INJ_ERR_INJ_DELAY_AFTER_BLOCK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.setBit<EC_PC_FIR_ERR_INJ_ERR_INJ_DELAY_AFTER_BLOCK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_DELAY_AFTER_BLOCK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_DELAY_AFTER_BLOCK]

//>> CLEAR_[EC_PC_FIR_ERR_INJ_ERR_INJ_DELAY_AFTER_BLOCK]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_FIR_ERR_INJ_ERR_INJ_DELAY_AFTER_BLOCK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.clearBit<EC_PC_FIR_ERR_INJ_ERR_INJ_DELAY_AFTER_BLOCK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_DELAY_AFTER_BLOCK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_FIR_ERR_INJ_ERR_INJ_DELAY_AFTER_BLOCK]

//>> GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_DELAY_AFTER_BLOCK]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_FIR_ERR_INJ_ERR_INJ_DELAY_AFTER_BLOCK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return i_data.extractToRight<EC_PC_FIR_ERR_INJ_ERR_INJ_DELAY_AFTER_BLOCK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_DELAY_AFTER_BLOCK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_DELAY_AFTER_BLOCK]

//>> GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_DELAY_AFTER_BLOCK]
static inline bool GET_EC_PC_FIR_ERR_INJ_ERR_INJ_DELAY_AFTER_BLOCK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return i_data.getBit<EC_PC_FIR_ERR_INJ_ERR_INJ_DELAY_AFTER_BLOCK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_DELAY_AFTER_BLOCK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_DELAY_AFTER_BLOCK]

//>> SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.insertFromRight<EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK]

//>> SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.insertFromRight<EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK]

//>> SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.setBit<EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK]

//>> CLEAR_[EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.clearBit<EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK]

//>> GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return i_data.extractToRight<EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK]

//>> GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK]
static inline bool GET_EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return i_data.getBit<EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK]

//>> SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK_EXTEND]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK_EXTEND(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.insertFromRight<EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK_EXTEND,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK_EXTEND chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK_EXTEND]

//>> SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK_EXTEND]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK_EXTEND(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.insertFromRight<EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK_EXTEND,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK_EXTEND chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK_EXTEND]

//>> SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK_EXTEND]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK_EXTEND(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.setBit<EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK_EXTEND>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK_EXTEND chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK_EXTEND]

//>> CLEAR_[EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK_EXTEND]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK_EXTEND(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.clearBit<EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK_EXTEND>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK_EXTEND chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK_EXTEND]

//>> GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK_EXTEND]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK_EXTEND(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return i_data.extractToRight<EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK_EXTEND,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK_EXTEND chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK_EXTEND]

//>> GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK_EXTEND]
static inline bool GET_EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK_EXTEND(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return i_data.getBit<EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK_EXTEND>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK_EXTEND chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_RECOVERY_BLK_EXTEND]

//>> SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TAP_SEL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_ERR_INJ_ERR_INJ_TAP_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.insertFromRight<EC_PC_FIR_ERR_INJ_ERR_INJ_TAP_SEL,
           EC_PC_FIR_ERR_INJ_ERR_INJ_TAP_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TAP_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TAP_SEL]

//>> SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TAP_SEL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_ERR_INJ_ERR_INJ_TAP_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.insertFromRight<EC_PC_FIR_ERR_INJ_ERR_INJ_TAP_SEL,
           EC_PC_FIR_ERR_INJ_ERR_INJ_TAP_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TAP_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TAP_SEL]

//>> GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TAP_SEL]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_FIR_ERR_INJ_ERR_INJ_TAP_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return i_data.extractToRight<EC_PC_FIR_ERR_INJ_ERR_INJ_TAP_SEL,
           EC_PC_FIR_ERR_INJ_ERR_INJ_TAP_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_TAP_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_TAP_SEL]

//>> SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_HYP_BLOCK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_ERR_INJ_ERR_INJ_HYP_BLOCK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.insertFromRight<EC_PC_FIR_ERR_INJ_ERR_INJ_HYP_BLOCK,
           EC_PC_FIR_ERR_INJ_ERR_INJ_HYP_BLOCK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_HYP_BLOCK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_HYP_BLOCK]

//>> SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_HYP_BLOCK]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_FIR_ERR_INJ_ERR_INJ_HYP_BLOCK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return o_data.insertFromRight<EC_PC_FIR_ERR_INJ_ERR_INJ_HYP_BLOCK,
           EC_PC_FIR_ERR_INJ_ERR_INJ_HYP_BLOCK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_HYP_BLOCK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_FIR_ERR_INJ_ERR_INJ_HYP_BLOCK]

//>> GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_HYP_BLOCK]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_FIR_ERR_INJ_ERR_INJ_HYP_BLOCK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_FIR_ERR_INJ));
#endif
    return i_data.extractToRight<EC_PC_FIR_ERR_INJ_ERR_INJ_HYP_BLOCK,
           EC_PC_FIR_ERR_INJ_ERR_INJ_HYP_BLOCK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_FIR_ERR_INJ_ERR_INJ_HYP_BLOCK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_FIR_ERR_INJ_ERR_INJ_HYP_BLOCK]

//>> PREP_[EC_PC_TRACE1_TR_TR0_CONFIG_4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_TRACE1_TR_TR0_CONFIG_4(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_TRACE1_TR_TR0_CONFIG_4;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_TRACE1_TR_TR0_CONFIG_4]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_TRACE1_TR_TR0_CONFIG_4(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_TRACE1_TR_TR0_CONFIG_4;
#endif
    return fapi2::getScom(i_target, EC_PC_TRACE1_TR_TR0_CONFIG_4, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_4]

//>> PUT_[EC_PC_TRACE1_TR_TR0_CONFIG_4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_TRACE1_TR_TR0_CONFIG_4(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_4));
#endif
    return fapi2::putScom(i_target, EC_PC_TRACE1_TR_TR0_CONFIG_4, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_TRACE1_TR_TR0_CONFIG_4]


//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_4_A]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_4_A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_4));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_4_A,
           EC_PC_TRACE1_TR_TR0_CONFIG_4_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_4_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_4_A]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_4_A]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_4_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_4));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_4_A,
           EC_PC_TRACE1_TR_TR0_CONFIG_4_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_4_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_4_A]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_4_A]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE1_TR_TR0_CONFIG_4_A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_4));
#endif
    return i_data.extractToRight<EC_PC_TRACE1_TR_TR0_CONFIG_4_A,
           EC_PC_TRACE1_TR_TR0_CONFIG_4_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_4_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_4_A]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_4_B]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_4_B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_4));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_4_B,
           EC_PC_TRACE1_TR_TR0_CONFIG_4_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_4_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_4_B]

//>> SET_[EC_PC_TRACE1_TR_TR0_CONFIG_4_B]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE1_TR_TR0_CONFIG_4_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_4));
#endif
    return o_data.insertFromRight<EC_PC_TRACE1_TR_TR0_CONFIG_4_B,
           EC_PC_TRACE1_TR_TR0_CONFIG_4_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_4_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE1_TR_TR0_CONFIG_4_B]

//>> GET_[EC_PC_TRACE1_TR_TR0_CONFIG_4_B]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE1_TR_TR0_CONFIG_4_B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE1_TR_TR0_CONFIG_4));
#endif
    return i_data.extractToRight<EC_PC_TRACE1_TR_TR0_CONFIG_4_B,
           EC_PC_TRACE1_TR_TR0_CONFIG_4_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE1_TR_TR0_CONFIG_4_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE1_TR_TR0_CONFIG_4_B]

//>> PREP_[EC_PC_TRACE2_TR_TR0_CONFIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EC_PC_TRACE2_TR_TR0_CONFIG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_TRACE2_TR_TR0_CONFIG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EC_PC_TRACE2_TR_TR0_CONFIG]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EC_PC_TRACE2_TR_TR0_CONFIG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EC_PC_TRACE2_TR_TR0_CONFIG;
#endif
    return fapi2::getScom(i_target, EC_PC_TRACE2_TR_TR0_CONFIG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG]

//>> PUT_[EC_PC_TRACE2_TR_TR0_CONFIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EC_PC_TRACE2_TR_TR0_CONFIG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return fapi2::putScom(i_target, EC_PC_TRACE2_TR_TR0_CONFIG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EC_PC_TRACE2_TR_TR0_CONFIG]


//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_STORE_ON_TRIG_MODE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_STORE_ON_TRIG_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_STORE_ON_TRIG_MODE]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_STORE_ON_TRIG_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_STORE_ON_TRIG_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_STORE_ON_TRIG_MODE]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_STORE_ON_TRIG_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return o_data.setBit<EC_PC_TRACE2_TR_TR0_CONFIG_STORE_ON_TRIG_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_STORE_ON_TRIG_MODE]

//>> CLEAR_[EC_PC_TRACE2_TR_TR0_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_TRACE2_TR_TR0_CONFIG_STORE_ON_TRIG_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return o_data.clearBit<EC_PC_TRACE2_TR_TR0_CONFIG_STORE_ON_TRIG_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_TRACE2_TR_TR0_CONFIG_STORE_ON_TRIG_MODE]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE2_TR_TR0_CONFIG_STORE_ON_TRIG_MODE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return i_data.extractToRight<EC_PC_TRACE2_TR_TR0_CONFIG_STORE_ON_TRIG_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_STORE_ON_TRIG_MODE]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_STORE_ON_TRIG_MODE]
static inline bool GET_EC_PC_TRACE2_TR_TR0_CONFIG_STORE_ON_TRIG_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return i_data.getBit<EC_PC_TRACE2_TR_TR0_CONFIG_STORE_ON_TRIG_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_STORE_ON_TRIG_MODE]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_WRITE_ON_RUN_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_WRITE_ON_RUN_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_WRITE_ON_RUN_MODE]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_WRITE_ON_RUN_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_WRITE_ON_RUN_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_WRITE_ON_RUN_MODE]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_WRITE_ON_RUN_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return o_data.setBit<EC_PC_TRACE2_TR_TR0_CONFIG_WRITE_ON_RUN_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_WRITE_ON_RUN_MODE]

//>> CLEAR_[EC_PC_TRACE2_TR_TR0_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_TRACE2_TR_TR0_CONFIG_WRITE_ON_RUN_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return o_data.clearBit<EC_PC_TRACE2_TR_TR0_CONFIG_WRITE_ON_RUN_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_TRACE2_TR_TR0_CONFIG_WRITE_ON_RUN_MODE]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE2_TR_TR0_CONFIG_WRITE_ON_RUN_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return i_data.extractToRight<EC_PC_TRACE2_TR_TR0_CONFIG_WRITE_ON_RUN_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_WRITE_ON_RUN_MODE]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_WRITE_ON_RUN_MODE]
static inline bool GET_EC_PC_TRACE2_TR_TR0_CONFIG_WRITE_ON_RUN_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return i_data.getBit<EC_PC_TRACE2_TR_TR0_CONFIG_WRITE_ON_RUN_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_WRITE_ON_RUN_MODE]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_EXTEND_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_EXTEND_TRIG_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_EXTEND_TRIG_MODE,
           EC_PC_TRACE2_TR_TR0_CONFIG_EXTEND_TRIG_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_EXTEND_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_EXTEND_TRIG_MODE]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_EXTEND_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_EXTEND_TRIG_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_EXTEND_TRIG_MODE,
           EC_PC_TRACE2_TR_TR0_CONFIG_EXTEND_TRIG_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_EXTEND_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_EXTEND_TRIG_MODE]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_EXTEND_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE2_TR_TR0_CONFIG_EXTEND_TRIG_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return i_data.extractToRight<EC_PC_TRACE2_TR_TR0_CONFIG_EXTEND_TRIG_MODE,
           EC_PC_TRACE2_TR_TR0_CONFIG_EXTEND_TRIG_MODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_EXTEND_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_EXTEND_TRIG_MODE]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_BANK_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_BANK_MODE]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_BANK_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_BANK_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_BANK_MODE]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return o_data.setBit<EC_PC_TRACE2_TR_TR0_CONFIG_BANK_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_BANK_MODE]

//>> CLEAR_[EC_PC_TRACE2_TR_TR0_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_TRACE2_TR_TR0_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return o_data.clearBit<EC_PC_TRACE2_TR_TR0_CONFIG_BANK_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_TRACE2_TR_TR0_CONFIG_BANK_MODE]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE2_TR_TR0_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return i_data.extractToRight<EC_PC_TRACE2_TR_TR0_CONFIG_BANK_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_BANK_MODE]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_BANK_MODE]
static inline bool GET_EC_PC_TRACE2_TR_TR0_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return i_data.getBit<EC_PC_TRACE2_TR_TR0_CONFIG_BANK_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_BANK_MODE]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_ENH_TRACE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_ENH_TRACE_MODE]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_ENH_TRACE_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_ENH_TRACE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_ENH_TRACE_MODE]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return o_data.setBit<EC_PC_TRACE2_TR_TR0_CONFIG_ENH_TRACE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_ENH_TRACE_MODE]

//>> CLEAR_[EC_PC_TRACE2_TR_TR0_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_TRACE2_TR_TR0_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return o_data.clearBit<EC_PC_TRACE2_TR_TR0_CONFIG_ENH_TRACE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_TRACE2_TR_TR0_CONFIG_ENH_TRACE_MODE]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE2_TR_TR0_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return i_data.extractToRight<EC_PC_TRACE2_TR_TR0_CONFIG_ENH_TRACE_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_ENH_TRACE_MODE]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_ENH_TRACE_MODE]
static inline bool GET_EC_PC_TRACE2_TR_TR0_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return i_data.getBit<EC_PC_TRACE2_TR_TR0_CONFIG_ENH_TRACE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_ENH_TRACE_MODE]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL,
           EC_PC_TRACE2_TR_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL,
           EC_PC_TRACE2_TR_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE2_TR_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return i_data.extractToRight<EC_PC_TRACE2_TR_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL,
           EC_PC_TRACE2_TR_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_SELECT_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_SELECT_CONTROL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_SELECT_CONTROL,
           EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_SELECT_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_SELECT_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_SELECT_CONTROL]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_SELECT_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_SELECT_CONTROL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_SELECT_CONTROL,
           EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_SELECT_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_SELECT_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_SELECT_CONTROL]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_SELECT_CONTROL]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_SELECT_CONTROL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return i_data.extractToRight<EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_SELECT_CONTROL,
           EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_SELECT_CONTROL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_SELECT_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_SELECT_CONTROL]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return o_data.setBit<EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF]

//>> CLEAR_[EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return o_data.clearBit<EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return i_data.extractToRight<EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF]
static inline bool GET_EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return i_data.getBit<EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_HOLD_OFF]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STATUS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STATUS]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STATUS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STATUS]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STATUS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return o_data.setBit<EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STATUS]

//>> CLEAR_[EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STATUS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return o_data.clearBit<EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STATUS]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STATUS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return i_data.extractToRight<EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STATUS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STATUS]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STATUS]
static inline bool GET_EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STATUS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return i_data.getBit<EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STATUS]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STICKY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STICKY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STICKY]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STICKY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STICKY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STICKY]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STICKY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return o_data.setBit<EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STICKY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STICKY]

//>> CLEAR_[EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STICKY(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return o_data.clearBit<EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STICKY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STICKY]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STICKY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return i_data.extractToRight<EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STICKY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STICKY]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STICKY]
static inline bool GET_EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STICKY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return i_data.getBit<EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STICKY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_TRACE_RUN_STICKY]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return o_data.setBit<EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> CLEAR_[EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return o_data.clearBit<EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return i_data.extractToRight<EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline bool GET_EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return i_data.getBit<EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return o_data.setBit<EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS]

//>> CLEAR_[EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return o_data.clearBit<EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return i_data.extractToRight<EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS]
static inline bool GET_EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return i_data.getBit<EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_DISABLE_SCOM_RD_ACT_OR_ACTIVATE_CROSS]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return o_data.setBit<EC_PC_TRACE2_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> CLEAR_[EC_PC_TRACE2_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_TRACE2_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return o_data.clearBit<EC_PC_TRACE2_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_TRACE2_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE2_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return i_data.extractToRight<EC_PC_TRACE2_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline bool GET_EC_PC_TRACE2_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return i_data.getBit<EC_PC_TRACE2_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return o_data.insertFromRight<EC_PC_TRACE2_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT]

//>> SET_[EC_PC_TRACE2_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT]
static inline fapi2::buffer<uint64_t>& SET_EC_PC_TRACE2_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return o_data.setBit<EC_PC_TRACE2_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EC_PC_TRACE2_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT]

//>> CLEAR_[EC_PC_TRACE2_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT]
static inline fapi2::buffer<uint64_t>& CLEAR_EC_PC_TRACE2_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return o_data.clearBit<EC_PC_TRACE2_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EC_PC_TRACE2_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT]
static inline fapi2::buffer<uint64_t>& GET_EC_PC_TRACE2_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return i_data.extractToRight<EC_PC_TRACE2_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT]

//>> GET_[EC_PC_TRACE2_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT]
static inline bool GET_EC_PC_TRACE2_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EC_PC_TRACE2_TR_TR0_CONFIG));
#endif
    return i_data.getBit<EC_PC_TRACE2_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_c Invalid dial access EC_PC_TRACE2_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EC_PC_TRACE2_TR_TR0_CONFIG_CROSS_DISABLE_SCOM_RD_ACT]

//>> PREP_[L2_L2MISC_L2CERRS_FIR_MASK_REG_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L2_L2MISC_L2CERRS_FIR_MASK_REG_WO_AND(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L2_L2MISC_L2CERRS_FIR_MASK_REG_WO_AND;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L2_L2MISC_L2CERRS_FIR_MASK_REG_WO_AND]

//>> GET_[L2_L2MISC_L2CERRS_FIR_MASK_REG_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L2_L2MISC_L2CERRS_FIR_MASK_REG_WO_AND(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L2_L2MISC_L2CERRS_FIR_MASK_REG_WO_AND;
#endif
    return fapi2::getScom(i_target, L2_L2MISC_L2CERRS_FIR_MASK_REG_WO_AND, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_FIR_MASK_REG_WO_AND]

//>> PUT_[L2_L2MISC_L2CERRS_FIR_MASK_REG_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L2_L2MISC_L2CERRS_FIR_MASK_REG_WO_AND(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_FIR_MASK_REG_RW, L2_L2MISC_L2CERRS_FIR_MASK_REG_WO_AND,
                           L2_L2MISC_L2CERRS_FIR_MASK_REG_WO_OR));
#endif
    return fapi2::putScom(i_target, L2_L2MISC_L2CERRS_FIR_MASK_REG_WO_AND, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L2_L2MISC_L2CERRS_FIR_MASK_REG_WO_AND]

//>> PREP_[L2_L2MISC_L2CERRS_FIR_MASK_REG_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L2_L2MISC_L2CERRS_FIR_MASK_REG_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L2_L2MISC_L2CERRS_FIR_MASK_REG_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L2_L2MISC_L2CERRS_FIR_MASK_REG_WO_OR]

//>> GET_[L2_L2MISC_L2CERRS_FIR_MASK_REG_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L2_L2MISC_L2CERRS_FIR_MASK_REG_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L2_L2MISC_L2CERRS_FIR_MASK_REG_WO_OR;
#endif
    return fapi2::getScom(i_target, L2_L2MISC_L2CERRS_FIR_MASK_REG_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L2_L2MISC_L2CERRS_FIR_MASK_REG_WO_OR]

//>> PUT_[L2_L2MISC_L2CERRS_FIR_MASK_REG_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L2_L2MISC_L2CERRS_FIR_MASK_REG_WO_OR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L2_L2MISC_L2CERRS_FIR_MASK_REG_RW, L2_L2MISC_L2CERRS_FIR_MASK_REG_WO_AND,
                           L2_L2MISC_L2CERRS_FIR_MASK_REG_WO_OR));
#endif
    return fapi2::putScom(i_target, L2_L2MISC_L2CERRS_FIR_MASK_REG_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L2_L2MISC_L2CERRS_FIR_MASK_REG_WO_OR]


//>> PREP_[L2TRA_TR0_CONFIG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L2TRA_TR0_CONFIG_2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L2TRA_TR0_CONFIG_2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L2TRA_TR0_CONFIG_2]

//>> GET_[L2TRA_TR0_CONFIG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L2TRA_TR0_CONFIG_2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L2TRA_TR0_CONFIG_2;
#endif
    return fapi2::getScom(i_target, L2TRA_TR0_CONFIG_2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L2TRA_TR0_CONFIG_2]

//>> PUT_[L2TRA_TR0_CONFIG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L2TRA_TR0_CONFIG_2(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_2));
#endif
    return fapi2::putScom(i_target, L2TRA_TR0_CONFIG_2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L2TRA_TR0_CONFIG_2]


//>> SET_[L2TRA_TR0_CONFIG_2_A]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_2_A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_2));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_2_A,
           L2TRA_TR0_CONFIG_2_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR0_CONFIG_2_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_2_A]

//>> SET_[L2TRA_TR0_CONFIG_2_A]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_2_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_2));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_2_A,
           L2TRA_TR0_CONFIG_2_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR0_CONFIG_2_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_2_A]

//>> GET_[L2TRA_TR0_CONFIG_2_A]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR0_CONFIG_2_A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_2));
#endif
    return i_data.extractToRight<L2TRA_TR0_CONFIG_2_A,
           L2TRA_TR0_CONFIG_2_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR0_CONFIG_2_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR0_CONFIG_2_A]

//>> SET_[L2TRA_TR0_CONFIG_2_B]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_2_B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_2));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_2_B,
           L2TRA_TR0_CONFIG_2_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access L2TRA_TR0_CONFIG_2_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_2_B]

//>> SET_[L2TRA_TR0_CONFIG_2_B]
static inline fapi2::buffer<uint64_t>& SET_L2TRA_TR0_CONFIG_2_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_2));
#endif
    return o_data.insertFromRight<L2TRA_TR0_CONFIG_2_B,
           L2TRA_TR0_CONFIG_2_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access L2TRA_TR0_CONFIG_2_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L2TRA_TR0_CONFIG_2_B]

//>> GET_[L2TRA_TR0_CONFIG_2_B]
static inline fapi2::buffer<uint64_t>& GET_L2TRA_TR0_CONFIG_2_B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L2TRA_TR0_CONFIG_2));
#endif
    return i_data.extractToRight<L2TRA_TR0_CONFIG_2_B,
           L2TRA_TR0_CONFIG_2_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access L2TRA_TR0_CONFIG_2_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L2TRA_TR0_CONFIG_2_B]

//>> PREP_[NC_NCMISC_NCSCOMS_NCU_MODE_REG2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_NC_NCMISC_NCSCOMS_NCU_MODE_REG2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = NC_NCMISC_NCSCOMS_NCU_MODE_REG2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[NC_NCMISC_NCSCOMS_NCU_MODE_REG2]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_NC_NCMISC_NCSCOMS_NCU_MODE_REG2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = NC_NCMISC_NCSCOMS_NCU_MODE_REG2;
#endif
    return fapi2::getScom(i_target, NC_NCMISC_NCSCOMS_NCU_MODE_REG2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG2]

//>> PUT_[NC_NCMISC_NCSCOMS_NCU_MODE_REG2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_NC_NCMISC_NCSCOMS_NCU_MODE_REG2(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG2));
#endif
    return fapi2::putScom(i_target, NC_NCMISC_NCSCOMS_NCU_MODE_REG2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[NC_NCMISC_NCSCOMS_NCU_MODE_REG2]


//>> SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG2_HANG_POLL_PULSE_DIV]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_MODE_REG2_HANG_POLL_PULSE_DIV(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG2));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_MODE_REG2_HANG_POLL_PULSE_DIV,
           NC_NCMISC_NCSCOMS_NCU_MODE_REG2_HANG_POLL_PULSE_DIV_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG2_HANG_POLL_PULSE_DIV chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG2_HANG_POLL_PULSE_DIV]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG2_HANG_POLL_PULSE_DIV]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_MODE_REG2_HANG_POLL_PULSE_DIV(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG2));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_MODE_REG2_HANG_POLL_PULSE_DIV,
           NC_NCMISC_NCSCOMS_NCU_MODE_REG2_HANG_POLL_PULSE_DIV_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG2_HANG_POLL_PULSE_DIV chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG2_HANG_POLL_PULSE_DIV]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG2_HANG_POLL_PULSE_DIV]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_NCU_MODE_REG2_HANG_POLL_PULSE_DIV(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG2));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_NCU_MODE_REG2_HANG_POLL_PULSE_DIV,
           NC_NCMISC_NCSCOMS_NCU_MODE_REG2_HANG_POLL_PULSE_DIV_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG2_HANG_POLL_PULSE_DIV chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG2_HANG_POLL_PULSE_DIV]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG2_MASTER_CP_DATA_POLL_PULSE_DIV]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_MODE_REG2_MASTER_CP_DATA_POLL_PULSE_DIV(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG2));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_MODE_REG2_MASTER_CP_DATA_POLL_PULSE_DIV,
           NC_NCMISC_NCSCOMS_NCU_MODE_REG2_MASTER_CP_DATA_POLL_PULSE_DIV_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG2_MASTER_CP_DATA_POLL_PULSE_DIV chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG2_MASTER_CP_DATA_POLL_PULSE_DIV]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG2_MASTER_CP_DATA_POLL_PULSE_DIV]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_MODE_REG2_MASTER_CP_DATA_POLL_PULSE_DIV(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG2));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_MODE_REG2_MASTER_CP_DATA_POLL_PULSE_DIV,
           NC_NCMISC_NCSCOMS_NCU_MODE_REG2_MASTER_CP_DATA_POLL_PULSE_DIV_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG2_MASTER_CP_DATA_POLL_PULSE_DIV chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG2_MASTER_CP_DATA_POLL_PULSE_DIV]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG2_MASTER_CP_DATA_POLL_PULSE_DIV]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_NCU_MODE_REG2_MASTER_CP_DATA_POLL_PULSE_DIV(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG2));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_NCU_MODE_REG2_MASTER_CP_DATA_POLL_PULSE_DIV,
           NC_NCMISC_NCSCOMS_NCU_MODE_REG2_MASTER_CP_DATA_POLL_PULSE_DIV_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG2_MASTER_CP_DATA_POLL_PULSE_DIV chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG2_MASTER_CP_DATA_POLL_PULSE_DIV]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_SNOOP_DATA_POLL_PULSE_DIV]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_SNOOP_DATA_POLL_PULSE_DIV(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG2));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_SNOOP_DATA_POLL_PULSE_DIV,
           NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_SNOOP_DATA_POLL_PULSE_DIV_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_SNOOP_DATA_POLL_PULSE_DIV chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_SNOOP_DATA_POLL_PULSE_DIV]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_SNOOP_DATA_POLL_PULSE_DIV]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_SNOOP_DATA_POLL_PULSE_DIV(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG2));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_SNOOP_DATA_POLL_PULSE_DIV,
           NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_SNOOP_DATA_POLL_PULSE_DIV_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_SNOOP_DATA_POLL_PULSE_DIV chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_SNOOP_DATA_POLL_PULSE_DIV]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_SNOOP_DATA_POLL_PULSE_DIV]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_SNOOP_DATA_POLL_PULSE_DIV(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG2));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_SNOOP_DATA_POLL_PULSE_DIV,
           NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_SNOOP_DATA_POLL_PULSE_DIV_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_SNOOP_DATA_POLL_PULSE_DIV chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_SNOOP_DATA_POLL_PULSE_DIV]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_STG1_HANG_POLL_PULSE_DIV]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_STG1_HANG_POLL_PULSE_DIV(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG2));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_STG1_HANG_POLL_PULSE_DIV,
           NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_STG1_HANG_POLL_PULSE_DIV_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_STG1_HANG_POLL_PULSE_DIV chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_STG1_HANG_POLL_PULSE_DIV]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_STG1_HANG_POLL_PULSE_DIV]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_STG1_HANG_POLL_PULSE_DIV(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG2));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_STG1_HANG_POLL_PULSE_DIV,
           NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_STG1_HANG_POLL_PULSE_DIV_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_STG1_HANG_POLL_PULSE_DIV chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_STG1_HANG_POLL_PULSE_DIV]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_STG1_HANG_POLL_PULSE_DIV]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_STG1_HANG_POLL_PULSE_DIV(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG2));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_STG1_HANG_POLL_PULSE_DIV,
           NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_STG1_HANG_POLL_PULSE_DIV_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_STG1_HANG_POLL_PULSE_DIV chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_STG1_HANG_POLL_PULSE_DIV]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_STG2_HANG_POLL_PULSE_DIV]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_STG2_HANG_POLL_PULSE_DIV(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG2));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_STG2_HANG_POLL_PULSE_DIV,
           NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_STG2_HANG_POLL_PULSE_DIV_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_STG2_HANG_POLL_PULSE_DIV chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_STG2_HANG_POLL_PULSE_DIV]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_STG2_HANG_POLL_PULSE_DIV]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_STG2_HANG_POLL_PULSE_DIV(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG2));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_STG2_HANG_POLL_PULSE_DIV,
           NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_STG2_HANG_POLL_PULSE_DIV_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_STG2_HANG_POLL_PULSE_DIV chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_STG2_HANG_POLL_PULSE_DIV]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_STG2_HANG_POLL_PULSE_DIV]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_STG2_HANG_POLL_PULSE_DIV(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG2));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_STG2_HANG_POLL_PULSE_DIV,
           NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_STG2_HANG_POLL_PULSE_DIV_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_STG2_HANG_POLL_PULSE_DIV chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG2_TLB_STG2_HANG_POLL_PULSE_DIV]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG2_MASTER_TLB_DATA_POLL_PULSE_DIV]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_MODE_REG2_MASTER_TLB_DATA_POLL_PULSE_DIV(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG2));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_MODE_REG2_MASTER_TLB_DATA_POLL_PULSE_DIV,
           NC_NCMISC_NCSCOMS_NCU_MODE_REG2_MASTER_TLB_DATA_POLL_PULSE_DIV_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG2_MASTER_TLB_DATA_POLL_PULSE_DIV chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG2_MASTER_TLB_DATA_POLL_PULSE_DIV]

//>> SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG2_MASTER_TLB_DATA_POLL_PULSE_DIV]
static inline fapi2::buffer<uint64_t>& SET_NC_NCMISC_NCSCOMS_NCU_MODE_REG2_MASTER_TLB_DATA_POLL_PULSE_DIV(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG2));
#endif
    return o_data.insertFromRight<NC_NCMISC_NCSCOMS_NCU_MODE_REG2_MASTER_TLB_DATA_POLL_PULSE_DIV,
           NC_NCMISC_NCSCOMS_NCU_MODE_REG2_MASTER_TLB_DATA_POLL_PULSE_DIV_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG2_MASTER_TLB_DATA_POLL_PULSE_DIV chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG2_MASTER_TLB_DATA_POLL_PULSE_DIV]

//>> GET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG2_MASTER_TLB_DATA_POLL_PULSE_DIV]
static inline fapi2::buffer<uint64_t>& GET_NC_NCMISC_NCSCOMS_NCU_MODE_REG2_MASTER_TLB_DATA_POLL_PULSE_DIV(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(NC_NCMISC_NCSCOMS_NCU_MODE_REG2));
#endif
    return i_data.extractToRight<NC_NCMISC_NCSCOMS_NCU_MODE_REG2_MASTER_TLB_DATA_POLL_PULSE_DIV,
           NC_NCMISC_NCSCOMS_NCU_MODE_REG2_MASTER_TLB_DATA_POLL_PULSE_DIV_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access NC_NCMISC_NCSCOMS_NCU_MODE_REG2_MASTER_TLB_DATA_POLL_PULSE_DIV chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[NC_NCMISC_NCSCOMS_NCU_MODE_REG2_MASTER_TLB_DATA_POLL_PULSE_DIV]

//>> PREP_[WRITE_PROTECT_RINGS_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_WRITE_PROTECT_RINGS_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = WRITE_PROTECT_RINGS_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[WRITE_PROTECT_RINGS_REG]

//>> GET_[WRITE_PROTECT_RINGS_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_WRITE_PROTECT_RINGS_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = WRITE_PROTECT_RINGS_REG;
#endif
    return fapi2::getScom(i_target, WRITE_PROTECT_RINGS_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[WRITE_PROTECT_RINGS_REG]

//>> PUT_[WRITE_PROTECT_RINGS_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_WRITE_PROTECT_RINGS_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(WRITE_PROTECT_RINGS_REG));
#endif
    return fapi2::putScom(i_target, WRITE_PROTECT_RINGS_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[WRITE_PROTECT_RINGS_REG]


//>> SET_[WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS]
static inline fapi2::buffer<uint64_t>& SET_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_PROTECT_RINGS_REG));
#endif
    return o_data.insertFromRight<WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS,
           WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_c Invalid dial access WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS]

//>> SET_[WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS]
static inline fapi2::buffer<uint64_t>& SET_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_PROTECT_RINGS_REG));
#endif
    return o_data.insertFromRight<WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS,
           WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_c Invalid dial access WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS]

//>> GET_[WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS]
static inline fapi2::buffer<uint64_t>& GET_WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(WRITE_PROTECT_RINGS_REG));
#endif
    return i_data.extractToRight<WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS,
           WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_c Invalid dial access WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[WRITE_PROTECT_RINGS_REG_WRITE_PROTECT_RINGS]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
