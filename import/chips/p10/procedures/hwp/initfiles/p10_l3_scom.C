/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/hwp/initfiles/p10_l3_scom.C $     */
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
#include "p10_l3_scom.H"
#include <stdint.h>
#include <stddef.h>
#include <fapi2.H>

using namespace fapi2;

constexpr uint64_t literal_1 = 1;
constexpr uint64_t literal_8 = 8;
constexpr uint64_t literal_0b0 = 0b0;
constexpr uint64_t literal_0b0000 = 0b0000;
constexpr uint64_t literal_0b0001 = 0b0001;
constexpr uint64_t literal_0b1000 = 0b1000;

fapi2::ReturnCode p10_l3_scom(const fapi2::Target<fapi2::TARGET_TYPE_CORE>& TGT0,
                              const fapi2::Target<fapi2::TARGET_TYPE_SYSTEM>& TGT1, const fapi2::Target<fapi2::TARGET_TYPE_PROC_CHIP>& TGT2)
{
    {
        fapi2::ATTR_EC_Type   l_chip_ec;
        fapi2::ATTR_NAME_Type l_chip_id;
        FAPI_TRY(FAPI_ATTR_GET_PRIVILEGED(fapi2::ATTR_NAME, TGT2, l_chip_id));
        FAPI_TRY(FAPI_ATTR_GET_PRIVILEGED(fapi2::ATTR_EC, TGT2, l_chip_ec));
        uint64_t l_def_L3_EPS_DIVIDE = literal_1;
        fapi2::ATTR_PROC_EPS_READ_CYCLES_T0_Type l_TGT1_ATTR_PROC_EPS_READ_CYCLES_T0;
        FAPI_TRY(FAPI_ATTR_GET(fapi2::ATTR_PROC_EPS_READ_CYCLES_T0, TGT1, l_TGT1_ATTR_PROC_EPS_READ_CYCLES_T0));
        fapi2::ATTR_PROC_EPS_READ_CYCLES_T1_Type l_TGT1_ATTR_PROC_EPS_READ_CYCLES_T1;
        FAPI_TRY(FAPI_ATTR_GET(fapi2::ATTR_PROC_EPS_READ_CYCLES_T1, TGT1, l_TGT1_ATTR_PROC_EPS_READ_CYCLES_T1));
        fapi2::ATTR_PROC_EPS_READ_CYCLES_T2_Type l_TGT1_ATTR_PROC_EPS_READ_CYCLES_T2;
        FAPI_TRY(FAPI_ATTR_GET(fapi2::ATTR_PROC_EPS_READ_CYCLES_T2, TGT1, l_TGT1_ATTR_PROC_EPS_READ_CYCLES_T2));
        fapi2::ATTR_PROC_EPS_WRITE_CYCLES_T1_Type l_TGT1_ATTR_PROC_EPS_WRITE_CYCLES_T1;
        FAPI_TRY(FAPI_ATTR_GET(fapi2::ATTR_PROC_EPS_WRITE_CYCLES_T1, TGT1, l_TGT1_ATTR_PROC_EPS_WRITE_CYCLES_T1));
        fapi2::ATTR_PROC_EPS_WRITE_CYCLES_T2_Type l_TGT1_ATTR_PROC_EPS_WRITE_CYCLES_T2;
        FAPI_TRY(FAPI_ATTR_GET(fapi2::ATTR_PROC_EPS_WRITE_CYCLES_T2, TGT1, l_TGT1_ATTR_PROC_EPS_WRITE_CYCLES_T2));
        fapi2::ATTR_PROC_FABRIC_BROADCAST_MODE_Type l_TGT1_ATTR_PROC_FABRIC_BROADCAST_MODE;
        FAPI_TRY(FAPI_ATTR_GET(fapi2::ATTR_PROC_FABRIC_BROADCAST_MODE, TGT1, l_TGT1_ATTR_PROC_FABRIC_BROADCAST_MODE));
        fapi2::ATTR_SYSTEM_IPL_PHASE_Type l_TGT1_ATTR_SYSTEM_IPL_PHASE;
        FAPI_TRY(FAPI_ATTR_GET(fapi2::ATTR_SYSTEM_IPL_PHASE, TGT1, l_TGT1_ATTR_SYSTEM_IPL_PHASE));
        fapi2::ATTR_CONTAINED_IPL_TYPE_Type l_TGT1_ATTR_CONTAINED_IPL_TYPE;
        FAPI_TRY(FAPI_ATTR_GET(fapi2::ATTR_CONTAINED_IPL_TYPE, TGT1, l_TGT1_ATTR_CONTAINED_IPL_TYPE));
        fapi2::buffer<uint64_t> l_scom_buffer;
        {
            FAPI_TRY(fapi2::getScom( TGT0, 0x20018629ull, l_scom_buffer ));

            l_scom_buffer.insert<0, 12, 52, uint64_t>((((l_TGT1_ATTR_PROC_EPS_READ_CYCLES_T0 / literal_8) / l_def_L3_EPS_DIVIDE) +
                    literal_1) );
            l_scom_buffer.insert<12, 12, 52, uint64_t>((((l_TGT1_ATTR_PROC_EPS_READ_CYCLES_T1 / literal_8) / l_def_L3_EPS_DIVIDE) +
                    literal_1) );
            l_scom_buffer.insert<24, 12, 52, uint64_t>((((l_TGT1_ATTR_PROC_EPS_READ_CYCLES_T2 / literal_8) / l_def_L3_EPS_DIVIDE) +
                    literal_1) );
            FAPI_TRY(fapi2::putScom(TGT0, 0x20018629ull, l_scom_buffer));
        }
        {
            FAPI_TRY(fapi2::getScom( TGT0, 0x2001862aull, l_scom_buffer ));

            l_scom_buffer.insert<0, 12, 52, uint64_t>((((l_TGT1_ATTR_PROC_EPS_WRITE_CYCLES_T1 / literal_8) / l_def_L3_EPS_DIVIDE) +
                    literal_1) );
            l_scom_buffer.insert<12, 12, 52, uint64_t>((((l_TGT1_ATTR_PROC_EPS_WRITE_CYCLES_T2 / literal_8) / l_def_L3_EPS_DIVIDE) +
                    literal_1) );
            l_scom_buffer.insert<34, 1, 63, uint64_t>(literal_0b0 );
            l_scom_buffer.insert<26, 4, 60, uint64_t>(literal_0b0000 );
            l_scom_buffer.insert<30, 4, 60, uint64_t>(l_def_L3_EPS_DIVIDE );
            FAPI_TRY(fapi2::putScom(TGT0, 0x2001862aull, l_scom_buffer));
        }
        {
            FAPI_TRY(fapi2::getScom( TGT0, 0x2001862bull, l_scom_buffer ));

            if ((l_TGT1_ATTR_PROC_FABRIC_BROADCAST_MODE == fapi2::ENUM_ATTR_PROC_FABRIC_BROADCAST_MODE_1HOP_CHIP_IS_GROUP))
            {
                constexpr auto l_ECP_L3_L3_MISC_L3CERRS_L3_CERRS_PF_CFG_SKIP_GRP_SCOPE_EN_ON = 0x1;
                l_scom_buffer.insert<5, 1, 63, uint64_t>(l_ECP_L3_L3_MISC_L3CERRS_L3_CERRS_PF_CFG_SKIP_GRP_SCOPE_EN_ON );
            }
            else if (( true ))
            {
                constexpr auto l_ECP_L3_L3_MISC_L3CERRS_L3_CERRS_PF_CFG_SKIP_GRP_SCOPE_EN_OFF = 0x0;
                l_scom_buffer.insert<5, 1, 63, uint64_t>(l_ECP_L3_L3_MISC_L3CERRS_L3_CERRS_PF_CFG_SKIP_GRP_SCOPE_EN_OFF );
            }

            if ((l_TGT1_ATTR_SYSTEM_IPL_PHASE == fapi2::ENUM_ATTR_SYSTEM_IPL_PHASE_HB_RUNTIME))
            {
                constexpr auto l_ECP_L3_L3_MISC_L3CERRS_L3_ADDR_HASH_EN_CFG_ON = 0x1;
                l_scom_buffer.insert<11, 1, 63, uint64_t>(l_ECP_L3_L3_MISC_L3CERRS_L3_ADDR_HASH_EN_CFG_ON );
            }

            if ((l_TGT1_ATTR_SYSTEM_IPL_PHASE == fapi2::ENUM_ATTR_SYSTEM_IPL_PHASE_HB_RUNTIME))
            {
                constexpr auto l_ECP_L3_L3_MISC_L3CERRS_L3_RDSN_LINEDEL_UE_EN_ON = 0x1;
                l_scom_buffer.insert<2, 1, 63, uint64_t>(l_ECP_L3_L3_MISC_L3CERRS_L3_RDSN_LINEDEL_UE_EN_ON );
            }

            if ((l_TGT1_ATTR_SYSTEM_IPL_PHASE == fapi2::ENUM_ATTR_SYSTEM_IPL_PHASE_HB_RUNTIME))
            {
                constexpr auto l_ECP_L3_L3_MISC_L3CERRS_L3_DMAP_CI_EN_CFG_OFF = 0x0;
                l_scom_buffer.insert<1, 1, 63, uint64_t>(l_ECP_L3_L3_MISC_L3CERRS_L3_DMAP_CI_EN_CFG_OFF );
            }
            else if ((l_TGT1_ATTR_CONTAINED_IPL_TYPE == fapi2::ENUM_ATTR_CONTAINED_IPL_TYPE_CACHE))
            {
                constexpr auto l_ECP_L3_L3_MISC_L3CERRS_L3_DMAP_CI_EN_CFG_ON = 0x1;
                l_scom_buffer.insert<1, 1, 63, uint64_t>(l_ECP_L3_L3_MISC_L3CERRS_L3_DMAP_CI_EN_CFG_ON );
            }

            l_scom_buffer.insert<14, 4, 60, uint64_t>(literal_0b0001 );
            l_scom_buffer.insert<18, 4, 60, uint64_t>(literal_0b1000 );
            FAPI_TRY(fapi2::putScom(TGT0, 0x2001862bull, l_scom_buffer));
        }

    };
fapi_try_exit:
    return fapi2::current_err;
}
