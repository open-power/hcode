/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/oci_proc/reg00014.H $         */
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

#ifndef __OCI_PROC_REG00014_H_
#define __OCI_PROC_REG00014_H_

#ifndef __PPE_HCODE__
namespace scomt
{
namespace oci_proc
{
#endif


//>> PREP_[TP_TPBR_PBA_PBAO_BCUE_CTL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPBR_PBA_PBAO_BCUE_CTL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPBR_PBA_PBAO_BCUE_CTL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPBR_PBA_PBAO_BCUE_CTL]

//>> GET_[TP_TPBR_PBA_PBAO_BCUE_CTL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPBR_PBA_PBAO_BCUE_CTL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPBR_PBA_PBAO_BCUE_CTL;
#endif
    return fapi2::getScom(i_target, TP_TPBR_PBA_PBAO_BCUE_CTL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_BCUE_CTL]

//>> PUT_[TP_TPBR_PBA_PBAO_BCUE_CTL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPBR_PBA_PBAO_BCUE_CTL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_CTL));
#endif
    return fapi2::putScom(i_target, TP_TPBR_PBA_PBAO_BCUE_CTL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPBR_PBA_PBAO_BCUE_CTL]


//>> SET_[TP_TPBR_PBA_PBAO_BCUE_CTL_OP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_BCUE_CTL_OP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_CTL));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_BCUE_CTL_OP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_CTL_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_BCUE_CTL_OP]

//>> SET_[TP_TPBR_PBA_PBAO_BCUE_CTL_OP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_BCUE_CTL_OP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_CTL));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_BCUE_CTL_OP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_CTL_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_BCUE_CTL_OP]

//>> SET_[TP_TPBR_PBA_PBAO_BCUE_CTL_OP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_BCUE_CTL_OP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_CTL));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_BCUE_CTL_OP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_CTL_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_BCUE_CTL_OP]

//>> CLEAR_[TP_TPBR_PBA_PBAO_BCUE_CTL_OP]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_BCUE_CTL_OP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_CTL));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_BCUE_CTL_OP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_CTL_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_BCUE_CTL_OP]

//>> GET_[TP_TPBR_PBA_PBAO_BCUE_CTL_OP]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_BCUE_CTL_OP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_CTL));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_BCUE_CTL_OP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_CTL_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_BCUE_CTL_OP]

//>> GET_[TP_TPBR_PBA_PBAO_BCUE_CTL_OP]
static inline bool GET_TP_TPBR_PBA_PBAO_BCUE_CTL_OP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_CTL));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_BCUE_CTL_OP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_CTL_OP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_BCUE_CTL_OP]

//>> SET_[TP_TPBR_PBA_PBAO_BCUE_CTL_ART]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_BCUE_CTL_ART(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_CTL));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_BCUE_CTL_ART,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_CTL_ART chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_BCUE_CTL_ART]

//>> SET_[TP_TPBR_PBA_PBAO_BCUE_CTL_ART]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_BCUE_CTL_ART(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_CTL));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_BCUE_CTL_ART,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_CTL_ART chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_BCUE_CTL_ART]

//>> SET_[TP_TPBR_PBA_PBAO_BCUE_CTL_ART]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_BCUE_CTL_ART(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_CTL));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_BCUE_CTL_ART>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_CTL_ART chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_BCUE_CTL_ART]

//>> CLEAR_[TP_TPBR_PBA_PBAO_BCUE_CTL_ART]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_BCUE_CTL_ART(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_CTL));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_BCUE_CTL_ART>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_CTL_ART chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_BCUE_CTL_ART]

//>> GET_[TP_TPBR_PBA_PBAO_BCUE_CTL_ART]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_BCUE_CTL_ART(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_CTL));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_BCUE_CTL_ART,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_CTL_ART chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_BCUE_CTL_ART]

//>> GET_[TP_TPBR_PBA_PBAO_BCUE_CTL_ART]
static inline bool GET_TP_TPBR_PBA_PBAO_BCUE_CTL_ART(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_CTL));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_BCUE_CTL_ART>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_CTL_ART chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_BCUE_CTL_ART]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5_OCB_OCI_GPEXIVDR4_GPR5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5_OCB_OCI_GPEXIVDR4_GPR5(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5_OCB_OCI_GPEXIVDR4_GPR5,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5_OCB_OCI_GPEXIVDR4_GPR5_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5_OCB_OCI_GPEXIVDR4_GPR5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5_OCB_OCI_GPEXIVDR4_GPR5]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5_OCB_OCI_GPEXIVDR4_GPR5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5_OCB_OCI_GPEXIVDR4_GPR5(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5_OCB_OCI_GPEXIVDR4_GPR5,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5_OCB_OCI_GPEXIVDR4_GPR5_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5_OCB_OCI_GPEXIVDR4_GPR5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5_OCB_OCI_GPEXIVDR4_GPR5]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5_OCB_OCI_GPEXIVDR4_GPR5]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5_OCB_OCI_GPEXIVDR4_GPR5(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5_OCB_OCI_GPEXIVDR4_GPR5,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5_OCB_OCI_GPEXIVDR4_GPR5_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5_OCB_OCI_GPEXIVDR4_GPR5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR5_OCB_OCI_GPEXIVDR4_GPR5]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_4,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_4]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_4,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_4]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_4]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_4,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_4_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_4]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_5(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_5,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_5_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_5]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_5,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_5_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_5]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_5]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_5(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_5,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_5_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIVDR4_5]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_DBG]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_DBG(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_DBG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_DBG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_DBG]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_DBG]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_DBG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_DBG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_DBG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_DBG]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_DBG]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_DBG(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_DBG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_DBG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_DBG]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_DBG]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_DBG(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_DBG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_DBG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_DBG]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_DBG]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_DBG(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_DBG,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_DBG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_DBG]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_DBG]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_DBG(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_DBG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_DBG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_DBG]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_XSTOP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_XSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_XSTOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_XSTOP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_XSTOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_XSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_XSTOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_XSTOP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_XSTOP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_XSTOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_XSTOP]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_XSTOP]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_XSTOP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_XSTOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_XSTOP]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_XSTOP]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_XSTOP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_XSTOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_XSTOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_XSTOP]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_XSTOP]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_XSTOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_XSTOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_XSTOP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_TRIG]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_TRIG(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_TRIG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_TRIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_TRIG]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_TRIG]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_TRIG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_TRIG,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_TRIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_TRIG]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_TRIG]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_TRIG(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_TRIG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_TRIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_TRIG]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_TRIG]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_TRIG(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_TRIG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_TRIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_TRIG]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_TRIG]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_TRIG(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_TRIG,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_TRIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_TRIG]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_TRIG]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_TRIG(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_TRIG>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_TRIG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_HALT_ON_TRIG]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_COVERAGE_MODE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_COVERAGE_MODE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_COVERAGE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_COVERAGE_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_COVERAGE_MODE]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_COVERAGE_MODE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_COVERAGE_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_COVERAGE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_COVERAGE_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_COVERAGE_MODE]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_COVERAGE_MODE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_COVERAGE_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_COVERAGE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_COVERAGE_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_COVERAGE_MODE]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_COVERAGE_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_COVERAGE_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_COVERAGE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_COVERAGE_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_COVERAGE_MODE]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_COVERAGE_MODE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_COVERAGE_MODE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_COVERAGE_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_COVERAGE_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_COVERAGE_MODE]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_COVERAGE_MODE]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_COVERAGE_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_COVERAGE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_COVERAGE_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_COVERAGE_MODE]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_INTR_ADDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_INTR_ADDR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_INTR_ADDR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_INTR_ADDR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_INTR_ADDR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_INTR_ADDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_INTR_ADDR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_INTR_ADDR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_INTR_ADDR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_INTR_ADDR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_INTR_ADDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_INTR_ADDR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_INTR_ADDR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_INTR_ADDR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_INTR_ADDR]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_INTR_ADDR]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_INTR_ADDR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_INTR_ADDR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_INTR_ADDR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_INTR_ADDR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_INTR_ADDR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_INTR_ADDR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_INTR_ADDR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_INTR_ADDR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_INTR_ADDR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_INTR_ADDR]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_INTR_ADDR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_INTR_ADDR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_INTR_ADDR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_INTR_ADDR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_EXTRA]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_EXTRA(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_EXTRA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_EXTRA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_EXTRA]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_EXTRA]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_EXTRA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_EXTRA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_EXTRA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_EXTRA]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_EXTRA]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_EXTRA(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_EXTRA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_EXTRA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_EXTRA]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_EXTRA]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_EXTRA(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_EXTRA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_EXTRA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_EXTRA]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_EXTRA]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_EXTRA(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_EXTRA,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_EXTRA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_EXTRA]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_EXTRA]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_EXTRA(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_EXTRA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_EXTRA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_EXTRA]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_STALL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_STALL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_STALL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_STALL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_STALL]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_STALL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_STALL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_STALL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_STALL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_STALL]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_STALL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_STALL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_STALL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_STALL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_STALL]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_STALL]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_STALL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_STALL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_STALL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_STALL]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_STALL]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_STALL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_STALL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_STALL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_STALL]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_STALL]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_STALL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_STALL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_STALL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_TRACE_STALL]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_WAIT_CYCLES]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_WAIT_CYCLES(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_WAIT_CYCLES,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_WAIT_CYCLES chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_WAIT_CYCLES]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_WAIT_CYCLES]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_WAIT_CYCLES(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_WAIT_CYCLES,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_WAIT_CYCLES chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_WAIT_CYCLES]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_WAIT_CYCLES]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_WAIT_CYCLES(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_WAIT_CYCLES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_WAIT_CYCLES chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_WAIT_CYCLES]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_WAIT_CYCLES]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_WAIT_CYCLES(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_WAIT_CYCLES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_WAIT_CYCLES chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_WAIT_CYCLES]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_WAIT_CYCLES]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_WAIT_CYCLES(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_WAIT_CYCLES,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_WAIT_CYCLES chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_WAIT_CYCLES]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_WAIT_CYCLES]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_WAIT_CYCLES(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_WAIT_CYCLES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_WAIT_CYCLES chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_WAIT_CYCLES]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_FULL_SPEED]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_FULL_SPEED(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_FULL_SPEED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_FULL_SPEED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_FULL_SPEED]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_FULL_SPEED]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_FULL_SPEED(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_FULL_SPEED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_FULL_SPEED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_FULL_SPEED]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_FULL_SPEED]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_FULL_SPEED(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_FULL_SPEED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_FULL_SPEED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_FULL_SPEED]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_FULL_SPEED]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_FULL_SPEED(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_FULL_SPEED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_FULL_SPEED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_FULL_SPEED]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_FULL_SPEED]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_FULL_SPEED(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_FULL_SPEED,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_FULL_SPEED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_FULL_SPEED]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_FULL_SPEED]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_FULL_SPEED(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_FULL_SPEED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_FULL_SPEED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_FULL_SPEED]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_DIS_FLOW_CHANGE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_DIS_FLOW_CHANGE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_DIS_FLOW_CHANGE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_DIS_FLOW_CHANGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_DIS_FLOW_CHANGE]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_DIS_FLOW_CHANGE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_DIS_FLOW_CHANGE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_DIS_FLOW_CHANGE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_DIS_FLOW_CHANGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_DIS_FLOW_CHANGE]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_DIS_FLOW_CHANGE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_DIS_FLOW_CHANGE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_DIS_FLOW_CHANGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_DIS_FLOW_CHANGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_DIS_FLOW_CHANGE]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_DIS_FLOW_CHANGE]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_DIS_FLOW_CHANGE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_DIS_FLOW_CHANGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_DIS_FLOW_CHANGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_DIS_FLOW_CHANGE]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_DIS_FLOW_CHANGE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_DIS_FLOW_CHANGE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_DIS_FLOW_CHANGE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_DIS_FLOW_CHANGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_DIS_FLOW_CHANGE]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_DIS_FLOW_CHANGE]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_DIS_FLOW_CHANGE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_DIS_FLOW_CHANGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_DIS_FLOW_CHANGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_DIS_FLOW_CHANGE]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_TRACE_MODE_SEL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_TRACE_MODE_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_TRACE_MODE_SEL,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_TRACE_MODE_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_TRACE_MODE_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_TRACE_MODE_SEL]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_TRACE_MODE_SEL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_TRACE_MODE_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_TRACE_MODE_SEL,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_TRACE_MODE_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_TRACE_MODE_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_TRACE_MODE_SEL]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_TRACE_MODE_SEL]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_TRACE_MODE_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_TRACE_MODE_SEL,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_TRACE_MODE_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_TRACE_MODE_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_TRACE_MODE_SEL]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_MARK_TRACE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_MARK_TRACE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_MARK_TRACE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_MARK_TRACE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_MARK_TRACE]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_MARK_TRACE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_MARK_TRACE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_MARK_TRACE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_MARK_TRACE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_MARK_TRACE]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_MARK_TRACE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_MARK_TRACE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_MARK_TRACE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_MARK_TRACE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_MARK_TRACE]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_MARK_TRACE]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_MARK_TRACE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_MARK_TRACE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_MARK_TRACE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_MARK_TRACE]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_MARK_TRACE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_MARK_TRACE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_MARK_TRACE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_MARK_TRACE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_MARK_TRACE]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_MARK_TRACE]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_MARK_TRACE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_MARK_TRACE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_MARK_TRACE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_MARK_TRACE]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_EE_TRACE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_EE_TRACE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_EE_TRACE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_EE_TRACE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_EE_TRACE]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_EE_TRACE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_EE_TRACE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_EE_TRACE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_EE_TRACE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_EE_TRACE]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_EE_TRACE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_EE_TRACE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_EE_TRACE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_EE_TRACE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_EE_TRACE]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_EE_TRACE]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_EE_TRACE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_EE_TRACE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_EE_TRACE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_EE_TRACE]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_EE_TRACE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_EE_TRACE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_EE_TRACE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_EE_TRACE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_EE_TRACE]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_EE_TRACE]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_EE_TRACE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_EE_TRACE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_EE_TRACE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_EN_EE_TRACE]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_RESERVED14_15]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_RESERVED14_15(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_RESERVED14_15,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_RESERVED14_15_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_RESERVED14_15 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_RESERVED14_15]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_RESERVED14_15]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_RESERVED14_15(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_RESERVED14_15,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_RESERVED14_15_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_RESERVED14_15 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_RESERVED14_15]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_RESERVED14_15]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_RESERVED14_15(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_RESERVED14_15,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_RESERVED14_15_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_RESERVED14_15 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_RESERVED14_15]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_FIR_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_FIR_TRIGGER(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_FIR_TRIGGER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_FIR_TRIGGER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_FIR_TRIGGER]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_FIR_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_FIR_TRIGGER(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_FIR_TRIGGER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_FIR_TRIGGER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_FIR_TRIGGER]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_FIR_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_FIR_TRIGGER(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_FIR_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_FIR_TRIGGER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_FIR_TRIGGER]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_FIR_TRIGGER]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_FIR_TRIGGER(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_FIR_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_FIR_TRIGGER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_FIR_TRIGGER]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_FIR_TRIGGER]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_FIR_TRIGGER(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_FIR_TRIGGER,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_FIR_TRIGGER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_FIR_TRIGGER]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_FIR_TRIGGER]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_FIR_TRIGGER(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_FIR_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_FIR_TRIGGER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_FIR_TRIGGER]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_SPARE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_SPARE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_SPARE,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_SPARE]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_SPARE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_SPARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_SPARE,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_SPARE]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_SPARE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_SPARE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_SPARE,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_SPARE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_SPARE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_SPARE]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_TRACE_DATA_SEL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_TRACE_DATA_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_TRACE_DATA_SEL,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_TRACE_DATA_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_TRACE_DATA_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_TRACE_DATA_SEL]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_TRACE_DATA_SEL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_TRACE_DATA_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_TRACE_DATA_SEL,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_TRACE_DATA_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_TRACE_DATA_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_TRACE_DATA_SEL]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_TRACE_DATA_SEL]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_TRACE_DATA_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_TRACE_DATA_SEL,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_TRACE_DATA_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_TRACE_DATA_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEDBG_TRACE_DATA_SEL]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACU]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACU(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACU;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACU]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACU]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACU(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACU;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACU, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACU]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACU]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACU(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACU));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACU, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACU]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACU_ICACHE_INFO_UPPER]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACU_ICACHE_INFO_UPPER(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACU));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACU_ICACHE_INFO_UPPER,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACU_ICACHE_INFO_UPPER_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACU_ICACHE_INFO_UPPER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACU_ICACHE_INFO_UPPER]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACU_ICACHE_INFO_UPPER]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACU_ICACHE_INFO_UPPER(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACU));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACU_ICACHE_INFO_UPPER,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACU_ICACHE_INFO_UPPER_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACU_ICACHE_INFO_UPPER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACU_ICACHE_INFO_UPPER]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACU_ICACHE_INFO_UPPER]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACU_ICACHE_INFO_UPPER(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACU));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACU_ICACHE_INFO_UPPER,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACU_ICACHE_INFO_UPPER_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACU_ICACHE_INFO_UPPER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIICACU_ICACHE_INFO_UPPER]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HS]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HS]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HS]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HS]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HS]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HS]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HS]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HC,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HC]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HC,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HC]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HC]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HC,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HC]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HCP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HCP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HCP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HCP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HCP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HCP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HCP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HCP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HCP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HCP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HCP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HCP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HCP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HCP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HCP]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HCP]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HCP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HCP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HCP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HCP]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HCP]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HCP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HCP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HCP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HCP]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HCP]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HCP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HCP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HCP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_HCP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RIP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RIP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RIP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RIP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RIP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RIP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RIP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RIP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RIP]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RIP]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RIP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RIP]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RIP]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RIP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RIP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RIP]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RIP]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RIP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RIP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SIP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SIP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SIP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SIP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SIP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SIP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SIP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SIP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SIP]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SIP]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SIP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SIP]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SIP]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SIP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SIP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SIP]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SIP]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SIP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SIP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRAP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRAP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRAP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRAP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRAP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRAP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRAP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRAP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRAP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRAP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRAP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRAP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRAP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRAP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRAP]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRAP]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRAP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRAP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRAP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRAP]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRAP]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRAP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRAP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRAP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRAP]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRAP]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRAP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRAP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRAP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRAP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_IAC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_IAC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_IAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_IAC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_IAC]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_IAC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_IAC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_IAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_IAC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_IAC]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_IAC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_IAC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_IAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_IAC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_IAC]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_IAC]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_IAC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_IAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_IAC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_IAC]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_IAC]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_IAC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_IAC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_IAC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_IAC]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_IAC]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_IAC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_IAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_IAC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_IAC]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SIB]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SIB(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SIB,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SIB_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SIB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SIB]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SIB]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SIB(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SIB,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SIB_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SIB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SIB]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SIB]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SIB(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SIB,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SIB_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SIB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SIB]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RDAC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RDAC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RDAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RDAC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RDAC]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RDAC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RDAC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RDAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RDAC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RDAC]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RDAC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RDAC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RDAC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RDAC]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RDAC]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RDAC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RDAC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RDAC]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RDAC]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RDAC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RDAC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RDAC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RDAC]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RDAC]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RDAC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RDAC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_RDAC]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WDAC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WDAC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WDAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WDAC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WDAC]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WDAC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WDAC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WDAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WDAC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WDAC]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WDAC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WDAC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WDAC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WDAC]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WDAC]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WDAC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WDAC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WDAC]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WDAC]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WDAC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WDAC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WDAC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WDAC]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WDAC]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WDAC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WDAC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WDAC]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WS]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WS]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WS]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WS]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WS]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WS]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_WS]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRH(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRH]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRH(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRH]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRH]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRH]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRH]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRH]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRH(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRH]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRH]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_TRH]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SMS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SMS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SMS,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SMS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SMS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SMS]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SMS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SMS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SMS,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SMS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SMS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SMS]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SMS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SMS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SMS,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SMS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SMS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_SMS]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_LP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_LP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_LP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_LP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_LP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_LP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_LP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_LP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_LP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_LP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_LP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_LP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_LP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_LP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_LP]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_LP]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_LP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_LP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_LP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_LP]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_LP]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_LP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_LP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_LP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_LP]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_LP]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_LP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_LP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_LP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_LP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_EP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_EP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_EP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_EP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_EP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_EP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_EP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_EP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_EP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_EP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_EP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_EP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_EP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_EP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_EP]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_EP]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_EP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_EP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_EP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_EP]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_EP]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_EP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_EP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_EP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_EP]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_EP]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_EP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_EP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_EP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_EP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_PTR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_PTR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_PTR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_PTR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_PTR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_PTR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_PTR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_PTR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_PTR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_PTR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_PTR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_PTR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_PTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_PTR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_PTR]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_PTR]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_PTR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_PTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_PTR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_PTR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_PTR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_PTR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_PTR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_PTR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_PTR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_PTR]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_PTR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_PTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_PTR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_PTR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_ST]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_ST(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_ST,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_ST chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_ST]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_ST]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_ST(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_ST,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_ST chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_ST]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_ST]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_ST(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_ST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_ST chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_ST]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_ST]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_ST(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_ST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_ST chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_ST]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_ST]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_ST(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_ST,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_ST chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_ST]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_ST]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_ST(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_ST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_ST chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_ST]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_MFE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_MFE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_MFE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_MFE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_MFE]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_MFE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_MFE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_MFE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_MFE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_MFE]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_MFE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_MFE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_MFE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_MFE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_MFE]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_MFE]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_MFE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_MFE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_MFE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_MFE]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_MFE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_MFE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_MFE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_MFE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_MFE]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_MFE]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_MFE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_MFE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_MFE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_MFE]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_MCS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_MCS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_MCS,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_MCS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_MCS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_MCS]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_MCS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_MCS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_MCS,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_MCS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_MCS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_MCS]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_MCS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_MCS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_MCS,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_MCS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_MCS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_XSR_MCS]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_SPRG0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_SPRG0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_SPRG0,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_SPRG0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_SPRG0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_SPRG0]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_SPRG0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_SPRG0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_SPRG0,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_SPRG0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_SPRG0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_SPRG0]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_SPRG0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_SPRG0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_SPRG0,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_SPRG0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_SPRG0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMDBG_SPRG0]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEOXIXCR_OCB_OCI_GPEOXIXCR_XCR]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_TAG_ADDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_TAG_ADDR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_TAG_ADDR,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_TAG_ADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_TAG_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_TAG_ADDR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_TAG_ADDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_TAG_ADDR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_TAG_ADDR,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_TAG_ADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_TAG_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_TAG_ADDR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_TAG_ADDR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_TAG_ADDR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_TAG_ADDR,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_TAG_ADDR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_TAG_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_TAG_ADDR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_ERR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_VALID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_VALID(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_VALID,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_VALID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_VALID]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_VALID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_VALID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_VALID,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_VALID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_VALID]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_VALID]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_VALID(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_VALID,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_VALID_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_VALID]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_VALID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_VALID(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_VALID,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_VALID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_VALID]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_VALID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_VALID(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_VALID,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_VALID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_VALID]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_VALID]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_VALID(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_VALID,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_VALID_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_VALID]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE_PTR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_LINE2_ERR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICAC_ICACHE_PREFETCH_PENDING]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR_OXIXCR_XCR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR_OXIXCR_XCR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR_OXIXCR_XCR,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR_OXIXCR_XCR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR_OXIXCR_XCR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR_OXIXCR_XCR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR_OXIXCR_XCR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR_OXIXCR_XCR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR_OXIXCR_XCR,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR_OXIXCR_XCR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR_OXIXCR_XCR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR_OXIXCR_XCR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR_OXIXCR_XCR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR_OXIXCR_XCR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR_OXIXCR_XCR,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR_OXIXCR_XCR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR_OXIXCR_XCR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR_OXIXCR_XCR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR_XICTR_CTR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR_XICTR_CTR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR_XICTR_CTR,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR_XICTR_CTR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR_XICTR_CTR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR_XICTR_CTR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR_XICTR_CTR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR_XICTR_CTR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR_XICTR_CTR,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR_XICTR_CTR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR_XICTR_CTR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR_XICTR_CTR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR_XICTR_CTR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR_XICTR_CTR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR_XICTR_CTR,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR_XICTR_CTR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR_XICTR_CTR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIXCR_XICTR_CTR]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_BAR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_BAR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_BAR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_BAR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_BAR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_BAR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_BAR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_BAR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_BAR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_BAR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_BAR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_BAR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_BAR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_BAR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_BAR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_BAR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_BAR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_BAR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_SIZE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_SIZE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_SIZE,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_SIZE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_SIZE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_SIZE]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_SIZE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_SIZE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_SIZE,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_SIZE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_SIZE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_SIZE]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_SIZE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_SIZE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_SIZE,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_SIZE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_SIZE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPESWPR0_SIZE]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HS]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HS]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HS]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HS]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HS]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HS]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HS]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HC,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HC]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HC,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HC]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HC]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HC,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HC]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HCP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HCP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HCP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HCP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HCP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HCP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HCP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HCP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HCP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HCP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HCP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HCP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HCP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HCP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HCP]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HCP]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HCP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HCP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HCP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HCP]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HCP]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HCP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HCP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HCP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HCP]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HCP]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HCP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HCP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HCP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_HCP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RIP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RIP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RIP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RIP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RIP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RIP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RIP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RIP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RIP]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RIP]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RIP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RIP]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RIP]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RIP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RIP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RIP]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RIP]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RIP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RIP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SIP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SIP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SIP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SIP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SIP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SIP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SIP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SIP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SIP]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SIP]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SIP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SIP]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SIP]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SIP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SIP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SIP]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SIP]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SIP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SIP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRAP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRAP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRAP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRAP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRAP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRAP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRAP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRAP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRAP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRAP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRAP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRAP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRAP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRAP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRAP]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRAP]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRAP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRAP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRAP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRAP]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRAP]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRAP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRAP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRAP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRAP]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRAP]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRAP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRAP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRAP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRAP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_IAC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_IAC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_IAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_IAC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_IAC]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_IAC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_IAC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_IAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_IAC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_IAC]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_IAC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_IAC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_IAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_IAC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_IAC]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_IAC]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_IAC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_IAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_IAC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_IAC]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_IAC]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_IAC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_IAC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_IAC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_IAC]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_IAC]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_IAC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_IAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_IAC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_IAC]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SIB]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SIB(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SIB,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SIB_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SIB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SIB]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SIB]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SIB(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SIB,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SIB_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SIB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SIB]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SIB]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SIB(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SIB,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SIB_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SIB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SIB]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RDAC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RDAC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RDAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RDAC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RDAC]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RDAC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RDAC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RDAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RDAC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RDAC]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RDAC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RDAC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RDAC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RDAC]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RDAC]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RDAC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RDAC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RDAC]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RDAC]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RDAC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RDAC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RDAC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RDAC]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RDAC]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RDAC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RDAC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_RDAC]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WDAC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WDAC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WDAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WDAC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WDAC]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WDAC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WDAC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WDAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WDAC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WDAC]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WDAC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WDAC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WDAC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WDAC]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WDAC]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WDAC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WDAC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WDAC]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WDAC]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WDAC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WDAC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WDAC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WDAC]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WDAC]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WDAC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WDAC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WDAC]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WS]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WS]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WS]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WS]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WS]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WS]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_WS]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRH(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRH]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRH(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRH]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRH]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRH]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRH]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRH]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRH(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRH]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRH]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_TRH]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SMS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SMS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SMS,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SMS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SMS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SMS]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SMS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SMS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SMS,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SMS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SMS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SMS]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SMS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SMS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SMS,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SMS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SMS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_SMS]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_LP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_LP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_LP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_LP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_LP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_LP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_LP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_LP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_LP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_LP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_LP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_LP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_LP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_LP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_LP]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_LP]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_LP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_LP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_LP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_LP]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_LP]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_LP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_LP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_LP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_LP]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_LP]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_LP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_LP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_LP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_LP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_EP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_EP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_EP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_EP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_EP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_EP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_EP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_EP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_EP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_EP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_EP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_EP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_EP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_EP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_EP]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_EP]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_EP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_EP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_EP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_EP]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_EP]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_EP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_EP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_EP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_EP]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_EP]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_EP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_EP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_EP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_EP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_PTR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_PTR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_PTR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_PTR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_PTR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_PTR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_PTR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_PTR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_PTR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_PTR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_PTR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_PTR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_PTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_PTR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_PTR]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_PTR]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_PTR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_PTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_PTR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_PTR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_PTR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_PTR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_PTR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_PTR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_PTR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_PTR]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_PTR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_PTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_PTR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_PTR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_ST]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_ST(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_ST,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_ST chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_ST]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_ST]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_ST(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_ST,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_ST chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_ST]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_ST]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_ST(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_ST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_ST chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_ST]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_ST]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_ST(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_ST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_ST chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_ST]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_ST]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_ST(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_ST,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_ST chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_ST]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_ST]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_ST(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_ST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_ST chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_ST]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_MFE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_MFE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_MFE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_MFE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_MFE]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_MFE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_MFE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_MFE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_MFE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_MFE]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_MFE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_MFE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_MFE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_MFE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_MFE]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_MFE]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_MFE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_MFE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_MFE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_MFE]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_MFE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_MFE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_MFE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_MFE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_MFE]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_MFE]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_MFE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_MFE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_MFE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_MFE]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_MCS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_MCS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_MCS,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_MCS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_MCS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_MCS]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_MCS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_MCS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_MCS,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_MCS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_MCS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_MCS]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_MCS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_MCS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_MCS,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_MCS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_MCS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_XSR_MCS]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_OCB_OCI_GPEXIIAR_IAR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_OCB_OCI_GPEXIIAR_IAR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_OCB_OCI_GPEXIIAR_IAR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_OCB_OCI_GPEXIIAR_IAR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_OCB_OCI_GPEXIIAR_IAR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_OCB_OCI_GPEXIIAR_IAR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_OCB_OCI_GPEXIIAR_IAR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_OCB_OCI_GPEXIIAR_IAR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_OCB_OCI_GPEXIIAR_IAR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_OCB_OCI_GPEXIIAR_IAR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_OCB_OCI_GPEXIIAR_IAR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_OCB_OCI_GPEXIIAR_IAR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_OCB_OCI_GPEXIIAR_IAR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_OCB_OCI_GPEXIIAR_IAR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_OCB_OCI_GPEXIIAR_IAR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_OCB_OCI_GPEXIIAR_IAR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_OCB_OCI_GPEXIIAR_IAR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIDBGPRO_OCB_OCI_GPEXIIAR_IAR]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1_OCB_OCI_GPEXIVDR0_GPR1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1_OCB_OCI_GPEXIVDR0_GPR1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1_OCB_OCI_GPEXIVDR0_GPR1,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1_OCB_OCI_GPEXIVDR0_GPR1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1_OCB_OCI_GPEXIVDR0_GPR1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1_OCB_OCI_GPEXIVDR0_GPR1]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1_OCB_OCI_GPEXIVDR0_GPR1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1_OCB_OCI_GPEXIVDR0_GPR1(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1_OCB_OCI_GPEXIVDR0_GPR1,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1_OCB_OCI_GPEXIVDR0_GPR1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1_OCB_OCI_GPEXIVDR0_GPR1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1_OCB_OCI_GPEXIVDR0_GPR1]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1_OCB_OCI_GPEXIVDR0_GPR1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1_OCB_OCI_GPEXIVDR0_GPR1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1_OCB_OCI_GPEXIVDR0_GPR1,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1_OCB_OCI_GPEXIVDR0_GPR1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1_OCB_OCI_GPEXIVDR0_GPR1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR1_OCB_OCI_GPEXIVDR0_GPR1]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BUSY]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>&
CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>&
GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BYTE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BYTE_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BYTE_ENABLE,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BYTE_ENABLE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BYTE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BYTE_ENABLE]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BYTE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BYTE_ENABLE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BYTE_ENABLE,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BYTE_ENABLE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BYTE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BYTE_ENABLE]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BYTE_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BYTE_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BYTE_ENABLE,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BYTE_ENABLE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BYTE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_BYTE_ENABLE]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_LINE_MODE]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_MEMORY_INFO_LOWER_PART1]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_ERROR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_ERROR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_ERROR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_ERROR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_ERROR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_ERROR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_ERROR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_ERROR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_ERROR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_ERROR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_ERROR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_ERROR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEML_OCB_OCI_GPEXIMEM_MEM_DATAOP_PENDING]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU_OCB_OCI_GPEXIMEM_MEM_ADDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU_OCB_OCI_GPEXIMEM_MEM_ADDR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU_OCB_OCI_GPEXIMEM_MEM_ADDR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU_OCB_OCI_GPEXIMEM_MEM_ADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU_OCB_OCI_GPEXIMEM_MEM_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU_OCB_OCI_GPEXIMEM_MEM_ADDR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU_OCB_OCI_GPEXIMEM_MEM_ADDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU_OCB_OCI_GPEXIMEM_MEM_ADDR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU_OCB_OCI_GPEXIMEM_MEM_ADDR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU_OCB_OCI_GPEXIMEM_MEM_ADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU_OCB_OCI_GPEXIMEM_MEM_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU_OCB_OCI_GPEXIMEM_MEM_ADDR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU_OCB_OCI_GPEXIMEM_MEM_ADDR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU_OCB_OCI_GPEXIMEM_MEM_ADDR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU_OCB_OCI_GPEXIMEM_MEM_ADDR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU_OCB_OCI_GPEXIMEM_MEM_ADDR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU_OCB_OCI_GPEXIMEM_MEM_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIMEMU_OCB_OCI_GPEXIMEM_MEM_ADDR]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_STORE_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_STORE_ADDRESS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_STORE_ADDRESS,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_STORE_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_STORE_ADDRESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_STORE_ADDRESS]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_STORE_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_STORE_ADDRESS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_STORE_ADDRESS,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_STORE_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_STORE_ADDRESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_STORE_ADDRESS]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_STORE_ADDRESS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_STORE_ADDRESS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_STORE_ADDRESS,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_STORE_ADDRESS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_STORE_ADDRESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_STORE_ADDRESS]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>&
SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>&
CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>&
GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_OCB_OCI_GPEXIMEM_MEM_IMPRECISE_ERROR_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_BYTE_VALID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_BYTE_VALID(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_BYTE_VALID,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_BYTE_VALID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_BYTE_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_BYTE_VALID]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_BYTE_VALID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_BYTE_VALID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_BYTE_VALID,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_BYTE_VALID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_BYTE_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_BYTE_VALID]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_BYTE_VALID]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_BYTE_VALID(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_BYTE_VALID,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_BYTE_VALID_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_BYTE_VALID chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_BYTE_VALID]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISGB_SGB_FLUSH_PENDING]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISRR0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISRR0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISRR0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISRR0]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISRR0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISRR0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISRR0;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISRR0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISRR0]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISRR0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISRR0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISRR0));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISRR0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISRR0]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISRR0_OCB_OCI_GPEXIDBGINF_SRR0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISRR0_OCB_OCI_GPEXIDBGINF_SRR0(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISRR0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISRR0_OCB_OCI_GPEXIDBGINF_SRR0,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISRR0_OCB_OCI_GPEXIDBGINF_SRR0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISRR0_OCB_OCI_GPEXIDBGINF_SRR0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISRR0_OCB_OCI_GPEXIDBGINF_SRR0]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISRR0_OCB_OCI_GPEXIDBGINF_SRR0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISRR0_OCB_OCI_GPEXIDBGINF_SRR0(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISRR0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISRR0_OCB_OCI_GPEXIDBGINF_SRR0,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISRR0_OCB_OCI_GPEXIDBGINF_SRR0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISRR0_OCB_OCI_GPEXIDBGINF_SRR0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISRR0_OCB_OCI_GPEXIDBGINF_SRR0]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISRR0_OCB_OCI_GPEXIDBGINF_SRR0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISRR0_OCB_OCI_GPEXIDBGINF_SRR0(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISRR0));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISRR0_OCB_OCI_GPEXIDBGINF_SRR0,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISRR0_OCB_OCI_GPEXIDBGINF_SRR0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISRR0_OCB_OCI_GPEXIDBGINF_SRR0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXISRR0_OCB_OCI_GPEXIDBGINF_SRR0]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_0,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_0]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_0,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_0]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_0,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_0]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_1,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_1]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_1,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_1]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_1,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDR0_1]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HS]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HS]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HS]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HS]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HS]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HS]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HS]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HC,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HC]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HC,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HC]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HC]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HC,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HC]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HCP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HCP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HCP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HCP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HCP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HCP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HCP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HCP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HCP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HCP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HCP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HCP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HCP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HCP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HCP]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HCP]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HCP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HCP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HCP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HCP]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HCP]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HCP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HCP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HCP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HCP]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HCP]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HCP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HCP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HCP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_HCP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RIP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RIP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RIP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RIP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RIP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RIP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RIP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RIP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RIP]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RIP]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RIP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RIP]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RIP]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RIP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RIP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RIP]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RIP]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RIP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RIP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SIP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SIP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SIP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SIP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SIP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SIP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SIP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SIP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SIP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SIP]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SIP]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SIP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SIP]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SIP]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SIP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SIP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SIP]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SIP]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SIP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SIP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SIP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SIP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRAP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRAP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRAP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRAP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRAP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRAP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRAP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRAP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRAP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRAP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRAP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRAP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRAP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRAP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRAP]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRAP]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRAP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRAP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRAP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRAP]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRAP]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRAP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRAP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRAP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRAP]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRAP]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRAP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRAP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRAP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRAP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_IAC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_IAC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_IAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_IAC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_IAC]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_IAC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_IAC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_IAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_IAC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_IAC]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_IAC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_IAC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_IAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_IAC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_IAC]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_IAC]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_IAC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_IAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_IAC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_IAC]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_IAC]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_IAC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_IAC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_IAC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_IAC]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_IAC]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_IAC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_IAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_IAC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_IAC]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SIB]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SIB(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SIB,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SIB_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SIB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SIB]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SIB]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SIB(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SIB,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SIB_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SIB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SIB]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SIB]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SIB(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SIB,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SIB_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SIB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SIB]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RDAC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RDAC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RDAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RDAC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RDAC]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RDAC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RDAC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RDAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RDAC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RDAC]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RDAC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RDAC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RDAC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RDAC]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RDAC]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RDAC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RDAC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RDAC]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RDAC]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RDAC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RDAC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RDAC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RDAC]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RDAC]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RDAC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RDAC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_RDAC]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WDAC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WDAC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WDAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WDAC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WDAC]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WDAC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WDAC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WDAC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WDAC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WDAC]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WDAC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WDAC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WDAC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WDAC]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WDAC]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WDAC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WDAC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WDAC]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WDAC]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WDAC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WDAC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WDAC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WDAC]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WDAC]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WDAC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WDAC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WDAC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WDAC]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WS]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WS]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WS]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WS]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WS]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WS]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_WS]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRH(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRH]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRH(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRH]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRH]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRH]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRH]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRH]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRH(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRH]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRH]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_TRH]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SMS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SMS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SMS,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SMS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SMS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SMS]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SMS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SMS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SMS,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SMS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SMS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SMS]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SMS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SMS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SMS,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SMS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SMS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_SMS]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_LP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_LP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_LP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_LP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_LP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_LP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_LP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_LP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_LP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_LP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_LP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_LP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_LP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_LP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_LP]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_LP]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_LP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_LP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_LP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_LP]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_LP]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_LP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_LP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_LP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_LP]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_LP]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_LP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_LP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_LP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_LP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_EP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_EP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_EP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_EP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_EP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_EP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_EP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_EP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_EP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_EP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_EP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_EP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_EP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_EP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_EP]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_EP]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_EP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_EP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_EP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_EP]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_EP]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_EP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_EP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_EP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_EP]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_EP]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_EP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_EP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_EP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_EP]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_PTR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_PTR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_PTR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_PTR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_PTR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_PTR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_PTR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_PTR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_PTR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_PTR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_PTR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_PTR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_PTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_PTR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_PTR]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_PTR]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_PTR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_PTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_PTR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_PTR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_PTR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_PTR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_PTR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_PTR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_PTR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_PTR]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_PTR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_PTR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_PTR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_PTR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_ST]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_ST(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_ST,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_ST chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_ST]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_ST]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_ST(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_ST,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_ST chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_ST]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_ST]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_ST(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_ST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_ST chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_ST]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_ST]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_ST(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_ST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_ST chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_ST]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_ST]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_ST(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_ST,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_ST chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_ST]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_ST]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_ST(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_ST>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_ST chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_ST]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_MFE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_MFE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_MFE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_MFE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_MFE]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_MFE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_MFE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_MFE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_MFE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_MFE]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_MFE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_MFE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_MFE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_MFE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_MFE]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_MFE]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_MFE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_MFE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_MFE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_MFE]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_MFE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_MFE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_MFE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_MFE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_MFE]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_MFE]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_MFE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_MFE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_MFE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_MFE]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_MCS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_MCS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_MCS,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_MCS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_MCS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_MCS]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_MCS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_MCS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_MCS,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_MCS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_MCS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_MCS]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_MCS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_MCS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_MCS,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_MCS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_MCS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIXSR_MCS]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_0,
           TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_0,
           TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_0,
           TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_1,
           TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_1,
           TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_1,
           TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_2,
           TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_2,
           TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_2]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_2,
           TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_3,
           TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_3,
           TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_3]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_3]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_3,
           TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA0_3]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_A]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_A(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_A]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_A]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_A]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_A]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_A(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_A]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_A]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_A(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_A]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_A]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_A(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_A,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_A]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_A]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_A(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_A]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_B]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_B(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_B]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_B]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_B]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_B]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_B]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_B]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_B]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_B]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_B(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_B,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_B]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_B]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_B(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_BRIDGE_ENABLE_2_B]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_RESERVED_2_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_RESERVED_2_3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_RESERVED_2_3,
           TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_RESERVED_2_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_RESERVED_2_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_RESERVED_2_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_RESERVED_2_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_RESERVED_2_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_RESERVED_2_3,
           TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_RESERVED_2_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_RESERVED_2_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_RESERVED_2_3]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_RESERVED_2_3]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_RESERVED_2_3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_RESERVED_2_3,
           TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_RESERVED_2_3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_RESERVED_2_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_RESERVED_2_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_CLOCK_DIVIDER_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_CLOCK_DIVIDER_2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_CLOCK_DIVIDER_2,
           TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_CLOCK_DIVIDER_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_CLOCK_DIVIDER_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_CLOCK_DIVIDER_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_CLOCK_DIVIDER_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_CLOCK_DIVIDER_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_CLOCK_DIVIDER_2,
           TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_CLOCK_DIVIDER_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_CLOCK_DIVIDER_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_CLOCK_DIVIDER_2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_CLOCK_DIVIDER_2]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_CLOCK_DIVIDER_2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_CLOCK_DIVIDER_2,
           TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_CLOCK_DIVIDER_2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_CLOCK_DIVIDER_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_CLOCK_DIVIDER_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2SCTRL12_RESERVED_14_16]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2SCTRL12_RESERVED_14_16(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2SCTRL12_RESERVED_14_16,
           TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2SCTRL12_RESERVED_14_16_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2SCTRL12_RESERVED_14_16 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2SCTRL12_RESERVED_14_16]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2SCTRL12_RESERVED_14_16]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2SCTRL12_RESERVED_14_16(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2SCTRL12_RESERVED_14_16,
           TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2SCTRL12_RESERVED_14_16_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2SCTRL12_RESERVED_14_16 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2SCTRL12_RESERVED_14_16]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2SCTRL12_RESERVED_14_16]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2SCTRL12_RESERVED_14_16(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2SCTRL12_RESERVED_14_16,
           TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2SCTRL12_RESERVED_14_16_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2SCTRL12_RESERVED_14_16 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2SCTRL12_RESERVED_14_16]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_NR_OF_FRAMES_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_NR_OF_FRAMES_2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_NR_OF_FRAMES_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_NR_OF_FRAMES_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_NR_OF_FRAMES_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_NR_OF_FRAMES_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_NR_OF_FRAMES_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_NR_OF_FRAMES_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_NR_OF_FRAMES_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_NR_OF_FRAMES_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_NR_OF_FRAMES_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_NR_OF_FRAMES_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_NR_OF_FRAMES_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_NR_OF_FRAMES_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_NR_OF_FRAMES_2]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_NR_OF_FRAMES_2]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_NR_OF_FRAMES_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_NR_OF_FRAMES_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_NR_OF_FRAMES_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_NR_OF_FRAMES_2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_NR_OF_FRAMES_2]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_NR_OF_FRAMES_2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_NR_OF_FRAMES_2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_NR_OF_FRAMES_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_NR_OF_FRAMES_2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_NR_OF_FRAMES_2]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_NR_OF_FRAMES_2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_NR_OF_FRAMES_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_NR_OF_FRAMES_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_O2S_NR_OF_FRAMES_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_RESERVED_18_19]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_RESERVED_18_19(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_RESERVED_18_19,
           TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_RESERVED_18_19_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_RESERVED_18_19 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_RESERVED_18_19]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_RESERVED_18_19]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_RESERVED_18_19(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_RESERVED_18_19,
           TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_RESERVED_18_19_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_RESERVED_18_19 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_RESERVED_18_19]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_RESERVED_18_19]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_RESERVED_18_19(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_RESERVED_18_19,
           TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_RESERVED_18_19_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_RESERVED_18_19 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_RESERVED_18_19]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_SLAVE_DATA_SAMPLE_DELAY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_SLAVE_DATA_SAMPLE_DELAY(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_SLAVE_DATA_SAMPLE_DELAY,
           TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_SLAVE_DATA_SAMPLE_DELAY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_SLAVE_DATA_SAMPLE_DELAY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_SLAVE_DATA_SAMPLE_DELAY]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_SLAVE_DATA_SAMPLE_DELAY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_SLAVE_DATA_SAMPLE_DELAY(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_SLAVE_DATA_SAMPLE_DELAY,
           TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_SLAVE_DATA_SAMPLE_DELAY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_SLAVE_DATA_SAMPLE_DELAY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_SLAVE_DATA_SAMPLE_DELAY]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_SLAVE_DATA_SAMPLE_DELAY]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_SLAVE_DATA_SAMPLE_DELAY(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_SLAVE_DATA_SAMPLE_DELAY,
           TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_SLAVE_DATA_SAMPLE_DELAY_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_SLAVE_DATA_SAMPLE_DELAY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL12_SLAVE_DATA_SAMPLE_DELAY]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_O2SST2B(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_O2SST2B;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_O2SST2B(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_O2SST2B;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_O2SST2B, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_O2SST2B(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2B));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_O2SST2B, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ONGOING_2B]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ONGOING_2B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2B));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ONGOING_2B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ONGOING_2B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ONGOING_2B]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ONGOING_2B]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ONGOING_2B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2B));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ONGOING_2B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ONGOING_2B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ONGOING_2B]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ONGOING_2B]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ONGOING_2B(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2B));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ONGOING_2B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ONGOING_2B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ONGOING_2B]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ONGOING_2B]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ONGOING_2B(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2B));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ONGOING_2B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ONGOING_2B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ONGOING_2B]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ONGOING_2B]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ONGOING_2B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2B));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ONGOING_2B,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ONGOING_2B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ONGOING_2B]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ONGOING_2B]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ONGOING_2B(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2B));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ONGOING_2B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ONGOING_2B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ONGOING_2B]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ST2B_RESERVED_1_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ST2B_RESERVED_1_4(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2B));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ST2B_RESERVED_1_4,
           TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ST2B_RESERVED_1_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ST2B_RESERVED_1_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ST2B_RESERVED_1_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ST2B_RESERVED_1_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ST2B_RESERVED_1_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2B));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ST2B_RESERVED_1_4,
           TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ST2B_RESERVED_1_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ST2B_RESERVED_1_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ST2B_RESERVED_1_4]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ST2B_RESERVED_1_4]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ST2B_RESERVED_1_4(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2B));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ST2B_RESERVED_1_4,
           TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ST2B_RESERVED_1_4_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ST2B_RESERVED_1_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ST2B_RESERVED_1_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B_WRITE_WHILE_BRIDGE_BUSY_ERR_2B]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SST2B_WRITE_WHILE_BRIDGE_BUSY_ERR_2B(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2B));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SST2B_WRITE_WHILE_BRIDGE_BUSY_ERR_2B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SST2B_WRITE_WHILE_BRIDGE_BUSY_ERR_2B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B_WRITE_WHILE_BRIDGE_BUSY_ERR_2B]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B_WRITE_WHILE_BRIDGE_BUSY_ERR_2B]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SST2B_WRITE_WHILE_BRIDGE_BUSY_ERR_2B(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2B));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SST2B_WRITE_WHILE_BRIDGE_BUSY_ERR_2B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SST2B_WRITE_WHILE_BRIDGE_BUSY_ERR_2B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B_WRITE_WHILE_BRIDGE_BUSY_ERR_2B]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B_WRITE_WHILE_BRIDGE_BUSY_ERR_2B]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SST2B_WRITE_WHILE_BRIDGE_BUSY_ERR_2B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2B));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_O2SST2B_WRITE_WHILE_BRIDGE_BUSY_ERR_2B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SST2B_WRITE_WHILE_BRIDGE_BUSY_ERR_2B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B_WRITE_WHILE_BRIDGE_BUSY_ERR_2B]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B_WRITE_WHILE_BRIDGE_BUSY_ERR_2B]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_O2SST2B_WRITE_WHILE_BRIDGE_BUSY_ERR_2B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2B));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_O2SST2B_WRITE_WHILE_BRIDGE_BUSY_ERR_2B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SST2B_WRITE_WHILE_BRIDGE_BUSY_ERR_2B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B_WRITE_WHILE_BRIDGE_BUSY_ERR_2B]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B_WRITE_WHILE_BRIDGE_BUSY_ERR_2B]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_O2SST2B_WRITE_WHILE_BRIDGE_BUSY_ERR_2B(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2B));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_O2SST2B_WRITE_WHILE_BRIDGE_BUSY_ERR_2B,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SST2B_WRITE_WHILE_BRIDGE_BUSY_ERR_2B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B_WRITE_WHILE_BRIDGE_BUSY_ERR_2B]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B_WRITE_WHILE_BRIDGE_BUSY_ERR_2B]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_O2SST2B_WRITE_WHILE_BRIDGE_BUSY_ERR_2B(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2B));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_O2SST2B_WRITE_WHILE_BRIDGE_BUSY_ERR_2B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SST2B_WRITE_WHILE_BRIDGE_BUSY_ERR_2B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B_WRITE_WHILE_BRIDGE_BUSY_ERR_2B]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ST2B_RESERVED_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ST2B_RESERVED_6(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2B));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ST2B_RESERVED_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ST2B_RESERVED_6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ST2B_RESERVED_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ST2B_RESERVED_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ST2B_RESERVED_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2B));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ST2B_RESERVED_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ST2B_RESERVED_6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ST2B_RESERVED_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ST2B_RESERVED_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ST2B_RESERVED_6(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2B));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ST2B_RESERVED_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ST2B_RESERVED_6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ST2B_RESERVED_6]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ST2B_RESERVED_6]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ST2B_RESERVED_6(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2B));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ST2B_RESERVED_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ST2B_RESERVED_6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ST2B_RESERVED_6]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ST2B_RESERVED_6]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ST2B_RESERVED_6(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2B));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ST2B_RESERVED_6,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ST2B_RESERVED_6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ST2B_RESERVED_6]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ST2B_RESERVED_6]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ST2B_RESERVED_6(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2B));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ST2B_RESERVED_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ST2B_RESERVED_6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B_ST2B_RESERVED_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B_FSM_ERR_2B]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SST2B_FSM_ERR_2B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2B));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SST2B_FSM_ERR_2B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SST2B_FSM_ERR_2B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B_FSM_ERR_2B]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B_FSM_ERR_2B]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SST2B_FSM_ERR_2B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2B));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SST2B_FSM_ERR_2B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SST2B_FSM_ERR_2B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B_FSM_ERR_2B]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B_FSM_ERR_2B]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SST2B_FSM_ERR_2B(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2B));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_O2SST2B_FSM_ERR_2B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SST2B_FSM_ERR_2B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B_FSM_ERR_2B]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B_FSM_ERR_2B]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_O2SST2B_FSM_ERR_2B(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2B));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_O2SST2B_FSM_ERR_2B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SST2B_FSM_ERR_2B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B_FSM_ERR_2B]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B_FSM_ERR_2B]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_O2SST2B_FSM_ERR_2B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2B));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_O2SST2B_FSM_ERR_2B,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SST2B_FSM_ERR_2B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B_FSM_ERR_2B]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B_FSM_ERR_2B]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_O2SST2B_FSM_ERR_2B(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2B));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_O2SST2B_FSM_ERR_2B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SST2B_FSM_ERR_2B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2B_FSM_ERR_2B]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1_REGION]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1_REGION(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1_REGION,
           TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1_REGION_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1_REGION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1_REGION]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1_REGION]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1_REGION(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1_REGION,
           TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1_REGION_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1_REGION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1_REGION]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1_REGION]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1_REGION(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1_REGION,
           TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1_REGION_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1_REGION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1_REGION]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1_BASE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1_BASE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1_BASE,
           TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1_BASE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1_BASE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1_BASE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1_BASE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1_BASE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1_BASE,
           TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1_BASE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1_BASE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1_BASE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1_BASE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1_BASE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1_BASE,
           TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1_BASE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1_BASE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR1_BASE]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_RW]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_RW;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_RW]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_RW, TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_RW]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_CLEAR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_CLEAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_CLEAR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_CLEAR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_CLEAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_CLEAR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_RW, TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_CLEAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_CLEAR]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_OR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_OR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_OR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_OR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_RW, TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_OR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_OCB_OCI_OCCFLG0_OCC_FLAGS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_OCB_OCI_OCCFLG0_OCC_FLAGS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_RW, TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_OCB_OCI_OCCFLG0_OCC_FLAGS,
           TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_OCB_OCI_OCCFLG0_OCC_FLAGS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_OCB_OCI_OCCFLG0_OCC_FLAGS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_OCB_OCI_OCCFLG0_OCC_FLAGS]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_OCB_OCI_OCCFLG0_OCC_FLAGS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_OCB_OCI_OCCFLG0_OCC_FLAGS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_RW, TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_OCB_OCI_OCCFLG0_OCC_FLAGS,
           TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_OCB_OCI_OCCFLG0_OCC_FLAGS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_OCB_OCI_OCCFLG0_OCC_FLAGS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_OCB_OCI_OCCFLG0_OCC_FLAGS]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_OCB_OCI_OCCFLG0_OCC_FLAGS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_OCB_OCI_OCCFLG0_OCC_FLAGS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_RW, TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_OCB_OCI_OCCFLG0_OCC_FLAGS,
           TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_OCB_OCI_OCCFLG0_OCC_FLAGS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_OCB_OCI_OCCFLG0_OCC_FLAGS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG0_OCB_OCI_OCCFLG0_OCC_FLAGS]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OHTMCR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OHTMCR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OHTMCR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OHTMCR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OHTMCR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OHTMCR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_SRC_SEL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_SRC_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_SRC_SEL,
           TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_SRC_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_SRC_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_SRC_SEL]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_SRC_SEL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_SRC_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_SRC_SEL,
           TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_SRC_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_SRC_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_SRC_SEL]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_SRC_SEL]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_SRC_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_SRC_SEL,
           TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_SRC_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_SRC_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_SRC_SEL]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_STOP]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_MARKER_SLAVE_ADRS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_MARKER_SLAVE_ADRS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_MARKER_SLAVE_ADRS,
           TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_MARKER_SLAVE_ADRS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_MARKER_SLAVE_ADRS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_MARKER_SLAVE_ADRS]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_MARKER_SLAVE_ADRS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_MARKER_SLAVE_ADRS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_MARKER_SLAVE_ADRS,
           TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_MARKER_SLAVE_ADRS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_MARKER_SLAVE_ADRS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_MARKER_SLAVE_ADRS]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_MARKER_SLAVE_ADRS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_MARKER_SLAVE_ADRS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_MARKER_SLAVE_ADRS,
           TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_MARKER_SLAVE_ADRS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_MARKER_SLAVE_ADRS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_MARKER_SLAVE_ADRS]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_MODE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_MODE,
           TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_MODE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_MODE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_MODE,
           TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_MODE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_MODE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_MODE,
           TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_MODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_MODE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_EN]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_EN,
           TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_EN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_EN]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_EN]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_EN,
           TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_EN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_EN]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_EN]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_EN,
           TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_EN_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_EN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_EN]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_GPE_SRC_SEL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_GPE_SRC_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_GPE_SRC_SEL,
           TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_GPE_SRC_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_GPE_SRC_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_GPE_SRC_SEL]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_GPE_SRC_SEL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_GPE_SRC_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_GPE_SRC_SEL,
           TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_GPE_SRC_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_GPE_SRC_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_GPE_SRC_SEL]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_GPE_SRC_SEL]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_GPE_SRC_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_GPE_SRC_SEL,
           TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_GPE_SRC_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_GPE_SRC_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_HTM_GPE_SRC_SEL]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_OCC]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_GPE3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OHTMCR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OHTMCR_EVENT2HALT_HALT_STATE]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OIRR0B_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OIRR0B_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OIRR0B_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OIRR0B_RW]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OIRR0B_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OIRR0B_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OIRR0B_RW;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OIRR0B_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OIRR0B_RW]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OIRR0B_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OIRR0B_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OIRR0B_RW, TP_TPCHIP_OCC_OCI_OCB_OIRR0B_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OIRR0B_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OIRR0B_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OIRR0B_RW]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OIRR0B_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OIRR0B_WO_CLEAR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OIRR0B_WO_CLEAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OIRR0B_WO_CLEAR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OIRR0B_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OIRR0B_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OIRR0B_WO_CLEAR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OIRR0B_WO_CLEAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OIRR0B_WO_CLEAR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OIRR0B_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OIRR0B_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OIRR0B_RW, TP_TPCHIP_OCC_OCI_OCB_OIRR0B_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OIRR0B_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OIRR0B_WO_CLEAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OIRR0B_WO_CLEAR]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OIRR0B_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OIRR0B_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OIRR0B_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OIRR0B_WO_OR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OIRR0B_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OIRR0B_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OIRR0B_WO_OR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OIRR0B_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OIRR0B_WO_OR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OIRR0B_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OIRR0B_WO_OR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OIRR0B_RW, TP_TPCHIP_OCC_OCI_OCB_OIRR0B_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OIRR0B_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OIRR0B_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OIRR0B_WO_OR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OIRR0B_OCB_OCI_OIRR0B_INTERRUPT_ROUTE_0_B]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OIRR0B_OCB_OCI_OIRR0B_INTERRUPT_ROUTE_0_B(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OIRR0B_RW, TP_TPCHIP_OCC_OCI_OCB_OIRR0B_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OIRR0B_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OIRR0B_OCB_OCI_OIRR0B_INTERRUPT_ROUTE_0_B,
           TP_TPCHIP_OCC_OCI_OCB_OIRR0B_OCB_OCI_OIRR0B_INTERRUPT_ROUTE_0_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OIRR0B_OCB_OCI_OIRR0B_INTERRUPT_ROUTE_0_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OIRR0B_OCB_OCI_OIRR0B_INTERRUPT_ROUTE_0_B]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OIRR0B_OCB_OCI_OIRR0B_INTERRUPT_ROUTE_0_B]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OIRR0B_OCB_OCI_OIRR0B_INTERRUPT_ROUTE_0_B(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OIRR0B_RW, TP_TPCHIP_OCC_OCI_OCB_OIRR0B_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OIRR0B_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OIRR0B_OCB_OCI_OIRR0B_INTERRUPT_ROUTE_0_B,
           TP_TPCHIP_OCC_OCI_OCB_OIRR0B_OCB_OCI_OIRR0B_INTERRUPT_ROUTE_0_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OIRR0B_OCB_OCI_OIRR0B_INTERRUPT_ROUTE_0_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OIRR0B_OCB_OCI_OIRR0B_INTERRUPT_ROUTE_0_B]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OIRR0B_OCB_OCI_OIRR0B_INTERRUPT_ROUTE_0_B]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OIRR0B_OCB_OCI_OIRR0B_INTERRUPT_ROUTE_0_B(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OIRR0B_RW, TP_TPCHIP_OCC_OCI_OCB_OIRR0B_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OIRR0B_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OIRR0B_OCB_OCI_OIRR0B_INTERRUPT_ROUTE_0_B,
           TP_TPCHIP_OCC_OCI_OCB_OIRR0B_OCB_OCI_OIRR0B_INTERRUPT_ROUTE_0_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OIRR0B_OCB_OCI_OIRR0B_INTERRUPT_ROUTE_0_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OIRR0B_OCB_OCI_OIRR0B_INTERRUPT_ROUTE_0_B]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR_OCB_OCI_OPIT0Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR_OCB_OCI_OPIT0Q2RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR_OCB_OCI_OPIT0Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR_OCB_OCI_OPIT0Q2RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR_OCB_OCI_OPIT0Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR_OCB_OCI_OPIT0Q2RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR_OCB_OCI_OPIT0Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR_OCB_OCI_OPIT0Q2RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR_OCB_OCI_OPIT0Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR_OCB_OCI_OPIT0Q2RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR_OCB_OCI_OPIT0Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR_OCB_OCI_OPIT0Q2RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR_OCB_OCI_OPIT0Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR_OCB_OCI_OPIT0Q2RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR_OCB_OCI_OPIT0Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR_OCB_OCI_OPIT0Q2RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR_OCB_OCI_OPIT0Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q2RR_OCB_OCI_OPIT0Q2RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7_OCB_OCI_OPIT0Q7RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7_OCB_OCI_OPIT0Q7RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7_OCB_OCI_OPIT0Q7RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7_OCB_OCI_OPIT0Q7RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7_OCB_OCI_OPIT0Q7RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7_OCB_OCI_OPIT0Q7RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7_OCB_OCI_OPIT0Q7RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7_OCB_OCI_OPIT0Q7RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7_OCB_OCI_OPIT0Q7RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7_OCB_OCI_OPIT0Q7RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7_OCB_OCI_OPIT0Q7RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7_OCB_OCI_OPIT0Q7RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7_OCB_OCI_OPIT0Q7RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7_OCB_OCI_OPIT0Q7RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7_OCB_OCI_OPIT0Q7RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7_OCB_OCI_OPIT0Q7RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7_OCB_OCI_OPIT0Q7RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q7_OCB_OCI_OPIT0Q7RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT1Q2RR_OCB_OCI_OPIT1Q2RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR_OCB_OCI_OPIT2Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR_OCB_OCI_OPIT2Q2RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR_OCB_OCI_OPIT2Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR_OCB_OCI_OPIT2Q2RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR_OCB_OCI_OPIT2Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR_OCB_OCI_OPIT2Q2RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR_OCB_OCI_OPIT2Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR_OCB_OCI_OPIT2Q2RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR_OCB_OCI_OPIT2Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR_OCB_OCI_OPIT2Q2RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR_OCB_OCI_OPIT2Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR_OCB_OCI_OPIT2Q2RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR_OCB_OCI_OPIT2Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR_OCB_OCI_OPIT2Q2RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR_OCB_OCI_OPIT2Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR_OCB_OCI_OPIT2Q2RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR_OCB_OCI_OPIT2Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT2Q2RR_OCB_OCI_OPIT2Q2RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q2RR_OCB_OCI_OPIT3Q2RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3_OCB_OCI_OPIT3Q3RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3_OCB_OCI_OPIT3Q3RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3_OCB_OCI_OPIT3Q3RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3_OCB_OCI_OPIT3Q3RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3_OCB_OCI_OPIT3Q3RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3_OCB_OCI_OPIT3Q3RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3_OCB_OCI_OPIT3Q3RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3_OCB_OCI_OPIT3Q3RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3_OCB_OCI_OPIT3Q3RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3_OCB_OCI_OPIT3Q3RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3_OCB_OCI_OPIT3Q3RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3_OCB_OCI_OPIT3Q3RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3_OCB_OCI_OPIT3Q3RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3_OCB_OCI_OPIT3Q3RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3_OCB_OCI_OPIT3Q3RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3_OCB_OCI_OPIT3Q3RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3_OCB_OCI_OPIT3Q3RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q3_OCB_OCI_OPIT3Q3RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q2RR_OCB_OCI_OPIT4Q2RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q5_OCB_OCI_OPIT4Q5RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR_OCB_OCI_OPIT5Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR_OCB_OCI_OPIT5Q2RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR_OCB_OCI_OPIT5Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR_OCB_OCI_OPIT5Q2RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR_OCB_OCI_OPIT5Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR_OCB_OCI_OPIT5Q2RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR_OCB_OCI_OPIT5Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR_OCB_OCI_OPIT5Q2RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR_OCB_OCI_OPIT5Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR_OCB_OCI_OPIT5Q2RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR_OCB_OCI_OPIT5Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR_OCB_OCI_OPIT5Q2RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR_OCB_OCI_OPIT5Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR_OCB_OCI_OPIT5Q2RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR_OCB_OCI_OPIT5Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR_OCB_OCI_OPIT5Q2RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR_OCB_OCI_OPIT5Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT5Q2RR_OCB_OCI_OPIT5Q2RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q2RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT6Q2RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT6Q2RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q2RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q2RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT6Q2RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT6Q2RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT6Q2RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q2RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q2RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT6Q2RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6Q2RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT6Q2RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q2RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q2RR_OCB_OCI_OPIT6Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT6Q2RR_OCB_OCI_OPIT6Q2RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6Q2RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT6Q2RR_OCB_OCI_OPIT6Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT6Q2RR_OCB_OCI_OPIT6Q2RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6Q2RR_OCB_OCI_OPIT6Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q2RR_OCB_OCI_OPIT6Q2RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q2RR_OCB_OCI_OPIT6Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT6Q2RR_OCB_OCI_OPIT6Q2RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6Q2RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT6Q2RR_OCB_OCI_OPIT6Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT6Q2RR_OCB_OCI_OPIT6Q2RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6Q2RR_OCB_OCI_OPIT6Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q2RR_OCB_OCI_OPIT6Q2RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q2RR_OCB_OCI_OPIT6Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT6Q2RR_OCB_OCI_OPIT6Q2RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT6Q2RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT6Q2RR_OCB_OCI_OPIT6Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT6Q2RR_OCB_OCI_OPIT6Q2RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT6Q2RR_OCB_OCI_OPIT6Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT6Q2RR_OCB_OCI_OPIT6Q2RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1_OCB_OCI_OPIT7Q1RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1_OCB_OCI_OPIT7Q1RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1_OCB_OCI_OPIT7Q1RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1_OCB_OCI_OPIT7Q1RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1_OCB_OCI_OPIT7Q1RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1_OCB_OCI_OPIT7Q1RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1_OCB_OCI_OPIT7Q1RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1_OCB_OCI_OPIT7Q1RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1_OCB_OCI_OPIT7Q1RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1_OCB_OCI_OPIT7Q1RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1_OCB_OCI_OPIT7Q1RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1_OCB_OCI_OPIT7Q1RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1_OCB_OCI_OPIT7Q1RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1_OCB_OCI_OPIT7Q1RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1_OCB_OCI_OPIT7Q1RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1_OCB_OCI_OPIT7Q1RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1_OCB_OCI_OPIT7Q1RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q1_OCB_OCI_OPIT7Q1RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2RR_OCB_OCI_OPIT7Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2RR_OCB_OCI_OPIT7Q2RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2RR_OCB_OCI_OPIT7Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2RR_OCB_OCI_OPIT7Q2RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2RR_OCB_OCI_OPIT7Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2RR_OCB_OCI_OPIT7Q2RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2RR_OCB_OCI_OPIT7Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2RR_OCB_OCI_OPIT7Q2RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2RR_OCB_OCI_OPIT7Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2RR_OCB_OCI_OPIT7Q2RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2RR_OCB_OCI_OPIT7Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2RR_OCB_OCI_OPIT7Q2RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2RR_OCB_OCI_OPIT7Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2RR_OCB_OCI_OPIT7Q2RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2RR_OCB_OCI_OPIT7Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2RR_OCB_OCI_OPIT7Q2RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2RR_OCB_OCI_OPIT7Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2RR_OCB_OCI_OPIT7Q2RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C12]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT8C12(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C12;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C12]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C12]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C12(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C12;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C12, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C12]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C12]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT8C12(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C12));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C12, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C12]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C12_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C12_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C12));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C12_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C12_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C12_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C12_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C12_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C12_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C12));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C12_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C12_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C12_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C12_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C12_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C12_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C12));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C12_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C12_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C12_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C12_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C12_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C12_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C12));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C12_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C12_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C12_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C12_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C12_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C12_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C12));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C12_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C12_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C12_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C12_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C12_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C12_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C12));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C12_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C12_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C12_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C12_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C25]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT8C25(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C25;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C25]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C25]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C25(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C25;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C25, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C25]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C25]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT8C25(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C25));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C25, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C25]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C25_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C25_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C25));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C25_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C25_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C25_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C25_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C25_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C25_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C25));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C25_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C25_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C25_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C25_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C25_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C25_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C25));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C25_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C25_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C25_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C25_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C25_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C25_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C25));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C25_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C25_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C25_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C25_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C25_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C25_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C25));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C25_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C25_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C25_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C25_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C25_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C25_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C25));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C25_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C25_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C25_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C25_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C28RR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C5RR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C14]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT9C14(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C14;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C14]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C14]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C14(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C14;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C14, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C14]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C14]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT9C14(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C14));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C14, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C14]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C14_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C14_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C14));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C14_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C14_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C14_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C14_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C14_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C14_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C14));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C14_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C14_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C14_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C14_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C14_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C14_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C14));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C14_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C14_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C14_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C14_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C14_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C14_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C14));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C14_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C14_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C14_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C14_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C14_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C14_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C14));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C14_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C14_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C14_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C14_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C14_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C14_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C14));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C14_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C14_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C14_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C14_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C23]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT9C23(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C23;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C23]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C23]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C23(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C23;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C23, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C23]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C23]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT9C23(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C23));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C23, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C23]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C23_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C23_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C23));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C23_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C23_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C23_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C23_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C23_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C23_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C23));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C23_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C23_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C23_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C23_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C23_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C23_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C23));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C23_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C23_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C23_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C23_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C23_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C23_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C23));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C23_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C23_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C23_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C23_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C23_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C23_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C23));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C23_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C23_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C23_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C23_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C23_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C23_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C23));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C23_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C23_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C23_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C23_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT9C5(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C5;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C5]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C5(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C5;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C5, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C5]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT9C5(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C5));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C5, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C5]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C5_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C5_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C5));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C5_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C5_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C5_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C5_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C5_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C5_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C5));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C5_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C5_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C5_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C5_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C5_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C5_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C5));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C5_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C5_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C5_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C5_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C5_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C5_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C5));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C5_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C5_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C5_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C5_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C5_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C5_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C5));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C5_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C5_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C5_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C5_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C5_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C5_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C5));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C5_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C5_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C5_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C5_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C5RR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_0,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_0,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_0,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_1,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_1,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_1,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_2,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_2,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_2]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_2,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_3,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_3,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_3]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_3]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_3,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_4,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_4,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_4]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_4]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_4,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_4_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_5(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_5,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_5_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_5]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_5,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_5_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_5]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_5]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_5(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_5,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_5_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_5]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_6,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_6,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_6]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_6]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_6,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_6_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_7(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_7,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_7_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_7]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_7,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_7_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_7]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_7]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_7(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_7,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_7_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV1RR_7]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPITASV3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPITASV3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPITASV3(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPITASV3;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPITASV3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPITASV3(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV3));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPITASV3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV3_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV3_0,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV3_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV3_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV3_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV3_0,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV3_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV3_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3_0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3_0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITASV3_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV3));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV3_0,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV3_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV3_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV3_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV3_1,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV3_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV3_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV3_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV3_1,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV3_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV3_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3_1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3_1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITASV3_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV3));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV3_1,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV3_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV3_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV3_2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV3_2,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV3_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV3_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV3_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV3_2,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV3_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV3_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3_2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3_2]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITASV3_2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV3));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV3_2,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV3_2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV3_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV3_3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV3_3,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV3_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV3_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV3_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV3_3,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV3_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV3_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3_3]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3_3]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITASV3_3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV3));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV3_3,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV3_3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV3_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV3_4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV3_4,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV3_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV3_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV3_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV3_4,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV3_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV3_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3_4]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3_4]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITASV3_4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV3));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV3_4,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV3_4_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV3_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV3_5(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV3_5,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV3_5_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV3_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3_5]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV3_5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV3_5,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV3_5_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV3_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3_5]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3_5]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITASV3_5(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV3));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV3_5,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV3_5_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV3_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3_5]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV3_6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV3_6,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV3_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV3_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV3_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV3_6,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV3_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV3_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3_6]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3_6]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITASV3_6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV3));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV3_6,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV3_6_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV3_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV3_7(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV3_7,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV3_7_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV3_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3_7]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV3_7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV3_7,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV3_7_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV3_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3_7]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3_7]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITASV3_7(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV3));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV3_7,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV3_7_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV3_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV3_7]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
