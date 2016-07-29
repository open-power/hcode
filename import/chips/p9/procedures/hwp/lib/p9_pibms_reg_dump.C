/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/hwp/lib/p9_pibms_reg_dump.C $      */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2015,2017                                                    */
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
/// @file p9_pibms_reg_dump.C
/// @brief Dump PIB Masters and Slaves Internal Register contents

// *HWP HWP Owner       : Anay K Desai <anaydesa@in.ibm.com>
// *HWP Backup HWP Owner:
// *HWP FW Owner        :
// *HWP Team            :
// *HWP Level           :
// *HWP Consumed by     : HS:CRO

///
/// High-level procedure flow:
/// @verbatim
/// High-level procedure flow:
///
///
/// @endverbatim

// -----------------------------------------------------------------------------
//  Includes
// -----------------------------------------------------------------------------
#include <fapi2.H>
//#include <p9_hcd_common.H>
#include <p9_pibms_reg_dump.H>

// ----------------------------------------------------------------------
// Constants
// ----------------------------------------------------------------------

// these are probably in some include file




enum PIBMS_REGS
{
    OTP_STATUS                       = 0X00010002,
    CBS_CTRL_STATUS                  = 0x00050001,
    CBS_TRACE                        = 0x00050002,
    CBS_ENVSTAT                      = 0x00050004,
    CBS_SELFBOOT_CTRL_STATUS         = 0x00050008,
    CBS_SELFBOOT_MSG                 = 0x00050009,
    CBS_DEBUG_PERV_CLK               = 0x0005000B,
    CBS_ROOTCTRL0                    = 0x00050010,
    CBS_ROOTCTRL1                    = 0x00050011,
    CBS_ROOTCTRL2                    = 0x00050012,
    CBS_ROOTCTRL3                    = 0x00050013,
    CBS_ROOTCTRL4                    = 0x00050014,
    CBS_ROOTCTRL5                    = 0x00050015,
    CBS_ROOTCTRL6                    = 0x00050016,
    CBS_ROOTCTRL7                    = 0x00050017,
    CBS_ROOTCTRL8                    = 0x00050018,
    CBS_PERVCTRL0                    = 0x0005001A,
    CBS_PERVCTRL1                    = 0x0005001B,
    PIBMEM_CTRL                      = 0x00088000,
    PIBMEM_ADDR_PIB                  = 0x00088001,
    PIBMEM_STATUS                    = 0x00088005,
    PIBMEM_RESET                     = 0x00088006,
    PIBMEM_ADDR_FACES                = 0x00088007,
    PIBMEM_FIR_MASK                  = 0x00088008,
    PIBMEM_REPR_0                    = 0x0008800B,
    PIBMEM_REPR_1                    = 0x0008800C,
    PIBMEM_REPR_2                    = 0x0008800D,
    PIBMEM_REPR_3                    = 0x0008800E,
    I2CM0_CTRL                       = 0x000A0000,
    I2CM0_D8t15                      = 0x000A0001,
    I2CM0_FSTAT                      = 0x000A0002,
    I2CM0_D0t07                      = 0x000A0003,
    I2CM0_CMD                        = 0x000A0005,
    I2CM0_MODE                       = 0x000A0006,
    I2CM0_WMRK                       = 0x000A0007,
    I2CM0_IMSK                       = 0x000A0008,
    I2CM0_ICND                       = 0x000A0009,
    I2CM0_INTR                       = 0x000A000A,
    I2CM0_STAT                       = 0x000A000B,
    I2CM0_ESTAT                      = 0x000A000C,
    I2CM0_RSID                       = 0x000A000D,
    I2CM0_PBUSY                      = 0x000A000E,
    SBEFIFO_UPSTREAM_STATUS          = 0x000B0001,
    SBEFIFO_DOWNSTREAM_STATUS        = 0x000B0011,
    PSU_PIBHST_CTRL_STATUS           = 0x000D0000,
    PSU_PIBHST_FILTER                = 0x000D0001,
    PSU_PIBHST_LAST_ADDR_TRACE       = 0x000D0002,
    PSU_PIBHST_LAST_REQDATA_TRACE    = 0x000D0003,
    PSU_PIBHST_LAST_RSPDATA_TRACE    = 0x000D0004,
    PSU_PIBHST_2NDLAST_ADDR_TRACE    = 0x000D0005,
    PSU_PIBHST_2NDLAST_REQDATA_TRACE = 0X000D0006,
    PSU_PIBHST_2NDLAST_RSPDATA_TRACE = 0x000D0007,
    PSU_INSTR_CTRL_STATUS            = 0x000D0010,
};

std::vector<PIBMSReg_t> v_pibms_regs =
{
    {OTP_STATUS, "OTP_STATUS"},
    {CBS_CTRL_STATUS, "CBS_CTRL_STATUS"},
    {CBS_TRACE, "CBS_TRACE"},
    {CBS_ENVSTAT, "CBS_ENVSTAT"},
    {CBS_SELFBOOT_CTRL_STATUS, "CBS_SELFBOOT_CTRL_STATUS"},
    {CBS_SELFBOOT_MSG, "CBS_SELFBOOT_MSG"},
    {CBS_DEBUG_PERV_CLK, "CBS_DEBUG_PERV_CLK"},
    {CBS_ROOTCTRL0, "CBS_ROOTCTRL0"},
    {CBS_ROOTCTRL1, "CBS_ROOTCTRL1"},
    {CBS_ROOTCTRL2, "CBS_ROOTCTRL2"},
    {CBS_ROOTCTRL3, "CBS_ROOTCTRL3"},
    {CBS_ROOTCTRL4, "CBS_ROOTCTRL4"},
    {CBS_ROOTCTRL5, "CBS_ROOTCTRL5"},
    {CBS_ROOTCTRL6, "CBS_ROOTCTRL6"},
    {CBS_ROOTCTRL7, "CBS_ROOTCTRL7"},
    {CBS_ROOTCTRL8, "CBS_ROOTCTRL8"},
    {CBS_PERVCTRL0, "CBS_PERVCTRL0"},
    {CBS_PERVCTRL1, "CBS_PERVCTRL1"},
    { PIBMEM_CTRL,       "PIBMEM_CTRL"  },
    { PIBMEM_ADDR_PIB,   "PIBMEM_ADDR_PIB" },
    { PIBMEM_STATUS,     "PIBMEM_STATUS" },
    { PIBMEM_RESET,      "PIBMEM_RESET" },
    { PIBMEM_ADDR_FACES, "PIBMEM_ADDR_FACES"   },
    { PIBMEM_FIR_MASK,   "PIBMEM_FIR_MASK"  },
    { PIBMEM_REPR_0,     "PIBMEM_REPR_0"  },
    { PIBMEM_REPR_1,     "PIBMEM_REPR_1"  },
    { PIBMEM_REPR_2,     "PIBMEM_REPR_2"  },
    { PIBMEM_REPR_3,     "PIBMEM_REPR_3"  },
    { I2CM0_CTRL,    "I2CM0_CTRL"  },
    { I2CM0_D8t15,   "I2CM0_D8t15" },
    { I2CM0_FSTAT,   "I2CM0_FSTAT" },
    { I2CM0_D0t07,   "I2CM0_D0t07" },
    { I2CM0_CMD,     "I2CM0_CMD"   },
    { I2CM0_MODE,    "I2CM0_MODE"  },
    { I2CM0_WMRK,    "I2CM0_WMRK"  },
    { I2CM0_IMSK,    "I2CM0_IMSK"  },
    { I2CM0_ICND,    "I2CM0_ICND"  },
    { I2CM0_INTR,    "I2CM0_INTR"  },
    { I2CM0_STAT,    "I2CM0_STAT"  },
    { I2CM0_ESTAT,   "I2CM0_ESTAT" },
    { I2CM0_RSID,    "I2CM0_RSID"  },
    { I2CM0_PBUSY,   "I2CM0_PBUSY" },
    {SBEFIFO_UPSTREAM_STATUS, "SBEFIFO_UPSTREAM_STATUS"},
    {SBEFIFO_DOWNSTREAM_STATUS, "SBEFIFO_DOWNSTREAM_STATUS"},
    {PSU_PIBHST_CTRL_STATUS,           "PSU_PIBHST_CTRL_STATUS"},
    {PSU_PIBHST_FILTER,                "PSU_PIBHST_FILTER"},
    {PSU_PIBHST_LAST_ADDR_TRACE,       "PSU_PIBHST_LAST_ADDR_TRACE"},
    {PSU_PIBHST_LAST_REQDATA_TRACE,    "PSU_PIBHST_LAST_REQDATA_TRACE"},
    {PSU_PIBHST_LAST_RSPDATA_TRACE,    "PSU_PIBHST_LAST_RSPDATA_TRACE"},
    {PSU_PIBHST_2NDLAST_ADDR_TRACE,    "PSU_PIBHST_2NDLAST_ADDR_TRACE"},
    {PSU_PIBHST_2NDLAST_REQDATA_TRACE, "PSU_PIBHST_2NDLAST_REQDATA_TRACE"},
    {PSU_PIBHST_2NDLAST_RSPDATA_TRACE, "PSU_PIBHST_2NDLAST_RSPDATA_TRACE"},
    {PSU_INSTR_CTRL_STATUS,            "PSU_INSTR_CTRL_STATUS"},
};












// -----------------------------------------------------------------------------
//  Function definitions
// -----------------------------------------------------------------------------

/// @brief Dump the contents of PIB Masters and Slaves Internal Registers
///
/// @param [in]  i_target             Chip target
///
/// @retval FAPI_RC_SUCCESS
/// @retval ERROR defined in xml

fapi2::ReturnCode p9_pibms_reg_dump( const fapi2::Target<fapi2::TARGET_TYPE_PROC_CHIP>& i_target,
                                     std::vector<PIBMSRegValue_t>& temp_data)


{
    std::vector<PIBMSRegValue_t> v_pibms_reg_value;
    fapi2::buffer<uint64_t> l_data64;

    PIBMSRegValue_t l_regVal;
    uint32_t address ;

    FAPI_IMP("p9_pibms_reg_dump");
    FAPI_INF("Executing p9_pibms_reg_dump " );


    fapi2::buffer<uint64_t> buf;

    for (auto it : v_pibms_regs)
    {
        // ******************************************************************
        address = it.number ;
        FAPI_TRY((getScom(i_target , address , buf )));
        l_regVal.reg = it;
        l_regVal.value = buf;
        temp_data.push_back(l_regVal);
        // ******************************************************************
    }

fapi_try_exit:
    FAPI_INF("< p9_pibms_reg_dump");
    return fapi2::current_err;
}
