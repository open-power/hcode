/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/ppe_c/reg00007_unused.H $     */
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

#ifndef __PPE_C_REG00007_H_UNUSED__
#define __PPE_C_REG00007_H_UNUSED__

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

//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
