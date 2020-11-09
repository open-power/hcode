/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/ppe_c/reg00007.H $            */
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

#ifndef __PPE_C_REG00007_H_
#define __PPE_C_REG00007_H_

#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_c
{
#endif


//>> PREP_[CPMS_CERRMSK]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CPMS_CERRMSK(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_CERRMSK;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CPMS_CERRMSK]

//>> GET_[CPMS_CERRMSK]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CPMS_CERRMSK(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_CERRMSK;
#endif
    return fapi2::getScom(i_target, CPMS_CERRMSK, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CPMS_CERRMSK]

//>> PUT_[CPMS_CERRMSK]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CPMS_CERRMSK(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return fapi2::putScom(i_target, CPMS_CERRMSK, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CPMS_CERRMSK]


//>> SET_[CPMS_CERRMSK_PFET_SEQ_ERR_MASK]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CERRMSK_PFET_SEQ_ERR_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return o_data.insertFromRight<CPMS_CERRMSK_PFET_SEQ_ERR_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_CERRMSK_PFET_SEQ_ERR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CERRMSK_PFET_SEQ_ERR_MASK]

//>> SET_[CPMS_CERRMSK_PFET_SEQ_ERR_MASK]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CERRMSK_PFET_SEQ_ERR_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return o_data.insertFromRight<CPMS_CERRMSK_PFET_SEQ_ERR_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_CERRMSK_PFET_SEQ_ERR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CERRMSK_PFET_SEQ_ERR_MASK]

//>> SET_[CPMS_CERRMSK_PFET_SEQ_ERR_MASK]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CERRMSK_PFET_SEQ_ERR_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return o_data.setBit<CPMS_CERRMSK_PFET_SEQ_ERR_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_CERRMSK_PFET_SEQ_ERR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CERRMSK_PFET_SEQ_ERR_MASK]

//>> CLEAR_[CPMS_CERRMSK_PFET_SEQ_ERR_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_CERRMSK_PFET_SEQ_ERR_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return o_data.clearBit<CPMS_CERRMSK_PFET_SEQ_ERR_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_CERRMSK_PFET_SEQ_ERR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_CERRMSK_PFET_SEQ_ERR_MASK]

//>> GET_[CPMS_CERRMSK_PFET_SEQ_ERR_MASK]
static inline fapi2::buffer<uint64_t>& GET_CPMS_CERRMSK_PFET_SEQ_ERR_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return i_data.extractToRight<CPMS_CERRMSK_PFET_SEQ_ERR_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_CERRMSK_PFET_SEQ_ERR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CERRMSK_PFET_SEQ_ERR_MASK]

//>> GET_[CPMS_CERRMSK_PFET_SEQ_ERR_MASK]
static inline bool GET_CPMS_CERRMSK_PFET_SEQ_ERR_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return i_data.getBit<CPMS_CERRMSK_PFET_SEQ_ERR_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_CERRMSK_PFET_SEQ_ERR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CERRMSK_PFET_SEQ_ERR_MASK]

//>> SET_[CPMS_CERRMSK_DDS_ERR_MASK]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CERRMSK_DDS_ERR_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return o_data.insertFromRight<CPMS_CERRMSK_DDS_ERR_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_CERRMSK_DDS_ERR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CERRMSK_DDS_ERR_MASK]

//>> SET_[CPMS_CERRMSK_DDS_ERR_MASK]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CERRMSK_DDS_ERR_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return o_data.insertFromRight<CPMS_CERRMSK_DDS_ERR_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_CERRMSK_DDS_ERR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CERRMSK_DDS_ERR_MASK]

//>> SET_[CPMS_CERRMSK_DDS_ERR_MASK]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CERRMSK_DDS_ERR_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return o_data.setBit<CPMS_CERRMSK_DDS_ERR_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_CERRMSK_DDS_ERR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CERRMSK_DDS_ERR_MASK]

//>> CLEAR_[CPMS_CERRMSK_DDS_ERR_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_CERRMSK_DDS_ERR_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return o_data.clearBit<CPMS_CERRMSK_DDS_ERR_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_CERRMSK_DDS_ERR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_CERRMSK_DDS_ERR_MASK]

//>> GET_[CPMS_CERRMSK_DDS_ERR_MASK]
static inline fapi2::buffer<uint64_t>& GET_CPMS_CERRMSK_DDS_ERR_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return i_data.extractToRight<CPMS_CERRMSK_DDS_ERR_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_CERRMSK_DDS_ERR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CERRMSK_DDS_ERR_MASK]

//>> GET_[CPMS_CERRMSK_DDS_ERR_MASK]
static inline bool GET_CPMS_CERRMSK_DDS_ERR_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return i_data.getBit<CPMS_CERRMSK_DDS_ERR_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_CERRMSK_DDS_ERR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CERRMSK_DDS_ERR_MASK]

//>> SET_[CPMS_CERRMSK_CLK_SYNC_ERR_MASK]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CERRMSK_CLK_SYNC_ERR_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return o_data.insertFromRight<CPMS_CERRMSK_CLK_SYNC_ERR_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_CERRMSK_CLK_SYNC_ERR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CERRMSK_CLK_SYNC_ERR_MASK]

//>> SET_[CPMS_CERRMSK_CLK_SYNC_ERR_MASK]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CERRMSK_CLK_SYNC_ERR_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return o_data.insertFromRight<CPMS_CERRMSK_CLK_SYNC_ERR_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_CERRMSK_CLK_SYNC_ERR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CERRMSK_CLK_SYNC_ERR_MASK]

//>> SET_[CPMS_CERRMSK_CLK_SYNC_ERR_MASK]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CERRMSK_CLK_SYNC_ERR_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return o_data.setBit<CPMS_CERRMSK_CLK_SYNC_ERR_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_CERRMSK_CLK_SYNC_ERR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CERRMSK_CLK_SYNC_ERR_MASK]

//>> CLEAR_[CPMS_CERRMSK_CLK_SYNC_ERR_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_CERRMSK_CLK_SYNC_ERR_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return o_data.clearBit<CPMS_CERRMSK_CLK_SYNC_ERR_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_CERRMSK_CLK_SYNC_ERR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_CERRMSK_CLK_SYNC_ERR_MASK]

//>> GET_[CPMS_CERRMSK_CLK_SYNC_ERR_MASK]
static inline fapi2::buffer<uint64_t>& GET_CPMS_CERRMSK_CLK_SYNC_ERR_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return i_data.extractToRight<CPMS_CERRMSK_CLK_SYNC_ERR_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_CERRMSK_CLK_SYNC_ERR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CERRMSK_CLK_SYNC_ERR_MASK]

//>> GET_[CPMS_CERRMSK_CLK_SYNC_ERR_MASK]
static inline bool GET_CPMS_CERRMSK_CLK_SYNC_ERR_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return i_data.getBit<CPMS_CERRMSK_CLK_SYNC_ERR_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_CERRMSK_CLK_SYNC_ERR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CERRMSK_CLK_SYNC_ERR_MASK]

//>> SET_[CPMS_CERRMSK_DPT_ACCESS_MASK]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CERRMSK_DPT_ACCESS_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return o_data.insertFromRight<CPMS_CERRMSK_DPT_ACCESS_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_CERRMSK_DPT_ACCESS_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CERRMSK_DPT_ACCESS_MASK]

//>> SET_[CPMS_CERRMSK_DPT_ACCESS_MASK]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CERRMSK_DPT_ACCESS_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return o_data.insertFromRight<CPMS_CERRMSK_DPT_ACCESS_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_CERRMSK_DPT_ACCESS_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CERRMSK_DPT_ACCESS_MASK]

//>> SET_[CPMS_CERRMSK_DPT_ACCESS_MASK]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CERRMSK_DPT_ACCESS_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return o_data.setBit<CPMS_CERRMSK_DPT_ACCESS_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_CERRMSK_DPT_ACCESS_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CERRMSK_DPT_ACCESS_MASK]

//>> CLEAR_[CPMS_CERRMSK_DPT_ACCESS_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_CERRMSK_DPT_ACCESS_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return o_data.clearBit<CPMS_CERRMSK_DPT_ACCESS_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_CERRMSK_DPT_ACCESS_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_CERRMSK_DPT_ACCESS_MASK]

//>> GET_[CPMS_CERRMSK_DPT_ACCESS_MASK]
static inline fapi2::buffer<uint64_t>& GET_CPMS_CERRMSK_DPT_ACCESS_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return i_data.extractToRight<CPMS_CERRMSK_DPT_ACCESS_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_CERRMSK_DPT_ACCESS_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CERRMSK_DPT_ACCESS_MASK]

//>> GET_[CPMS_CERRMSK_DPT_ACCESS_MASK]
static inline bool GET_CPMS_CERRMSK_DPT_ACCESS_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return i_data.getBit<CPMS_CERRMSK_DPT_ACCESS_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_CERRMSK_DPT_ACCESS_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CERRMSK_DPT_ACCESS_MASK]

//>> SET_[CPMS_CERRMSK_PROXY_MASK]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CERRMSK_PROXY_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return o_data.insertFromRight<CPMS_CERRMSK_PROXY_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_CERRMSK_PROXY_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CERRMSK_PROXY_MASK]

//>> SET_[CPMS_CERRMSK_PROXY_MASK]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CERRMSK_PROXY_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return o_data.insertFromRight<CPMS_CERRMSK_PROXY_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_CERRMSK_PROXY_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CERRMSK_PROXY_MASK]

//>> SET_[CPMS_CERRMSK_PROXY_MASK]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CERRMSK_PROXY_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return o_data.setBit<CPMS_CERRMSK_PROXY_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_CERRMSK_PROXY_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CERRMSK_PROXY_MASK]

//>> CLEAR_[CPMS_CERRMSK_PROXY_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_CERRMSK_PROXY_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return o_data.clearBit<CPMS_CERRMSK_PROXY_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_CERRMSK_PROXY_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_CERRMSK_PROXY_MASK]

//>> GET_[CPMS_CERRMSK_PROXY_MASK]
static inline fapi2::buffer<uint64_t>& GET_CPMS_CERRMSK_PROXY_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return i_data.extractToRight<CPMS_CERRMSK_PROXY_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_CERRMSK_PROXY_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CERRMSK_PROXY_MASK]

//>> GET_[CPMS_CERRMSK_PROXY_MASK]
static inline bool GET_CPMS_CERRMSK_PROXY_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return i_data.getBit<CPMS_CERRMSK_PROXY_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_CERRMSK_PROXY_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CERRMSK_PROXY_MASK]

//>> SET_[CPMS_CERRMSK_FTC_EVENT_MASK]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CERRMSK_FTC_EVENT_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return o_data.insertFromRight<CPMS_CERRMSK_FTC_EVENT_MASK,
           CPMS_CERRMSK_FTC_EVENT_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_CERRMSK_FTC_EVENT_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CERRMSK_FTC_EVENT_MASK]

//>> SET_[CPMS_CERRMSK_FTC_EVENT_MASK]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CERRMSK_FTC_EVENT_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return o_data.insertFromRight<CPMS_CERRMSK_FTC_EVENT_MASK,
           CPMS_CERRMSK_FTC_EVENT_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_CERRMSK_FTC_EVENT_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CERRMSK_FTC_EVENT_MASK]

//>> GET_[CPMS_CERRMSK_FTC_EVENT_MASK]
static inline fapi2::buffer<uint64_t>& GET_CPMS_CERRMSK_FTC_EVENT_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return i_data.extractToRight<CPMS_CERRMSK_FTC_EVENT_MASK,
           CPMS_CERRMSK_FTC_EVENT_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_CERRMSK_FTC_EVENT_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CERRMSK_FTC_EVENT_MASK]

//>> SET_[CPMS_CERRMSK_PITCH_MASK]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CERRMSK_PITCH_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return o_data.insertFromRight<CPMS_CERRMSK_PITCH_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_CERRMSK_PITCH_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CERRMSK_PITCH_MASK]

//>> SET_[CPMS_CERRMSK_PITCH_MASK]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CERRMSK_PITCH_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return o_data.insertFromRight<CPMS_CERRMSK_PITCH_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_CERRMSK_PITCH_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CERRMSK_PITCH_MASK]

//>> SET_[CPMS_CERRMSK_PITCH_MASK]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CERRMSK_PITCH_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return o_data.setBit<CPMS_CERRMSK_PITCH_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_CERRMSK_PITCH_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CERRMSK_PITCH_MASK]

//>> CLEAR_[CPMS_CERRMSK_PITCH_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_CERRMSK_PITCH_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return o_data.clearBit<CPMS_CERRMSK_PITCH_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_CERRMSK_PITCH_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_CERRMSK_PITCH_MASK]

//>> GET_[CPMS_CERRMSK_PITCH_MASK]
static inline fapi2::buffer<uint64_t>& GET_CPMS_CERRMSK_PITCH_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return i_data.extractToRight<CPMS_CERRMSK_PITCH_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_CERRMSK_PITCH_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CERRMSK_PITCH_MASK]

//>> GET_[CPMS_CERRMSK_PITCH_MASK]
static inline bool GET_CPMS_CERRMSK_PITCH_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return i_data.getBit<CPMS_CERRMSK_PITCH_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_CERRMSK_PITCH_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CERRMSK_PITCH_MASK]

//>> SET_[P10_20_CPMS_CERRMSK_CCFG_PARITY_MASK]
static inline fapi2::buffer<uint64_t>& SET_P10_20_CPMS_CERRMSK_CCFG_PARITY_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return o_data.insertFromRight<P10_20_CPMS_CERRMSK_CCFG_PARITY_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access P10_20_CPMS_CERRMSK_CCFG_PARITY_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_CPMS_CERRMSK_CCFG_PARITY_MASK]

//>> SET_[P10_20_CPMS_CERRMSK_CCFG_PARITY_MASK]
static inline fapi2::buffer<uint64_t>& SET_P10_20_CPMS_CERRMSK_CCFG_PARITY_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return o_data.insertFromRight<P10_20_CPMS_CERRMSK_CCFG_PARITY_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access P10_20_CPMS_CERRMSK_CCFG_PARITY_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_CPMS_CERRMSK_CCFG_PARITY_MASK]

//>> SET_[P10_20_CPMS_CERRMSK_CCFG_PARITY_MASK]
static inline fapi2::buffer<uint64_t>& SET_P10_20_CPMS_CERRMSK_CCFG_PARITY_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return o_data.setBit<P10_20_CPMS_CERRMSK_CCFG_PARITY_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access P10_20_CPMS_CERRMSK_CCFG_PARITY_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_CPMS_CERRMSK_CCFG_PARITY_MASK]

//>> CLEAR_[P10_20_CPMS_CERRMSK_CCFG_PARITY_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_CPMS_CERRMSK_CCFG_PARITY_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return o_data.clearBit<P10_20_CPMS_CERRMSK_CCFG_PARITY_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access P10_20_CPMS_CERRMSK_CCFG_PARITY_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_CPMS_CERRMSK_CCFG_PARITY_MASK]

//>> GET_[P10_20_CPMS_CERRMSK_CCFG_PARITY_MASK]
static inline fapi2::buffer<uint64_t>& GET_P10_20_CPMS_CERRMSK_CCFG_PARITY_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return i_data.extractToRight<P10_20_CPMS_CERRMSK_CCFG_PARITY_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access P10_20_CPMS_CERRMSK_CCFG_PARITY_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_CPMS_CERRMSK_CCFG_PARITY_MASK]

//>> GET_[P10_20_CPMS_CERRMSK_CCFG_PARITY_MASK]
static inline bool GET_P10_20_CPMS_CERRMSK_CCFG_PARITY_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return i_data.getBit<P10_20_CPMS_CERRMSK_CCFG_PARITY_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access P10_20_CPMS_CERRMSK_CCFG_PARITY_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_CPMS_CERRMSK_CCFG_PARITY_MASK]

//>> SET_[P10_20_CPMS_CERRMSK_RVRM_DROPOUT_MASK]
static inline fapi2::buffer<uint64_t>& SET_P10_20_CPMS_CERRMSK_RVRM_DROPOUT_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return o_data.insertFromRight<P10_20_CPMS_CERRMSK_RVRM_DROPOUT_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access P10_20_CPMS_CERRMSK_RVRM_DROPOUT_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_CPMS_CERRMSK_RVRM_DROPOUT_MASK]

//>> SET_[P10_20_CPMS_CERRMSK_RVRM_DROPOUT_MASK]
static inline fapi2::buffer<uint64_t>& SET_P10_20_CPMS_CERRMSK_RVRM_DROPOUT_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return o_data.insertFromRight<P10_20_CPMS_CERRMSK_RVRM_DROPOUT_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access P10_20_CPMS_CERRMSK_RVRM_DROPOUT_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_CPMS_CERRMSK_RVRM_DROPOUT_MASK]

//>> SET_[P10_20_CPMS_CERRMSK_RVRM_DROPOUT_MASK]
static inline fapi2::buffer<uint64_t>& SET_P10_20_CPMS_CERRMSK_RVRM_DROPOUT_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return o_data.setBit<P10_20_CPMS_CERRMSK_RVRM_DROPOUT_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access P10_20_CPMS_CERRMSK_RVRM_DROPOUT_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_CPMS_CERRMSK_RVRM_DROPOUT_MASK]

//>> CLEAR_[P10_20_CPMS_CERRMSK_RVRM_DROPOUT_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_CPMS_CERRMSK_RVRM_DROPOUT_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return o_data.clearBit<P10_20_CPMS_CERRMSK_RVRM_DROPOUT_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access P10_20_CPMS_CERRMSK_RVRM_DROPOUT_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_CPMS_CERRMSK_RVRM_DROPOUT_MASK]

//>> GET_[P10_20_CPMS_CERRMSK_RVRM_DROPOUT_MASK]
static inline fapi2::buffer<uint64_t>& GET_P10_20_CPMS_CERRMSK_RVRM_DROPOUT_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return i_data.extractToRight<P10_20_CPMS_CERRMSK_RVRM_DROPOUT_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access P10_20_CPMS_CERRMSK_RVRM_DROPOUT_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_CPMS_CERRMSK_RVRM_DROPOUT_MASK]

//>> GET_[P10_20_CPMS_CERRMSK_RVRM_DROPOUT_MASK]
static inline bool GET_P10_20_CPMS_CERRMSK_RVRM_DROPOUT_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return i_data.getBit<P10_20_CPMS_CERRMSK_RVRM_DROPOUT_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access P10_20_CPMS_CERRMSK_RVRM_DROPOUT_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_CPMS_CERRMSK_RVRM_DROPOUT_MASK]

//>> SET_[P10_20_CPMS_CERRMSK_PITCH_UPDATE_MASK]
static inline fapi2::buffer<uint64_t>& SET_P10_20_CPMS_CERRMSK_PITCH_UPDATE_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return o_data.insertFromRight<P10_20_CPMS_CERRMSK_PITCH_UPDATE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access P10_20_CPMS_CERRMSK_PITCH_UPDATE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_CPMS_CERRMSK_PITCH_UPDATE_MASK]

//>> SET_[P10_20_CPMS_CERRMSK_PITCH_UPDATE_MASK]
static inline fapi2::buffer<uint64_t>& SET_P10_20_CPMS_CERRMSK_PITCH_UPDATE_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return o_data.insertFromRight<P10_20_CPMS_CERRMSK_PITCH_UPDATE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access P10_20_CPMS_CERRMSK_PITCH_UPDATE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_CPMS_CERRMSK_PITCH_UPDATE_MASK]

//>> SET_[P10_20_CPMS_CERRMSK_PITCH_UPDATE_MASK]
static inline fapi2::buffer<uint64_t>& SET_P10_20_CPMS_CERRMSK_PITCH_UPDATE_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return o_data.setBit<P10_20_CPMS_CERRMSK_PITCH_UPDATE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access P10_20_CPMS_CERRMSK_PITCH_UPDATE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_CPMS_CERRMSK_PITCH_UPDATE_MASK]

//>> CLEAR_[P10_20_CPMS_CERRMSK_PITCH_UPDATE_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_CPMS_CERRMSK_PITCH_UPDATE_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return o_data.clearBit<P10_20_CPMS_CERRMSK_PITCH_UPDATE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access P10_20_CPMS_CERRMSK_PITCH_UPDATE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_CPMS_CERRMSK_PITCH_UPDATE_MASK]

//>> GET_[P10_20_CPMS_CERRMSK_PITCH_UPDATE_MASK]
static inline fapi2::buffer<uint64_t>& GET_P10_20_CPMS_CERRMSK_PITCH_UPDATE_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return i_data.extractToRight<P10_20_CPMS_CERRMSK_PITCH_UPDATE_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access P10_20_CPMS_CERRMSK_PITCH_UPDATE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_CPMS_CERRMSK_PITCH_UPDATE_MASK]

//>> GET_[P10_20_CPMS_CERRMSK_PITCH_UPDATE_MASK]
static inline bool GET_P10_20_CPMS_CERRMSK_PITCH_UPDATE_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return i_data.getBit<P10_20_CPMS_CERRMSK_PITCH_UPDATE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access P10_20_CPMS_CERRMSK_PITCH_UPDATE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_CPMS_CERRMSK_PITCH_UPDATE_MASK]

//>> SET_[P10_20_CPMS_CERRMSK_SPARE_MASK]
static inline fapi2::buffer<uint64_t>& SET_P10_20_CPMS_CERRMSK_SPARE_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return o_data.insertFromRight<P10_20_CPMS_CERRMSK_SPARE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access P10_20_CPMS_CERRMSK_SPARE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_CPMS_CERRMSK_SPARE_MASK]

//>> SET_[P10_20_CPMS_CERRMSK_SPARE_MASK]
static inline fapi2::buffer<uint64_t>& SET_P10_20_CPMS_CERRMSK_SPARE_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return o_data.insertFromRight<P10_20_CPMS_CERRMSK_SPARE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access P10_20_CPMS_CERRMSK_SPARE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_CPMS_CERRMSK_SPARE_MASK]

//>> SET_[P10_20_CPMS_CERRMSK_SPARE_MASK]
static inline fapi2::buffer<uint64_t>& SET_P10_20_CPMS_CERRMSK_SPARE_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return o_data.setBit<P10_20_CPMS_CERRMSK_SPARE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access P10_20_CPMS_CERRMSK_SPARE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_CPMS_CERRMSK_SPARE_MASK]

//>> CLEAR_[P10_20_CPMS_CERRMSK_SPARE_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_CPMS_CERRMSK_SPARE_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return o_data.clearBit<P10_20_CPMS_CERRMSK_SPARE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access P10_20_CPMS_CERRMSK_SPARE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_CPMS_CERRMSK_SPARE_MASK]

//>> GET_[P10_20_CPMS_CERRMSK_SPARE_MASK]
static inline fapi2::buffer<uint64_t>& GET_P10_20_CPMS_CERRMSK_SPARE_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return i_data.extractToRight<P10_20_CPMS_CERRMSK_SPARE_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access P10_20_CPMS_CERRMSK_SPARE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_CPMS_CERRMSK_SPARE_MASK]

//>> GET_[P10_20_CPMS_CERRMSK_SPARE_MASK]
static inline bool GET_P10_20_CPMS_CERRMSK_SPARE_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(CPMS_CERRMSK));
#endif
    return i_data.getBit<P10_20_CPMS_CERRMSK_SPARE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access P10_20_CPMS_CERRMSK_SPARE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_CPMS_CERRMSK_SPARE_MASK]

//>> PREP_[QME_PSCRS3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_PSCRS3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_PSCRS3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_PSCRS3]

//>> GET_[QME_PSCRS3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_PSCRS3(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_PSCRS3;
#endif
    return fapi2::getScom(i_target, QME_PSCRS3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_PSCRS3]

//>> PUT_[QME_PSCRS3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_PSCRS3(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return fapi2::putScom(i_target, QME_PSCRS3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_PSCRS3]


//>> SET_[QME_PSCRS3_DPDES_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS3_DPDES_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return o_data.insertFromRight<QME_PSCRS3_DPDES_EXIT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_PSCRS3_DPDES_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS3_DPDES_EXIT_ENABLE]

//>> SET_[QME_PSCRS3_DPDES_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS3_DPDES_EXIT_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return o_data.insertFromRight<QME_PSCRS3_DPDES_EXIT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_PSCRS3_DPDES_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS3_DPDES_EXIT_ENABLE]

//>> SET_[QME_PSCRS3_DPDES_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS3_DPDES_EXIT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return o_data.setBit<QME_PSCRS3_DPDES_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_PSCRS3_DPDES_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS3_DPDES_EXIT_ENABLE]

//>> CLEAR_[QME_PSCRS3_DPDES_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PSCRS3_DPDES_EXIT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return o_data.clearBit<QME_PSCRS3_DPDES_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_PSCRS3_DPDES_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PSCRS3_DPDES_EXIT_ENABLE]

//>> GET_[QME_PSCRS3_DPDES_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_QME_PSCRS3_DPDES_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return i_data.extractToRight<QME_PSCRS3_DPDES_EXIT_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_PSCRS3_DPDES_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS3_DPDES_EXIT_ENABLE]

//>> GET_[QME_PSCRS3_DPDES_EXIT_ENABLE]
static inline bool GET_QME_PSCRS3_DPDES_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return i_data.getBit<QME_PSCRS3_DPDES_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_PSCRS3_DPDES_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS3_DPDES_EXIT_ENABLE]

//>> SET_[QME_PSCRS3_SD]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS3_SD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return o_data.insertFromRight<QME_PSCRS3_SD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_PSCRS3_SD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS3_SD]

//>> SET_[QME_PSCRS3_SD]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS3_SD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return o_data.insertFromRight<QME_PSCRS3_SD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_PSCRS3_SD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS3_SD]

//>> SET_[QME_PSCRS3_SD]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS3_SD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return o_data.setBit<QME_PSCRS3_SD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_PSCRS3_SD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS3_SD]

//>> CLEAR_[QME_PSCRS3_SD]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PSCRS3_SD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return o_data.clearBit<QME_PSCRS3_SD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_PSCRS3_SD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PSCRS3_SD]

//>> GET_[QME_PSCRS3_SD]
static inline fapi2::buffer<uint64_t>& GET_QME_PSCRS3_SD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return i_data.extractToRight<QME_PSCRS3_SD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_PSCRS3_SD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS3_SD]

//>> GET_[QME_PSCRS3_SD]
static inline bool GET_QME_PSCRS3_SD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return i_data.getBit<QME_PSCRS3_SD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_PSCRS3_SD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS3_SD]

//>> SET_[QME_PSCRS3_ESL]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS3_ESL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return o_data.insertFromRight<QME_PSCRS3_ESL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_PSCRS3_ESL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS3_ESL]

//>> SET_[QME_PSCRS3_ESL]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS3_ESL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return o_data.insertFromRight<QME_PSCRS3_ESL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_PSCRS3_ESL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS3_ESL]

//>> SET_[QME_PSCRS3_ESL]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS3_ESL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return o_data.setBit<QME_PSCRS3_ESL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_PSCRS3_ESL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS3_ESL]

//>> CLEAR_[QME_PSCRS3_ESL]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PSCRS3_ESL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return o_data.clearBit<QME_PSCRS3_ESL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_PSCRS3_ESL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PSCRS3_ESL]

//>> GET_[QME_PSCRS3_ESL]
static inline fapi2::buffer<uint64_t>& GET_QME_PSCRS3_ESL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return i_data.extractToRight<QME_PSCRS3_ESL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_PSCRS3_ESL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS3_ESL]

//>> GET_[QME_PSCRS3_ESL]
static inline bool GET_QME_PSCRS3_ESL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return i_data.getBit<QME_PSCRS3_ESL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_PSCRS3_ESL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS3_ESL]

//>> SET_[QME_PSCRS3_EC]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS3_EC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return o_data.insertFromRight<QME_PSCRS3_EC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_PSCRS3_EC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS3_EC]

//>> SET_[QME_PSCRS3_EC]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS3_EC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return o_data.insertFromRight<QME_PSCRS3_EC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_PSCRS3_EC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS3_EC]

//>> SET_[QME_PSCRS3_EC]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS3_EC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return o_data.setBit<QME_PSCRS3_EC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_PSCRS3_EC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS3_EC]

//>> CLEAR_[QME_PSCRS3_EC]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PSCRS3_EC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return o_data.clearBit<QME_PSCRS3_EC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_PSCRS3_EC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PSCRS3_EC]

//>> GET_[QME_PSCRS3_EC]
static inline fapi2::buffer<uint64_t>& GET_QME_PSCRS3_EC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return i_data.extractToRight<QME_PSCRS3_EC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_PSCRS3_EC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS3_EC]

//>> GET_[QME_PSCRS3_EC]
static inline bool GET_QME_PSCRS3_EC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return i_data.getBit<QME_PSCRS3_EC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_PSCRS3_EC chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS3_EC]

//>> SET_[QME_PSCRS3_PSLL]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS3_PSLL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return o_data.insertFromRight<QME_PSCRS3_PSLL,
           QME_PSCRS3_PSLL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_PSCRS3_PSLL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS3_PSLL]

//>> SET_[QME_PSCRS3_PSLL]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS3_PSLL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return o_data.insertFromRight<QME_PSCRS3_PSLL,
           QME_PSCRS3_PSLL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_PSCRS3_PSLL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS3_PSLL]

//>> GET_[QME_PSCRS3_PSLL]
static inline fapi2::buffer<uint64_t>& GET_QME_PSCRS3_PSLL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return i_data.extractToRight<QME_PSCRS3_PSLL,
           QME_PSCRS3_PSLL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_PSCRS3_PSLL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS3_PSLL]

//>> SET_[QME_PSCRS3_HYP_VIRT_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS3_HYP_VIRT_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return o_data.insertFromRight<QME_PSCRS3_HYP_VIRT_EXIT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_PSCRS3_HYP_VIRT_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS3_HYP_VIRT_EXIT_ENABLE]

//>> SET_[QME_PSCRS3_HYP_VIRT_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS3_HYP_VIRT_EXIT_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return o_data.insertFromRight<QME_PSCRS3_HYP_VIRT_EXIT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_PSCRS3_HYP_VIRT_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS3_HYP_VIRT_EXIT_ENABLE]

//>> SET_[QME_PSCRS3_HYP_VIRT_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS3_HYP_VIRT_EXIT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return o_data.setBit<QME_PSCRS3_HYP_VIRT_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_PSCRS3_HYP_VIRT_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS3_HYP_VIRT_EXIT_ENABLE]

//>> CLEAR_[QME_PSCRS3_HYP_VIRT_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PSCRS3_HYP_VIRT_EXIT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return o_data.clearBit<QME_PSCRS3_HYP_VIRT_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_PSCRS3_HYP_VIRT_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PSCRS3_HYP_VIRT_EXIT_ENABLE]

//>> GET_[QME_PSCRS3_HYP_VIRT_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_QME_PSCRS3_HYP_VIRT_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return i_data.extractToRight<QME_PSCRS3_HYP_VIRT_EXIT_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_PSCRS3_HYP_VIRT_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS3_HYP_VIRT_EXIT_ENABLE]

//>> GET_[QME_PSCRS3_HYP_VIRT_EXIT_ENABLE]
static inline bool GET_QME_PSCRS3_HYP_VIRT_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return i_data.getBit<QME_PSCRS3_HYP_VIRT_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_PSCRS3_HYP_VIRT_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS3_HYP_VIRT_EXIT_ENABLE]

//>> SET_[QME_PSCRS3_UV_DB_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS3_UV_DB_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return o_data.insertFromRight<QME_PSCRS3_UV_DB_EXIT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_PSCRS3_UV_DB_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS3_UV_DB_EXIT_ENABLE]

//>> SET_[QME_PSCRS3_UV_DB_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS3_UV_DB_EXIT_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return o_data.insertFromRight<QME_PSCRS3_UV_DB_EXIT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_PSCRS3_UV_DB_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS3_UV_DB_EXIT_ENABLE]

//>> SET_[QME_PSCRS3_UV_DB_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS3_UV_DB_EXIT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return o_data.setBit<QME_PSCRS3_UV_DB_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_PSCRS3_UV_DB_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS3_UV_DB_EXIT_ENABLE]

//>> CLEAR_[QME_PSCRS3_UV_DB_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PSCRS3_UV_DB_EXIT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return o_data.clearBit<QME_PSCRS3_UV_DB_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_PSCRS3_UV_DB_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PSCRS3_UV_DB_EXIT_ENABLE]

//>> GET_[QME_PSCRS3_UV_DB_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_QME_PSCRS3_UV_DB_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return i_data.extractToRight<QME_PSCRS3_UV_DB_EXIT_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_PSCRS3_UV_DB_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS3_UV_DB_EXIT_ENABLE]

//>> GET_[QME_PSCRS3_UV_DB_EXIT_ENABLE]
static inline bool GET_QME_PSCRS3_UV_DB_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return i_data.getBit<QME_PSCRS3_UV_DB_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_PSCRS3_UV_DB_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS3_UV_DB_EXIT_ENABLE]

//>> SET_[QME_PSCRS3_HYP_DB_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS3_HYP_DB_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return o_data.insertFromRight<QME_PSCRS3_HYP_DB_EXIT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_PSCRS3_HYP_DB_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS3_HYP_DB_EXIT_ENABLE]

//>> SET_[QME_PSCRS3_HYP_DB_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS3_HYP_DB_EXIT_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return o_data.insertFromRight<QME_PSCRS3_HYP_DB_EXIT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_PSCRS3_HYP_DB_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS3_HYP_DB_EXIT_ENABLE]

//>> SET_[QME_PSCRS3_HYP_DB_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS3_HYP_DB_EXIT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return o_data.setBit<QME_PSCRS3_HYP_DB_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_PSCRS3_HYP_DB_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS3_HYP_DB_EXIT_ENABLE]

//>> CLEAR_[QME_PSCRS3_HYP_DB_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PSCRS3_HYP_DB_EXIT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return o_data.clearBit<QME_PSCRS3_HYP_DB_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_PSCRS3_HYP_DB_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PSCRS3_HYP_DB_EXIT_ENABLE]

//>> GET_[QME_PSCRS3_HYP_DB_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_QME_PSCRS3_HYP_DB_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return i_data.extractToRight<QME_PSCRS3_HYP_DB_EXIT_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_PSCRS3_HYP_DB_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS3_HYP_DB_EXIT_ENABLE]

//>> GET_[QME_PSCRS3_HYP_DB_EXIT_ENABLE]
static inline bool GET_QME_PSCRS3_HYP_DB_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return i_data.getBit<QME_PSCRS3_HYP_DB_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_PSCRS3_HYP_DB_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS3_HYP_DB_EXIT_ENABLE]

//>> SET_[QME_PSCRS3_EXT_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS3_EXT_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return o_data.insertFromRight<QME_PSCRS3_EXT_EXIT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_PSCRS3_EXT_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS3_EXT_EXIT_ENABLE]

//>> SET_[QME_PSCRS3_EXT_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS3_EXT_EXIT_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return o_data.insertFromRight<QME_PSCRS3_EXT_EXIT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_PSCRS3_EXT_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS3_EXT_EXIT_ENABLE]

//>> SET_[QME_PSCRS3_EXT_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS3_EXT_EXIT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return o_data.setBit<QME_PSCRS3_EXT_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_PSCRS3_EXT_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS3_EXT_EXIT_ENABLE]

//>> CLEAR_[QME_PSCRS3_EXT_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PSCRS3_EXT_EXIT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return o_data.clearBit<QME_PSCRS3_EXT_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_PSCRS3_EXT_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PSCRS3_EXT_EXIT_ENABLE]

//>> GET_[QME_PSCRS3_EXT_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_QME_PSCRS3_EXT_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return i_data.extractToRight<QME_PSCRS3_EXT_EXIT_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_PSCRS3_EXT_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS3_EXT_EXIT_ENABLE]

//>> GET_[QME_PSCRS3_EXT_EXIT_ENABLE]
static inline bool GET_QME_PSCRS3_EXT_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return i_data.getBit<QME_PSCRS3_EXT_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_PSCRS3_EXT_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS3_EXT_EXIT_ENABLE]

//>> SET_[QME_PSCRS3_DEC_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS3_DEC_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return o_data.insertFromRight<QME_PSCRS3_DEC_EXIT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_PSCRS3_DEC_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS3_DEC_EXIT_ENABLE]

//>> SET_[QME_PSCRS3_DEC_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS3_DEC_EXIT_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return o_data.insertFromRight<QME_PSCRS3_DEC_EXIT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_PSCRS3_DEC_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS3_DEC_EXIT_ENABLE]

//>> SET_[QME_PSCRS3_DEC_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS3_DEC_EXIT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return o_data.setBit<QME_PSCRS3_DEC_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_PSCRS3_DEC_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS3_DEC_EXIT_ENABLE]

//>> CLEAR_[QME_PSCRS3_DEC_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PSCRS3_DEC_EXIT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return o_data.clearBit<QME_PSCRS3_DEC_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_PSCRS3_DEC_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PSCRS3_DEC_EXIT_ENABLE]

//>> GET_[QME_PSCRS3_DEC_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_QME_PSCRS3_DEC_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return i_data.extractToRight<QME_PSCRS3_DEC_EXIT_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_PSCRS3_DEC_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS3_DEC_EXIT_ENABLE]

//>> GET_[QME_PSCRS3_DEC_EXIT_ENABLE]
static inline bool GET_QME_PSCRS3_DEC_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return i_data.getBit<QME_PSCRS3_DEC_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_PSCRS3_DEC_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS3_DEC_EXIT_ENABLE]

//>> SET_[QME_PSCRS3_HMI_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS3_HMI_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return o_data.insertFromRight<QME_PSCRS3_HMI_EXIT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_PSCRS3_HMI_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS3_HMI_EXIT_ENABLE]

//>> SET_[QME_PSCRS3_HMI_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS3_HMI_EXIT_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return o_data.insertFromRight<QME_PSCRS3_HMI_EXIT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_PSCRS3_HMI_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS3_HMI_EXIT_ENABLE]

//>> SET_[QME_PSCRS3_HMI_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS3_HMI_EXIT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return o_data.setBit<QME_PSCRS3_HMI_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_PSCRS3_HMI_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS3_HMI_EXIT_ENABLE]

//>> CLEAR_[QME_PSCRS3_HMI_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PSCRS3_HMI_EXIT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return o_data.clearBit<QME_PSCRS3_HMI_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_PSCRS3_HMI_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PSCRS3_HMI_EXIT_ENABLE]

//>> GET_[QME_PSCRS3_HMI_EXIT_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_QME_PSCRS3_HMI_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return i_data.extractToRight<QME_PSCRS3_HMI_EXIT_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_PSCRS3_HMI_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS3_HMI_EXIT_ENABLE]

//>> GET_[QME_PSCRS3_HMI_EXIT_ENABLE]
static inline bool GET_QME_PSCRS3_HMI_EXIT_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return i_data.getBit<QME_PSCRS3_HMI_EXIT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_PSCRS3_HMI_EXIT_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS3_HMI_EXIT_ENABLE]

//>> SET_[QME_PSCRS3_TR]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS3_TR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return o_data.insertFromRight<QME_PSCRS3_TR,
           QME_PSCRS3_TR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_PSCRS3_TR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS3_TR]

//>> SET_[QME_PSCRS3_TR]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS3_TR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return o_data.insertFromRight<QME_PSCRS3_TR,
           QME_PSCRS3_TR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_PSCRS3_TR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS3_TR]

//>> GET_[QME_PSCRS3_TR]
static inline fapi2::buffer<uint64_t>& GET_QME_PSCRS3_TR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return i_data.extractToRight<QME_PSCRS3_TR,
           QME_PSCRS3_TR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_PSCRS3_TR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS3_TR]

//>> SET_[QME_PSCRS3_MTL]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS3_MTL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return o_data.insertFromRight<QME_PSCRS3_MTL,
           QME_PSCRS3_MTL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_PSCRS3_MTL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS3_MTL]

//>> SET_[QME_PSCRS3_MTL]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS3_MTL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return o_data.insertFromRight<QME_PSCRS3_MTL,
           QME_PSCRS3_MTL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_PSCRS3_MTL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS3_MTL]

//>> GET_[QME_PSCRS3_MTL]
static inline fapi2::buffer<uint64_t>& GET_QME_PSCRS3_MTL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return i_data.extractToRight<QME_PSCRS3_MTL,
           QME_PSCRS3_MTL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_PSCRS3_MTL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS3_MTL]

//>> SET_[QME_PSCRS3_RL]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS3_RL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return o_data.insertFromRight<QME_PSCRS3_RL,
           QME_PSCRS3_RL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_PSCRS3_RL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS3_RL]

//>> SET_[QME_PSCRS3_RL]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS3_RL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return o_data.insertFromRight<QME_PSCRS3_RL,
           QME_PSCRS3_RL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_PSCRS3_RL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS3_RL]

//>> GET_[QME_PSCRS3_RL]
static inline fapi2::buffer<uint64_t>& GET_QME_PSCRS3_RL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return i_data.extractToRight<QME_PSCRS3_RL,
           QME_PSCRS3_RL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_PSCRS3_RL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS3_RL]

//>> SET_[QME_PSCRS3_PLS]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS3_PLS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return o_data.insertFromRight<QME_PSCRS3_PLS,
           QME_PSCRS3_PLS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_PSCRS3_PLS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS3_PLS]

//>> SET_[QME_PSCRS3_PLS]
static inline fapi2::buffer<uint64_t>& SET_QME_PSCRS3_PLS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return o_data.insertFromRight<QME_PSCRS3_PLS,
           QME_PSCRS3_PLS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_PSCRS3_PLS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PSCRS3_PLS]

//>> GET_[QME_PSCRS3_PLS]
static inline fapi2::buffer<uint64_t>& GET_QME_PSCRS3_PLS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PSCRS3));
#endif
    return i_data.extractToRight<QME_PSCRS3_PLS,
           QME_PSCRS3_PLS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_PSCRS3_PLS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PSCRS3_PLS]

//>> PREP_[QME_SCSR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_SCSR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_SCSR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_SCSR]

//>> GET_[QME_SCSR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_SCSR(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_SCSR;
#endif
    return fapi2::getScom(i_target, QME_SCSR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_SCSR]

//>> PUT_[QME_SCSR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_SCSR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return fapi2::putScom(i_target, QME_SCSR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_SCSR]

//>> PREP_[QME_SCSR_PPE2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_SCSR_PPE2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_SCSR_PPE2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_SCSR_PPE2]

//>> GET_[QME_SCSR_PPE2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_SCSR_PPE2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_SCSR_PPE2;
#endif
    return fapi2::getScom(i_target, QME_SCSR_PPE2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_SCSR_PPE2]

//>> PUT_[QME_SCSR_PPE2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_SCSR_PPE2(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return fapi2::putScom(i_target, QME_SCSR_PPE2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_SCSR_PPE2]

//>> PREP_[QME_SCSR_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_SCSR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_SCSR_WO_CLEAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_SCSR_WO_CLEAR]

//>> GET_[QME_SCSR_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_SCSR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_SCSR_WO_CLEAR;
#endif
    return fapi2::getScom(i_target, QME_SCSR_WO_CLEAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_SCSR_WO_CLEAR]

//>> PUT_[QME_SCSR_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_SCSR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return fapi2::putScom(i_target, QME_SCSR_WO_CLEAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_SCSR_WO_CLEAR]


//>> SET_[QME_SCSR_ASSERT_PM_BLOCK_INTR]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_ASSERT_PM_BLOCK_INTR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_ASSERT_PM_BLOCK_INTR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_SCSR_ASSERT_PM_BLOCK_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_ASSERT_PM_BLOCK_INTR]

//>> SET_[QME_SCSR_ASSERT_PM_BLOCK_INTR]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_ASSERT_PM_BLOCK_INTR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_ASSERT_PM_BLOCK_INTR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_SCSR_ASSERT_PM_BLOCK_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_ASSERT_PM_BLOCK_INTR]

//>> SET_[QME_SCSR_ASSERT_PM_BLOCK_INTR]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_ASSERT_PM_BLOCK_INTR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.setBit<QME_SCSR_ASSERT_PM_BLOCK_INTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_SCSR_ASSERT_PM_BLOCK_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_ASSERT_PM_BLOCK_INTR]

//>> CLEAR_[QME_SCSR_ASSERT_PM_BLOCK_INTR]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SCSR_ASSERT_PM_BLOCK_INTR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_SCSR_ASSERT_PM_BLOCK_INTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_SCSR_ASSERT_PM_BLOCK_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SCSR_ASSERT_PM_BLOCK_INTR]

//>> GET_[QME_SCSR_ASSERT_PM_BLOCK_INTR]
static inline fapi2::buffer<uint64_t>& GET_QME_SCSR_ASSERT_PM_BLOCK_INTR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_SCSR_ASSERT_PM_BLOCK_INTR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_SCSR_ASSERT_PM_BLOCK_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_ASSERT_PM_BLOCK_INTR]

//>> GET_[QME_SCSR_ASSERT_PM_BLOCK_INTR]
static inline bool GET_QME_SCSR_ASSERT_PM_BLOCK_INTR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.getBit<QME_SCSR_ASSERT_PM_BLOCK_INTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_SCSR_ASSERT_PM_BLOCK_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_ASSERT_PM_BLOCK_INTR]

//>> SET_[QME_SCSR_ASSERT_PM_EXIT]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_ASSERT_PM_EXIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_ASSERT_PM_EXIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_SCSR_ASSERT_PM_EXIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_ASSERT_PM_EXIT]

//>> SET_[QME_SCSR_ASSERT_PM_EXIT]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_ASSERT_PM_EXIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_ASSERT_PM_EXIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_SCSR_ASSERT_PM_EXIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_ASSERT_PM_EXIT]

//>> SET_[QME_SCSR_ASSERT_PM_EXIT]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_ASSERT_PM_EXIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.setBit<QME_SCSR_ASSERT_PM_EXIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_SCSR_ASSERT_PM_EXIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_ASSERT_PM_EXIT]

//>> CLEAR_[QME_SCSR_ASSERT_PM_EXIT]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SCSR_ASSERT_PM_EXIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_SCSR_ASSERT_PM_EXIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_SCSR_ASSERT_PM_EXIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SCSR_ASSERT_PM_EXIT]

//>> GET_[QME_SCSR_ASSERT_PM_EXIT]
static inline fapi2::buffer<uint64_t>& GET_QME_SCSR_ASSERT_PM_EXIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_SCSR_ASSERT_PM_EXIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_SCSR_ASSERT_PM_EXIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_ASSERT_PM_EXIT]

//>> GET_[QME_SCSR_ASSERT_PM_EXIT]
static inline bool GET_QME_SCSR_ASSERT_PM_EXIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.getBit<QME_SCSR_ASSERT_PM_EXIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_SCSR_ASSERT_PM_EXIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_ASSERT_PM_EXIT]

//>> SET_[QME_SCSR_ASSERT_PM_ENTRY_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_ASSERT_PM_ENTRY_LIMIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_ASSERT_PM_ENTRY_LIMIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_SCSR_ASSERT_PM_ENTRY_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_ASSERT_PM_ENTRY_LIMIT]

//>> SET_[QME_SCSR_ASSERT_PM_ENTRY_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_ASSERT_PM_ENTRY_LIMIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_ASSERT_PM_ENTRY_LIMIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_SCSR_ASSERT_PM_ENTRY_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_ASSERT_PM_ENTRY_LIMIT]

//>> SET_[QME_SCSR_ASSERT_PM_ENTRY_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_ASSERT_PM_ENTRY_LIMIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.setBit<QME_SCSR_ASSERT_PM_ENTRY_LIMIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_SCSR_ASSERT_PM_ENTRY_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_ASSERT_PM_ENTRY_LIMIT]

//>> CLEAR_[QME_SCSR_ASSERT_PM_ENTRY_LIMIT]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SCSR_ASSERT_PM_ENTRY_LIMIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_SCSR_ASSERT_PM_ENTRY_LIMIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_SCSR_ASSERT_PM_ENTRY_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SCSR_ASSERT_PM_ENTRY_LIMIT]

//>> GET_[QME_SCSR_ASSERT_PM_ENTRY_LIMIT]
static inline fapi2::buffer<uint64_t>& GET_QME_SCSR_ASSERT_PM_ENTRY_LIMIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_SCSR_ASSERT_PM_ENTRY_LIMIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_SCSR_ASSERT_PM_ENTRY_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_ASSERT_PM_ENTRY_LIMIT]

//>> GET_[QME_SCSR_ASSERT_PM_ENTRY_LIMIT]
static inline bool GET_QME_SCSR_ASSERT_PM_ENTRY_LIMIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.getBit<QME_SCSR_ASSERT_PM_ENTRY_LIMIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_SCSR_ASSERT_PM_ENTRY_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_ASSERT_PM_ENTRY_LIMIT]

//>> SET_[QME_SCSR_PC_SPARE_OUT]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_PC_SPARE_OUT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_PC_SPARE_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_SCSR_PC_SPARE_OUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_PC_SPARE_OUT]

//>> SET_[QME_SCSR_PC_SPARE_OUT]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_PC_SPARE_OUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_PC_SPARE_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_SCSR_PC_SPARE_OUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_PC_SPARE_OUT]

//>> SET_[QME_SCSR_PC_SPARE_OUT]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_PC_SPARE_OUT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.setBit<QME_SCSR_PC_SPARE_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_SCSR_PC_SPARE_OUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_PC_SPARE_OUT]

//>> CLEAR_[QME_SCSR_PC_SPARE_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SCSR_PC_SPARE_OUT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_SCSR_PC_SPARE_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_SCSR_PC_SPARE_OUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SCSR_PC_SPARE_OUT]

//>> GET_[QME_SCSR_PC_SPARE_OUT]
static inline fapi2::buffer<uint64_t>& GET_QME_SCSR_PC_SPARE_OUT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_SCSR_PC_SPARE_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_SCSR_PC_SPARE_OUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_PC_SPARE_OUT]

//>> GET_[QME_SCSR_PC_SPARE_OUT]
static inline bool GET_QME_SCSR_PC_SPARE_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.getBit<QME_SCSR_PC_SPARE_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_SCSR_PC_SPARE_OUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_PC_SPARE_OUT]

//>> SET_[QME_SCSR_HBUS_DISABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_HBUS_DISABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_HBUS_DISABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_SCSR_HBUS_DISABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_HBUS_DISABLE]

//>> SET_[QME_SCSR_HBUS_DISABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_HBUS_DISABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_HBUS_DISABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_SCSR_HBUS_DISABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_HBUS_DISABLE]

//>> SET_[QME_SCSR_HBUS_DISABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_HBUS_DISABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.setBit<QME_SCSR_HBUS_DISABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_SCSR_HBUS_DISABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_HBUS_DISABLE]

//>> CLEAR_[QME_SCSR_HBUS_DISABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SCSR_HBUS_DISABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_SCSR_HBUS_DISABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_SCSR_HBUS_DISABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SCSR_HBUS_DISABLE]

//>> GET_[QME_SCSR_HBUS_DISABLE]
static inline fapi2::buffer<uint64_t>& GET_QME_SCSR_HBUS_DISABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_SCSR_HBUS_DISABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_SCSR_HBUS_DISABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_HBUS_DISABLE]

//>> GET_[QME_SCSR_HBUS_DISABLE]
static inline bool GET_QME_SCSR_HBUS_DISABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.getBit<QME_SCSR_HBUS_DISABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_SCSR_HBUS_DISABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_HBUS_DISABLE]

//>> SET_[QME_SCSR_L2_PURGE_REQ]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_L2_PURGE_REQ(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_L2_PURGE_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_SCSR_L2_PURGE_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_L2_PURGE_REQ]

//>> SET_[QME_SCSR_L2_PURGE_REQ]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_L2_PURGE_REQ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_L2_PURGE_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_SCSR_L2_PURGE_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_L2_PURGE_REQ]

//>> SET_[QME_SCSR_L2_PURGE_REQ]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_L2_PURGE_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.setBit<QME_SCSR_L2_PURGE_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_SCSR_L2_PURGE_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_L2_PURGE_REQ]

//>> CLEAR_[QME_SCSR_L2_PURGE_REQ]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SCSR_L2_PURGE_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_SCSR_L2_PURGE_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_SCSR_L2_PURGE_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SCSR_L2_PURGE_REQ]

//>> GET_[QME_SCSR_L2_PURGE_REQ]
static inline fapi2::buffer<uint64_t>& GET_QME_SCSR_L2_PURGE_REQ(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_SCSR_L2_PURGE_REQ,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_SCSR_L2_PURGE_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_L2_PURGE_REQ]

//>> GET_[QME_SCSR_L2_PURGE_REQ]
static inline bool GET_QME_SCSR_L2_PURGE_REQ(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.getBit<QME_SCSR_L2_PURGE_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_SCSR_L2_PURGE_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_L2_PURGE_REQ]

//>> SET_[QME_SCSR_L2_PURGE_ABORT]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_L2_PURGE_ABORT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_L2_PURGE_ABORT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_SCSR_L2_PURGE_ABORT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_L2_PURGE_ABORT]

//>> SET_[QME_SCSR_L2_PURGE_ABORT]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_L2_PURGE_ABORT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_L2_PURGE_ABORT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_SCSR_L2_PURGE_ABORT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_L2_PURGE_ABORT]

//>> SET_[QME_SCSR_L2_PURGE_ABORT]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_L2_PURGE_ABORT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.setBit<QME_SCSR_L2_PURGE_ABORT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_SCSR_L2_PURGE_ABORT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_L2_PURGE_ABORT]

//>> CLEAR_[QME_SCSR_L2_PURGE_ABORT]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SCSR_L2_PURGE_ABORT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_SCSR_L2_PURGE_ABORT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_SCSR_L2_PURGE_ABORT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SCSR_L2_PURGE_ABORT]

//>> GET_[QME_SCSR_L2_PURGE_ABORT]
static inline fapi2::buffer<uint64_t>& GET_QME_SCSR_L2_PURGE_ABORT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_SCSR_L2_PURGE_ABORT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_SCSR_L2_PURGE_ABORT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_L2_PURGE_ABORT]

//>> GET_[QME_SCSR_L2_PURGE_ABORT]
static inline bool GET_QME_SCSR_L2_PURGE_ABORT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.getBit<QME_SCSR_L2_PURGE_ABORT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_SCSR_L2_PURGE_ABORT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_L2_PURGE_ABORT]

//>> SET_[QME_SCSR_L2RCMD_INTF_QUIESCE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_L2RCMD_INTF_QUIESCE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_L2RCMD_INTF_QUIESCE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_SCSR_L2RCMD_INTF_QUIESCE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_L2RCMD_INTF_QUIESCE]

//>> SET_[QME_SCSR_L2RCMD_INTF_QUIESCE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_L2RCMD_INTF_QUIESCE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_L2RCMD_INTF_QUIESCE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_SCSR_L2RCMD_INTF_QUIESCE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_L2RCMD_INTF_QUIESCE]

//>> SET_[QME_SCSR_L2RCMD_INTF_QUIESCE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_L2RCMD_INTF_QUIESCE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.setBit<QME_SCSR_L2RCMD_INTF_QUIESCE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_SCSR_L2RCMD_INTF_QUIESCE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_L2RCMD_INTF_QUIESCE]

//>> CLEAR_[QME_SCSR_L2RCMD_INTF_QUIESCE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SCSR_L2RCMD_INTF_QUIESCE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_SCSR_L2RCMD_INTF_QUIESCE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_SCSR_L2RCMD_INTF_QUIESCE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SCSR_L2RCMD_INTF_QUIESCE]

//>> GET_[QME_SCSR_L2RCMD_INTF_QUIESCE]
static inline fapi2::buffer<uint64_t>& GET_QME_SCSR_L2RCMD_INTF_QUIESCE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_SCSR_L2RCMD_INTF_QUIESCE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_SCSR_L2RCMD_INTF_QUIESCE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_L2RCMD_INTF_QUIESCE]

//>> GET_[QME_SCSR_L2RCMD_INTF_QUIESCE]
static inline bool GET_QME_SCSR_L2RCMD_INTF_QUIESCE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.getBit<QME_SCSR_L2RCMD_INTF_QUIESCE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_SCSR_L2RCMD_INTF_QUIESCE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_L2RCMD_INTF_QUIESCE]

//>> SET_[QME_SCSR_NCU_TLBIE_QUIESCE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_NCU_TLBIE_QUIESCE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_NCU_TLBIE_QUIESCE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_SCSR_NCU_TLBIE_QUIESCE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_NCU_TLBIE_QUIESCE]

//>> SET_[QME_SCSR_NCU_TLBIE_QUIESCE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_NCU_TLBIE_QUIESCE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_NCU_TLBIE_QUIESCE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_SCSR_NCU_TLBIE_QUIESCE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_NCU_TLBIE_QUIESCE]

//>> SET_[QME_SCSR_NCU_TLBIE_QUIESCE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_NCU_TLBIE_QUIESCE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.setBit<QME_SCSR_NCU_TLBIE_QUIESCE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_SCSR_NCU_TLBIE_QUIESCE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_NCU_TLBIE_QUIESCE]

//>> CLEAR_[QME_SCSR_NCU_TLBIE_QUIESCE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SCSR_NCU_TLBIE_QUIESCE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_SCSR_NCU_TLBIE_QUIESCE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_SCSR_NCU_TLBIE_QUIESCE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SCSR_NCU_TLBIE_QUIESCE]

//>> GET_[QME_SCSR_NCU_TLBIE_QUIESCE]
static inline fapi2::buffer<uint64_t>& GET_QME_SCSR_NCU_TLBIE_QUIESCE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_SCSR_NCU_TLBIE_QUIESCE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_SCSR_NCU_TLBIE_QUIESCE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_NCU_TLBIE_QUIESCE]

//>> GET_[QME_SCSR_NCU_TLBIE_QUIESCE]
static inline bool GET_QME_SCSR_NCU_TLBIE_QUIESCE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.getBit<QME_SCSR_NCU_TLBIE_QUIESCE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_SCSR_NCU_TLBIE_QUIESCE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_NCU_TLBIE_QUIESCE]

//>> SET_[QME_SCSR_NCU_PURGE_REQ]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_NCU_PURGE_REQ(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_NCU_PURGE_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_SCSR_NCU_PURGE_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_NCU_PURGE_REQ]

//>> SET_[QME_SCSR_NCU_PURGE_REQ]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_NCU_PURGE_REQ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_NCU_PURGE_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_SCSR_NCU_PURGE_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_NCU_PURGE_REQ]

//>> SET_[QME_SCSR_NCU_PURGE_REQ]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_NCU_PURGE_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.setBit<QME_SCSR_NCU_PURGE_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_SCSR_NCU_PURGE_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_NCU_PURGE_REQ]

//>> CLEAR_[QME_SCSR_NCU_PURGE_REQ]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SCSR_NCU_PURGE_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_SCSR_NCU_PURGE_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_SCSR_NCU_PURGE_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SCSR_NCU_PURGE_REQ]

//>> GET_[QME_SCSR_NCU_PURGE_REQ]
static inline fapi2::buffer<uint64_t>& GET_QME_SCSR_NCU_PURGE_REQ(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_SCSR_NCU_PURGE_REQ,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_SCSR_NCU_PURGE_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_NCU_PURGE_REQ]

//>> GET_[QME_SCSR_NCU_PURGE_REQ]
static inline bool GET_QME_SCSR_NCU_PURGE_REQ(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.getBit<QME_SCSR_NCU_PURGE_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_SCSR_NCU_PURGE_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_NCU_PURGE_REQ]

//>> SET_[QME_SCSR_NCU_PURGE_ABORT]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_NCU_PURGE_ABORT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_NCU_PURGE_ABORT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_SCSR_NCU_PURGE_ABORT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_NCU_PURGE_ABORT]

//>> SET_[QME_SCSR_NCU_PURGE_ABORT]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_NCU_PURGE_ABORT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_NCU_PURGE_ABORT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_SCSR_NCU_PURGE_ABORT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_NCU_PURGE_ABORT]

//>> SET_[QME_SCSR_NCU_PURGE_ABORT]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_NCU_PURGE_ABORT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.setBit<QME_SCSR_NCU_PURGE_ABORT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_SCSR_NCU_PURGE_ABORT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_NCU_PURGE_ABORT]

//>> CLEAR_[QME_SCSR_NCU_PURGE_ABORT]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SCSR_NCU_PURGE_ABORT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_SCSR_NCU_PURGE_ABORT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_SCSR_NCU_PURGE_ABORT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SCSR_NCU_PURGE_ABORT]

//>> GET_[QME_SCSR_NCU_PURGE_ABORT]
static inline fapi2::buffer<uint64_t>& GET_QME_SCSR_NCU_PURGE_ABORT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_SCSR_NCU_PURGE_ABORT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_SCSR_NCU_PURGE_ABORT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_NCU_PURGE_ABORT]

//>> GET_[QME_SCSR_NCU_PURGE_ABORT]
static inline bool GET_QME_SCSR_NCU_PURGE_ABORT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.getBit<QME_SCSR_NCU_PURGE_ABORT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_SCSR_NCU_PURGE_ABORT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_NCU_PURGE_ABORT]

//>> SET_[QME_SCSR_CHTM_PURGE_REQ]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_CHTM_PURGE_REQ(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_CHTM_PURGE_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_SCSR_CHTM_PURGE_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_CHTM_PURGE_REQ]

//>> SET_[QME_SCSR_CHTM_PURGE_REQ]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_CHTM_PURGE_REQ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_CHTM_PURGE_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_SCSR_CHTM_PURGE_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_CHTM_PURGE_REQ]

//>> SET_[QME_SCSR_CHTM_PURGE_REQ]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_CHTM_PURGE_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.setBit<QME_SCSR_CHTM_PURGE_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_SCSR_CHTM_PURGE_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_CHTM_PURGE_REQ]

//>> CLEAR_[QME_SCSR_CHTM_PURGE_REQ]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SCSR_CHTM_PURGE_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_SCSR_CHTM_PURGE_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_SCSR_CHTM_PURGE_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SCSR_CHTM_PURGE_REQ]

//>> GET_[QME_SCSR_CHTM_PURGE_REQ]
static inline fapi2::buffer<uint64_t>& GET_QME_SCSR_CHTM_PURGE_REQ(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_SCSR_CHTM_PURGE_REQ,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_SCSR_CHTM_PURGE_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_CHTM_PURGE_REQ]

//>> GET_[QME_SCSR_CHTM_PURGE_REQ]
static inline bool GET_QME_SCSR_CHTM_PURGE_REQ(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.getBit<QME_SCSR_CHTM_PURGE_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_SCSR_CHTM_PURGE_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_CHTM_PURGE_REQ]

//>> SET_[QME_SCSR_PB_PURGE_REQ]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_PB_PURGE_REQ(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_PB_PURGE_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_SCSR_PB_PURGE_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_PB_PURGE_REQ]

//>> SET_[QME_SCSR_PB_PURGE_REQ]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_PB_PURGE_REQ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_PB_PURGE_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_SCSR_PB_PURGE_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_PB_PURGE_REQ]

//>> SET_[QME_SCSR_PB_PURGE_REQ]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_PB_PURGE_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.setBit<QME_SCSR_PB_PURGE_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_SCSR_PB_PURGE_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_PB_PURGE_REQ]

//>> CLEAR_[QME_SCSR_PB_PURGE_REQ]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SCSR_PB_PURGE_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_SCSR_PB_PURGE_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_SCSR_PB_PURGE_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SCSR_PB_PURGE_REQ]

//>> GET_[QME_SCSR_PB_PURGE_REQ]
static inline fapi2::buffer<uint64_t>& GET_QME_SCSR_PB_PURGE_REQ(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_SCSR_PB_PURGE_REQ,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_SCSR_PB_PURGE_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_PB_PURGE_REQ]

//>> GET_[QME_SCSR_PB_PURGE_REQ]
static inline bool GET_QME_SCSR_PB_PURGE_REQ(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.getBit<QME_SCSR_PB_PURGE_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_SCSR_PB_PURGE_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_PB_PURGE_REQ]

//>> SET_[QME_SCSR_CORE_QUIESCE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_CORE_QUIESCE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_CORE_QUIESCE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_SCSR_CORE_QUIESCE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_CORE_QUIESCE]

//>> SET_[QME_SCSR_CORE_QUIESCE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_CORE_QUIESCE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_CORE_QUIESCE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_SCSR_CORE_QUIESCE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_CORE_QUIESCE]

//>> SET_[QME_SCSR_CORE_QUIESCE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_CORE_QUIESCE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.setBit<QME_SCSR_CORE_QUIESCE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_SCSR_CORE_QUIESCE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_CORE_QUIESCE]

//>> CLEAR_[QME_SCSR_CORE_QUIESCE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SCSR_CORE_QUIESCE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_SCSR_CORE_QUIESCE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_SCSR_CORE_QUIESCE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SCSR_CORE_QUIESCE]

//>> GET_[QME_SCSR_CORE_QUIESCE]
static inline fapi2::buffer<uint64_t>& GET_QME_SCSR_CORE_QUIESCE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_SCSR_CORE_QUIESCE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_SCSR_CORE_QUIESCE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_CORE_QUIESCE]

//>> GET_[QME_SCSR_CORE_QUIESCE]
static inline bool GET_QME_SCSR_CORE_QUIESCE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.getBit<QME_SCSR_CORE_QUIESCE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_SCSR_CORE_QUIESCE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_CORE_QUIESCE]

//>> SET_[QME_SCSR_SPARE_MODE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_SPARE_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_SPARE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_SCSR_SPARE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_SPARE_MODE]

//>> SET_[QME_SCSR_SPARE_MODE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_SPARE_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_SPARE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_SCSR_SPARE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_SPARE_MODE]

//>> SET_[QME_SCSR_SPARE_MODE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_SPARE_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.setBit<QME_SCSR_SPARE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_SCSR_SPARE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_SPARE_MODE]

//>> CLEAR_[QME_SCSR_SPARE_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SCSR_SPARE_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_SCSR_SPARE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_SCSR_SPARE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SCSR_SPARE_MODE]

//>> GET_[QME_SCSR_SPARE_MODE]
static inline fapi2::buffer<uint64_t>& GET_QME_SCSR_SPARE_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_SCSR_SPARE_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_SCSR_SPARE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_SPARE_MODE]

//>> GET_[QME_SCSR_SPARE_MODE]
static inline bool GET_QME_SCSR_SPARE_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x20));
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.getBit<QME_SCSR_SPARE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_SCSR_SPARE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_SPARE_MODE]

//>> SET_[P10_20_QME_SCSR_REG_WKUP_FILTER_DIS]
static inline fapi2::buffer<uint64_t>& SET_P10_20_QME_SCSR_REG_WKUP_FILTER_DIS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<P10_20_QME_SCSR_REG_WKUP_FILTER_DIS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access P10_20_QME_SCSR_REG_WKUP_FILTER_DIS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_QME_SCSR_REG_WKUP_FILTER_DIS]

//>> SET_[P10_20_QME_SCSR_REG_WKUP_FILTER_DIS]
static inline fapi2::buffer<uint64_t>& SET_P10_20_QME_SCSR_REG_WKUP_FILTER_DIS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<P10_20_QME_SCSR_REG_WKUP_FILTER_DIS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access P10_20_QME_SCSR_REG_WKUP_FILTER_DIS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_QME_SCSR_REG_WKUP_FILTER_DIS]

//>> SET_[P10_20_QME_SCSR_REG_WKUP_FILTER_DIS]
static inline fapi2::buffer<uint64_t>& SET_P10_20_QME_SCSR_REG_WKUP_FILTER_DIS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.setBit<P10_20_QME_SCSR_REG_WKUP_FILTER_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access P10_20_QME_SCSR_REG_WKUP_FILTER_DIS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_QME_SCSR_REG_WKUP_FILTER_DIS]

//>> CLEAR_[P10_20_QME_SCSR_REG_WKUP_FILTER_DIS]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_QME_SCSR_REG_WKUP_FILTER_DIS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.clearBit<P10_20_QME_SCSR_REG_WKUP_FILTER_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access P10_20_QME_SCSR_REG_WKUP_FILTER_DIS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_QME_SCSR_REG_WKUP_FILTER_DIS]

//>> GET_[P10_20_QME_SCSR_REG_WKUP_FILTER_DIS]
static inline fapi2::buffer<uint64_t>& GET_P10_20_QME_SCSR_REG_WKUP_FILTER_DIS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<P10_20_QME_SCSR_REG_WKUP_FILTER_DIS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access P10_20_QME_SCSR_REG_WKUP_FILTER_DIS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_QME_SCSR_REG_WKUP_FILTER_DIS]

//>> GET_[P10_20_QME_SCSR_REG_WKUP_FILTER_DIS]
static inline bool GET_P10_20_QME_SCSR_REG_WKUP_FILTER_DIS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.getBit<P10_20_QME_SCSR_REG_WKUP_FILTER_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access P10_20_QME_SCSR_REG_WKUP_FILTER_DIS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_QME_SCSR_REG_WKUP_FILTER_DIS]

//>> SET_[QME_SCSR_SRESET_REQ]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_SRESET_REQ(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_SRESET_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_SCSR_SRESET_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_SRESET_REQ]

//>> SET_[QME_SCSR_SRESET_REQ]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_SRESET_REQ(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_SRESET_REQ,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_SCSR_SRESET_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_SRESET_REQ]

//>> SET_[QME_SCSR_SRESET_REQ]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_SRESET_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.setBit<QME_SCSR_SRESET_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_SCSR_SRESET_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_SRESET_REQ]

//>> CLEAR_[QME_SCSR_SRESET_REQ]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SCSR_SRESET_REQ(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_SCSR_SRESET_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_SCSR_SRESET_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SCSR_SRESET_REQ]

//>> GET_[QME_SCSR_SRESET_REQ]
static inline fapi2::buffer<uint64_t>& GET_QME_SCSR_SRESET_REQ(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_SCSR_SRESET_REQ,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_SCSR_SRESET_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_SRESET_REQ]

//>> GET_[QME_SCSR_SRESET_REQ]
static inline bool GET_QME_SCSR_SRESET_REQ(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.getBit<QME_SCSR_SRESET_REQ>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_SCSR_SRESET_REQ chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_SRESET_REQ]

//>> SET_[QME_SCSR_ASSERT_SPECIAL_WKUP_DONE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_ASSERT_SPECIAL_WKUP_DONE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_ASSERT_SPECIAL_WKUP_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_SCSR_ASSERT_SPECIAL_WKUP_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_ASSERT_SPECIAL_WKUP_DONE]

//>> SET_[QME_SCSR_ASSERT_SPECIAL_WKUP_DONE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_ASSERT_SPECIAL_WKUP_DONE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_ASSERT_SPECIAL_WKUP_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_SCSR_ASSERT_SPECIAL_WKUP_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_ASSERT_SPECIAL_WKUP_DONE]

//>> SET_[QME_SCSR_ASSERT_SPECIAL_WKUP_DONE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_ASSERT_SPECIAL_WKUP_DONE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.setBit<QME_SCSR_ASSERT_SPECIAL_WKUP_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_SCSR_ASSERT_SPECIAL_WKUP_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_ASSERT_SPECIAL_WKUP_DONE]

//>> CLEAR_[QME_SCSR_ASSERT_SPECIAL_WKUP_DONE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SCSR_ASSERT_SPECIAL_WKUP_DONE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_SCSR_ASSERT_SPECIAL_WKUP_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_SCSR_ASSERT_SPECIAL_WKUP_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SCSR_ASSERT_SPECIAL_WKUP_DONE]

//>> GET_[QME_SCSR_ASSERT_SPECIAL_WKUP_DONE]
static inline fapi2::buffer<uint64_t>& GET_QME_SCSR_ASSERT_SPECIAL_WKUP_DONE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_SCSR_ASSERT_SPECIAL_WKUP_DONE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_SCSR_ASSERT_SPECIAL_WKUP_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_ASSERT_SPECIAL_WKUP_DONE]

//>> GET_[QME_SCSR_ASSERT_SPECIAL_WKUP_DONE]
static inline bool GET_QME_SCSR_ASSERT_SPECIAL_WKUP_DONE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.getBit<QME_SCSR_ASSERT_SPECIAL_WKUP_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_SCSR_ASSERT_SPECIAL_WKUP_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_ASSERT_SPECIAL_WKUP_DONE]

//>> SET_[QME_SCSR_SPARE_OUT]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_SPARE_OUT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_SPARE_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_SCSR_SPARE_OUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_SPARE_OUT]

//>> SET_[QME_SCSR_SPARE_OUT]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_SPARE_OUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_SPARE_OUT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_SCSR_SPARE_OUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_SPARE_OUT]

//>> SET_[QME_SCSR_SPARE_OUT]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_SPARE_OUT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.setBit<QME_SCSR_SPARE_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_SCSR_SPARE_OUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_SPARE_OUT]

//>> CLEAR_[QME_SCSR_SPARE_OUT]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SCSR_SPARE_OUT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_SCSR_SPARE_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_SCSR_SPARE_OUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SCSR_SPARE_OUT]

//>> GET_[QME_SCSR_SPARE_OUT]
static inline fapi2::buffer<uint64_t>& GET_QME_SCSR_SPARE_OUT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_SCSR_SPARE_OUT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_SCSR_SPARE_OUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_SPARE_OUT]

//>> GET_[QME_SCSR_SPARE_OUT]
static inline bool GET_QME_SCSR_SPARE_OUT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.getBit<QME_SCSR_SPARE_OUT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_SCSR_SPARE_OUT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_SPARE_OUT]

//>> SET_[QME_SCSR_CORE_INTR_SAMPLE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_CORE_INTR_SAMPLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_CORE_INTR_SAMPLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_SCSR_CORE_INTR_SAMPLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_CORE_INTR_SAMPLE]

//>> SET_[QME_SCSR_CORE_INTR_SAMPLE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_CORE_INTR_SAMPLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_CORE_INTR_SAMPLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_SCSR_CORE_INTR_SAMPLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_CORE_INTR_SAMPLE]

//>> SET_[QME_SCSR_CORE_INTR_SAMPLE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_CORE_INTR_SAMPLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.setBit<QME_SCSR_CORE_INTR_SAMPLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_SCSR_CORE_INTR_SAMPLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_CORE_INTR_SAMPLE]

//>> CLEAR_[QME_SCSR_CORE_INTR_SAMPLE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SCSR_CORE_INTR_SAMPLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_SCSR_CORE_INTR_SAMPLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_SCSR_CORE_INTR_SAMPLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SCSR_CORE_INTR_SAMPLE]

//>> GET_[QME_SCSR_CORE_INTR_SAMPLE]
static inline fapi2::buffer<uint64_t>& GET_QME_SCSR_CORE_INTR_SAMPLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_SCSR_CORE_INTR_SAMPLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_SCSR_CORE_INTR_SAMPLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_CORE_INTR_SAMPLE]

//>> GET_[QME_SCSR_CORE_INTR_SAMPLE]
static inline bool GET_QME_SCSR_CORE_INTR_SAMPLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.getBit<QME_SCSR_CORE_INTR_SAMPLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_SCSR_CORE_INTR_SAMPLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_CORE_INTR_SAMPLE]

//>> SET_[QME_SCSR_IGNORE_PMCR_RECENT]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_IGNORE_PMCR_RECENT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_IGNORE_PMCR_RECENT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_SCSR_IGNORE_PMCR_RECENT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_IGNORE_PMCR_RECENT]

//>> SET_[QME_SCSR_IGNORE_PMCR_RECENT]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_IGNORE_PMCR_RECENT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_IGNORE_PMCR_RECENT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_SCSR_IGNORE_PMCR_RECENT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_IGNORE_PMCR_RECENT]

//>> SET_[QME_SCSR_IGNORE_PMCR_RECENT]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_IGNORE_PMCR_RECENT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.setBit<QME_SCSR_IGNORE_PMCR_RECENT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_SCSR_IGNORE_PMCR_RECENT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_IGNORE_PMCR_RECENT]

//>> CLEAR_[QME_SCSR_IGNORE_PMCR_RECENT]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SCSR_IGNORE_PMCR_RECENT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_SCSR_IGNORE_PMCR_RECENT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_SCSR_IGNORE_PMCR_RECENT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SCSR_IGNORE_PMCR_RECENT]

//>> GET_[QME_SCSR_IGNORE_PMCR_RECENT]
static inline fapi2::buffer<uint64_t>& GET_QME_SCSR_IGNORE_PMCR_RECENT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_SCSR_IGNORE_PMCR_RECENT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_SCSR_IGNORE_PMCR_RECENT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_IGNORE_PMCR_RECENT]

//>> GET_[QME_SCSR_IGNORE_PMCR_RECENT]
static inline bool GET_QME_SCSR_IGNORE_PMCR_RECENT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.getBit<QME_SCSR_IGNORE_PMCR_RECENT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_SCSR_IGNORE_PMCR_RECENT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_IGNORE_PMCR_RECENT]

//>> SET_[QME_SCSR_AUTO_SPECIAL_WAKEUP_DISABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_AUTO_SPECIAL_WAKEUP_DISABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_AUTO_SPECIAL_WAKEUP_DISABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_SCSR_AUTO_SPECIAL_WAKEUP_DISABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_AUTO_SPECIAL_WAKEUP_DISABLE]

//>> SET_[QME_SCSR_AUTO_SPECIAL_WAKEUP_DISABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_AUTO_SPECIAL_WAKEUP_DISABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_AUTO_SPECIAL_WAKEUP_DISABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_SCSR_AUTO_SPECIAL_WAKEUP_DISABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_AUTO_SPECIAL_WAKEUP_DISABLE]

//>> SET_[QME_SCSR_AUTO_SPECIAL_WAKEUP_DISABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_AUTO_SPECIAL_WAKEUP_DISABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.setBit<QME_SCSR_AUTO_SPECIAL_WAKEUP_DISABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_SCSR_AUTO_SPECIAL_WAKEUP_DISABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_AUTO_SPECIAL_WAKEUP_DISABLE]

//>> CLEAR_[QME_SCSR_AUTO_SPECIAL_WAKEUP_DISABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SCSR_AUTO_SPECIAL_WAKEUP_DISABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_SCSR_AUTO_SPECIAL_WAKEUP_DISABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_SCSR_AUTO_SPECIAL_WAKEUP_DISABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SCSR_AUTO_SPECIAL_WAKEUP_DISABLE]

//>> GET_[QME_SCSR_AUTO_SPECIAL_WAKEUP_DISABLE]
static inline fapi2::buffer<uint64_t>& GET_QME_SCSR_AUTO_SPECIAL_WAKEUP_DISABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_SCSR_AUTO_SPECIAL_WAKEUP_DISABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_SCSR_AUTO_SPECIAL_WAKEUP_DISABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_AUTO_SPECIAL_WAKEUP_DISABLE]

//>> GET_[QME_SCSR_AUTO_SPECIAL_WAKEUP_DISABLE]
static inline bool GET_QME_SCSR_AUTO_SPECIAL_WAKEUP_DISABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.getBit<QME_SCSR_AUTO_SPECIAL_WAKEUP_DISABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_SCSR_AUTO_SPECIAL_WAKEUP_DISABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_AUTO_SPECIAL_WAKEUP_DISABLE]

//>> SET_[QME_SCSR_HALTED_STOP_OVERRIDE_DISABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_HALTED_STOP_OVERRIDE_DISABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_HALTED_STOP_OVERRIDE_DISABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_SCSR_HALTED_STOP_OVERRIDE_DISABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_HALTED_STOP_OVERRIDE_DISABLE]

//>> SET_[QME_SCSR_HALTED_STOP_OVERRIDE_DISABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_HALTED_STOP_OVERRIDE_DISABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_HALTED_STOP_OVERRIDE_DISABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_SCSR_HALTED_STOP_OVERRIDE_DISABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_HALTED_STOP_OVERRIDE_DISABLE]

//>> SET_[QME_SCSR_HALTED_STOP_OVERRIDE_DISABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_HALTED_STOP_OVERRIDE_DISABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.setBit<QME_SCSR_HALTED_STOP_OVERRIDE_DISABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_SCSR_HALTED_STOP_OVERRIDE_DISABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_HALTED_STOP_OVERRIDE_DISABLE]

//>> CLEAR_[QME_SCSR_HALTED_STOP_OVERRIDE_DISABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SCSR_HALTED_STOP_OVERRIDE_DISABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_SCSR_HALTED_STOP_OVERRIDE_DISABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_SCSR_HALTED_STOP_OVERRIDE_DISABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SCSR_HALTED_STOP_OVERRIDE_DISABLE]

//>> GET_[QME_SCSR_HALTED_STOP_OVERRIDE_DISABLE]
static inline fapi2::buffer<uint64_t>& GET_QME_SCSR_HALTED_STOP_OVERRIDE_DISABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_SCSR_HALTED_STOP_OVERRIDE_DISABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_SCSR_HALTED_STOP_OVERRIDE_DISABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_HALTED_STOP_OVERRIDE_DISABLE]

//>> GET_[QME_SCSR_HALTED_STOP_OVERRIDE_DISABLE]
static inline bool GET_QME_SCSR_HALTED_STOP_OVERRIDE_DISABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.getBit<QME_SCSR_HALTED_STOP_OVERRIDE_DISABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_SCSR_HALTED_STOP_OVERRIDE_DISABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_HALTED_STOP_OVERRIDE_DISABLE]

//>> SET_[QME_SCSR_AUTO_PMSR_SHIFT_DIS]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_AUTO_PMSR_SHIFT_DIS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_AUTO_PMSR_SHIFT_DIS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_SCSR_AUTO_PMSR_SHIFT_DIS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_AUTO_PMSR_SHIFT_DIS]

//>> SET_[QME_SCSR_AUTO_PMSR_SHIFT_DIS]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_AUTO_PMSR_SHIFT_DIS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_AUTO_PMSR_SHIFT_DIS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_SCSR_AUTO_PMSR_SHIFT_DIS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_AUTO_PMSR_SHIFT_DIS]

//>> SET_[QME_SCSR_AUTO_PMSR_SHIFT_DIS]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_AUTO_PMSR_SHIFT_DIS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.setBit<QME_SCSR_AUTO_PMSR_SHIFT_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_SCSR_AUTO_PMSR_SHIFT_DIS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_AUTO_PMSR_SHIFT_DIS]

//>> CLEAR_[QME_SCSR_AUTO_PMSR_SHIFT_DIS]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SCSR_AUTO_PMSR_SHIFT_DIS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_SCSR_AUTO_PMSR_SHIFT_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_SCSR_AUTO_PMSR_SHIFT_DIS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SCSR_AUTO_PMSR_SHIFT_DIS]

//>> GET_[QME_SCSR_AUTO_PMSR_SHIFT_DIS]
static inline fapi2::buffer<uint64_t>& GET_QME_SCSR_AUTO_PMSR_SHIFT_DIS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_SCSR_AUTO_PMSR_SHIFT_DIS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_SCSR_AUTO_PMSR_SHIFT_DIS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_AUTO_PMSR_SHIFT_DIS]

//>> GET_[QME_SCSR_AUTO_PMSR_SHIFT_DIS]
static inline bool GET_QME_SCSR_AUTO_PMSR_SHIFT_DIS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.getBit<QME_SCSR_AUTO_PMSR_SHIFT_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_SCSR_AUTO_PMSR_SHIFT_DIS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_AUTO_PMSR_SHIFT_DIS]

//>> SET_[QME_SCSR_REFRESH_PMSR]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_REFRESH_PMSR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_REFRESH_PMSR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_SCSR_REFRESH_PMSR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_REFRESH_PMSR]

//>> SET_[QME_SCSR_REFRESH_PMSR]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_REFRESH_PMSR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_REFRESH_PMSR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_SCSR_REFRESH_PMSR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_REFRESH_PMSR]

//>> SET_[QME_SCSR_REFRESH_PMSR]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_REFRESH_PMSR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.setBit<QME_SCSR_REFRESH_PMSR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_SCSR_REFRESH_PMSR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_REFRESH_PMSR]

//>> CLEAR_[QME_SCSR_REFRESH_PMSR]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SCSR_REFRESH_PMSR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_SCSR_REFRESH_PMSR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_SCSR_REFRESH_PMSR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SCSR_REFRESH_PMSR]

//>> GET_[QME_SCSR_REFRESH_PMSR]
static inline fapi2::buffer<uint64_t>& GET_QME_SCSR_REFRESH_PMSR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_SCSR_REFRESH_PMSR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_SCSR_REFRESH_PMSR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_REFRESH_PMSR]

//>> GET_[QME_SCSR_REFRESH_PMSR]
static inline bool GET_QME_SCSR_REFRESH_PMSR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.getBit<QME_SCSR_REFRESH_PMSR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_SCSR_REFRESH_PMSR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_REFRESH_PMSR]

//>> SET_[QME_SCSR_BLOCK_INTR_OUTPUTS]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_BLOCK_INTR_OUTPUTS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_BLOCK_INTR_OUTPUTS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_SCSR_BLOCK_INTR_OUTPUTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_BLOCK_INTR_OUTPUTS]

//>> SET_[QME_SCSR_BLOCK_INTR_OUTPUTS]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_BLOCK_INTR_OUTPUTS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_BLOCK_INTR_OUTPUTS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_SCSR_BLOCK_INTR_OUTPUTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_BLOCK_INTR_OUTPUTS]

//>> SET_[QME_SCSR_BLOCK_INTR_OUTPUTS]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_BLOCK_INTR_OUTPUTS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.setBit<QME_SCSR_BLOCK_INTR_OUTPUTS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_SCSR_BLOCK_INTR_OUTPUTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_BLOCK_INTR_OUTPUTS]

//>> CLEAR_[QME_SCSR_BLOCK_INTR_OUTPUTS]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SCSR_BLOCK_INTR_OUTPUTS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_SCSR_BLOCK_INTR_OUTPUTS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_SCSR_BLOCK_INTR_OUTPUTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SCSR_BLOCK_INTR_OUTPUTS]

//>> GET_[QME_SCSR_BLOCK_INTR_OUTPUTS]
static inline fapi2::buffer<uint64_t>& GET_QME_SCSR_BLOCK_INTR_OUTPUTS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_SCSR_BLOCK_INTR_OUTPUTS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_SCSR_BLOCK_INTR_OUTPUTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_BLOCK_INTR_OUTPUTS]

//>> GET_[QME_SCSR_BLOCK_INTR_OUTPUTS]
static inline bool GET_QME_SCSR_BLOCK_INTR_OUTPUTS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.getBit<QME_SCSR_BLOCK_INTR_OUTPUTS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_SCSR_BLOCK_INTR_OUTPUTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_BLOCK_INTR_OUTPUTS]

//>> SET_[QME_SCSR_BLOCK_INTR_INPUTS]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_BLOCK_INTR_INPUTS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_BLOCK_INTR_INPUTS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_SCSR_BLOCK_INTR_INPUTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_BLOCK_INTR_INPUTS]

//>> SET_[QME_SCSR_BLOCK_INTR_INPUTS]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_BLOCK_INTR_INPUTS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_BLOCK_INTR_INPUTS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_SCSR_BLOCK_INTR_INPUTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_BLOCK_INTR_INPUTS]

//>> SET_[QME_SCSR_BLOCK_INTR_INPUTS]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_BLOCK_INTR_INPUTS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.setBit<QME_SCSR_BLOCK_INTR_INPUTS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_SCSR_BLOCK_INTR_INPUTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_BLOCK_INTR_INPUTS]

//>> CLEAR_[QME_SCSR_BLOCK_INTR_INPUTS]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SCSR_BLOCK_INTR_INPUTS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_SCSR_BLOCK_INTR_INPUTS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_SCSR_BLOCK_INTR_INPUTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SCSR_BLOCK_INTR_INPUTS]

//>> GET_[QME_SCSR_BLOCK_INTR_INPUTS]
static inline fapi2::buffer<uint64_t>& GET_QME_SCSR_BLOCK_INTR_INPUTS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_SCSR_BLOCK_INTR_INPUTS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_SCSR_BLOCK_INTR_INPUTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_BLOCK_INTR_INPUTS]

//>> GET_[QME_SCSR_BLOCK_INTR_INPUTS]
static inline bool GET_QME_SCSR_BLOCK_INTR_INPUTS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.getBit<QME_SCSR_BLOCK_INTR_INPUTS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_SCSR_BLOCK_INTR_INPUTS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_BLOCK_INTR_INPUTS]

//>> SET_[QME_SCSR_ENABLE_PECE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_ENABLE_PECE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_ENABLE_PECE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_SCSR_ENABLE_PECE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_ENABLE_PECE]

//>> SET_[QME_SCSR_ENABLE_PECE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_ENABLE_PECE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_ENABLE_PECE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_SCSR_ENABLE_PECE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_ENABLE_PECE]

//>> SET_[QME_SCSR_ENABLE_PECE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_ENABLE_PECE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.setBit<QME_SCSR_ENABLE_PECE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_SCSR_ENABLE_PECE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_ENABLE_PECE]

//>> CLEAR_[QME_SCSR_ENABLE_PECE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SCSR_ENABLE_PECE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_SCSR_ENABLE_PECE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_SCSR_ENABLE_PECE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SCSR_ENABLE_PECE]

//>> GET_[QME_SCSR_ENABLE_PECE]
static inline fapi2::buffer<uint64_t>& GET_QME_SCSR_ENABLE_PECE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_SCSR_ENABLE_PECE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_SCSR_ENABLE_PECE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_ENABLE_PECE]

//>> GET_[QME_SCSR_ENABLE_PECE]
static inline bool GET_QME_SCSR_ENABLE_PECE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.getBit<QME_SCSR_ENABLE_PECE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_SCSR_ENABLE_PECE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_ENABLE_PECE]

//>> SET_[QME_SCSR_CTFS_WKUP_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_CTFS_WKUP_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_CTFS_WKUP_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_SCSR_CTFS_WKUP_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_CTFS_WKUP_ENABLE]

//>> SET_[QME_SCSR_CTFS_WKUP_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_CTFS_WKUP_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_CTFS_WKUP_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_SCSR_CTFS_WKUP_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_CTFS_WKUP_ENABLE]

//>> SET_[QME_SCSR_CTFS_WKUP_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_CTFS_WKUP_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.setBit<QME_SCSR_CTFS_WKUP_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_SCSR_CTFS_WKUP_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_CTFS_WKUP_ENABLE]

//>> CLEAR_[QME_SCSR_CTFS_WKUP_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SCSR_CTFS_WKUP_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_SCSR_CTFS_WKUP_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_SCSR_CTFS_WKUP_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SCSR_CTFS_WKUP_ENABLE]

//>> GET_[QME_SCSR_CTFS_WKUP_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_QME_SCSR_CTFS_WKUP_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_SCSR_CTFS_WKUP_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_SCSR_CTFS_WKUP_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_CTFS_WKUP_ENABLE]

//>> GET_[QME_SCSR_CTFS_WKUP_ENABLE]
static inline bool GET_QME_SCSR_CTFS_WKUP_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.getBit<QME_SCSR_CTFS_WKUP_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_SCSR_CTFS_WKUP_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_CTFS_WKUP_ENABLE]

//>> SET_[P10_20_QME_SCSR_PC_COPY_FUSED_SPRS]
static inline fapi2::buffer<uint64_t>& SET_P10_20_QME_SCSR_PC_COPY_FUSED_SPRS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<P10_20_QME_SCSR_PC_COPY_FUSED_SPRS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access P10_20_QME_SCSR_PC_COPY_FUSED_SPRS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_QME_SCSR_PC_COPY_FUSED_SPRS]

//>> SET_[P10_20_QME_SCSR_PC_COPY_FUSED_SPRS]
static inline fapi2::buffer<uint64_t>& SET_P10_20_QME_SCSR_PC_COPY_FUSED_SPRS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<P10_20_QME_SCSR_PC_COPY_FUSED_SPRS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access P10_20_QME_SCSR_PC_COPY_FUSED_SPRS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_QME_SCSR_PC_COPY_FUSED_SPRS]

//>> SET_[P10_20_QME_SCSR_PC_COPY_FUSED_SPRS]
static inline fapi2::buffer<uint64_t>& SET_P10_20_QME_SCSR_PC_COPY_FUSED_SPRS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.setBit<P10_20_QME_SCSR_PC_COPY_FUSED_SPRS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access P10_20_QME_SCSR_PC_COPY_FUSED_SPRS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_QME_SCSR_PC_COPY_FUSED_SPRS]

//>> CLEAR_[P10_20_QME_SCSR_PC_COPY_FUSED_SPRS]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_QME_SCSR_PC_COPY_FUSED_SPRS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.clearBit<P10_20_QME_SCSR_PC_COPY_FUSED_SPRS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access P10_20_QME_SCSR_PC_COPY_FUSED_SPRS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_QME_SCSR_PC_COPY_FUSED_SPRS]

//>> GET_[P10_20_QME_SCSR_PC_COPY_FUSED_SPRS]
static inline fapi2::buffer<uint64_t>& GET_P10_20_QME_SCSR_PC_COPY_FUSED_SPRS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<P10_20_QME_SCSR_PC_COPY_FUSED_SPRS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access P10_20_QME_SCSR_PC_COPY_FUSED_SPRS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_QME_SCSR_PC_COPY_FUSED_SPRS]

//>> GET_[P10_20_QME_SCSR_PC_COPY_FUSED_SPRS]
static inline bool GET_P10_20_QME_SCSR_PC_COPY_FUSED_SPRS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.getBit<P10_20_QME_SCSR_PC_COPY_FUSED_SPRS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access P10_20_QME_SCSR_PC_COPY_FUSED_SPRS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_QME_SCSR_PC_COPY_FUSED_SPRS]

//>> SET_[P10_20_QME_SCSR_SINGLE_LPAR_MODE]
static inline fapi2::buffer<uint64_t>& SET_P10_20_QME_SCSR_SINGLE_LPAR_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<P10_20_QME_SCSR_SINGLE_LPAR_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access P10_20_QME_SCSR_SINGLE_LPAR_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_QME_SCSR_SINGLE_LPAR_MODE]

//>> SET_[P10_20_QME_SCSR_SINGLE_LPAR_MODE]
static inline fapi2::buffer<uint64_t>& SET_P10_20_QME_SCSR_SINGLE_LPAR_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<P10_20_QME_SCSR_SINGLE_LPAR_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access P10_20_QME_SCSR_SINGLE_LPAR_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_QME_SCSR_SINGLE_LPAR_MODE]

//>> SET_[P10_20_QME_SCSR_SINGLE_LPAR_MODE]
static inline fapi2::buffer<uint64_t>& SET_P10_20_QME_SCSR_SINGLE_LPAR_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.setBit<P10_20_QME_SCSR_SINGLE_LPAR_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access P10_20_QME_SCSR_SINGLE_LPAR_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_QME_SCSR_SINGLE_LPAR_MODE]

//>> CLEAR_[P10_20_QME_SCSR_SINGLE_LPAR_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_QME_SCSR_SINGLE_LPAR_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.clearBit<P10_20_QME_SCSR_SINGLE_LPAR_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access P10_20_QME_SCSR_SINGLE_LPAR_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_QME_SCSR_SINGLE_LPAR_MODE]

//>> GET_[P10_20_QME_SCSR_SINGLE_LPAR_MODE]
static inline fapi2::buffer<uint64_t>& GET_P10_20_QME_SCSR_SINGLE_LPAR_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<P10_20_QME_SCSR_SINGLE_LPAR_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access P10_20_QME_SCSR_SINGLE_LPAR_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_QME_SCSR_SINGLE_LPAR_MODE]

//>> GET_[P10_20_QME_SCSR_SINGLE_LPAR_MODE]
static inline bool GET_P10_20_QME_SCSR_SINGLE_LPAR_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.getBit<P10_20_QME_SCSR_SINGLE_LPAR_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access P10_20_QME_SCSR_SINGLE_LPAR_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_QME_SCSR_SINGLE_LPAR_MODE]

//>> SET_[QME_SCSR_PM_BLOCK_INTR]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_PM_BLOCK_INTR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_PM_BLOCK_INTR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_SCSR_PM_BLOCK_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_PM_BLOCK_INTR]

//>> SET_[QME_SCSR_PM_BLOCK_INTR]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_PM_BLOCK_INTR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_PM_BLOCK_INTR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_SCSR_PM_BLOCK_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_PM_BLOCK_INTR]

//>> SET_[QME_SCSR_PM_BLOCK_INTR]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_PM_BLOCK_INTR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.setBit<QME_SCSR_PM_BLOCK_INTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_SCSR_PM_BLOCK_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_PM_BLOCK_INTR]

//>> CLEAR_[QME_SCSR_PM_BLOCK_INTR]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SCSR_PM_BLOCK_INTR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_SCSR_PM_BLOCK_INTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_SCSR_PM_BLOCK_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SCSR_PM_BLOCK_INTR]

//>> GET_[QME_SCSR_PM_BLOCK_INTR]
static inline fapi2::buffer<uint64_t>& GET_QME_SCSR_PM_BLOCK_INTR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_SCSR_PM_BLOCK_INTR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_SCSR_PM_BLOCK_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_PM_BLOCK_INTR]

//>> GET_[QME_SCSR_PM_BLOCK_INTR]
static inline bool GET_QME_SCSR_PM_BLOCK_INTR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.getBit<QME_SCSR_PM_BLOCK_INTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_SCSR_PM_BLOCK_INTR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_PM_BLOCK_INTR]

//>> SET_[QME_SCSR_PM_EXIT]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_PM_EXIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_PM_EXIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_SCSR_PM_EXIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_PM_EXIT]

//>> SET_[QME_SCSR_PM_EXIT]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_PM_EXIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_PM_EXIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_SCSR_PM_EXIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_PM_EXIT]

//>> SET_[QME_SCSR_PM_EXIT]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_PM_EXIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.setBit<QME_SCSR_PM_EXIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_SCSR_PM_EXIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_PM_EXIT]

//>> CLEAR_[QME_SCSR_PM_EXIT]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SCSR_PM_EXIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_SCSR_PM_EXIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_SCSR_PM_EXIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SCSR_PM_EXIT]

//>> GET_[QME_SCSR_PM_EXIT]
static inline fapi2::buffer<uint64_t>& GET_QME_SCSR_PM_EXIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_SCSR_PM_EXIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_SCSR_PM_EXIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_PM_EXIT]

//>> GET_[QME_SCSR_PM_EXIT]
static inline bool GET_QME_SCSR_PM_EXIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.getBit<QME_SCSR_PM_EXIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_SCSR_PM_EXIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_PM_EXIT]

//>> SET_[QME_SCSR_PM_ENTRY_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_PM_ENTRY_LIMIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_PM_ENTRY_LIMIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_SCSR_PM_ENTRY_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_PM_ENTRY_LIMIT]

//>> SET_[QME_SCSR_PM_ENTRY_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_PM_ENTRY_LIMIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_PM_ENTRY_LIMIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_SCSR_PM_ENTRY_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_PM_ENTRY_LIMIT]

//>> SET_[QME_SCSR_PM_ENTRY_LIMIT]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_PM_ENTRY_LIMIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.setBit<QME_SCSR_PM_ENTRY_LIMIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_SCSR_PM_ENTRY_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_PM_ENTRY_LIMIT]

//>> CLEAR_[QME_SCSR_PM_ENTRY_LIMIT]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SCSR_PM_ENTRY_LIMIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_SCSR_PM_ENTRY_LIMIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_SCSR_PM_ENTRY_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SCSR_PM_ENTRY_LIMIT]

//>> GET_[QME_SCSR_PM_ENTRY_LIMIT]
static inline fapi2::buffer<uint64_t>& GET_QME_SCSR_PM_ENTRY_LIMIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_SCSR_PM_ENTRY_LIMIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_SCSR_PM_ENTRY_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_PM_ENTRY_LIMIT]

//>> GET_[QME_SCSR_PM_ENTRY_LIMIT]
static inline bool GET_QME_SCSR_PM_ENTRY_LIMIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.getBit<QME_SCSR_PM_ENTRY_LIMIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_SCSR_PM_ENTRY_LIMIT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_PM_ENTRY_LIMIT]

//>> SET_[QME_SCSR_PC_SPARE_IN]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_PC_SPARE_IN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_PC_SPARE_IN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_SCSR_PC_SPARE_IN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_PC_SPARE_IN]

//>> SET_[QME_SCSR_PC_SPARE_IN]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_PC_SPARE_IN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_PC_SPARE_IN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_SCSR_PC_SPARE_IN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_PC_SPARE_IN]

//>> SET_[QME_SCSR_PC_SPARE_IN]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_PC_SPARE_IN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.setBit<QME_SCSR_PC_SPARE_IN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_SCSR_PC_SPARE_IN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_PC_SPARE_IN]

//>> CLEAR_[QME_SCSR_PC_SPARE_IN]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SCSR_PC_SPARE_IN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_SCSR_PC_SPARE_IN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_SCSR_PC_SPARE_IN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SCSR_PC_SPARE_IN]

//>> GET_[QME_SCSR_PC_SPARE_IN]
static inline fapi2::buffer<uint64_t>& GET_QME_SCSR_PC_SPARE_IN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_SCSR_PC_SPARE_IN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_SCSR_PC_SPARE_IN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_PC_SPARE_IN]

//>> GET_[QME_SCSR_PC_SPARE_IN]
static inline bool GET_QME_SCSR_PC_SPARE_IN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.getBit<QME_SCSR_PC_SPARE_IN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_SCSR_PC_SPARE_IN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_PC_SPARE_IN]

//>> SET_[QME_SCSR_HBUS_INACTIVE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_HBUS_INACTIVE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_HBUS_INACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_SCSR_HBUS_INACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_HBUS_INACTIVE]

//>> SET_[QME_SCSR_HBUS_INACTIVE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_HBUS_INACTIVE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_HBUS_INACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_SCSR_HBUS_INACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_HBUS_INACTIVE]

//>> SET_[QME_SCSR_HBUS_INACTIVE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_HBUS_INACTIVE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.setBit<QME_SCSR_HBUS_INACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_SCSR_HBUS_INACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_HBUS_INACTIVE]

//>> CLEAR_[QME_SCSR_HBUS_INACTIVE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SCSR_HBUS_INACTIVE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_SCSR_HBUS_INACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_SCSR_HBUS_INACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SCSR_HBUS_INACTIVE]

//>> GET_[QME_SCSR_HBUS_INACTIVE]
static inline fapi2::buffer<uint64_t>& GET_QME_SCSR_HBUS_INACTIVE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_SCSR_HBUS_INACTIVE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_SCSR_HBUS_INACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_HBUS_INACTIVE]

//>> GET_[QME_SCSR_HBUS_INACTIVE]
static inline bool GET_QME_SCSR_HBUS_INACTIVE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.getBit<QME_SCSR_HBUS_INACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_SCSR_HBUS_INACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_HBUS_INACTIVE]

//>> SET_[QME_SCSR_L2_PURGE_DONE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_L2_PURGE_DONE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_L2_PURGE_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_SCSR_L2_PURGE_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_L2_PURGE_DONE]

//>> SET_[QME_SCSR_L2_PURGE_DONE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_L2_PURGE_DONE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_L2_PURGE_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_SCSR_L2_PURGE_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_L2_PURGE_DONE]

//>> SET_[QME_SCSR_L2_PURGE_DONE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_L2_PURGE_DONE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.setBit<QME_SCSR_L2_PURGE_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_SCSR_L2_PURGE_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_L2_PURGE_DONE]

//>> CLEAR_[QME_SCSR_L2_PURGE_DONE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SCSR_L2_PURGE_DONE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_SCSR_L2_PURGE_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_SCSR_L2_PURGE_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SCSR_L2_PURGE_DONE]

//>> GET_[QME_SCSR_L2_PURGE_DONE]
static inline fapi2::buffer<uint64_t>& GET_QME_SCSR_L2_PURGE_DONE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_SCSR_L2_PURGE_DONE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_SCSR_L2_PURGE_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_L2_PURGE_DONE]

//>> GET_[QME_SCSR_L2_PURGE_DONE]
static inline bool GET_QME_SCSR_L2_PURGE_DONE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.getBit<QME_SCSR_L2_PURGE_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_SCSR_L2_PURGE_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_L2_PURGE_DONE]

//>> SET_[QME_SCSR_NCU_PURGE_DONE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_NCU_PURGE_DONE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_NCU_PURGE_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_SCSR_NCU_PURGE_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_NCU_PURGE_DONE]

//>> SET_[QME_SCSR_NCU_PURGE_DONE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_NCU_PURGE_DONE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_NCU_PURGE_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_SCSR_NCU_PURGE_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_NCU_PURGE_DONE]

//>> SET_[QME_SCSR_NCU_PURGE_DONE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_NCU_PURGE_DONE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.setBit<QME_SCSR_NCU_PURGE_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_SCSR_NCU_PURGE_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_NCU_PURGE_DONE]

//>> CLEAR_[QME_SCSR_NCU_PURGE_DONE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SCSR_NCU_PURGE_DONE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_SCSR_NCU_PURGE_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_SCSR_NCU_PURGE_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SCSR_NCU_PURGE_DONE]

//>> GET_[QME_SCSR_NCU_PURGE_DONE]
static inline fapi2::buffer<uint64_t>& GET_QME_SCSR_NCU_PURGE_DONE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_SCSR_NCU_PURGE_DONE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_SCSR_NCU_PURGE_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_NCU_PURGE_DONE]

//>> GET_[QME_SCSR_NCU_PURGE_DONE]
static inline bool GET_QME_SCSR_NCU_PURGE_DONE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.getBit<QME_SCSR_NCU_PURGE_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_SCSR_NCU_PURGE_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_NCU_PURGE_DONE]

//>> SET_[P10_20_QME_SCSR_PC_FUSED_COPY_DONE]
static inline fapi2::buffer<uint64_t>& SET_P10_20_QME_SCSR_PC_FUSED_COPY_DONE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<P10_20_QME_SCSR_PC_FUSED_COPY_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access P10_20_QME_SCSR_PC_FUSED_COPY_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_QME_SCSR_PC_FUSED_COPY_DONE]

//>> SET_[P10_20_QME_SCSR_PC_FUSED_COPY_DONE]
static inline fapi2::buffer<uint64_t>& SET_P10_20_QME_SCSR_PC_FUSED_COPY_DONE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<P10_20_QME_SCSR_PC_FUSED_COPY_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access P10_20_QME_SCSR_PC_FUSED_COPY_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_QME_SCSR_PC_FUSED_COPY_DONE]

//>> SET_[P10_20_QME_SCSR_PC_FUSED_COPY_DONE]
static inline fapi2::buffer<uint64_t>& SET_P10_20_QME_SCSR_PC_FUSED_COPY_DONE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.setBit<P10_20_QME_SCSR_PC_FUSED_COPY_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access P10_20_QME_SCSR_PC_FUSED_COPY_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[P10_20_QME_SCSR_PC_FUSED_COPY_DONE]

//>> CLEAR_[P10_20_QME_SCSR_PC_FUSED_COPY_DONE]
static inline fapi2::buffer<uint64_t>& CLEAR_P10_20_QME_SCSR_PC_FUSED_COPY_DONE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.clearBit<P10_20_QME_SCSR_PC_FUSED_COPY_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access P10_20_QME_SCSR_PC_FUSED_COPY_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[P10_20_QME_SCSR_PC_FUSED_COPY_DONE]

//>> GET_[P10_20_QME_SCSR_PC_FUSED_COPY_DONE]
static inline fapi2::buffer<uint64_t>& GET_P10_20_QME_SCSR_PC_FUSED_COPY_DONE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<P10_20_QME_SCSR_PC_FUSED_COPY_DONE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access P10_20_QME_SCSR_PC_FUSED_COPY_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_QME_SCSR_PC_FUSED_COPY_DONE]

//>> GET_[P10_20_QME_SCSR_PC_FUSED_COPY_DONE]
static inline bool GET_P10_20_QME_SCSR_PC_FUSED_COPY_DONE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::failOn(0xa, 0x10));
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.getBit<P10_20_QME_SCSR_PC_FUSED_COPY_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access P10_20_QME_SCSR_PC_FUSED_COPY_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[P10_20_QME_SCSR_PC_FUSED_COPY_DONE]

//>> SET_[QME_SCSR_CHTM_PURGE_DONE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_CHTM_PURGE_DONE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_CHTM_PURGE_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_SCSR_CHTM_PURGE_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_CHTM_PURGE_DONE]

//>> SET_[QME_SCSR_CHTM_PURGE_DONE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_CHTM_PURGE_DONE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_CHTM_PURGE_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_SCSR_CHTM_PURGE_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_CHTM_PURGE_DONE]

//>> SET_[QME_SCSR_CHTM_PURGE_DONE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_CHTM_PURGE_DONE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.setBit<QME_SCSR_CHTM_PURGE_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_SCSR_CHTM_PURGE_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_CHTM_PURGE_DONE]

//>> CLEAR_[QME_SCSR_CHTM_PURGE_DONE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SCSR_CHTM_PURGE_DONE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_SCSR_CHTM_PURGE_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_SCSR_CHTM_PURGE_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SCSR_CHTM_PURGE_DONE]

//>> GET_[QME_SCSR_CHTM_PURGE_DONE]
static inline fapi2::buffer<uint64_t>& GET_QME_SCSR_CHTM_PURGE_DONE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_SCSR_CHTM_PURGE_DONE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_SCSR_CHTM_PURGE_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_CHTM_PURGE_DONE]

//>> GET_[QME_SCSR_CHTM_PURGE_DONE]
static inline bool GET_QME_SCSR_CHTM_PURGE_DONE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.getBit<QME_SCSR_CHTM_PURGE_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_SCSR_CHTM_PURGE_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_CHTM_PURGE_DONE]

//>> SET_[QME_SCSR_PB_PURGE_DONE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_PB_PURGE_DONE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_PB_PURGE_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_SCSR_PB_PURGE_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_PB_PURGE_DONE]

//>> SET_[QME_SCSR_PB_PURGE_DONE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_PB_PURGE_DONE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_PB_PURGE_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_SCSR_PB_PURGE_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_PB_PURGE_DONE]

//>> SET_[QME_SCSR_PB_PURGE_DONE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_PB_PURGE_DONE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.setBit<QME_SCSR_PB_PURGE_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_SCSR_PB_PURGE_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_PB_PURGE_DONE]

//>> CLEAR_[QME_SCSR_PB_PURGE_DONE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SCSR_PB_PURGE_DONE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_SCSR_PB_PURGE_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_SCSR_PB_PURGE_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SCSR_PB_PURGE_DONE]

//>> GET_[QME_SCSR_PB_PURGE_DONE]
static inline fapi2::buffer<uint64_t>& GET_QME_SCSR_PB_PURGE_DONE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_SCSR_PB_PURGE_DONE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_SCSR_PB_PURGE_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_PB_PURGE_DONE]

//>> GET_[QME_SCSR_PB_PURGE_DONE]
static inline bool GET_QME_SCSR_PB_PURGE_DONE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.getBit<QME_SCSR_PB_PURGE_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_SCSR_PB_PURGE_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_PB_PURGE_DONE]

//>> SET_[QME_SCSR_CORE_QUIESCED]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_CORE_QUIESCED(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_CORE_QUIESCED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_SCSR_CORE_QUIESCED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_CORE_QUIESCED]

//>> SET_[QME_SCSR_CORE_QUIESCED]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_CORE_QUIESCED(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_CORE_QUIESCED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_SCSR_CORE_QUIESCED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_CORE_QUIESCED]

//>> SET_[QME_SCSR_CORE_QUIESCED]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_CORE_QUIESCED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.setBit<QME_SCSR_CORE_QUIESCED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_SCSR_CORE_QUIESCED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_CORE_QUIESCED]

//>> CLEAR_[QME_SCSR_CORE_QUIESCED]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SCSR_CORE_QUIESCED(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_SCSR_CORE_QUIESCED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_SCSR_CORE_QUIESCED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SCSR_CORE_QUIESCED]

//>> GET_[QME_SCSR_CORE_QUIESCED]
static inline fapi2::buffer<uint64_t>& GET_QME_SCSR_CORE_QUIESCED(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_SCSR_CORE_QUIESCED,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_SCSR_CORE_QUIESCED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_CORE_QUIESCED]

//>> GET_[QME_SCSR_CORE_QUIESCED]
static inline bool GET_QME_SCSR_CORE_QUIESCED(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.getBit<QME_SCSR_CORE_QUIESCED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_SCSR_CORE_QUIESCED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_CORE_QUIESCED]

//>> SET_[QME_SCSR_PC_INTR_PENDING]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_PC_INTR_PENDING(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_PC_INTR_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_SCSR_PC_INTR_PENDING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_PC_INTR_PENDING]

//>> SET_[QME_SCSR_PC_INTR_PENDING]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_PC_INTR_PENDING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_PC_INTR_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_SCSR_PC_INTR_PENDING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_PC_INTR_PENDING]

//>> SET_[QME_SCSR_PC_INTR_PENDING]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_PC_INTR_PENDING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.setBit<QME_SCSR_PC_INTR_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_SCSR_PC_INTR_PENDING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_PC_INTR_PENDING]

//>> CLEAR_[QME_SCSR_PC_INTR_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SCSR_PC_INTR_PENDING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_SCSR_PC_INTR_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_SCSR_PC_INTR_PENDING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SCSR_PC_INTR_PENDING]

//>> GET_[QME_SCSR_PC_INTR_PENDING]
static inline fapi2::buffer<uint64_t>& GET_QME_SCSR_PC_INTR_PENDING(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_SCSR_PC_INTR_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_SCSR_PC_INTR_PENDING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_PC_INTR_PENDING]

//>> GET_[QME_SCSR_PC_INTR_PENDING]
static inline bool GET_QME_SCSR_PC_INTR_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.getBit<QME_SCSR_PC_INTR_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_SCSR_PC_INTR_PENDING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_PC_INTR_PENDING]

//>> SET_[QME_SCSR_STOP_SHIFT_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_STOP_SHIFT_ACTIVE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_STOP_SHIFT_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_SCSR_STOP_SHIFT_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_STOP_SHIFT_ACTIVE]

//>> SET_[QME_SCSR_STOP_SHIFT_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_STOP_SHIFT_ACTIVE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_STOP_SHIFT_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_SCSR_STOP_SHIFT_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_STOP_SHIFT_ACTIVE]

//>> SET_[QME_SCSR_STOP_SHIFT_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_STOP_SHIFT_ACTIVE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.setBit<QME_SCSR_STOP_SHIFT_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_SCSR_STOP_SHIFT_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_STOP_SHIFT_ACTIVE]

//>> CLEAR_[QME_SCSR_STOP_SHIFT_ACTIVE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SCSR_STOP_SHIFT_ACTIVE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_SCSR_STOP_SHIFT_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_SCSR_STOP_SHIFT_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SCSR_STOP_SHIFT_ACTIVE]

//>> GET_[QME_SCSR_STOP_SHIFT_ACTIVE]
static inline fapi2::buffer<uint64_t>& GET_QME_SCSR_STOP_SHIFT_ACTIVE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_SCSR_STOP_SHIFT_ACTIVE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_SCSR_STOP_SHIFT_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_STOP_SHIFT_ACTIVE]

//>> GET_[QME_SCSR_STOP_SHIFT_ACTIVE]
static inline bool GET_QME_SCSR_STOP_SHIFT_ACTIVE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.getBit<QME_SCSR_STOP_SHIFT_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_SCSR_STOP_SHIFT_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_STOP_SHIFT_ACTIVE]

//>> SET_[QME_SCSR_SPECIAL_WKUP_DONE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_SPECIAL_WKUP_DONE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_SPECIAL_WKUP_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_SCSR_SPECIAL_WKUP_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_SPECIAL_WKUP_DONE]

//>> SET_[QME_SCSR_SPECIAL_WKUP_DONE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_SPECIAL_WKUP_DONE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_SPECIAL_WKUP_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_SCSR_SPECIAL_WKUP_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_SPECIAL_WKUP_DONE]

//>> SET_[QME_SCSR_SPECIAL_WKUP_DONE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_SPECIAL_WKUP_DONE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.setBit<QME_SCSR_SPECIAL_WKUP_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_SCSR_SPECIAL_WKUP_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_SPECIAL_WKUP_DONE]

//>> CLEAR_[QME_SCSR_SPECIAL_WKUP_DONE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SCSR_SPECIAL_WKUP_DONE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_SCSR_SPECIAL_WKUP_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_SCSR_SPECIAL_WKUP_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SCSR_SPECIAL_WKUP_DONE]

//>> GET_[QME_SCSR_SPECIAL_WKUP_DONE]
static inline fapi2::buffer<uint64_t>& GET_QME_SCSR_SPECIAL_WKUP_DONE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_SCSR_SPECIAL_WKUP_DONE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_SCSR_SPECIAL_WKUP_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_SPECIAL_WKUP_DONE]

//>> GET_[QME_SCSR_SPECIAL_WKUP_DONE]
static inline bool GET_QME_SCSR_SPECIAL_WKUP_DONE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.getBit<QME_SCSR_SPECIAL_WKUP_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_SCSR_SPECIAL_WKUP_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_SPECIAL_WKUP_DONE]

//>> SET_[QME_SCSR_SPARE_IN]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_SPARE_IN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_SPARE_IN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_SCSR_SPARE_IN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_SPARE_IN]

//>> SET_[QME_SCSR_SPARE_IN]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_SPARE_IN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_SPARE_IN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_SCSR_SPARE_IN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_SPARE_IN]

//>> SET_[QME_SCSR_SPARE_IN]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_SPARE_IN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.setBit<QME_SCSR_SPARE_IN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_SCSR_SPARE_IN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_SPARE_IN]

//>> CLEAR_[QME_SCSR_SPARE_IN]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SCSR_SPARE_IN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_SCSR_SPARE_IN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_SCSR_SPARE_IN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SCSR_SPARE_IN]

//>> GET_[QME_SCSR_SPARE_IN]
static inline fapi2::buffer<uint64_t>& GET_QME_SCSR_SPARE_IN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_SCSR_SPARE_IN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_SCSR_SPARE_IN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_SPARE_IN]

//>> GET_[QME_SCSR_SPARE_IN]
static inline bool GET_QME_SCSR_SPARE_IN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.getBit<QME_SCSR_SPARE_IN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_SCSR_SPARE_IN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_SPARE_IN]

//>> SET_[QME_SCSR_PSSCR_POWEROFF_ALLOWED]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_PSSCR_POWEROFF_ALLOWED(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_PSSCR_POWEROFF_ALLOWED,
           QME_SCSR_PSSCR_POWEROFF_ALLOWED_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_SCSR_PSSCR_POWEROFF_ALLOWED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_PSSCR_POWEROFF_ALLOWED]

//>> SET_[QME_SCSR_PSSCR_POWEROFF_ALLOWED]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_PSSCR_POWEROFF_ALLOWED(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_PSSCR_POWEROFF_ALLOWED,
           QME_SCSR_PSSCR_POWEROFF_ALLOWED_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_SCSR_PSSCR_POWEROFF_ALLOWED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_PSSCR_POWEROFF_ALLOWED]

//>> GET_[QME_SCSR_PSSCR_POWEROFF_ALLOWED]
static inline fapi2::buffer<uint64_t>& GET_QME_SCSR_PSSCR_POWEROFF_ALLOWED(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_SCSR_PSSCR_POWEROFF_ALLOWED,
           QME_SCSR_PSSCR_POWEROFF_ALLOWED_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_SCSR_PSSCR_POWEROFF_ALLOWED chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_PSSCR_POWEROFF_ALLOWED]

//>> SET_[QME_SCSR_PC_THREAD_INSTR_RUNNING]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_PC_THREAD_INSTR_RUNNING(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_PC_THREAD_INSTR_RUNNING,
           QME_SCSR_PC_THREAD_INSTR_RUNNING_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_SCSR_PC_THREAD_INSTR_RUNNING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_PC_THREAD_INSTR_RUNNING]

//>> SET_[QME_SCSR_PC_THREAD_INSTR_RUNNING]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_PC_THREAD_INSTR_RUNNING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_PC_THREAD_INSTR_RUNNING,
           QME_SCSR_PC_THREAD_INSTR_RUNNING_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_SCSR_PC_THREAD_INSTR_RUNNING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_PC_THREAD_INSTR_RUNNING]

//>> GET_[QME_SCSR_PC_THREAD_INSTR_RUNNING]
static inline fapi2::buffer<uint64_t>& GET_QME_SCSR_PC_THREAD_INSTR_RUNNING(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_SCSR_PC_THREAD_INSTR_RUNNING,
           QME_SCSR_PC_THREAD_INSTR_RUNNING_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_SCSR_PC_THREAD_INSTR_RUNNING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_PC_THREAD_INSTR_RUNNING]

//>> SET_[QME_SCSR_PMSR_SHIFT_INACTIVE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_PMSR_SHIFT_INACTIVE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_PMSR_SHIFT_INACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_SCSR_PMSR_SHIFT_INACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_PMSR_SHIFT_INACTIVE]

//>> SET_[QME_SCSR_PMSR_SHIFT_INACTIVE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_PMSR_SHIFT_INACTIVE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_PMSR_SHIFT_INACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_SCSR_PMSR_SHIFT_INACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_PMSR_SHIFT_INACTIVE]

//>> SET_[QME_SCSR_PMSR_SHIFT_INACTIVE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_PMSR_SHIFT_INACTIVE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.setBit<QME_SCSR_PMSR_SHIFT_INACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_SCSR_PMSR_SHIFT_INACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_PMSR_SHIFT_INACTIVE]

//>> CLEAR_[QME_SCSR_PMSR_SHIFT_INACTIVE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SCSR_PMSR_SHIFT_INACTIVE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_SCSR_PMSR_SHIFT_INACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_SCSR_PMSR_SHIFT_INACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SCSR_PMSR_SHIFT_INACTIVE]

//>> GET_[QME_SCSR_PMSR_SHIFT_INACTIVE]
static inline fapi2::buffer<uint64_t>& GET_QME_SCSR_PMSR_SHIFT_INACTIVE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_SCSR_PMSR_SHIFT_INACTIVE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_SCSR_PMSR_SHIFT_INACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_PMSR_SHIFT_INACTIVE]

//>> GET_[QME_SCSR_PMSR_SHIFT_INACTIVE]
static inline bool GET_QME_SCSR_PMSR_SHIFT_INACTIVE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.getBit<QME_SCSR_PMSR_SHIFT_INACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_SCSR_PMSR_SHIFT_INACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_PMSR_SHIFT_INACTIVE]

//>> SET_[QME_SCSR_OTHER_DPDES_INTR_PENDING]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_OTHER_DPDES_INTR_PENDING(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_OTHER_DPDES_INTR_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_SCSR_OTHER_DPDES_INTR_PENDING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_OTHER_DPDES_INTR_PENDING]

//>> SET_[QME_SCSR_OTHER_DPDES_INTR_PENDING]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_OTHER_DPDES_INTR_PENDING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_OTHER_DPDES_INTR_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_SCSR_OTHER_DPDES_INTR_PENDING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_OTHER_DPDES_INTR_PENDING]

//>> SET_[QME_SCSR_OTHER_DPDES_INTR_PENDING]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_OTHER_DPDES_INTR_PENDING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.setBit<QME_SCSR_OTHER_DPDES_INTR_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_SCSR_OTHER_DPDES_INTR_PENDING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_OTHER_DPDES_INTR_PENDING]

//>> CLEAR_[QME_SCSR_OTHER_DPDES_INTR_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SCSR_OTHER_DPDES_INTR_PENDING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_SCSR_OTHER_DPDES_INTR_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_SCSR_OTHER_DPDES_INTR_PENDING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SCSR_OTHER_DPDES_INTR_PENDING]

//>> GET_[QME_SCSR_OTHER_DPDES_INTR_PENDING]
static inline fapi2::buffer<uint64_t>& GET_QME_SCSR_OTHER_DPDES_INTR_PENDING(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_SCSR_OTHER_DPDES_INTR_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_SCSR_OTHER_DPDES_INTR_PENDING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_OTHER_DPDES_INTR_PENDING]

//>> GET_[QME_SCSR_OTHER_DPDES_INTR_PENDING]
static inline bool GET_QME_SCSR_OTHER_DPDES_INTR_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.getBit<QME_SCSR_OTHER_DPDES_INTR_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_SCSR_OTHER_DPDES_INTR_PENDING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_OTHER_DPDES_INTR_PENDING]

//>> SET_[QME_SCSR_PC_UNMASKED_ATTN]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_PC_UNMASKED_ATTN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_PC_UNMASKED_ATTN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_SCSR_PC_UNMASKED_ATTN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_PC_UNMASKED_ATTN]

//>> SET_[QME_SCSR_PC_UNMASKED_ATTN]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_PC_UNMASKED_ATTN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_PC_UNMASKED_ATTN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_SCSR_PC_UNMASKED_ATTN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_PC_UNMASKED_ATTN]

//>> SET_[QME_SCSR_PC_UNMASKED_ATTN]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_PC_UNMASKED_ATTN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.setBit<QME_SCSR_PC_UNMASKED_ATTN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_SCSR_PC_UNMASKED_ATTN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_PC_UNMASKED_ATTN]

//>> CLEAR_[QME_SCSR_PC_UNMASKED_ATTN]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SCSR_PC_UNMASKED_ATTN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_SCSR_PC_UNMASKED_ATTN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_SCSR_PC_UNMASKED_ATTN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SCSR_PC_UNMASKED_ATTN]

//>> GET_[QME_SCSR_PC_UNMASKED_ATTN]
static inline fapi2::buffer<uint64_t>& GET_QME_SCSR_PC_UNMASKED_ATTN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_SCSR_PC_UNMASKED_ATTN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_SCSR_PC_UNMASKED_ATTN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_PC_UNMASKED_ATTN]

//>> GET_[QME_SCSR_PC_UNMASKED_ATTN]
static inline bool GET_QME_SCSR_PC_UNMASKED_ATTN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.getBit<QME_SCSR_PC_UNMASKED_ATTN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_SCSR_PC_UNMASKED_ATTN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_PC_UNMASKED_ATTN]

//>> SET_[QME_SCSR_PM_STATE_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_PM_STATE_ACTIVE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_PM_STATE_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_SCSR_PM_STATE_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_PM_STATE_ACTIVE]

//>> SET_[QME_SCSR_PM_STATE_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_PM_STATE_ACTIVE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_PM_STATE_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_SCSR_PM_STATE_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_PM_STATE_ACTIVE]

//>> SET_[QME_SCSR_PM_STATE_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_PM_STATE_ACTIVE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.setBit<QME_SCSR_PM_STATE_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_SCSR_PM_STATE_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_PM_STATE_ACTIVE]

//>> CLEAR_[QME_SCSR_PM_STATE_ACTIVE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_SCSR_PM_STATE_ACTIVE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_SCSR_PM_STATE_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_SCSR_PM_STATE_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_SCSR_PM_STATE_ACTIVE]

//>> GET_[QME_SCSR_PM_STATE_ACTIVE]
static inline fapi2::buffer<uint64_t>& GET_QME_SCSR_PM_STATE_ACTIVE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_SCSR_PM_STATE_ACTIVE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_SCSR_PM_STATE_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_PM_STATE_ACTIVE]

//>> GET_[QME_SCSR_PM_STATE_ACTIVE]
static inline bool GET_QME_SCSR_PM_STATE_ACTIVE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.getBit<QME_SCSR_PM_STATE_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_SCSR_PM_STATE_ACTIVE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_PM_STATE_ACTIVE]

//>> SET_[QME_SCSR_PM_STATE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_PM_STATE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_PM_STATE,
           QME_SCSR_PM_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_SCSR_PM_STATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_PM_STATE]

//>> SET_[QME_SCSR_PM_STATE]
static inline fapi2::buffer<uint64_t>& SET_QME_SCSR_PM_STATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_SCSR_PM_STATE,
           QME_SCSR_PM_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_SCSR_PM_STATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_SCSR_PM_STATE]

//>> GET_[QME_SCSR_PM_STATE]
static inline fapi2::buffer<uint64_t>& GET_QME_SCSR_PM_STATE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_SCSR, QME_SCSR_PPE2, QME_SCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_SCSR_PM_STATE,
           QME_SCSR_PM_STATE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_SCSR_PM_STATE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_SCSR_PM_STATE]

//>> PREP_[QME_TFCSR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_TFCSR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_TFCSR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_TFCSR]

//>> GET_[QME_TFCSR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_TFCSR(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_TFCSR;
#endif
    return fapi2::getScom(i_target, QME_TFCSR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_TFCSR]

//>> PUT_[QME_TFCSR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_TFCSR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return fapi2::putScom(i_target, QME_TFCSR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_TFCSR]

//>> PREP_[QME_TFCSR_PPE2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_TFCSR_PPE2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_TFCSR_PPE2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_TFCSR_PPE2]

//>> GET_[QME_TFCSR_PPE2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_TFCSR_PPE2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_TFCSR_PPE2;
#endif
    return fapi2::getScom(i_target, QME_TFCSR_PPE2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_TFCSR_PPE2]

//>> PUT_[QME_TFCSR_PPE2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_TFCSR_PPE2(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return fapi2::putScom(i_target, QME_TFCSR_PPE2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_TFCSR_PPE2]

//>> PREP_[QME_TFCSR_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_TFCSR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_TFCSR_WO_CLEAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_TFCSR_WO_CLEAR]

//>> GET_[QME_TFCSR_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_TFCSR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_TFCSR_WO_CLEAR;
#endif
    return fapi2::getScom(i_target, QME_TFCSR_WO_CLEAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_TFCSR_WO_CLEAR]

//>> PUT_[QME_TFCSR_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_TFCSR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return fapi2::putScom(i_target, QME_TFCSR_WO_CLEAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_TFCSR_WO_CLEAR]


//>> SET_[QME_TFCSR_XFER_START]
static inline fapi2::buffer<uint64_t>& SET_QME_TFCSR_XFER_START(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_TFCSR_XFER_START,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_TFCSR_XFER_START chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_TFCSR_XFER_START]

//>> SET_[QME_TFCSR_XFER_START]
static inline fapi2::buffer<uint64_t>& SET_QME_TFCSR_XFER_START(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_TFCSR_XFER_START,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_TFCSR_XFER_START chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_TFCSR_XFER_START]

//>> SET_[QME_TFCSR_XFER_START]
static inline fapi2::buffer<uint64_t>& SET_QME_TFCSR_XFER_START(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return o_data.setBit<QME_TFCSR_XFER_START>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_TFCSR_XFER_START chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_TFCSR_XFER_START]

//>> CLEAR_[QME_TFCSR_XFER_START]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_TFCSR_XFER_START(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_TFCSR_XFER_START>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_TFCSR_XFER_START chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_TFCSR_XFER_START]

//>> GET_[QME_TFCSR_XFER_START]
static inline fapi2::buffer<uint64_t>& GET_QME_TFCSR_XFER_START(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_TFCSR_XFER_START,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_TFCSR_XFER_START chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_TFCSR_XFER_START]

//>> GET_[QME_TFCSR_XFER_START]
static inline bool GET_QME_TFCSR_XFER_START(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return i_data.getBit<QME_TFCSR_XFER_START>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_TFCSR_XFER_START chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_TFCSR_XFER_START]

//>> SET_[QME_TFCSR_TFAC_RESET]
static inline fapi2::buffer<uint64_t>& SET_QME_TFCSR_TFAC_RESET(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_TFCSR_TFAC_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_TFCSR_TFAC_RESET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_TFCSR_TFAC_RESET]

//>> SET_[QME_TFCSR_TFAC_RESET]
static inline fapi2::buffer<uint64_t>& SET_QME_TFCSR_TFAC_RESET(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_TFCSR_TFAC_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_TFCSR_TFAC_RESET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_TFCSR_TFAC_RESET]

//>> SET_[QME_TFCSR_TFAC_RESET]
static inline fapi2::buffer<uint64_t>& SET_QME_TFCSR_TFAC_RESET(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return o_data.setBit<QME_TFCSR_TFAC_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_TFCSR_TFAC_RESET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_TFCSR_TFAC_RESET]

//>> CLEAR_[QME_TFCSR_TFAC_RESET]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_TFCSR_TFAC_RESET(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_TFCSR_TFAC_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_TFCSR_TFAC_RESET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_TFCSR_TFAC_RESET]

//>> GET_[QME_TFCSR_TFAC_RESET]
static inline fapi2::buffer<uint64_t>& GET_QME_TFCSR_TFAC_RESET(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_TFCSR_TFAC_RESET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_TFCSR_TFAC_RESET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_TFCSR_TFAC_RESET]

//>> GET_[QME_TFCSR_TFAC_RESET]
static inline bool GET_QME_TFCSR_TFAC_RESET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return i_data.getBit<QME_TFCSR_TFAC_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_TFCSR_TFAC_RESET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_TFCSR_TFAC_RESET]

//>> SET_[QME_TFCSR_CORE_NUM]
static inline fapi2::buffer<uint64_t>& SET_QME_TFCSR_CORE_NUM(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_TFCSR_CORE_NUM,
           QME_TFCSR_CORE_NUM_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_TFCSR_CORE_NUM chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_TFCSR_CORE_NUM]

//>> SET_[QME_TFCSR_CORE_NUM]
static inline fapi2::buffer<uint64_t>& SET_QME_TFCSR_CORE_NUM(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_TFCSR_CORE_NUM,
           QME_TFCSR_CORE_NUM_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_TFCSR_CORE_NUM chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_TFCSR_CORE_NUM]

//>> GET_[QME_TFCSR_CORE_NUM]
static inline fapi2::buffer<uint64_t>& GET_QME_TFCSR_CORE_NUM(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_TFCSR_CORE_NUM,
           QME_TFCSR_CORE_NUM_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_TFCSR_CORE_NUM chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_TFCSR_CORE_NUM]

//>> SET_[QME_TFCSR_XFER_RECEIVE_DONE]
static inline fapi2::buffer<uint64_t>& SET_QME_TFCSR_XFER_RECEIVE_DONE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_TFCSR_XFER_RECEIVE_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_TFCSR_XFER_RECEIVE_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_TFCSR_XFER_RECEIVE_DONE]

//>> SET_[QME_TFCSR_XFER_RECEIVE_DONE]
static inline fapi2::buffer<uint64_t>& SET_QME_TFCSR_XFER_RECEIVE_DONE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_TFCSR_XFER_RECEIVE_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_TFCSR_XFER_RECEIVE_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_TFCSR_XFER_RECEIVE_DONE]

//>> SET_[QME_TFCSR_XFER_RECEIVE_DONE]
static inline fapi2::buffer<uint64_t>& SET_QME_TFCSR_XFER_RECEIVE_DONE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return o_data.setBit<QME_TFCSR_XFER_RECEIVE_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_TFCSR_XFER_RECEIVE_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_TFCSR_XFER_RECEIVE_DONE]

//>> CLEAR_[QME_TFCSR_XFER_RECEIVE_DONE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_TFCSR_XFER_RECEIVE_DONE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_TFCSR_XFER_RECEIVE_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_TFCSR_XFER_RECEIVE_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_TFCSR_XFER_RECEIVE_DONE]

//>> GET_[QME_TFCSR_XFER_RECEIVE_DONE]
static inline fapi2::buffer<uint64_t>& GET_QME_TFCSR_XFER_RECEIVE_DONE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_TFCSR_XFER_RECEIVE_DONE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_TFCSR_XFER_RECEIVE_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_TFCSR_XFER_RECEIVE_DONE]

//>> GET_[QME_TFCSR_XFER_RECEIVE_DONE]
static inline bool GET_QME_TFCSR_XFER_RECEIVE_DONE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return i_data.getBit<QME_TFCSR_XFER_RECEIVE_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_TFCSR_XFER_RECEIVE_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_TFCSR_XFER_RECEIVE_DONE]

//>> SET_[QME_TFCSR_XFER_SENT_DONE]
static inline fapi2::buffer<uint64_t>& SET_QME_TFCSR_XFER_SENT_DONE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_TFCSR_XFER_SENT_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_TFCSR_XFER_SENT_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_TFCSR_XFER_SENT_DONE]

//>> SET_[QME_TFCSR_XFER_SENT_DONE]
static inline fapi2::buffer<uint64_t>& SET_QME_TFCSR_XFER_SENT_DONE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_TFCSR_XFER_SENT_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_TFCSR_XFER_SENT_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_TFCSR_XFER_SENT_DONE]

//>> SET_[QME_TFCSR_XFER_SENT_DONE]
static inline fapi2::buffer<uint64_t>& SET_QME_TFCSR_XFER_SENT_DONE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return o_data.setBit<QME_TFCSR_XFER_SENT_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_TFCSR_XFER_SENT_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_TFCSR_XFER_SENT_DONE]

//>> CLEAR_[QME_TFCSR_XFER_SENT_DONE]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_TFCSR_XFER_SENT_DONE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_TFCSR_XFER_SENT_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_TFCSR_XFER_SENT_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_TFCSR_XFER_SENT_DONE]

//>> GET_[QME_TFCSR_XFER_SENT_DONE]
static inline fapi2::buffer<uint64_t>& GET_QME_TFCSR_XFER_SENT_DONE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_TFCSR_XFER_SENT_DONE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_TFCSR_XFER_SENT_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_TFCSR_XFER_SENT_DONE]

//>> GET_[QME_TFCSR_XFER_SENT_DONE]
static inline bool GET_QME_TFCSR_XFER_SENT_DONE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return i_data.getBit<QME_TFCSR_XFER_SENT_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_TFCSR_XFER_SENT_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_TFCSR_XFER_SENT_DONE]

//>> SET_[QME_TFCSR_INCOMING_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_TFCSR_INCOMING_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_TFCSR_INCOMING_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_TFCSR_INCOMING_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_TFCSR_INCOMING_ERR]

//>> SET_[QME_TFCSR_INCOMING_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_TFCSR_INCOMING_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_TFCSR_INCOMING_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_TFCSR_INCOMING_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_TFCSR_INCOMING_ERR]

//>> SET_[QME_TFCSR_INCOMING_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_TFCSR_INCOMING_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return o_data.setBit<QME_TFCSR_INCOMING_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_TFCSR_INCOMING_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_TFCSR_INCOMING_ERR]

//>> CLEAR_[QME_TFCSR_INCOMING_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_TFCSR_INCOMING_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_TFCSR_INCOMING_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_TFCSR_INCOMING_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_TFCSR_INCOMING_ERR]

//>> GET_[QME_TFCSR_INCOMING_ERR]
static inline fapi2::buffer<uint64_t>& GET_QME_TFCSR_INCOMING_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_TFCSR_INCOMING_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_TFCSR_INCOMING_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_TFCSR_INCOMING_ERR]

//>> GET_[QME_TFCSR_INCOMING_ERR]
static inline bool GET_QME_TFCSR_INCOMING_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return i_data.getBit<QME_TFCSR_INCOMING_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_TFCSR_INCOMING_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_TFCSR_INCOMING_ERR]

//>> SET_[QME_TFCSR_RUNTIME_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_TFCSR_RUNTIME_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_TFCSR_RUNTIME_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_TFCSR_RUNTIME_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_TFCSR_RUNTIME_ERR]

//>> SET_[QME_TFCSR_RUNTIME_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_TFCSR_RUNTIME_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_TFCSR_RUNTIME_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_TFCSR_RUNTIME_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_TFCSR_RUNTIME_ERR]

//>> SET_[QME_TFCSR_RUNTIME_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_TFCSR_RUNTIME_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return o_data.setBit<QME_TFCSR_RUNTIME_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_TFCSR_RUNTIME_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_TFCSR_RUNTIME_ERR]

//>> CLEAR_[QME_TFCSR_RUNTIME_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_TFCSR_RUNTIME_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_TFCSR_RUNTIME_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_TFCSR_RUNTIME_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_TFCSR_RUNTIME_ERR]

//>> GET_[QME_TFCSR_RUNTIME_ERR]
static inline fapi2::buffer<uint64_t>& GET_QME_TFCSR_RUNTIME_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_TFCSR_RUNTIME_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_TFCSR_RUNTIME_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_TFCSR_RUNTIME_ERR]

//>> GET_[QME_TFCSR_RUNTIME_ERR]
static inline bool GET_QME_TFCSR_RUNTIME_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return i_data.getBit<QME_TFCSR_RUNTIME_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_TFCSR_RUNTIME_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_TFCSR_RUNTIME_ERR]

//>> SET_[QME_TFCSR_STATE_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_TFCSR_STATE_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_TFCSR_STATE_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_TFCSR_STATE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_TFCSR_STATE_ERR]

//>> SET_[QME_TFCSR_STATE_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_TFCSR_STATE_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_TFCSR_STATE_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_TFCSR_STATE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_TFCSR_STATE_ERR]

//>> SET_[QME_TFCSR_STATE_ERR]
static inline fapi2::buffer<uint64_t>& SET_QME_TFCSR_STATE_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return o_data.setBit<QME_TFCSR_STATE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_TFCSR_STATE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_TFCSR_STATE_ERR]

//>> CLEAR_[QME_TFCSR_STATE_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_TFCSR_STATE_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_TFCSR_STATE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_TFCSR_STATE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_TFCSR_STATE_ERR]

//>> GET_[QME_TFCSR_STATE_ERR]
static inline fapi2::buffer<uint64_t>& GET_QME_TFCSR_STATE_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_TFCSR_STATE_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_TFCSR_STATE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_TFCSR_STATE_ERR]

//>> GET_[QME_TFCSR_STATE_ERR]
static inline bool GET_QME_TFCSR_STATE_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return i_data.getBit<QME_TFCSR_STATE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_TFCSR_STATE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_TFCSR_STATE_ERR]

//>> SET_[QME_TFCSR_HDEC_MSB]
static inline fapi2::buffer<uint64_t>& SET_QME_TFCSR_HDEC_MSB(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_TFCSR_HDEC_MSB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_TFCSR_HDEC_MSB chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_TFCSR_HDEC_MSB]

//>> SET_[QME_TFCSR_HDEC_MSB]
static inline fapi2::buffer<uint64_t>& SET_QME_TFCSR_HDEC_MSB(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_TFCSR_HDEC_MSB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_TFCSR_HDEC_MSB chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_TFCSR_HDEC_MSB]

//>> SET_[QME_TFCSR_HDEC_MSB]
static inline fapi2::buffer<uint64_t>& SET_QME_TFCSR_HDEC_MSB(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return o_data.setBit<QME_TFCSR_HDEC_MSB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access QME_TFCSR_HDEC_MSB chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_TFCSR_HDEC_MSB]

//>> CLEAR_[QME_TFCSR_HDEC_MSB]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_TFCSR_HDEC_MSB(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return o_data.clearBit<QME_TFCSR_HDEC_MSB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access QME_TFCSR_HDEC_MSB chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_TFCSR_HDEC_MSB]

//>> GET_[QME_TFCSR_HDEC_MSB]
static inline fapi2::buffer<uint64_t>& GET_QME_TFCSR_HDEC_MSB(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_TFCSR_HDEC_MSB,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_TFCSR_HDEC_MSB chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_TFCSR_HDEC_MSB]

//>> GET_[QME_TFCSR_HDEC_MSB]
static inline bool GET_QME_TFCSR_HDEC_MSB(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return i_data.getBit<QME_TFCSR_HDEC_MSB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access QME_TFCSR_HDEC_MSB chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_TFCSR_HDEC_MSB]

//>> SET_[QME_TFCSR_DEC_MSB]
static inline fapi2::buffer<uint64_t>& SET_QME_TFCSR_DEC_MSB(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_TFCSR_DEC_MSB,
           QME_TFCSR_DEC_MSB_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access QME_TFCSR_DEC_MSB chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_TFCSR_DEC_MSB]

//>> SET_[QME_TFCSR_DEC_MSB]
static inline fapi2::buffer<uint64_t>& SET_QME_TFCSR_DEC_MSB(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return o_data.insertFromRight<QME_TFCSR_DEC_MSB,
           QME_TFCSR_DEC_MSB_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access QME_TFCSR_DEC_MSB chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_TFCSR_DEC_MSB]

//>> GET_[QME_TFCSR_DEC_MSB]
static inline fapi2::buffer<uint64_t>& GET_QME_TFCSR_DEC_MSB(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_TFCSR, QME_TFCSR_PPE2, QME_TFCSR_WO_CLEAR));
#endif
    return i_data.extractToRight<QME_TFCSR_DEC_MSB,
           QME_TFCSR_DEC_MSB_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access QME_TFCSR_DEC_MSB chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_TFCSR_DEC_MSB]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
