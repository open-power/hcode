/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/omi/reg00022_unused.H $       */
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

#ifndef __OMI_REG00022_H_UNUSED__
#define __OMI_REG00022_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace omi
{
#endif


//>> PREP_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_RXCTL_DATASM_10_PLREGS_RX_MODE1_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXCTL_DATASM_10_PLREGS_RX_MODE1_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL]

//>> GET_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_RXCTL_DATASM_10_PLREGS_RX_MODE1_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXCTL_DATASM_10_PLREGS_RX_MODE1_PL;
#endif
    return fapi2::getScom(i_target, RXCTL_DATASM_10_PLREGS_RX_MODE1_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL]

//>> PUT_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_RXCTL_DATASM_10_PLREGS_RX_MODE1_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_10_PLREGS_RX_MODE1_PL));
#endif
    return fapi2::putScom(i_target, RXCTL_DATASM_10_PLREGS_RX_MODE1_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL]


//>> SET_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_10_PLREGS_RX_MODE1_PL));
#endif
    return o_data.insertFromRight<RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK]

//>> SET_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_10_PLREGS_RX_MODE1_PL));
#endif
    return o_data.insertFromRight<RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK]

//>> SET_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_10_PLREGS_RX_MODE1_PL));
#endif
    return o_data.setBit<RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK]

//>> CLEAR_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_10_PLREGS_RX_MODE1_PL));
#endif
    return o_data.clearBit<RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK]

//>> GET_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK]
static inline fapi2::buffer<uint64_t>& GET_RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_10_PLREGS_RX_MODE1_PL));
#endif
    return i_data.extractToRight<RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK]

//>> GET_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK]
static inline bool GET_RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_10_PLREGS_RX_MODE1_PL));
#endif
    return i_data.getBit<RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK]

//>> SET_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_10_PLREGS_RX_MODE1_PL));
#endif
    return o_data.insertFromRight<RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK]

//>> SET_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_10_PLREGS_RX_MODE1_PL));
#endif
    return o_data.insertFromRight<RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK]

//>> SET_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_10_PLREGS_RX_MODE1_PL));
#endif
    return o_data.setBit<RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK]

//>> CLEAR_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_10_PLREGS_RX_MODE1_PL));
#endif
    return o_data.clearBit<RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK]

//>> GET_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK]
static inline fapi2::buffer<uint64_t>& GET_RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_10_PLREGS_RX_MODE1_PL));
#endif
    return i_data.extractToRight<RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK]

//>> GET_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK]
static inline bool GET_RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_10_PLREGS_RX_MODE1_PL));
#endif
    return i_data.getBit<RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK]

//>> SET_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_10_PLREGS_RX_MODE1_PL));
#endif
    return o_data.insertFromRight<RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK]

//>> SET_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_10_PLREGS_RX_MODE1_PL));
#endif
    return o_data.insertFromRight<RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK]

//>> SET_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_10_PLREGS_RX_MODE1_PL));
#endif
    return o_data.setBit<RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK]

//>> CLEAR_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_10_PLREGS_RX_MODE1_PL));
#endif
    return o_data.clearBit<RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK]

//>> GET_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK]
static inline fapi2::buffer<uint64_t>& GET_RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_10_PLREGS_RX_MODE1_PL));
#endif
    return i_data.extractToRight<RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK]

//>> GET_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK]
static inline bool GET_RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_10_PLREGS_RX_MODE1_PL));
#endif
    return i_data.getBit<RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK]

//>> SET_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_10_PLREGS_RX_MODE1_PL));
#endif
    return o_data.insertFromRight<RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK]

//>> SET_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_10_PLREGS_RX_MODE1_PL));
#endif
    return o_data.insertFromRight<RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK]

//>> SET_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_10_PLREGS_RX_MODE1_PL));
#endif
    return o_data.setBit<RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK]

//>> CLEAR_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_10_PLREGS_RX_MODE1_PL));
#endif
    return o_data.clearBit<RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK]

//>> GET_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK]
static inline fapi2::buffer<uint64_t>& GET_RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_10_PLREGS_RX_MODE1_PL));
#endif
    return i_data.extractToRight<RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK]

//>> GET_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK]
static inline bool GET_RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_10_PLREGS_RX_MODE1_PL));
#endif
    return i_data.getBit<RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK]

//>> SET_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_10_PLREGS_RX_MODE1_PL));
#endif
    return o_data.insertFromRight<RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK]

//>> SET_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_10_PLREGS_RX_MODE1_PL));
#endif
    return o_data.insertFromRight<RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK]

//>> SET_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_10_PLREGS_RX_MODE1_PL));
#endif
    return o_data.setBit<RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK]

//>> CLEAR_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_10_PLREGS_RX_MODE1_PL));
#endif
    return o_data.clearBit<RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK]

//>> GET_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK]
static inline fapi2::buffer<uint64_t>& GET_RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_10_PLREGS_RX_MODE1_PL));
#endif
    return i_data.extractToRight<RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK]

//>> GET_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK]
static inline bool GET_RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_10_PLREGS_RX_MODE1_PL));
#endif
    return i_data.getBit<RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXCTL_DATASM_10_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK]

//>> PREP_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL]

//>> GET_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL;
#endif
    return fapi2::getScom(i_target, RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL]

//>> PUT_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL));
#endif
    return fapi2::putScom(i_target, RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL]


//>> SET_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.insertFromRight<RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.insertFromRight<RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.setBit<RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.clearBit<RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL]

//>> GET_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL));
#endif
    return i_data.extractToRight<RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL]

//>> GET_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL));
#endif
    return i_data.getBit<RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_SET_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.insertFromRight<RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.insertFromRight<RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.setBit<RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.clearBit<RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL]

//>> GET_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL));
#endif
    return i_data.extractToRight<RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL]

//>> GET_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL));
#endif
    return i_data.getBit<RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_INIT_DONE_CLR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.insertFromRight<RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.insertFromRight<RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.setBit<RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.clearBit<RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL]

//>> GET_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
GET_RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL));
#endif
    return i_data.extractToRight<RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL]

//>> GET_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL));
#endif
    return i_data.getBit<RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_SET_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.insertFromRight<RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.insertFromRight<RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.setBit<RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.clearBit<RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL]

//>> GET_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
GET_RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL));
#endif
    return i_data.extractToRight<RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL]

//>> GET_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL));
#endif
    return i_data.getBit<RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_PHY_DL_RECAL_DONE_CLR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.insertFromRight<RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.insertFromRight<RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.setBit<RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL));
#endif
    return o_data.clearBit<RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL]

//>> GET_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
GET_RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL));
#endif
    return i_data.extractToRight<RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL]

//>> GET_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL));
#endif
    return i_data.getBit<RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXCTL_DATASM_12_PLREGS_RX_CNTL2_PL_DL_PHY_RECAL_ABORT_STICKY_CLR_WO_PULSE_SLOW_SIGNAL]

//>> PREP_[RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL]

//>> GET_[RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL;
#endif
    return fapi2::getScom(i_target, RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL]

//>> PUT_[RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL));
#endif
    return fapi2::putScom(i_target, RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL]


//>> SET_[RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_REQ_ALT]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_REQ_ALT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL));
#endif
    return o_data.insertFromRight<RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_REQ_ALT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_REQ_ALT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_REQ_ALT]

//>> SET_[RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_REQ_ALT]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_REQ_ALT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL));
#endif
    return o_data.insertFromRight<RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_REQ_ALT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_REQ_ALT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_REQ_ALT]

//>> SET_[RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_REQ_ALT]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_REQ_ALT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL));
#endif
    return o_data.setBit<RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_REQ_ALT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_REQ_ALT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_REQ_ALT]

//>> CLEAR_[RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_REQ_ALT]
static inline fapi2::buffer<uint64_t>& CLEAR_RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_REQ_ALT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL));
#endif
    return o_data.clearBit<RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_REQ_ALT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_REQ_ALT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_REQ_ALT]

//>> GET_[RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_REQ_ALT]
static inline fapi2::buffer<uint64_t>& GET_RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_REQ_ALT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL));
#endif
    return i_data.extractToRight<RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_REQ_ALT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_REQ_ALT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_REQ_ALT]

//>> GET_[RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_REQ_ALT]
static inline bool GET_RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_REQ_ALT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL));
#endif
    return i_data.getBit<RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_REQ_ALT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_REQ_ALT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_REQ_ALT]

//>> SET_[RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_STS_ALT]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_STS_ALT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL));
#endif
    return o_data.insertFromRight<RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_STS_ALT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_STS_ALT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_STS_ALT]

//>> SET_[RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_STS_ALT]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_STS_ALT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL));
#endif
    return o_data.insertFromRight<RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_STS_ALT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_STS_ALT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_STS_ALT]

//>> SET_[RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_STS_ALT]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_STS_ALT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL));
#endif
    return o_data.setBit<RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_STS_ALT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_STS_ALT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_STS_ALT]

//>> CLEAR_[RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_STS_ALT]
static inline fapi2::buffer<uint64_t>& CLEAR_RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_STS_ALT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL));
#endif
    return o_data.clearBit<RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_STS_ALT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_STS_ALT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_STS_ALT]

//>> GET_[RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_STS_ALT]
static inline fapi2::buffer<uint64_t>& GET_RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_STS_ALT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL));
#endif
    return i_data.extractToRight<RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_STS_ALT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_STS_ALT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_STS_ALT]

//>> GET_[RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_STS_ALT]
static inline bool GET_RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_STS_ALT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL));
#endif
    return i_data.getBit<RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_STS_ALT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_STS_ALT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXCTL_DATASM_16_PLREGS_RX_CNTL3_PL_STS_ALT]

//>> PREP_[RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL]

//>> GET_[RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL;
#endif
    return fapi2::getScom(i_target, RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL]

//>> PUT_[RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL));
#endif
    return fapi2::putScom(i_target, RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL]


//>> SET_[RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_REQ_ALT]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_REQ_ALT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL));
#endif
    return o_data.insertFromRight<RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_REQ_ALT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_REQ_ALT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_REQ_ALT]

//>> SET_[RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_REQ_ALT]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_REQ_ALT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL));
#endif
    return o_data.insertFromRight<RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_REQ_ALT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_REQ_ALT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_REQ_ALT]

//>> SET_[RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_REQ_ALT]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_REQ_ALT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL));
#endif
    return o_data.setBit<RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_REQ_ALT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_REQ_ALT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_REQ_ALT]

//>> CLEAR_[RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_REQ_ALT]
static inline fapi2::buffer<uint64_t>& CLEAR_RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_REQ_ALT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL));
#endif
    return o_data.clearBit<RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_REQ_ALT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_REQ_ALT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_REQ_ALT]

//>> GET_[RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_REQ_ALT]
static inline fapi2::buffer<uint64_t>& GET_RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_REQ_ALT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL));
#endif
    return i_data.extractToRight<RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_REQ_ALT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_REQ_ALT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_REQ_ALT]

//>> GET_[RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_REQ_ALT]
static inline bool GET_RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_REQ_ALT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL));
#endif
    return i_data.getBit<RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_REQ_ALT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_REQ_ALT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_REQ_ALT]

//>> SET_[RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_STS_ALT]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_STS_ALT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL));
#endif
    return o_data.insertFromRight<RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_STS_ALT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_STS_ALT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_STS_ALT]

//>> SET_[RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_STS_ALT]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_STS_ALT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL));
#endif
    return o_data.insertFromRight<RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_STS_ALT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_STS_ALT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_STS_ALT]

//>> SET_[RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_STS_ALT]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_STS_ALT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL));
#endif
    return o_data.setBit<RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_STS_ALT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_STS_ALT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_STS_ALT]

//>> CLEAR_[RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_STS_ALT]
static inline fapi2::buffer<uint64_t>& CLEAR_RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_STS_ALT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL));
#endif
    return o_data.clearBit<RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_STS_ALT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_STS_ALT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_STS_ALT]

//>> GET_[RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_STS_ALT]
static inline fapi2::buffer<uint64_t>& GET_RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_STS_ALT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL));
#endif
    return i_data.extractToRight<RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_STS_ALT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_STS_ALT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_STS_ALT]

//>> GET_[RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_STS_ALT]
static inline bool GET_RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_STS_ALT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL));
#endif
    return i_data.getBit<RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_STS_ALT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_STS_ALT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXCTL_DATASM_20_PLREGS_RX_CNTL3_PL_STS_ALT]

//>> PREP_[RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL]

//>> GET_[RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL;
#endif
    return fapi2::getScom(i_target, RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL]

//>> PUT_[RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL));
#endif
    return fapi2::putScom(i_target, RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL]


//>> SET_[RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_INIT_DONE]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_INIT_DONE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL));
#endif
    return o_data.insertFromRight<RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_INIT_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_INIT_DONE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_INIT_DONE]

//>> SET_[RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_INIT_DONE]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_INIT_DONE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL));
#endif
    return o_data.insertFromRight<RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_INIT_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_INIT_DONE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_INIT_DONE]

//>> SET_[RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_INIT_DONE]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_INIT_DONE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL));
#endif
    return o_data.setBit<RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_INIT_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_INIT_DONE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_INIT_DONE]

//>> CLEAR_[RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_INIT_DONE]
static inline fapi2::buffer<uint64_t>& CLEAR_RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_INIT_DONE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL));
#endif
    return o_data.clearBit<RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_INIT_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_INIT_DONE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_INIT_DONE]

//>> GET_[RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_INIT_DONE]
static inline fapi2::buffer<uint64_t>& GET_RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_INIT_DONE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL));
#endif
    return i_data.extractToRight<RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_INIT_DONE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_INIT_DONE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_INIT_DONE]

//>> GET_[RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_INIT_DONE]
static inline bool GET_RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_INIT_DONE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL));
#endif
    return i_data.getBit<RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_INIT_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_INIT_DONE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_INIT_DONE]

//>> SET_[RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_RECAL_DONE]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_RECAL_DONE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL));
#endif
    return o_data.insertFromRight<RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_RECAL_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_RECAL_DONE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_RECAL_DONE]

//>> SET_[RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_RECAL_DONE]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_RECAL_DONE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL));
#endif
    return o_data.insertFromRight<RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_RECAL_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_RECAL_DONE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_RECAL_DONE]

//>> SET_[RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_RECAL_DONE]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_RECAL_DONE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL));
#endif
    return o_data.setBit<RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_RECAL_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_RECAL_DONE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_RECAL_DONE]

//>> CLEAR_[RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_RECAL_DONE]
static inline fapi2::buffer<uint64_t>& CLEAR_RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_RECAL_DONE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL));
#endif
    return o_data.clearBit<RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_RECAL_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_RECAL_DONE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_RECAL_DONE]

//>> GET_[RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_RECAL_DONE]
static inline fapi2::buffer<uint64_t>& GET_RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_RECAL_DONE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL));
#endif
    return i_data.extractToRight<RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_RECAL_DONE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_RECAL_DONE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_RECAL_DONE]

//>> GET_[RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_RECAL_DONE]
static inline bool GET_RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_RECAL_DONE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL));
#endif
    return i_data.getBit<RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_RECAL_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_RECAL_DONE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXCTL_DATASM_6_PLREGS_RX_CNTL1_PL_RECAL_DONE]

//>> PREP_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_RXCTL_DATASM_6_PLREGS_RX_STAT1_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXCTL_DATASM_6_PLREGS_RX_STAT1_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL]

//>> GET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_RXCTL_DATASM_6_PLREGS_RX_STAT1_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXCTL_DATASM_6_PLREGS_RX_STAT1_PL;
#endif
    return fapi2::getScom(i_target, RXCTL_DATASM_6_PLREGS_RX_STAT1_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL]

//>> PUT_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_RXCTL_DATASM_6_PLREGS_RX_STAT1_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_6_PLREGS_RX_STAT1_PL));
#endif
    return fapi2::putScom(i_target, RXCTL_DATASM_6_PLREGS_RX_STAT1_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL]


//>> SET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_6_PLREGS_RX_STAT1_PL));
#endif
    return o_data.insertFromRight<RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL]

//>> SET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_6_PLREGS_RX_STAT1_PL));
#endif
    return o_data.insertFromRight<RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL]

//>> SET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_6_PLREGS_RX_STAT1_PL));
#endif
    return o_data.setBit<RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL]

//>> CLEAR_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_6_PLREGS_RX_STAT1_PL));
#endif
    return o_data.clearBit<RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL]

//>> GET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_6_PLREGS_RX_STAT1_PL));
#endif
    return i_data.extractToRight<RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL]

//>> GET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL]
static inline bool GET_RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_6_PLREGS_RX_STAT1_PL));
#endif
    return i_data.getBit<RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RUN_LANE_RO_SIGNAL]

//>> SET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_6_PLREGS_RX_STAT1_PL));
#endif
    return o_data.insertFromRight<RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL]

//>> SET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_6_PLREGS_RX_STAT1_PL));
#endif
    return o_data.insertFromRight<RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL]

//>> SET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_6_PLREGS_RX_STAT1_PL));
#endif
    return o_data.setBit<RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL]

//>> CLEAR_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_6_PLREGS_RX_STAT1_PL));
#endif
    return o_data.clearBit<RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL]

//>> GET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_6_PLREGS_RX_STAT1_PL));
#endif
    return i_data.extractToRight<RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL]

//>> GET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL]
static inline bool GET_RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_6_PLREGS_RX_STAT1_PL));
#endif
    return i_data.getBit<RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_REQ_RO_SIGNAL]

//>> SET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_6_PLREGS_RX_STAT1_PL));
#endif
    return o_data.insertFromRight<RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL]

//>> SET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_6_PLREGS_RX_STAT1_PL));
#endif
    return o_data.insertFromRight<RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL]

//>> SET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_6_PLREGS_RX_STAT1_PL));
#endif
    return o_data.setBit<RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL]

//>> CLEAR_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_6_PLREGS_RX_STAT1_PL));
#endif
    return o_data.clearBit<RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL]

//>> GET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_6_PLREGS_RX_STAT1_PL));
#endif
    return i_data.extractToRight<RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL]

//>> GET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL]
static inline bool GET_RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_6_PLREGS_RX_STAT1_PL));
#endif
    return i_data.getBit<RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_RO_SIGNAL]

//>> SET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_6_PLREGS_RX_STAT1_PL));
#endif
    return o_data.insertFromRight<RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL]

//>> SET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_6_PLREGS_RX_STAT1_PL));
#endif
    return o_data.insertFromRight<RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL]

//>> SET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_6_PLREGS_RX_STAT1_PL));
#endif
    return o_data.setBit<RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL]

//>> CLEAR_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_6_PLREGS_RX_STAT1_PL));
#endif
    return o_data.clearBit<RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL]

//>> GET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_6_PLREGS_RX_STAT1_PL));
#endif
    return i_data.extractToRight<RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL]

//>> GET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL]
static inline bool GET_RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_6_PLREGS_RX_STAT1_PL));
#endif
    return i_data.getBit<RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_DL_PHY_RECAL_ABORT_STICKY_RO_SIGNAL]

//>> SET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_6_PLREGS_RX_STAT1_PL));
#endif
    return o_data.insertFromRight<RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL]

//>> SET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_6_PLREGS_RX_STAT1_PL));
#endif
    return o_data.insertFromRight<RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL]

//>> SET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_6_PLREGS_RX_STAT1_PL));
#endif
    return o_data.setBit<RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL]

//>> CLEAR_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_6_PLREGS_RX_STAT1_PL));
#endif
    return o_data.clearBit<RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL]

//>> GET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_6_PLREGS_RX_STAT1_PL));
#endif
    return i_data.extractToRight<RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL]

//>> GET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL]
static inline bool GET_RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_6_PLREGS_RX_STAT1_PL));
#endif
    return i_data.getBit<RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_REQ_DL_RO_SIGNAL]

//>> SET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_6_PLREGS_RX_STAT1_PL));
#endif
    return o_data.insertFromRight<RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL]

//>> SET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_6_PLREGS_RX_STAT1_PL));
#endif
    return o_data.insertFromRight<RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL]

//>> SET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_6_PLREGS_RX_STAT1_PL));
#endif
    return o_data.setBit<RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL]

//>> CLEAR_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_6_PLREGS_RX_STAT1_PL));
#endif
    return o_data.clearBit<RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL]

//>> GET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_6_PLREGS_RX_STAT1_PL));
#endif
    return i_data.extractToRight<RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL]

//>> GET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL]
static inline bool GET_RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_6_PLREGS_RX_STAT1_PL));
#endif
    return i_data.getBit<RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXCTL_DATASM_6_PLREGS_RX_STAT1_PL_PSAVE_STS_PHY_RO_SIGNAL]

//>> PREP_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_RXCTL_DATASM_9_PLREGS_RX_MODE1_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXCTL_DATASM_9_PLREGS_RX_MODE1_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL]

//>> GET_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_RXCTL_DATASM_9_PLREGS_RX_MODE1_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXCTL_DATASM_9_PLREGS_RX_MODE1_PL;
#endif
    return fapi2::getScom(i_target, RXCTL_DATASM_9_PLREGS_RX_MODE1_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL]

//>> PUT_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_RXCTL_DATASM_9_PLREGS_RX_MODE1_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_9_PLREGS_RX_MODE1_PL));
#endif
    return fapi2::putScom(i_target, RXCTL_DATASM_9_PLREGS_RX_MODE1_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL]


//>> SET_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_9_PLREGS_RX_MODE1_PL));
#endif
    return o_data.insertFromRight<RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK]

//>> SET_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_9_PLREGS_RX_MODE1_PL));
#endif
    return o_data.insertFromRight<RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK]

//>> SET_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_9_PLREGS_RX_MODE1_PL));
#endif
    return o_data.setBit<RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK]

//>> CLEAR_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_9_PLREGS_RX_MODE1_PL));
#endif
    return o_data.clearBit<RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK]

//>> GET_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK]
static inline fapi2::buffer<uint64_t>& GET_RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_9_PLREGS_RX_MODE1_PL));
#endif
    return i_data.extractToRight<RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK]

//>> GET_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK]
static inline bool GET_RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_9_PLREGS_RX_MODE1_PL));
#endif
    return i_data.getBit<RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_REQ_DL_MASK]

//>> SET_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_9_PLREGS_RX_MODE1_PL));
#endif
    return o_data.insertFromRight<RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK]

//>> SET_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_9_PLREGS_RX_MODE1_PL));
#endif
    return o_data.insertFromRight<RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK]

//>> SET_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_9_PLREGS_RX_MODE1_PL));
#endif
    return o_data.setBit<RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK]

//>> CLEAR_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_9_PLREGS_RX_MODE1_PL));
#endif
    return o_data.clearBit<RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK]

//>> GET_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK]
static inline fapi2::buffer<uint64_t>& GET_RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_9_PLREGS_RX_MODE1_PL));
#endif
    return i_data.extractToRight<RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK]

//>> GET_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK]
static inline bool GET_RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_9_PLREGS_RX_MODE1_PL));
#endif
    return i_data.getBit<RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_DONE_DL_MASK]

//>> SET_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_9_PLREGS_RX_MODE1_PL));
#endif
    return o_data.insertFromRight<RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK]

//>> SET_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_9_PLREGS_RX_MODE1_PL));
#endif
    return o_data.insertFromRight<RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK]

//>> SET_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_9_PLREGS_RX_MODE1_PL));
#endif
    return o_data.setBit<RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK]

//>> CLEAR_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_9_PLREGS_RX_MODE1_PL));
#endif
    return o_data.clearBit<RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK]

//>> GET_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK]
static inline fapi2::buffer<uint64_t>& GET_RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_9_PLREGS_RX_MODE1_PL));
#endif
    return i_data.extractToRight<RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK]

//>> GET_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK]
static inline bool GET_RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_9_PLREGS_RX_MODE1_PL));
#endif
    return i_data.getBit<RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RUN_LANE_DL_MASK]

//>> SET_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_9_PLREGS_RX_MODE1_PL));
#endif
    return o_data.insertFromRight<RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK]

//>> SET_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_9_PLREGS_RX_MODE1_PL));
#endif
    return o_data.insertFromRight<RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK]

//>> SET_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_9_PLREGS_RX_MODE1_PL));
#endif
    return o_data.setBit<RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK]

//>> CLEAR_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_9_PLREGS_RX_MODE1_PL));
#endif
    return o_data.clearBit<RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK]

//>> GET_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK]
static inline fapi2::buffer<uint64_t>& GET_RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_9_PLREGS_RX_MODE1_PL));
#endif
    return i_data.extractToRight<RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK]

//>> GET_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK]
static inline bool GET_RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_9_PLREGS_RX_MODE1_PL));
#endif
    return i_data.getBit<RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_RECAL_ABORT_DL_MASK]

//>> SET_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_9_PLREGS_RX_MODE1_PL));
#endif
    return o_data.insertFromRight<RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK]

//>> SET_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_9_PLREGS_RX_MODE1_PL));
#endif
    return o_data.insertFromRight<RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK]

//>> SET_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK]
static inline fapi2::buffer<uint64_t>& SET_RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_9_PLREGS_RX_MODE1_PL));
#endif
    return o_data.setBit<RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK]

//>> CLEAR_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_9_PLREGS_RX_MODE1_PL));
#endif
    return o_data.clearBit<RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK]

//>> GET_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK]
static inline fapi2::buffer<uint64_t>& GET_RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_9_PLREGS_RX_MODE1_PL));
#endif
    return i_data.extractToRight<RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK]

//>> GET_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK]
static inline bool GET_RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXCTL_DATASM_9_PLREGS_RX_MODE1_PL));
#endif
    return i_data.getBit<RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXCTL_DATASM_9_PLREGS_RX_MODE1_PL_INIT_DONE_DL_MASK]

//>> PREP_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL]

//>> GET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL;
#endif
    return fapi2::getScom(i_target, RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL]

//>> PUT_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL));
#endif
    return fapi2::putScom(i_target, RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL]


//>> SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
GET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_A_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_A]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_A(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_A,
           RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_A]

//>> SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_A]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_A(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_A,
           RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_A]

//>> GET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_A]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_A(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_A,
           RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_A]

//>> SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
GET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_B_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_B]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_B(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_B,
           RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_B]

//>> SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_B]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_B(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_B,
           RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_B]

//>> GET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_B]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_B(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_B,
           RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_CNTL4_PL_RX_PR_PHASE_FORCE_VAL_B]

//>> PREP_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL]

//>> GET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL;
#endif
    return fapi2::getScom(i_target, RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL]

//>> PUT_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL));
#endif
    return fapi2::putScom(i_target, RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL]


//>> SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN]

//>> SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN]

//>> SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN]

//>> GET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN]

//>> GET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN]
static inline bool GET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_EN]

//>> SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR]

//>> SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR]

//>> SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR]
static inline fapi2::buffer<uint64_t>& CLEAR_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR]

//>> GET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR]

//>> GET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR]
static inline bool GET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_INVALID_LOCK_FILTER_DIR]

//>> SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN]

//>> SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN]

//>> SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN]

//>> GET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN]

//>> GET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN]
static inline bool GET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_MODE_EN]

//>> SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN]

//>> SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN]

//>> SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN]

//>> GET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN]

//>> GET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN]
static inline bool GET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_COARSE_UNLOCK_EN]

//>> SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN]

//>> SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN]

//>> SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN]

//>> GET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN]

//>> GET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN]
static inline bool GET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_LOCK_INVALID_EN]

//>> SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_LOCK_RATIO]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_LOCK_RATIO(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_LOCK_RATIO,
           RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_LOCK_RATIO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_LOCK_RATIO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_LOCK_RATIO]

//>> SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_LOCK_RATIO]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_LOCK_RATIO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_LOCK_RATIO,
           RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_LOCK_RATIO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_LOCK_RATIO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_LOCK_RATIO]

//>> GET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_LOCK_RATIO]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_LOCK_RATIO(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_LOCK_RATIO,
           RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_LOCK_RATIO_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_LOCK_RATIO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_MODE2_PL_LOCK_RATIO]

//>> PREP_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL]

//>> GET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL;
#endif
    return fapi2::getScom(i_target, RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL]

//>> PUT_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL));
#endif
    return fapi2::putScom(i_target, RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL]


//>> SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_COUNT_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_COUNT_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_COUNT_RO_SIGNAL,
           RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_COUNT_RO_SIGNAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_COUNT_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_COUNT_RO_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_COUNT_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_COUNT_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_COUNT_RO_SIGNAL,
           RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_COUNT_RO_SIGNAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_COUNT_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_COUNT_RO_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_COUNT_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_COUNT_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_COUNT_RO_SIGNAL,
           RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_COUNT_RO_SIGNAL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_COUNT_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_COUNT_RO_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL]
static inline bool GET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_RO_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL]
static inline bool GET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_BERPL_PRBS_SEED_DONE_B_RO_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL]
static inline bool GET_RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_RX_BIT_REGS_STAT4_PL_ERR_TRAPPED_RO_SIGNAL]

//>> PREP_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX27_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX27_PL(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX27_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX27_PL]

//>> GET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX27_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX27_PL(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX27_PL;
#endif
    return fapi2::getScom(i_target, RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX27_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX27_PL]

//>> PUT_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX27_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX27_PL(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX27_PL));
#endif
    return fapi2::putScom(i_target, RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX27_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX27_PL]


//>> SET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX27_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000,
           RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000]

//>> SET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX27_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000,
           RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000]

//>> GET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX27_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000,
           RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX27_PL_RX_AD_LATCH_DAC_N000]

//>> PREP_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX37_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX37_PL(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX37_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX37_PL]

//>> GET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX37_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX37_PL(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX37_PL;
#endif
    return fapi2::getScom(i_target, RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX37_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX37_PL]

//>> PUT_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX37_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX37_PL(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX37_PL));
#endif
    return fapi2::putScom(i_target, RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX37_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX37_PL]


//>> SET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX37_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010,
           RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010]

//>> SET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX37_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010,
           RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010]

//>> GET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX37_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010,
           RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX37_PL_RX_AD_LATCH_DAC_E010]

//>> PREP_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX47_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX47_PL(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX47_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX47_PL]

//>> GET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX47_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX47_PL(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX47_PL;
#endif
    return fapi2::getScom(i_target, RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX47_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX47_PL]

//>> PUT_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX47_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX47_PL(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX47_PL));
#endif
    return fapi2::putScom(i_target, RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX47_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX47_PL]


//>> SET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX47_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100,
           RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100]

//>> SET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX47_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100,
           RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100]

//>> GET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX47_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100,
           RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX47_PL_RX_AD_LATCH_DAC_S100]

//>> PREP_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX57_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX57_PL(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX57_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX57_PL]

//>> GET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX57_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX57_PL(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX57_PL;
#endif
    return fapi2::getScom(i_target, RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX57_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX57_PL]

//>> PUT_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX57_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX57_PL(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX57_PL));
#endif
    return fapi2::putScom(i_target, RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX57_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX57_PL]


//>> SET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX57_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110,
           RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110]

//>> SET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX57_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110,
           RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110]

//>> GET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX57_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110,
           RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_A_CNTLX57_PL_RX_AD_LATCH_DAC_W110]

//>> PREP_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX80_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX80_PL(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX80_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX80_PL]

//>> GET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX80_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX80_PL(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX80_PL;
#endif
    return fapi2::getScom(i_target, RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX80_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX80_PL]

//>> PUT_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX80_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX80_PL(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX80_PL));
#endif
    return fapi2::putScom(i_target, RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX80_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX80_PL]


//>> SET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX80_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101,
           RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101]

//>> SET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX80_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101,
           RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101]

//>> GET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX80_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101,
           RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX80_PL_RX_BD_LATCH_DAC_S101]

//>> PREP_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX90_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX90_PL(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX90_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX90_PL]

//>> GET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX90_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX90_PL(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX90_PL;
#endif
    return fapi2::getScom(i_target, RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX90_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX90_PL]

//>> PUT_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX90_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX90_PL(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX90_PL));
#endif
    return fapi2::putScom(i_target, RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX90_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX90_PL]


//>> SET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX90_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111,
           RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111]

//>> SET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX90_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111,
           RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111]

//>> GET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX90_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111,
           RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_LOFF_B_CNTLX90_PL_RX_BD_LATCH_DAC_W111]

//>> PREP_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL]

//>> GET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL;
#endif
    return fapi2::getScom(i_target, RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL]

//>> PUT_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL));
#endif
    return fapi2::putScom(i_target, RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL]


//>> SET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL_DATA]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL_DATA(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL_DATA,
           RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL_DATA]

//>> SET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL_DATA]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL_DATA,
           RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL_DATA]

//>> GET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL_DATA]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL_DATA(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL_DATA,
           RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL_DATA]

//>> SET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL_EDGE]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL_EDGE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL_EDGE,
           RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL_EDGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL_EDGE]

//>> SET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL_EDGE]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL_EDGE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL_EDGE,
           RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL_EDGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL_EDGE]

//>> GET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL_EDGE]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL_EDGE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL_EDGE,
           RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL_EDGE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL_EDGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_RX_DAC_REGS_CNTL16_PL_EDGE]

//>> PREP_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL;
#endif
    return fapi2::getScom(i_target, RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL]

//>> PUT_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return fapi2::putScom(i_target, RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL]


//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
GET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_SET_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
GET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_CLR_CAL_LANE_SEL_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
GET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_A_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
GET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_A_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
GET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SL_1UI_B_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
GET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_BUMP_SR_1UI_B_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
GET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline bool
GET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
GET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline bool
GET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_IN_COARSE_MODE_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
GET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_A_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
GET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_UNLOCKED_B_STICKY_CLEAR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
GET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_A_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
GET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PR_TAKE_FW_SNAPSHOT_B_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
GET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_ERR_TRAP_RST_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
GET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_CLR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>&
GET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_BIT_REGS_CNTLX5_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_CLR_WO_PULSE_SLOW_SIGNAL]

//>> PREP_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX60_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX60_PL(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX60_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX60_PL]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX60_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX60_PL(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX60_PL;
#endif
    return fapi2::getScom(i_target, RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX60_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX60_PL]

//>> PUT_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX60_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX60_PL(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX60_PL));
#endif
    return fapi2::putScom(i_target, RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX60_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX60_PL]


//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX60_PL_RX_BD_LATCH_DAC_N001]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX60_PL_RX_BD_LATCH_DAC_N001(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX60_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX60_PL_RX_BD_LATCH_DAC_N001,
           RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX60_PL_RX_BD_LATCH_DAC_N001_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX60_PL_RX_BD_LATCH_DAC_N001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX60_PL_RX_BD_LATCH_DAC_N001]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX60_PL_RX_BD_LATCH_DAC_N001]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX60_PL_RX_BD_LATCH_DAC_N001(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX60_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX60_PL_RX_BD_LATCH_DAC_N001,
           RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX60_PL_RX_BD_LATCH_DAC_N001_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX60_PL_RX_BD_LATCH_DAC_N001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX60_PL_RX_BD_LATCH_DAC_N001]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX60_PL_RX_BD_LATCH_DAC_N001]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX60_PL_RX_BD_LATCH_DAC_N001(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX60_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX60_PL_RX_BD_LATCH_DAC_N001,
           RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX60_PL_RX_BD_LATCH_DAC_N001_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX60_PL_RX_BD_LATCH_DAC_N001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX60_PL_RX_BD_LATCH_DAC_N001]

//>> PREP_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX70_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX70_PL(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX70_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX70_PL]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX70_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX70_PL(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX70_PL;
#endif
    return fapi2::getScom(i_target, RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX70_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX70_PL]

//>> PUT_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX70_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX70_PL(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX70_PL));
#endif
    return fapi2::putScom(i_target, RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX70_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX70_PL]


//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX70_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011,
           RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX70_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011,
           RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX70_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011,
           RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_LOFF_B_CNTLX70_PL_RX_BD_LATCH_DAC_E011]

//>> PREP_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL;
#endif
    return fapi2::getScom(i_target, RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL]

//>> PUT_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return fapi2::putScom(i_target, RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL]


//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB]
static inline fapi2::buffer<uint64_t>& CLEAR_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB]
static inline bool GET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_BLEED_CMFB]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS]
static inline fapi2::buffer<uint64_t>& CLEAR_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS]
static inline bool GET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_EXT_BIAS]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M]
static inline fapi2::buffer<uint64_t>& CLEAR_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M]
static inline bool GET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_IF_LPF_500M]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_SIGDET_PD]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_SIGDET_PD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_SIGDET_PD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_SIGDET_PD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_SIGDET_PD]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_SIGDET_PD]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_SIGDET_PD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_SIGDET_PD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_SIGDET_PD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_SIGDET_PD]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_SIGDET_PD]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_SIGDET_PD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_SIGDET_PD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_SIGDET_PD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_SIGDET_PD]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_SIGDET_PD]
static inline fapi2::buffer<uint64_t>& CLEAR_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_SIGDET_PD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_SIGDET_PD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_SIGDET_PD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_SIGDET_PD]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_SIGDET_PD]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_SIGDET_PD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_SIGDET_PD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_SIGDET_PD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_SIGDET_PD]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_SIGDET_PD]
static inline bool GET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_SIGDET_PD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_SIGDET_PD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_SIGDET_PD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_SIGDET_PD]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP]
static inline fapi2::buffer<uint64_t>& CLEAR_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP]
static inline bool GET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_CLKSLIP]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP]
static inline fapi2::buffer<uint64_t>& CLEAR_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP]
static inline bool GET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_CLKSLIP]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS]
static inline fapi2::buffer<uint64_t>& CLEAR_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS]
static inline bool GET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_HOLD_DIV_CLKS]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS]
static inline fapi2::buffer<uint64_t>& CLEAR_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS]
static inline bool GET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_HOLD_DIV_CLKS]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP,
           RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP,
           RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP,
           RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_A_SELCLKSLIP]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP,
           RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP,
           RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP,
           RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL10_PL_B_SELCLKSLIP]

//>> PREP_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL;
#endif
    return fapi2::getScom(i_target, RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL]

//>> PUT_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL));
#endif
    return fapi2::putScom(i_target, RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL]


//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT,
           RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT,
           RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT,
           RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_CLK_PHASE_SELECT]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL,
           RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL,
           RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL,
           RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_DPR_VBN_CAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B]
static inline fapi2::buffer<uint64_t>& CLEAR_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B]
static inline bool GET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_OFF_DISABLE_DM_B]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC,
           RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC,
           RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC,
           RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_CTLE_CONFIG_DC]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC,
           RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC]

//>> SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC,
           RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC]

//>> GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC,
           RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_1_RX_DAC_REGS_CNTL8_PL_VDAC_CONFIG_DC]

//>> PREP_[RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL]

//>> GET_[RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL;
#endif
    return fapi2::getScom(i_target, RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL]

//>> PUT_[RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL));
#endif
    return fapi2::putScom(i_target, RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL]


//>> SET_[RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_STROBE_CNT_MAX]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_STROBE_CNT_MAX(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_STROBE_CNT_MAX,
           RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_STROBE_CNT_MAX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_STROBE_CNT_MAX chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_STROBE_CNT_MAX]

//>> SET_[RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_STROBE_CNT_MAX]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_STROBE_CNT_MAX(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_STROBE_CNT_MAX,
           RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_STROBE_CNT_MAX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_STROBE_CNT_MAX chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_STROBE_CNT_MAX]

//>> GET_[RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_STROBE_CNT_MAX]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_STROBE_CNT_MAX(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_STROBE_CNT_MAX,
           RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_STROBE_CNT_MAX_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_STROBE_CNT_MAX chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_STROBE_CNT_MAX]

//>> SET_[RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_CAPTURE_CYCLE]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_CAPTURE_CYCLE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_CAPTURE_CYCLE,
           RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_CAPTURE_CYCLE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_CAPTURE_CYCLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_CAPTURE_CYCLE]

//>> SET_[RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_CAPTURE_CYCLE]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_CAPTURE_CYCLE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_CAPTURE_CYCLE,
           RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_CAPTURE_CYCLE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_CAPTURE_CYCLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_CAPTURE_CYCLE]

//>> GET_[RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_CAPTURE_CYCLE]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_CAPTURE_CYCLE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_CAPTURE_CYCLE,
           RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_CAPTURE_CYCLE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_CAPTURE_CYCLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_CAPTURE_CYCLE]

//>> SET_[RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_MARGIN]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_MARGIN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_MARGIN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_MARGIN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_MARGIN]

//>> SET_[RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_MARGIN]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_MARGIN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_MARGIN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_MARGIN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_MARGIN]

//>> SET_[RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_MARGIN]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_MARGIN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_MARGIN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_MARGIN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_MARGIN]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_MARGIN]
static inline fapi2::buffer<uint64_t>& CLEAR_RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_MARGIN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_MARGIN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_MARGIN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_MARGIN]

//>> GET_[RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_MARGIN]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_MARGIN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_MARGIN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_MARGIN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_MARGIN]

//>> GET_[RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_MARGIN]
static inline bool GET_RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_MARGIN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_MARGIN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_MARGIN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_2_RX_BIT_REGS_MODE9_PL_MARGIN]

//>> PREP_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX22_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX22_PL(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX22_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX22_PL]

//>> GET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX22_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX22_PL(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX22_PL;
#endif
    return fapi2::getScom(i_target, RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX22_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX22_PL]

//>> PUT_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX22_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX22_PL(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX22_PL));
#endif
    return fapi2::putScom(i_target, RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX22_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX22_PL]


//>> SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX22_PL_RX_AE_LATCH_DAC_W]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX22_PL_RX_AE_LATCH_DAC_W(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX22_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX22_PL_RX_AE_LATCH_DAC_W,
           RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX22_PL_RX_AE_LATCH_DAC_W_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX22_PL_RX_AE_LATCH_DAC_W chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX22_PL_RX_AE_LATCH_DAC_W]

//>> SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX22_PL_RX_AE_LATCH_DAC_W]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX22_PL_RX_AE_LATCH_DAC_W(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX22_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX22_PL_RX_AE_LATCH_DAC_W,
           RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX22_PL_RX_AE_LATCH_DAC_W_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX22_PL_RX_AE_LATCH_DAC_W chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX22_PL_RX_AE_LATCH_DAC_W]

//>> GET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX22_PL_RX_AE_LATCH_DAC_W]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX22_PL_RX_AE_LATCH_DAC_W(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX22_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX22_PL_RX_AE_LATCH_DAC_W,
           RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX22_PL_RX_AE_LATCH_DAC_W_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX22_PL_RX_AE_LATCH_DAC_W chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX22_PL_RX_AE_LATCH_DAC_W]

//>> PREP_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX32_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX32_PL(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX32_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX32_PL]

//>> GET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX32_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX32_PL(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX32_PL;
#endif
    return fapi2::getScom(i_target, RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX32_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX32_PL]

//>> PUT_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX32_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX32_PL(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX32_PL));
#endif
    return fapi2::putScom(i_target, RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX32_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX32_PL]


//>> SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX32_PL_RX_AD_LATCH_DAC_N101]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX32_PL_RX_AD_LATCH_DAC_N101(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX32_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX32_PL_RX_AD_LATCH_DAC_N101,
           RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX32_PL_RX_AD_LATCH_DAC_N101_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX32_PL_RX_AD_LATCH_DAC_N101 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX32_PL_RX_AD_LATCH_DAC_N101]

//>> SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX32_PL_RX_AD_LATCH_DAC_N101]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX32_PL_RX_AD_LATCH_DAC_N101(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX32_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX32_PL_RX_AD_LATCH_DAC_N101,
           RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX32_PL_RX_AD_LATCH_DAC_N101_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX32_PL_RX_AD_LATCH_DAC_N101 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX32_PL_RX_AD_LATCH_DAC_N101]

//>> GET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX32_PL_RX_AD_LATCH_DAC_N101]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX32_PL_RX_AD_LATCH_DAC_N101(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX32_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX32_PL_RX_AD_LATCH_DAC_N101,
           RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX32_PL_RX_AD_LATCH_DAC_N101_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX32_PL_RX_AD_LATCH_DAC_N101 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX32_PL_RX_AD_LATCH_DAC_N101]

//>> PREP_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX42_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX42_PL(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX42_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX42_PL]

//>> GET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX42_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX42_PL(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX42_PL;
#endif
    return fapi2::getScom(i_target, RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX42_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX42_PL]

//>> PUT_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX42_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX42_PL(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX42_PL));
#endif
    return fapi2::putScom(i_target, RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX42_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX42_PL]


//>> SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX42_PL_RX_AD_LATCH_DAC_E111]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX42_PL_RX_AD_LATCH_DAC_E111(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX42_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX42_PL_RX_AD_LATCH_DAC_E111,
           RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX42_PL_RX_AD_LATCH_DAC_E111_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX42_PL_RX_AD_LATCH_DAC_E111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX42_PL_RX_AD_LATCH_DAC_E111]

//>> SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX42_PL_RX_AD_LATCH_DAC_E111]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX42_PL_RX_AD_LATCH_DAC_E111(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX42_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX42_PL_RX_AD_LATCH_DAC_E111,
           RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX42_PL_RX_AD_LATCH_DAC_E111_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX42_PL_RX_AD_LATCH_DAC_E111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX42_PL_RX_AD_LATCH_DAC_E111]

//>> GET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX42_PL_RX_AD_LATCH_DAC_E111]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX42_PL_RX_AD_LATCH_DAC_E111(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX42_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX42_PL_RX_AD_LATCH_DAC_E111,
           RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX42_PL_RX_AD_LATCH_DAC_E111_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX42_PL_RX_AD_LATCH_DAC_E111 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX42_PL_RX_AD_LATCH_DAC_E111]

//>> PREP_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX52_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX52_PL(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX52_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX52_PL]

//>> GET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX52_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX52_PL(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX52_PL;
#endif
    return fapi2::getScom(i_target, RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX52_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX52_PL]

//>> PUT_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX52_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX52_PL(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX52_PL));
#endif
    return fapi2::putScom(i_target, RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX52_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX52_PL]


//>> SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX52_PL_RX_AD_LATCH_DAC_W001]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX52_PL_RX_AD_LATCH_DAC_W001(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX52_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX52_PL_RX_AD_LATCH_DAC_W001,
           RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX52_PL_RX_AD_LATCH_DAC_W001_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX52_PL_RX_AD_LATCH_DAC_W001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX52_PL_RX_AD_LATCH_DAC_W001]

//>> SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX52_PL_RX_AD_LATCH_DAC_W001]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX52_PL_RX_AD_LATCH_DAC_W001(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX52_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX52_PL_RX_AD_LATCH_DAC_W001,
           RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX52_PL_RX_AD_LATCH_DAC_W001_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX52_PL_RX_AD_LATCH_DAC_W001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX52_PL_RX_AD_LATCH_DAC_W001]

//>> GET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX52_PL_RX_AD_LATCH_DAC_W001]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX52_PL_RX_AD_LATCH_DAC_W001(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX52_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX52_PL_RX_AD_LATCH_DAC_W001,
           RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX52_PL_RX_AD_LATCH_DAC_W001_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX52_PL_RX_AD_LATCH_DAC_W001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_A_CNTLX52_PL_RX_AD_LATCH_DAC_W001]

//>> PREP_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_B_CNTLX85_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_B_CNTLX85_PL(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_B_CNTLX85_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_B_CNTLX85_PL]

//>> GET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_B_CNTLX85_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_B_CNTLX85_PL(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_B_CNTLX85_PL;
#endif
    return fapi2::getScom(i_target, RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_B_CNTLX85_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_B_CNTLX85_PL]

//>> PUT_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_B_CNTLX85_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_B_CNTLX85_PL(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_B_CNTLX85_PL));
#endif
    return fapi2::putScom(i_target, RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_B_CNTLX85_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_B_CNTLX85_PL]


//>> SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_B_CNTLX85_PL_RX_BD_LATCH_DAC_W010]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_B_CNTLX85_PL_RX_BD_LATCH_DAC_W010(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_B_CNTLX85_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_B_CNTLX85_PL_RX_BD_LATCH_DAC_W010,
           RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_B_CNTLX85_PL_RX_BD_LATCH_DAC_W010_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_B_CNTLX85_PL_RX_BD_LATCH_DAC_W010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_B_CNTLX85_PL_RX_BD_LATCH_DAC_W010]

//>> SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_B_CNTLX85_PL_RX_BD_LATCH_DAC_W010]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_B_CNTLX85_PL_RX_BD_LATCH_DAC_W010(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_B_CNTLX85_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_B_CNTLX85_PL_RX_BD_LATCH_DAC_W010,
           RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_B_CNTLX85_PL_RX_BD_LATCH_DAC_W010_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_B_CNTLX85_PL_RX_BD_LATCH_DAC_W010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_B_CNTLX85_PL_RX_BD_LATCH_DAC_W010]

//>> GET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_B_CNTLX85_PL_RX_BD_LATCH_DAC_W010]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_B_CNTLX85_PL_RX_BD_LATCH_DAC_W010(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_B_CNTLX85_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_B_CNTLX85_PL_RX_BD_LATCH_DAC_W010,
           RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_B_CNTLX85_PL_RX_BD_LATCH_DAC_W010_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_B_CNTLX85_PL_RX_BD_LATCH_DAC_W010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_LOFF_B_CNTLX85_PL_RX_BD_LATCH_DAC_W010]

//>> PREP_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL]

//>> GET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL;
#endif
    return fapi2::getScom(i_target, RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL]

//>> PUT_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL));
#endif
    return fapi2::putScom(i_target, RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL]


//>> SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_TERM_PD]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_TERM_PD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_TERM_PD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_TERM_PD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_TERM_PD]

//>> SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_TERM_PD]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_TERM_PD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_TERM_PD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_TERM_PD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_TERM_PD]

//>> SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_TERM_PD]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_TERM_PD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_TERM_PD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_TERM_PD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_TERM_PD]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_TERM_PD]
static inline fapi2::buffer<uint64_t>& CLEAR_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_TERM_PD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_TERM_PD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_TERM_PD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_TERM_PD]

//>> GET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_TERM_PD]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_TERM_PD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_TERM_PD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_TERM_PD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_TERM_PD]

//>> GET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_TERM_PD]
static inline bool GET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_TERM_PD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_TERM_PD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_TERM_PD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_TERM_PD]

//>> SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_FREQ_ADJUST]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_FREQ_ADJUST(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_FREQ_ADJUST,
           RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_FREQ_ADJUST_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_FREQ_ADJUST chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_FREQ_ADJUST]

//>> SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_FREQ_ADJUST]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_FREQ_ADJUST(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_FREQ_ADJUST,
           RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_FREQ_ADJUST_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_FREQ_ADJUST chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_FREQ_ADJUST]

//>> GET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_FREQ_ADJUST]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_FREQ_ADJUST(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_FREQ_ADJUST,
           RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_FREQ_ADJUST_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_FREQ_ADJUST chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_FREQ_ADJUST]

//>> SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_OFF_CM]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_OFF_CM(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_OFF_CM,
           RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_OFF_CM_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_OFF_CM chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_OFF_CM]

//>> SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_OFF_CM]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_OFF_CM(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_OFF_CM,
           RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_OFF_CM_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_OFF_CM chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_OFF_CM]

//>> GET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_OFF_CM]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_OFF_CM(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_OFF_CM,
           RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_OFF_CM_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_OFF_CM chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_OFF_CM]

//>> SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_OFF_DM]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_OFF_DM(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_OFF_DM,
           RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_OFF_DM_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_OFF_DM chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_OFF_DM]

//>> SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_OFF_DM]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_OFF_DM(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_OFF_DM,
           RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_OFF_DM_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_OFF_DM chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_OFF_DM]

//>> GET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_OFF_DM]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_OFF_DM(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_OFF_DM,
           RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_OFF_DM_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_OFF_DM chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL11_PL_OFF_DM]

//>> PREP_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL]

//>> GET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL;
#endif
    return fapi2::getScom(i_target, RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL]

//>> PUT_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL));
#endif
    return fapi2::putScom(i_target, RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL]


//>> SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC]

//>> SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC]

//>> SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC]

//>> GET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC]

//>> GET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC]
static inline bool GET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_EN_DC]

//>> SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_PR_POS]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_PR_POS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_PR_POS,
           RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_PR_POS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_PR_POS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_PR_POS]

//>> SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_PR_POS]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_PR_POS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_PR_POS,
           RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_PR_POS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_PR_POS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_PR_POS]

//>> GET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_PR_POS]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_PR_POS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_PR_POS,
           RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_PR_POS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_PR_POS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_PR_POS]

//>> SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS]

//>> SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS]

//>> SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS]
static inline fapi2::buffer<uint64_t>& CLEAR_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS]

//>> GET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS]

//>> GET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS]
static inline bool GET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_PR_GRAY_ENCODE_DIS]

//>> SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_DC_SEL]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_DC_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_DC_SEL,
           RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_DC_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_DC_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_DC_SEL]

//>> SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_DC_SEL]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_DC_SEL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_DC_SEL,
           RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_DC_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_DC_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_DC_SEL]

//>> GET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_DC_SEL]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_DC_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_DC_SEL,
           RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_DC_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_DC_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_DC_SEL]

//>> SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_AC_SEL_DC]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_AC_SEL_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_AC_SEL_DC,
           RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_AC_SEL_DC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_AC_SEL_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_AC_SEL_DC]

//>> SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_AC_SEL_DC]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_AC_SEL_DC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_AC_SEL_DC,
           RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_AC_SEL_DC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_AC_SEL_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_AC_SEL_DC]

//>> GET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_AC_SEL_DC]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_AC_SEL_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_AC_SEL_DC,
           RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_AC_SEL_DC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_AC_SEL_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_ATTEN_AC_SEL_DC]

//>> SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_FREQ_ADJUST_DC]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_FREQ_ADJUST_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_FREQ_ADJUST_DC,
           RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_FREQ_ADJUST_DC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_FREQ_ADJUST_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_FREQ_ADJUST_DC]

//>> SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_FREQ_ADJUST_DC]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_FREQ_ADJUST_DC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_FREQ_ADJUST_DC,
           RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_FREQ_ADJUST_DC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_FREQ_ADJUST_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_FREQ_ADJUST_DC]

//>> GET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_FREQ_ADJUST_DC]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_FREQ_ADJUST_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_FREQ_ADJUST_DC,
           RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_FREQ_ADJUST_DC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_FREQ_ADJUST_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_2_RX_DAC_REGS_CNTL7_PL_FREQ_ADJUST_DC]

//>> PREP_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL]

//>> GET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL;
#endif
    return fapi2::getScom(i_target, RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL]

//>> PUT_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return fapi2::putScom(i_target, RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL]


//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IORESET]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IORESET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IORESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IORESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IORESET]

//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IORESET]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IORESET(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IORESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IORESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IORESET]

//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IORESET]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IORESET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IORESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IORESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IORESET]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IORESET]
static inline fapi2::buffer<uint64_t>& CLEAR_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IORESET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IORESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IORESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IORESET]

//>> GET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IORESET]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IORESET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IORESET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IORESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IORESET]

//>> GET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IORESET]
static inline bool GET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IORESET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IORESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IORESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IORESET]

//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET]

//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET]

//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET]
static inline fapi2::buffer<uint64_t>& CLEAR_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET]

//>> GET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET]

//>> GET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET]
static inline bool GET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_IODOM_IORESET]

//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A]

//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A]

//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A]
static inline fapi2::buffer<uint64_t>& CLEAR_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A]

//>> GET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A]

//>> GET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A]
static inline bool GET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_A]

//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B]

//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B]

//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B]
static inline fapi2::buffer<uint64_t>& CLEAR_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B]

//>> GET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B]

//>> GET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B]
static inline bool GET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_FW_RESET_B]

//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A]

//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A]

//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A]
static inline fapi2::buffer<uint64_t>& CLEAR_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A]

//>> GET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A]

//>> GET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A]
static inline bool GET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_A]

//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B]

//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B]

//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B]
static inline fapi2::buffer<uint64_t>& CLEAR_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B]

//>> GET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B]

//>> GET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B]
static inline bool GET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_PR_BIT_LOCK_DONE_B]

//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE]

//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE]

//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE]

//>> GET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE]

//>> GET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE]
static inline bool GET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_BERPL_PRBS_SEED_MODE]

//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN]

//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN]

//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN]

//>> GET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN]

//>> GET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN]
static inline bool GET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_EN]

//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_MASK]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_MASK,
           RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_MASK]

//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_MASK]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_MASK(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_MASK,
           RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_MASK]

//>> GET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_MASK]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_MASK,
           RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_ERR_TRAP_MASK]

//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_BIAS_COUNTER_AGING_FACTOR]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_BIAS_COUNTER_AGING_FACTOR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_BIAS_COUNTER_AGING_FACTOR,
           RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_BIAS_COUNTER_AGING_FACTOR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_BIAS_COUNTER_AGING_FACTOR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_BIAS_COUNTER_AGING_FACTOR]

//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_BIAS_COUNTER_AGING_FACTOR]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_BIAS_COUNTER_AGING_FACTOR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_BIAS_COUNTER_AGING_FACTOR,
           RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_BIAS_COUNTER_AGING_FACTOR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_BIAS_COUNTER_AGING_FACTOR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_BIAS_COUNTER_AGING_FACTOR]

//>> GET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_BIAS_COUNTER_AGING_FACTOR]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_BIAS_COUNTER_AGING_FACTOR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_BIAS_COUNTER_AGING_FACTOR,
           RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_BIAS_COUNTER_AGING_FACTOR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_BIAS_COUNTER_AGING_FACTOR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_CNTL3_PL_BIAS_COUNTER_AGING_FACTOR]

//>> PREP_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL]

//>> GET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL;
#endif
    return fapi2::getScom(i_target, RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL]

//>> PUT_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL));
#endif
    return fapi2::putScom(i_target, RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL]


//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL_FW_INERTIA_AMT_COARSE]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL_FW_INERTIA_AMT_COARSE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL_FW_INERTIA_AMT_COARSE,
           RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL_FW_INERTIA_AMT_COARSE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL_FW_INERTIA_AMT_COARSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL_FW_INERTIA_AMT_COARSE]

//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL_FW_INERTIA_AMT_COARSE]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL_FW_INERTIA_AMT_COARSE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL_FW_INERTIA_AMT_COARSE,
           RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL_FW_INERTIA_AMT_COARSE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL_FW_INERTIA_AMT_COARSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL_FW_INERTIA_AMT_COARSE]

//>> GET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL_FW_INERTIA_AMT_COARSE]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL_FW_INERTIA_AMT_COARSE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL_FW_INERTIA_AMT_COARSE,
           RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL_FW_INERTIA_AMT_COARSE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL_FW_INERTIA_AMT_COARSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL_FW_INERTIA_AMT_COARSE]

//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL_PHASE_STEP_COARSE]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL_PHASE_STEP_COARSE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL_PHASE_STEP_COARSE,
           RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL_PHASE_STEP_COARSE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL_PHASE_STEP_COARSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL_PHASE_STEP_COARSE]

//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL_PHASE_STEP_COARSE]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL_PHASE_STEP_COARSE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL_PHASE_STEP_COARSE,
           RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL_PHASE_STEP_COARSE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL_PHASE_STEP_COARSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL_PHASE_STEP_COARSE]

//>> GET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL_PHASE_STEP_COARSE]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL_PHASE_STEP_COARSE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL_PHASE_STEP_COARSE,
           RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL_PHASE_STEP_COARSE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL_PHASE_STEP_COARSE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_MODE5_PL_PHASE_STEP_COARSE]

//>> PREP_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_STAT3_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_STAT3_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_STAT3_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_STAT3_PL]

//>> GET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_STAT3_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_STAT3_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_STAT3_PL;
#endif
    return fapi2::getScom(i_target, RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_STAT3_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_STAT3_PL]

//>> PUT_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_STAT3_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_STAT3_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_STAT3_PL));
#endif
    return fapi2::putScom(i_target, RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_STAT3_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_STAT3_PL]


//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_STAT3_PL_RX_PR_FW_SNAPSHOT_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_STAT3_PL_RX_PR_FW_SNAPSHOT_B_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_STAT3_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_STAT3_PL_RX_PR_FW_SNAPSHOT_B_RO_SIGNAL,
           RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_STAT3_PL_RX_PR_FW_SNAPSHOT_B_RO_SIGNAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_STAT3_PL_RX_PR_FW_SNAPSHOT_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_STAT3_PL_RX_PR_FW_SNAPSHOT_B_RO_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_STAT3_PL_RX_PR_FW_SNAPSHOT_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_STAT3_PL_RX_PR_FW_SNAPSHOT_B_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_STAT3_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_STAT3_PL_RX_PR_FW_SNAPSHOT_B_RO_SIGNAL,
           RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_STAT3_PL_RX_PR_FW_SNAPSHOT_B_RO_SIGNAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_STAT3_PL_RX_PR_FW_SNAPSHOT_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_STAT3_PL_RX_PR_FW_SNAPSHOT_B_RO_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_STAT3_PL_RX_PR_FW_SNAPSHOT_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_STAT3_PL_RX_PR_FW_SNAPSHOT_B_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_STAT3_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_STAT3_PL_RX_PR_FW_SNAPSHOT_B_RO_SIGNAL,
           RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_STAT3_PL_RX_PR_FW_SNAPSHOT_B_RO_SIGNAL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_STAT3_PL_RX_PR_FW_SNAPSHOT_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_3_RX_BIT_REGS_STAT3_PL_RX_PR_FW_SNAPSHOT_B_RO_SIGNAL]

//>> PREP_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX19_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX19_PL(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX19_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX19_PL]

//>> GET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX19_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX19_PL(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX19_PL;
#endif
    return fapi2::getScom(i_target, RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX19_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX19_PL]

//>> PUT_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX19_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX19_PL(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX19_PL));
#endif
    return fapi2::putScom(i_target, RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX19_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX19_PL]


//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX19_PL_RX_AE_LATCH_DAC_N]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX19_PL_RX_AE_LATCH_DAC_N(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX19_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX19_PL_RX_AE_LATCH_DAC_N,
           RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX19_PL_RX_AE_LATCH_DAC_N_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX19_PL_RX_AE_LATCH_DAC_N chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX19_PL_RX_AE_LATCH_DAC_N]

//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX19_PL_RX_AE_LATCH_DAC_N]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX19_PL_RX_AE_LATCH_DAC_N(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX19_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX19_PL_RX_AE_LATCH_DAC_N,
           RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX19_PL_RX_AE_LATCH_DAC_N_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX19_PL_RX_AE_LATCH_DAC_N chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX19_PL_RX_AE_LATCH_DAC_N]

//>> GET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX19_PL_RX_AE_LATCH_DAC_N]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX19_PL_RX_AE_LATCH_DAC_N(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX19_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX19_PL_RX_AE_LATCH_DAC_N,
           RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX19_PL_RX_AE_LATCH_DAC_N_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX19_PL_RX_AE_LATCH_DAC_N chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX19_PL_RX_AE_LATCH_DAC_N]

//>> PREP_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX29_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX29_PL(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX29_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX29_PL]

//>> GET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX29_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX29_PL(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX29_PL;
#endif
    return fapi2::getScom(i_target, RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX29_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX29_PL]

//>> PUT_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX29_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX29_PL(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX29_PL));
#endif
    return fapi2::putScom(i_target, RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX29_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX29_PL]


//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX29_PL_RX_AD_LATCH_DAC_N010]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX29_PL_RX_AD_LATCH_DAC_N010(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX29_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX29_PL_RX_AD_LATCH_DAC_N010,
           RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX29_PL_RX_AD_LATCH_DAC_N010_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX29_PL_RX_AD_LATCH_DAC_N010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX29_PL_RX_AD_LATCH_DAC_N010]

//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX29_PL_RX_AD_LATCH_DAC_N010]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX29_PL_RX_AD_LATCH_DAC_N010(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX29_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX29_PL_RX_AD_LATCH_DAC_N010,
           RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX29_PL_RX_AD_LATCH_DAC_N010_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX29_PL_RX_AD_LATCH_DAC_N010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX29_PL_RX_AD_LATCH_DAC_N010]

//>> GET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX29_PL_RX_AD_LATCH_DAC_N010]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX29_PL_RX_AD_LATCH_DAC_N010(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX29_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX29_PL_RX_AD_LATCH_DAC_N010,
           RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX29_PL_RX_AD_LATCH_DAC_N010_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX29_PL_RX_AD_LATCH_DAC_N010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX29_PL_RX_AD_LATCH_DAC_N010]

//>> PREP_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX39_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX39_PL(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX39_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX39_PL]

//>> GET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX39_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX39_PL(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX39_PL;
#endif
    return fapi2::getScom(i_target, RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX39_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX39_PL]

//>> PUT_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX39_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX39_PL(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX39_PL));
#endif
    return fapi2::putScom(i_target, RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX39_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX39_PL]


//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX39_PL_RX_AD_LATCH_DAC_E100]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX39_PL_RX_AD_LATCH_DAC_E100(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX39_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX39_PL_RX_AD_LATCH_DAC_E100,
           RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX39_PL_RX_AD_LATCH_DAC_E100_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX39_PL_RX_AD_LATCH_DAC_E100 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX39_PL_RX_AD_LATCH_DAC_E100]

//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX39_PL_RX_AD_LATCH_DAC_E100]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX39_PL_RX_AD_LATCH_DAC_E100(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX39_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX39_PL_RX_AD_LATCH_DAC_E100,
           RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX39_PL_RX_AD_LATCH_DAC_E100_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX39_PL_RX_AD_LATCH_DAC_E100 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX39_PL_RX_AD_LATCH_DAC_E100]

//>> GET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX39_PL_RX_AD_LATCH_DAC_E100]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX39_PL_RX_AD_LATCH_DAC_E100(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX39_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX39_PL_RX_AD_LATCH_DAC_E100,
           RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX39_PL_RX_AD_LATCH_DAC_E100_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX39_PL_RX_AD_LATCH_DAC_E100 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX39_PL_RX_AD_LATCH_DAC_E100]

//>> PREP_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX49_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX49_PL(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX49_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX49_PL]

//>> GET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX49_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX49_PL(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX49_PL;
#endif
    return fapi2::getScom(i_target, RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX49_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX49_PL]

//>> PUT_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX49_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX49_PL(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX49_PL));
#endif
    return fapi2::putScom(i_target, RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX49_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX49_PL]


//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX49_PL_RX_AD_LATCH_DAC_S110]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX49_PL_RX_AD_LATCH_DAC_S110(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX49_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX49_PL_RX_AD_LATCH_DAC_S110,
           RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX49_PL_RX_AD_LATCH_DAC_S110_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX49_PL_RX_AD_LATCH_DAC_S110 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX49_PL_RX_AD_LATCH_DAC_S110]

//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX49_PL_RX_AD_LATCH_DAC_S110]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX49_PL_RX_AD_LATCH_DAC_S110(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX49_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX49_PL_RX_AD_LATCH_DAC_S110,
           RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX49_PL_RX_AD_LATCH_DAC_S110_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX49_PL_RX_AD_LATCH_DAC_S110 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX49_PL_RX_AD_LATCH_DAC_S110]

//>> GET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX49_PL_RX_AD_LATCH_DAC_S110]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX49_PL_RX_AD_LATCH_DAC_S110(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX49_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX49_PL_RX_AD_LATCH_DAC_S110,
           RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX49_PL_RX_AD_LATCH_DAC_S110_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX49_PL_RX_AD_LATCH_DAC_S110 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_A_CNTLX49_PL_RX_AD_LATCH_DAC_S110]

//>> PREP_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX25_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX25_PL(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX25_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX25_PL]

//>> GET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX25_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX25_PL(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX25_PL;
#endif
    return fapi2::getScom(i_target, RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX25_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX25_PL]

//>> PUT_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX25_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX25_PL(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX25_PL));
#endif
    return fapi2::putScom(i_target, RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX25_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX25_PL]


//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX25_PL_RX_BE_LATCH_DAC_S]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX25_PL_RX_BE_LATCH_DAC_S(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX25_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX25_PL_RX_BE_LATCH_DAC_S,
           RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX25_PL_RX_BE_LATCH_DAC_S_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX25_PL_RX_BE_LATCH_DAC_S chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX25_PL_RX_BE_LATCH_DAC_S]

//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX25_PL_RX_BE_LATCH_DAC_S]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX25_PL_RX_BE_LATCH_DAC_S(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX25_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX25_PL_RX_BE_LATCH_DAC_S,
           RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX25_PL_RX_BE_LATCH_DAC_S_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX25_PL_RX_BE_LATCH_DAC_S chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX25_PL_RX_BE_LATCH_DAC_S]

//>> GET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX25_PL_RX_BE_LATCH_DAC_S]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX25_PL_RX_BE_LATCH_DAC_S(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX25_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX25_PL_RX_BE_LATCH_DAC_S,
           RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX25_PL_RX_BE_LATCH_DAC_S_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX25_PL_RX_BE_LATCH_DAC_S chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX25_PL_RX_BE_LATCH_DAC_S]

//>> PREP_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX65_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX65_PL(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX65_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX65_PL]

//>> GET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX65_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX65_PL(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX65_PL;
#endif
    return fapi2::getScom(i_target, RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX65_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX65_PL]

//>> PUT_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX65_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX65_PL(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX65_PL));
#endif
    return fapi2::putScom(i_target, RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX65_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX65_PL]


//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX65_PL_RX_BD_LATCH_DAC_N110]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX65_PL_RX_BD_LATCH_DAC_N110(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX65_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX65_PL_RX_BD_LATCH_DAC_N110,
           RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX65_PL_RX_BD_LATCH_DAC_N110_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX65_PL_RX_BD_LATCH_DAC_N110 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX65_PL_RX_BD_LATCH_DAC_N110]

//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX65_PL_RX_BD_LATCH_DAC_N110]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX65_PL_RX_BD_LATCH_DAC_N110(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX65_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX65_PL_RX_BD_LATCH_DAC_N110,
           RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX65_PL_RX_BD_LATCH_DAC_N110_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX65_PL_RX_BD_LATCH_DAC_N110 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX65_PL_RX_BD_LATCH_DAC_N110]

//>> GET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX65_PL_RX_BD_LATCH_DAC_N110]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX65_PL_RX_BD_LATCH_DAC_N110(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX65_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX65_PL_RX_BD_LATCH_DAC_N110,
           RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX65_PL_RX_BD_LATCH_DAC_N110_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX65_PL_RX_BD_LATCH_DAC_N110 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX65_PL_RX_BD_LATCH_DAC_N110]

//>> PREP_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX75_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX75_PL(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX75_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX75_PL]

//>> GET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX75_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX75_PL(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX75_PL;
#endif
    return fapi2::getScom(i_target, RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX75_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX75_PL]

//>> PUT_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX75_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX75_PL(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX75_PL));
#endif
    return fapi2::putScom(i_target, RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX75_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX75_PL]


//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX75_PL_RX_BD_LATCH_DAC_S000]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX75_PL_RX_BD_LATCH_DAC_S000(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX75_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX75_PL_RX_BD_LATCH_DAC_S000,
           RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX75_PL_RX_BD_LATCH_DAC_S000_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX75_PL_RX_BD_LATCH_DAC_S000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX75_PL_RX_BD_LATCH_DAC_S000]

//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX75_PL_RX_BD_LATCH_DAC_S000]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX75_PL_RX_BD_LATCH_DAC_S000(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX75_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX75_PL_RX_BD_LATCH_DAC_S000,
           RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX75_PL_RX_BD_LATCH_DAC_S000_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX75_PL_RX_BD_LATCH_DAC_S000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX75_PL_RX_BD_LATCH_DAC_S000]

//>> GET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX75_PL_RX_BD_LATCH_DAC_S000]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX75_PL_RX_BD_LATCH_DAC_S000(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX75_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX75_PL_RX_BD_LATCH_DAC_S000,
           RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX75_PL_RX_BD_LATCH_DAC_S000_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX75_PL_RX_BD_LATCH_DAC_S000 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_LOFF_B_CNTLX75_PL_RX_BD_LATCH_DAC_S000]

//>> PREP_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL]

//>> GET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL;
#endif
    return fapi2::getScom(i_target, RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL]

//>> PUT_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL));
#endif
    return fapi2::putScom(i_target, RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL]


//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL_DATA]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL_DATA(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL_DATA,
           RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL_DATA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL_DATA]

//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL_DATA]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL_DATA,
           RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL_DATA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL_DATA]

//>> GET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL_DATA]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL_DATA(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL_DATA,
           RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL_DATA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL_DATA]

//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL_EDGE]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL_EDGE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL_EDGE,
           RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL_EDGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL_EDGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL_EDGE]

//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL_EDGE]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL_EDGE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL_EDGE,
           RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL_EDGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL_EDGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL_EDGE]

//>> GET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL_EDGE]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL_EDGE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL_EDGE,
           RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL_EDGE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL_EDGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL17_PL_EDGE]

//>> PREP_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL]

//>> GET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL;
#endif
    return fapi2::getScom(i_target, RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL]

//>> PUT_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL));
#endif
    return fapi2::putScom(i_target, RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL]


//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_NS_DATA]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_NS_DATA(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_NS_DATA,
           RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_NS_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_NS_DATA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_NS_DATA]

//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_NS_DATA]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_NS_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_NS_DATA,
           RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_NS_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_NS_DATA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_NS_DATA]

//>> GET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_NS_DATA]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_NS_DATA(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_NS_DATA,
           RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_NS_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_NS_DATA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_NS_DATA]

//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_EW_DATA]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_EW_DATA(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_EW_DATA,
           RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_EW_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_EW_DATA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_EW_DATA]

//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_EW_DATA]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_EW_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_EW_DATA,
           RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_EW_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_EW_DATA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_EW_DATA]

//>> GET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_EW_DATA]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_EW_DATA(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_EW_DATA,
           RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_EW_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_EW_DATA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_EW_DATA]

//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_NS_EDGE]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_NS_EDGE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_NS_EDGE,
           RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_NS_EDGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_NS_EDGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_NS_EDGE]

//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_NS_EDGE]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_NS_EDGE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_NS_EDGE,
           RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_NS_EDGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_NS_EDGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_NS_EDGE]

//>> GET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_NS_EDGE]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_NS_EDGE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_NS_EDGE,
           RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_NS_EDGE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_NS_EDGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_NS_EDGE]

//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_EW_EDGE]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_EW_EDGE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_EW_EDGE,
           RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_EW_EDGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_EW_EDGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_EW_EDGE]

//>> SET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_EW_EDGE]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_EW_EDGE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_EW_EDGE,
           RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_EW_EDGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_EW_EDGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_EW_EDGE]

//>> GET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_EW_EDGE]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_EW_EDGE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_EW_EDGE,
           RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_EW_EDGE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_EW_EDGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_3_RX_DAC_REGS_CNTL2_PL_EW_EDGE]

//>> PREP_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL]

//>> GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL;
#endif
    return fapi2::getScom(i_target, RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL]

//>> PUT_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL));
#endif
    return fapi2::putScom(i_target, RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL]


//>> SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_SAVE_CDRLOCK_MODE_SEL]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_SAVE_CDRLOCK_MODE_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_SAVE_CDRLOCK_MODE_SEL,
           RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_SAVE_CDRLOCK_MODE_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_SAVE_CDRLOCK_MODE_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_SAVE_CDRLOCK_MODE_SEL]

//>> SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_SAVE_CDRLOCK_MODE_SEL]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_SAVE_CDRLOCK_MODE_SEL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_SAVE_CDRLOCK_MODE_SEL,
           RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_SAVE_CDRLOCK_MODE_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_SAVE_CDRLOCK_MODE_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_SAVE_CDRLOCK_MODE_SEL]

//>> GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_SAVE_CDRLOCK_MODE_SEL]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_SAVE_CDRLOCK_MODE_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_SAVE_CDRLOCK_MODE_SEL,
           RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_SAVE_CDRLOCK_MODE_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_SAVE_CDRLOCK_MODE_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_SAVE_CDRLOCK_MODE_SEL]

//>> SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_R_UNLOCK_RATIO]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_R_UNLOCK_RATIO(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_R_UNLOCK_RATIO,
           RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_R_UNLOCK_RATIO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_R_UNLOCK_RATIO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_R_UNLOCK_RATIO]

//>> SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_R_UNLOCK_RATIO]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_R_UNLOCK_RATIO(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_R_UNLOCK_RATIO,
           RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_R_UNLOCK_RATIO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_R_UNLOCK_RATIO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_R_UNLOCK_RATIO]

//>> GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_R_UNLOCK_RATIO]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_R_UNLOCK_RATIO(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_R_UNLOCK_RATIO,
           RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_R_UNLOCK_RATIO_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_R_UNLOCK_RATIO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_R_UNLOCK_RATIO]

//>> SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL]

//>> SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL]

//>> SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL]
static inline fapi2::buffer<uint64_t>& CLEAR_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL]

//>> GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL]

//>> GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL]
static inline bool GET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_MODE7_PL_SAVE_EN_DL_CLK_CONTROL]

//>> PREP_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL]

//>> GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL;
#endif
    return fapi2::getScom(i_target, RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL]

//>> PUT_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return fapi2::putScom(i_target, RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL]


//>> SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL]
static inline bool GET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_A_RO_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL]
static inline bool GET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_BUMP_IN_PROGRESS_B_RO_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL]
static inline bool GET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_RO_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL]
static inline bool GET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_RO_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>&
GET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL]
static inline bool GET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_A_STICKY_RO_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>&
GET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL]
static inline bool GET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_IN_COARSE_MODE_B_STICKY_RO_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL]
static inline bool GET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_A_RO_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL]
static inline bool GET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_LOCKED_B_RO_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL]
static inline bool GET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_A_STICKY_RO_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL]
static inline bool GET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PR_UNLOCKED_B_STICKY_RO_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>&
GET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL]
static inline bool GET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_A_RO_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>&
SET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>&
CLEAR_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>&
GET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL]

//>> GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL]
static inline bool GET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_PSAVE_CDRLOCK_TIMER_FAIL_B_RO_SIGNAL]

//>> SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO]

//>> SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO]

//>> SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.setBit<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO]

//>> CLEAR_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO]
static inline fapi2::buffer<uint64_t>& CLEAR_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return o_data.clearBit<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO]

//>> GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO]

//>> GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO]
static inline bool GET_RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL));
#endif
    return i_data.getBit<RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_4_RX_BIT_REGS_STAT1_PL_SIGNAL_DETECT_OUT_RO]

//>> PREP_[RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX36_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX36_PL(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX36_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX36_PL]

//>> GET_[RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX36_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX36_PL(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX36_PL;
#endif
    return fapi2::getScom(i_target, RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX36_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX36_PL]

//>> PUT_[RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX36_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX36_PL(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX36_PL));
#endif
    return fapi2::putScom(i_target, RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX36_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX36_PL]


//>> SET_[RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX36_PL_RX_AD_LATCH_DAC_E001]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX36_PL_RX_AD_LATCH_DAC_E001(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX36_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX36_PL_RX_AD_LATCH_DAC_E001,
           RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX36_PL_RX_AD_LATCH_DAC_E001_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX36_PL_RX_AD_LATCH_DAC_E001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX36_PL_RX_AD_LATCH_DAC_E001]

//>> SET_[RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX36_PL_RX_AD_LATCH_DAC_E001]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX36_PL_RX_AD_LATCH_DAC_E001(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX36_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX36_PL_RX_AD_LATCH_DAC_E001,
           RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX36_PL_RX_AD_LATCH_DAC_E001_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX36_PL_RX_AD_LATCH_DAC_E001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX36_PL_RX_AD_LATCH_DAC_E001]

//>> GET_[RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX36_PL_RX_AD_LATCH_DAC_E001]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX36_PL_RX_AD_LATCH_DAC_E001(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX36_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX36_PL_RX_AD_LATCH_DAC_E001,
           RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX36_PL_RX_AD_LATCH_DAC_E001_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX36_PL_RX_AD_LATCH_DAC_E001 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX36_PL_RX_AD_LATCH_DAC_E001]

//>> PREP_[RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX46_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX46_PL(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX46_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX46_PL]

//>> GET_[RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX46_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX46_PL(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX46_PL;
#endif
    return fapi2::getScom(i_target, RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX46_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX46_PL]

//>> PUT_[RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX46_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX46_PL(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX46_PL));
#endif
    return fapi2::putScom(i_target, RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX46_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX46_PL]


//>> SET_[RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX46_PL_RX_AD_LATCH_DAC_S011]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX46_PL_RX_AD_LATCH_DAC_S011(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX46_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX46_PL_RX_AD_LATCH_DAC_S011,
           RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX46_PL_RX_AD_LATCH_DAC_S011_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX46_PL_RX_AD_LATCH_DAC_S011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX46_PL_RX_AD_LATCH_DAC_S011]

//>> SET_[RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX46_PL_RX_AD_LATCH_DAC_S011]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX46_PL_RX_AD_LATCH_DAC_S011(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX46_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX46_PL_RX_AD_LATCH_DAC_S011,
           RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX46_PL_RX_AD_LATCH_DAC_S011_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX46_PL_RX_AD_LATCH_DAC_S011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX46_PL_RX_AD_LATCH_DAC_S011]

//>> GET_[RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX46_PL_RX_AD_LATCH_DAC_S011]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX46_PL_RX_AD_LATCH_DAC_S011(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX46_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX46_PL_RX_AD_LATCH_DAC_S011,
           RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX46_PL_RX_AD_LATCH_DAC_S011_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX46_PL_RX_AD_LATCH_DAC_S011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX46_PL_RX_AD_LATCH_DAC_S011]

//>> PREP_[RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX56_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX56_PL(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX56_PL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX56_PL]

//>> GET_[RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX56_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX56_PL(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX56_PL;
#endif
    return fapi2::getScom(i_target, RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX56_PL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX56_PL]

//>> PUT_[RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX56_PL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX56_PL(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX56_PL));
#endif
    return fapi2::putScom(i_target, RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX56_PL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX56_PL]


//>> SET_[RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX56_PL_RX_AD_LATCH_DAC_W101]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX56_PL_RX_AD_LATCH_DAC_W101(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX56_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX56_PL_RX_AD_LATCH_DAC_W101,
           RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX56_PL_RX_AD_LATCH_DAC_W101_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX56_PL_RX_AD_LATCH_DAC_W101 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX56_PL_RX_AD_LATCH_DAC_W101]

//>> SET_[RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX56_PL_RX_AD_LATCH_DAC_W101]
static inline fapi2::buffer<uint64_t>& SET_RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX56_PL_RX_AD_LATCH_DAC_W101(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX56_PL));
#endif
    return o_data.insertFromRight<RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX56_PL_RX_AD_LATCH_DAC_W101,
           RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX56_PL_RX_AD_LATCH_DAC_W101_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX56_PL_RX_AD_LATCH_DAC_W101 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX56_PL_RX_AD_LATCH_DAC_W101]

//>> GET_[RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX56_PL_RX_AD_LATCH_DAC_W101]
static inline fapi2::buffer<uint64_t>& GET_RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX56_PL_RX_AD_LATCH_DAC_W101(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX56_PL));
#endif
    return i_data.extractToRight<RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX56_PL_RX_AD_LATCH_DAC_W101,
           RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX56_PL_RX_AD_LATCH_DAC_W101_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omi Invalid dial access RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX56_PL_RX_AD_LATCH_DAC_W101 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[RXPACKS_0_DEFAULT_RD_4_RX_DAC_REGS_LOFF_A_CNTLX56_PL_RX_AD_LATCH_DAC_W101]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
