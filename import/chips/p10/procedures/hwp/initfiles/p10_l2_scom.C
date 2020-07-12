/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/hwp/initfiles/p10_l2_scom.C $     */
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
#include "p10_l2_scom.H"
#include <stdint.h>
#include <stddef.h>
#include <fapi2.H>

using namespace fapi2;

constexpr uint64_t literal_0b0001 = 0b0001;
constexpr uint64_t literal_0b0100 = 0b0100;
constexpr uint64_t literal_1 = 1;
constexpr uint64_t literal_8 = 8;
constexpr uint64_t literal_0b0000 = 0b0000;
constexpr uint64_t literal_0 = 0;
constexpr uint64_t literal_2 = 2;
constexpr uint64_t literal_3 = 3;
constexpr uint64_t literal_4 = 4;
constexpr uint64_t literal_5 = 5;
constexpr uint64_t literal_6 = 6;
constexpr uint64_t literal_7 = 7;
constexpr uint64_t literal_9 = 9;
constexpr uint64_t literal_10 = 10;
constexpr uint64_t literal_11 = 11;
constexpr uint64_t literal_12 = 12;
constexpr uint64_t literal_13 = 13;
constexpr uint64_t literal_14 = 14;
constexpr uint64_t literal_15 = 15;
constexpr uint64_t literal_16 = 16;
constexpr uint64_t literal_17 = 17;
constexpr uint64_t literal_18 = 18;
constexpr uint64_t literal_19 = 19;
constexpr uint64_t literal_20 = 20;
constexpr uint64_t literal_21 = 21;
constexpr uint64_t literal_22 = 22;
constexpr uint64_t literal_23 = 23;
constexpr uint64_t literal_24 = 24;
constexpr uint64_t literal_25 = 25;
constexpr uint64_t literal_26 = 26;
constexpr uint64_t literal_27 = 27;
constexpr uint64_t literal_28 = 28;
constexpr uint64_t literal_29 = 29;
constexpr uint64_t literal_30 = 30;
constexpr uint64_t literal_31 = 31;

fapi2::ReturnCode p10_l2_scom(const fapi2::Target<fapi2::TARGET_TYPE_CORE>& TGT0,
                              const fapi2::Target<fapi2::TARGET_TYPE_SYSTEM>& TGT1, const fapi2::Target<fapi2::TARGET_TYPE_PROC_CHIP>& TGT2)
{
    {
        fapi2::ATTR_EC_Type   l_chip_ec;
        fapi2::ATTR_NAME_Type l_chip_id;
        FAPI_TRY(FAPI_ATTR_GET_PRIVILEGED(fapi2::ATTR_NAME, TGT2, l_chip_id));
        FAPI_TRY(FAPI_ATTR_GET_PRIVILEGED(fapi2::ATTR_EC, TGT2, l_chip_ec));
        fapi2::ATTR_PROC_FABRIC_BROADCAST_MODE_Type l_TGT1_ATTR_PROC_FABRIC_BROADCAST_MODE;
        FAPI_TRY(FAPI_ATTR_GET(fapi2::ATTR_PROC_FABRIC_BROADCAST_MODE, TGT1, l_TGT1_ATTR_PROC_FABRIC_BROADCAST_MODE));
        fapi2::ATTR_PROC_L3_HASH_DISABLE_Type l_TGT1_ATTR_PROC_L3_HASH_DISABLE;
        FAPI_TRY(FAPI_ATTR_GET(fapi2::ATTR_PROC_L3_HASH_DISABLE, TGT1, l_TGT1_ATTR_PROC_L3_HASH_DISABLE));
        fapi2::ATTR_PROC_L2_HASH_DISABLE_Type l_TGT1_ATTR_PROC_L2_HASH_DISABLE;
        FAPI_TRY(FAPI_ATTR_GET(fapi2::ATTR_PROC_L2_HASH_DISABLE, TGT1, l_TGT1_ATTR_PROC_L2_HASH_DISABLE));
        uint64_t l_def_L2_EPS_DIVIDE = literal_1;
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
        fapi2::ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_Type l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE;
        FAPI_TRY(FAPI_ATTR_GET(fapi2::ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE, TGT1, l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE));
        fapi2::buffer<uint64_t> l_scom_buffer;
        {
            FAPI_TRY(fapi2::getScom( TGT0, 0x2002000aull, l_scom_buffer ));

            if ((l_TGT1_ATTR_PROC_FABRIC_BROADCAST_MODE == fapi2::ENUM_ATTR_PROC_FABRIC_BROADCAST_MODE_1HOP_CHIP_IS_GROUP))
            {
                constexpr auto l_ECP_L2_L2MISC_L2CERRS_CFG_SKIP_GRP_SCOPE_EN_ON = 0x1;
                l_scom_buffer.insert<38, 1, 63, uint64_t>(l_ECP_L2_L2MISC_L2CERRS_CFG_SKIP_GRP_SCOPE_EN_ON );
            }
            else if (( true ))
            {
                constexpr auto l_ECP_L2_L2MISC_L2CERRS_CFG_SKIP_GRP_SCOPE_EN_OFF = 0x0;
                l_scom_buffer.insert<38, 1, 63, uint64_t>(l_ECP_L2_L2MISC_L2CERRS_CFG_SKIP_GRP_SCOPE_EN_OFF );
            }

            if ((l_TGT1_ATTR_PROC_L3_HASH_DISABLE == fapi2::ENUM_ATTR_PROC_L3_HASH_DISABLE_ON))
            {
                constexpr auto l_ECP_L2_L2MISC_L2CERRS_CFG_HASH_L3_ADDR_EN_OFF = 0x0;
                l_scom_buffer.insert<21, 1, 63, uint64_t>(l_ECP_L2_L2MISC_L2CERRS_CFG_HASH_L3_ADDR_EN_OFF );
            }
            else if (( true ))
            {
                constexpr auto l_ECP_L2_L2MISC_L2CERRS_CFG_HASH_L3_ADDR_EN_ON = 0x1;
                l_scom_buffer.insert<21, 1, 63, uint64_t>(l_ECP_L2_L2MISC_L2CERRS_CFG_HASH_L3_ADDR_EN_ON );
            }

            if ((l_TGT1_ATTR_PROC_L2_HASH_DISABLE == fapi2::ENUM_ATTR_PROC_L2_HASH_DISABLE_ON))
            {
                constexpr auto l_ECP_L2_L2MISC_L2CERRS_CFG_HASH_L2_ADDR_EN_OFF = 0x0;
                l_scom_buffer.insert<28, 1, 63, uint64_t>(l_ECP_L2_L2MISC_L2CERRS_CFG_HASH_L2_ADDR_EN_OFF );
            }
            else if (( true ))
            {
                constexpr auto l_ECP_L2_L2MISC_L2CERRS_CFG_HASH_L2_ADDR_EN_ON = 0x1;
                l_scom_buffer.insert<28, 1, 63, uint64_t>(l_ECP_L2_L2MISC_L2CERRS_CFG_HASH_L2_ADDR_EN_ON );
            }

            constexpr auto l_ECP_L2_L2MISC_L2CERRS_CFG_CAC_ERR_REPAIR_EN_ON = 0x1;
            l_scom_buffer.insert<15, 1, 63, uint64_t>(l_ECP_L2_L2MISC_L2CERRS_CFG_CAC_ERR_REPAIR_EN_ON );
            constexpr auto l_ECP_L2_L2MISC_L2CERRS_CFG_LINEDEL_ON_CAC_UE_EN_ON = 0x1;
            l_scom_buffer.insert<16, 1, 63, uint64_t>(l_ECP_L2_L2MISC_L2CERRS_CFG_LINEDEL_ON_CAC_UE_EN_ON );
            FAPI_TRY(fapi2::putScom(TGT0, 0x2002000aull, l_scom_buffer));
        }
        {
            FAPI_TRY(fapi2::getScom( TGT0, 0x2002000bull, l_scom_buffer ));

            l_scom_buffer.insert<4, 4, 60, uint64_t>(literal_0b0001 );
            l_scom_buffer.insert<8, 4, 60, uint64_t>(literal_0b0100 );
            FAPI_TRY(fapi2::putScom(TGT0, 0x2002000bull, l_scom_buffer));
        }
        {
            FAPI_TRY(fapi2::getScom( TGT0, 0x20020010ull, l_scom_buffer ));

            l_scom_buffer.insert<0, 12, 52, uint64_t>((((l_TGT1_ATTR_PROC_EPS_READ_CYCLES_T0 / literal_8) / l_def_L2_EPS_DIVIDE) +
                    literal_1) );
            l_scom_buffer.insert<12, 12, 52, uint64_t>((((l_TGT1_ATTR_PROC_EPS_READ_CYCLES_T1 / literal_8) / l_def_L2_EPS_DIVIDE) +
                    literal_1) );
            l_scom_buffer.insert<24, 12, 52, uint64_t>((((l_TGT1_ATTR_PROC_EPS_READ_CYCLES_T2 / literal_8) / l_def_L2_EPS_DIVIDE) +
                    literal_1) );
            FAPI_TRY(fapi2::putScom(TGT0, 0x20020010ull, l_scom_buffer));
        }
        {
            FAPI_TRY(fapi2::getScom( TGT0, 0x20020011ull, l_scom_buffer ));

            l_scom_buffer.insert<0, 12, 52, uint64_t>((((l_TGT1_ATTR_PROC_EPS_WRITE_CYCLES_T1 / literal_8) / l_def_L2_EPS_DIVIDE) +
                    literal_1) );
            l_scom_buffer.insert<12, 12, 52, uint64_t>((((l_TGT1_ATTR_PROC_EPS_WRITE_CYCLES_T2 / literal_8) / l_def_L2_EPS_DIVIDE) +
                    literal_1) );
            constexpr auto l_ECP_L2_L2MISC_L2CERRS_EPS_CNT_USE_L2_DIVIDER_EN_OFF = 0x0;
            l_scom_buffer.insert<29, 1, 63, uint64_t>(l_ECP_L2_L2MISC_L2CERRS_EPS_CNT_USE_L2_DIVIDER_EN_OFF );
            l_scom_buffer.insert<30, 4, 60, uint64_t>(literal_0b0000 );
            l_scom_buffer.insert<24, 4, 60, uint64_t>(l_def_L2_EPS_DIVIDE );
            constexpr auto l_ECP_L2_L2MISC_L2CERRS_EPS_MODE_SEL_MODE1 = 0x0;
            l_scom_buffer.insert<28, 1, 63, uint64_t>(l_ECP_L2_L2MISC_L2CERRS_EPS_MODE_SEL_MODE1 );
            FAPI_TRY(fapi2::putScom(TGT0, 0x20020011ull, l_scom_buffer));
        }
        {
            FAPI_TRY(fapi2::getScom( TGT0, 0x20020014ull, l_scom_buffer ));

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_0] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<0, 1, 63, uint64_t>(literal_1 );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_1] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<12, 4, 60, uint64_t>(l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_1] );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_2] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<16, 4, 60, uint64_t>(l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_2] );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_1] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<1, 1, 63, uint64_t>(literal_1 );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_3] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<20, 4, 60, uint64_t>(l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_3] );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_4] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<24, 4, 60, uint64_t>(l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_4] );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_5] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<28, 4, 60, uint64_t>(l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_5] );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_2] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<2, 1, 63, uint64_t>(literal_1 );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_6] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<32, 4, 60, uint64_t>(l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_6] );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_7] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<36, 4, 60, uint64_t>(l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_7] );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_3] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<3, 1, 63, uint64_t>(literal_1 );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_4] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<4, 1, 63, uint64_t>(literal_1 );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_5] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<5, 1, 63, uint64_t>(literal_1 );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_6] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<6, 1, 63, uint64_t>(literal_1 );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_7] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<7, 1, 63, uint64_t>(literal_1 );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_0] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<8, 4, 60, uint64_t>(l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_0] );
            }

            FAPI_TRY(fapi2::putScom(TGT0, 0x20020014ull, l_scom_buffer));
        }
        {
            FAPI_TRY(fapi2::getScom( TGT0, 0x20020015ull, l_scom_buffer ));

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_8] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<0, 1, 63, uint64_t>(literal_1 );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_9] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<12, 4, 60, uint64_t>(l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_9] );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_10] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<16, 4, 60, uint64_t>(l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_10] );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_9] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<1, 1, 63, uint64_t>(literal_1 );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_11] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<20, 4, 60, uint64_t>(l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_11] );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_12] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<24, 4, 60, uint64_t>(l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_12] );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_13] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<28, 4, 60, uint64_t>(l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_13] );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_10] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<2, 1, 63, uint64_t>(literal_1 );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_14] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<32, 4, 60, uint64_t>(l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_14] );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_15] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<36, 4, 60, uint64_t>(l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_15] );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_11] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<3, 1, 63, uint64_t>(literal_1 );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_12] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<4, 1, 63, uint64_t>(literal_1 );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_13] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<5, 1, 63, uint64_t>(literal_1 );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_14] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<6, 1, 63, uint64_t>(literal_1 );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_15] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<7, 1, 63, uint64_t>(literal_1 );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_8] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<8, 4, 60, uint64_t>(l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_8] );
            }

            FAPI_TRY(fapi2::putScom(TGT0, 0x20020015ull, l_scom_buffer));
        }
        {
            FAPI_TRY(fapi2::getScom( TGT0, 0x20020016ull, l_scom_buffer ));

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_16] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<0, 1, 63, uint64_t>(literal_1 );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_17] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<12, 4, 60, uint64_t>(l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_17] );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_18] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<16, 4, 60, uint64_t>(l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_18] );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_17] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<1, 1, 63, uint64_t>(literal_1 );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_19] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<20, 4, 60, uint64_t>(l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_19] );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_20] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<24, 4, 60, uint64_t>(l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_20] );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_21] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<28, 4, 60, uint64_t>(l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_21] );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_18] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<2, 1, 63, uint64_t>(literal_1 );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_22] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<32, 4, 60, uint64_t>(l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_22] );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_23] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<36, 4, 60, uint64_t>(l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_23] );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_19] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<3, 1, 63, uint64_t>(literal_1 );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_20] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<4, 1, 63, uint64_t>(literal_1 );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_21] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<5, 1, 63, uint64_t>(literal_1 );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_22] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<6, 1, 63, uint64_t>(literal_1 );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_23] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<7, 1, 63, uint64_t>(literal_1 );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_16] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<8, 4, 60, uint64_t>(l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_16] );
            }

            FAPI_TRY(fapi2::putScom(TGT0, 0x20020016ull, l_scom_buffer));
        }
        {
            FAPI_TRY(fapi2::getScom( TGT0, 0x20020017ull, l_scom_buffer ));

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_24] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<0, 1, 63, uint64_t>(literal_1 );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_25] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<12, 4, 60, uint64_t>(l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_25] );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_26] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<16, 4, 60, uint64_t>(l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_26] );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_25] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<1, 1, 63, uint64_t>(literal_1 );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_27] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<20, 4, 60, uint64_t>(l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_27] );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_28] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<24, 4, 60, uint64_t>(l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_28] );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_29] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<28, 4, 60, uint64_t>(l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_29] );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_26] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<2, 1, 63, uint64_t>(literal_1 );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_30] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<32, 4, 60, uint64_t>(l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_30] );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_31] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<36, 4, 60, uint64_t>(l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_31] );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_27] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<3, 1, 63, uint64_t>(literal_1 );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_28] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<4, 1, 63, uint64_t>(literal_1 );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_29] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<5, 1, 63, uint64_t>(literal_1 );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_30] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<6, 1, 63, uint64_t>(literal_1 );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_31] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<7, 1, 63, uint64_t>(literal_1 );
            }

            if ((l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_24] != fapi2::ENUM_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_INVALID))
            {
                l_scom_buffer.insert<8, 4, 60, uint64_t>(l_TGT1_ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE[literal_24] );
            }

            FAPI_TRY(fapi2::putScom(TGT0, 0x20020017ull, l_scom_buffer));
        }

    };
fapi_try_exit:
    return fapi2::current_err;
}
