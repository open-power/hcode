/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/ppe_c/reg00006_unused.H $     */
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

#ifndef __PPE_C_REG00006_H_UNUSED__
#define __PPE_C_REG00006_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_c
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
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_CERR_L3_PFET_SEQ_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_CERR_L3_PFET_SEQ_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_CERR_L3_PFET_SEQ_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_CERR_L3_PFET_SEQ_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_CERR_L3_PFET_SEQ_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_CERR_L3_PFET_SEQ_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_CERR_CL2_PFET_SEQ_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_CERR_CL2_PFET_SEQ_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_CERR_CL2_PFET_SEQ_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_CERR_CL2_PFET_SEQ_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_CERR_CL2_PFET_SEQ_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_CERR_CL2_PFET_SEQ_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_CERR_MMA_PFET_SEQ_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_CERR_MMA_PFET_SEQ_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_CERR_MMA_PFET_SEQ_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_CERR_MMA_PFET_SEQ_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_CERR_MMA_PFET_SEQ_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_CERR_MMA_PFET_SEQ_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_CERR_DDS_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_CERR_DDS_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_CERR_DDS_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_CERR_DDS_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_CERR_DDS_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_CERR_DDS_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_CERR_L3_CLOCK_SYNC_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_CERR_L3_CLOCK_SYNC_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_CERR_L3_CLOCK_SYNC_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_CERR_L3_CLOCK_SYNC_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_CERR_L3_CLOCK_SYNC_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_CERR_L3_CLOCK_SYNC_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_CERR_CL2_CLOCK_SYNC_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_CERR_CL2_CLOCK_SYNC_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_CERR_CL2_CLOCK_SYNC_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_CERR_CL2_CLOCK_SYNC_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_CERR_CL2_CLOCK_SYNC_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_CERR_CL2_CLOCK_SYNC_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_CERR_DPT_ACCESS_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_CERR_DPT_ACCESS_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_CERR_DPT_ACCESS_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_CERR_DPT_ACCESS_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_CERR_DPT_ACCESS_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_CERR_DPT_ACCESS_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_CERR_PROXY_UNDERFLOW chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_CERR_PROXY_UNDERFLOW chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_CERR_PROXY_UNDERFLOW chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_CERR_PROXY_UNDERFLOW chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_CERR_PROXY_UNDERFLOW chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_CERR_PROXY_UNDERFLOW chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_CERR_PITCH_SATURATED chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_CERR_PITCH_SATURATED chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_CERR_PITCH_SATURATED chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_CERR_PITCH_SATURATED chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_CERR_PITCH_SATURATED chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_CERR_PITCH_SATURATED chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_CERR_FTC_DEBUG_EVENT chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_CERR_FTC_DEBUG_EVENT chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_CERR_FTC_DEBUG_EVENT chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DMSR_0_COUNT chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DMSR_0_COUNT chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DMSR_0_COUNT chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DMSR_1_COUNT chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DMSR_1_COUNT chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DMSR_1_COUNT chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DPPR_PITCH_ABORT_INTERRUPT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DPPR_PITCH_ABORT_INTERRUPT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_DPPR_PITCH_ABORT_INTERRUPT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_DPPR_PITCH_ABORT_INTERRUPT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DPPR_PITCH_ABORT_INTERRUPT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_DPPR_PITCH_ABORT_INTERRUPT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DPPR_PTSR_EVENT_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DPPR_PTSR_EVENT_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_DPPR_PTSR_EVENT_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_DPPR_PTSR_EVENT_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DPPR_PTSR_EVENT_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_DPPR_PTSR_EVENT_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DPPR_ENERGY_PROXY_RESET_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DPPR_ENERGY_PROXY_RESET_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_DPPR_ENERGY_PROXY_RESET_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_DPPR_ENERGY_PROXY_RESET_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DPPR_ENERGY_PROXY_RESET_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_DPPR_ENERGY_PROXY_RESET_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DPPR_PIL_THROTTLE_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DPPR_PIL_THROTTLE_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_DPPR_PIL_THROTTLE_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_DPPR_PIL_THROTTLE_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DPPR_PIL_THROTTLE_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_DPPR_PIL_THROTTLE_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DPPR_OCP_THROTTLE_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DPPR_OCP_THROTTLE_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_DPPR_OCP_THROTTLE_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_DPPR_OCP_THROTTLE_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DPPR_OCP_THROTTLE_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_DPPR_OCP_THROTTLE_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DPPR_OCP_INTERRUPT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DPPR_OCP_INTERRUPT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_DPPR_OCP_INTERRUPT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_DPPR_OCP_INTERRUPT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DPPR_OCP_INTERRUPT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_DPPR_OCP_INTERRUPT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DPPR_OCP_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DPPR_OCP_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_DPPR_OCP_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_DPPR_OCP_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DPPR_OCP_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_DPPR_OCP_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DPPR_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DPPR_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DPPR_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DPPR_PP0_THRESH_SCALE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DPPR_PP0_THRESH_SCALE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DPPR_PP0_THRESH_SCALE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DPPR_PP0_THRESH_VALUE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DPPR_PP0_THRESH_VALUE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DPPR_PP0_THRESH_VALUE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DPPR_PP1_THRESH_SCALE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DPPR_PP1_THRESH_SCALE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DPPR_PP1_THRESH_SCALE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DPPR_PP1_THRESH_VALUE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DPPR_PP1_THRESH_VALUE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DPPR_PP1_THRESH_VALUE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DPPR_OCP_WAIT_FOR_GRANT chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DPPR_OCP_WAIT_FOR_GRANT chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_DPPR_OCP_WAIT_FOR_GRANT chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_DPPR_OCP_WAIT_FOR_GRANT chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DPPR_OCP_WAIT_FOR_GRANT chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_DPPR_OCP_WAIT_FOR_GRANT chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DPPR_OCP_LOCAL_MSB_MAX chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DPPR_OCP_LOCAL_MSB_MAX chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DPPR_OCP_LOCAL_MSB_MAX chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DPPR_OCP_LOCAL_OVERAGE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DPPR_OCP_LOCAL_OVERAGE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DPPR_OCP_LOCAL_OVERAGE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DPPR_OCP_LOCAL_TANK_VALUE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DPPR_OCP_LOCAL_TANK_VALUE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DPPR_OCP_LOCAL_TANK_VALUE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DPPR_OCP_PITCH_OVERRIDE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DPPR_OCP_PITCH_OVERRIDE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_DPPR_OCP_PITCH_OVERRIDE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_DPPR_OCP_PITCH_OVERRIDE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DPPR_OCP_PITCH_OVERRIDE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_DPPR_OCP_PITCH_OVERRIDE chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_DPPR_OCP_OVERRIDE_HISTORY chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_DPPR_OCP_OVERRIDE_HISTORY chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_DPPR_OCP_OVERRIDE_HISTORY chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_DPPR_OCP_OVERRIDE_HISTORY chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_DPPR_OCP_OVERRIDE_HISTORY chip: %x, ec: %x", scomt::chip, scomt::ec);
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
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_DPPR_OCP_OVERRIDE_HISTORY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_DPPR_OCP_OVERRIDE_HISTORY]

//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
