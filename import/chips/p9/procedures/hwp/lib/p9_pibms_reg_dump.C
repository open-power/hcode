/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/hwp/lib/p9_pibms_reg_dump.C $      */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2015,2019                                                    */
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
// *HWP Backup HWP Owner: Pradeep Chatnahalli <pradeepcn@in.ibm.com>
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
// -------------------------------------Axone Mux configs-------------------------------------------------------------
// FSI2PCB(16)                 PIB2PCB(18)                   PCB2PCB(19)          cannot access       can access
//    1                           0                             0                      PIB             EPS - perv
//    0                           1                             0                      PCB             PIB, SBE, EPS
//    0                           0                             1                       -              PIB, PCB n/w
// -------------------------------------------------------------------------------------------------------------------

// -----------------------------------------------------------------------------
//  Includes
// -----------------------------------------------------------------------------
#include <fapi2.H>
//#include <p9_hcd_common.H>
#include <p9_pibms_reg_dump.H>
#include <p9_perv_scom_addresses.H>
#include <p9_perv_scom_addresses_fld.H>
#include <p9_perv_scom_addresses_fixes.H>
#include <p9_perv_scom_addresses_fld_fixes.H>
// ----------------------------------------------------------------------
// Constants
// ----------------------------------------------------------------------

// these are probably in some include file


enum PIBMS_REGS
{
    OTP_STATUS                       = 0X00010002,
    MAILBOX_CBS_CTRL_STATUS          = 0x00050001,
    MAILBOX_CBS_TRACE                = 0x00050002,
    MAILBOX_CBS_ENVSTAT              = 0x00050004,
    MAILBOX_CBS_SELFBOOT_CTRL_STATUS = 0x00050008,
    MAILBOX_CBS_SELFBOOT_MSG         = 0x00050009,
    MAILBOX_CBS_DEBUG_PERV_CLK       = 0x0005000B,
    MAILBOX_ROOTCTRL0                = 0x00050010,
    MAILBOX_ROOTCTRL1                = 0x00050011,
    MAILBOX_ROOTCTRL2                = 0x00050012,
    MAILBOX_ROOTCTRL3                = 0x00050013,
    MAILBOX_ROOTCTRL4                = 0x00050014,
    MAILBOX_ROOTCTRL5                = 0x00050015,
    MAILBOX_ROOTCTRL6                = 0x00050016,
    MAILBOX_ROOTCTRL7                = 0x00050017,
    MAILBOX_ROOTCTRL8                = 0x00050018,
    MAILBOX_PERVCTRL0                = 0x0005001A,
    MAILBOX_PERVCTRL1                = 0x0005001B,
    MAILBOX_SCRATCH_REG_1            = 0X00050038,
    MAILBOX_SCRATCH_REG_2            = 0X00050039,
    MAILBOX_SCRATCH_REG_3            = 0X0005003A,
    MAILBOX_SCRATCH_REG_4            = 0X0005003B,
    MAILBOX_SCRATCH_REG_5            = 0X0005003C,
    MAILBOX_SCRATCH_REG_6            = 0X0005003D,
    MAILBOX_SCRATCH_REG_7            = 0X0005003E,
    MAILBOX_SCRATCH_REG_8            = 0X0005003F,
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
    I2CM1_CTRL                       = 0x000A1000,
    I2CM1_D8t15                      = 0x000A1001,
    I2CM1_FSTAT                      = 0x000A1002,
    I2CM1_D0t07                      = 0x000A1003,
    I2CM1_CMD                        = 0x000A1005,
    I2CM1_MODE                       = 0x000A1006,
    I2CM1_WMRK                       = 0x000A1007,
    I2CM1_IMSK                       = 0x000A1008,
    I2CM1_ICND                       = 0x000A1009,
    I2CM1_INTR                       = 0x000A100A,
    I2CM1_STAT                       = 0x000A100B,
    I2CM1_ESTAT                      = 0x000A100C,
    I2CM1_RSID                       = 0x000A100D,
    I2CM1_PBUSY                      = 0x000A100E,
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
    PCBM_REC_ERR_REG0                = 0x000F0011,
    PCBM_REC_ERR_REG1                = 0x000F0012,
    PCBM_REC_ERR_REG2                = 0x000F0013,
    PCBM_REC_ERR_REG3                = 0x000F0014,
    PCBM_FIRST_ERR                   = 0x000F001E,
    PCBM_ERR_REG                     = 0x000F001F,
};

// registers that can be accessed in SDB mode
std::vector<PIBMSReg_t> v_pibms_regs_secure_mode =
{
    {PIBMEM_CTRL,       "PIBMEM_CTRL"  },
    {PIBMEM_ADDR_PIB,   "PIBMEM_ADDR_PIB" },
    {PIBMEM_STATUS,     "PIBMEM_STATUS" },
    {PIBMEM_RESET,      "PIBMEM_RESET" },
    {PIBMEM_ADDR_FACES, "PIBMEM_ADDR_FACES"   },
    {PIBMEM_FIR_MASK,   "PIBMEM_FIR_MASK"  },
    {PIBMEM_REPR_0,     "PIBMEM_REPR_0"  },
    {PIBMEM_REPR_1,     "PIBMEM_REPR_1"  },
    {PIBMEM_REPR_2,     "PIBMEM_REPR_2"  },
    {PIBMEM_REPR_3,     "PIBMEM_REPR_3"  },
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

std::vector<PIBMSReg_t> v_pibms_regs =
{
    {OTP_STATUS, "OTP_STATUS"},
    {MAILBOX_CBS_CTRL_STATUS, "MAILBOX_CBS_CTRL_STATUS"},
    {MAILBOX_CBS_TRACE, "MAILBOX_CBS_TRACE"},
    {MAILBOX_CBS_ENVSTAT, "MAILBOX_CBS_ENVSTAT"},
    {MAILBOX_CBS_SELFBOOT_CTRL_STATUS, "MAILBOX_CBS_SELFBOOT_CTRL_STATUS"},
    {MAILBOX_CBS_SELFBOOT_MSG, "MAILBOX_CBS_SELFBOOT_MSG"},
    {MAILBOX_CBS_DEBUG_PERV_CLK, "MAILBOX_CBS_DEBUG_PERV_CLK"},
    {MAILBOX_ROOTCTRL0, "MAILBOX_ROOTCTRL0"},
    {MAILBOX_ROOTCTRL1, "MAILBOX_ROOTCTRL1"},
    {MAILBOX_ROOTCTRL2, "MAILBOX_ROOTCTRL2"},
    {MAILBOX_ROOTCTRL3, "MAILBOX_ROOTCTRL3"},
    {MAILBOX_ROOTCTRL4, "MAILBOX_ROOTCTRL4"},
    {MAILBOX_ROOTCTRL5, "MAILBOX_ROOTCTRL5"},
    {MAILBOX_ROOTCTRL6, "MAILBOX_ROOTCTRL6"},
    {MAILBOX_ROOTCTRL7, "MAILBOX_ROOTCTRL7"},
    {MAILBOX_ROOTCTRL8, "MAILBOX_ROOTCTRL8"},
    {MAILBOX_PERVCTRL0, "MAILBOX_PERVCTRL0"},
    {MAILBOX_PERVCTRL1, "MAILBOX_PERVCTRL1"},
    {MAILBOX_SCRATCH_REG_1, "MAILBOX_SCRATCH_REG_1"},
    {MAILBOX_SCRATCH_REG_2, "MAILBOX_SCRATCH_REG_2"},
    {MAILBOX_SCRATCH_REG_3, "MAILBOX_SCRATCH_REG_3"},
    {MAILBOX_SCRATCH_REG_4, "MAILBOX_SCRATCH_REG_4"},
    {MAILBOX_SCRATCH_REG_5, "MAILBOX_SCRATCH_REG_5"},
    {MAILBOX_SCRATCH_REG_6, "MAILBOX_SCRATCH_REG_6"},
    {MAILBOX_SCRATCH_REG_7, "MAILBOX_SCRATCH_REG_7"},
    {MAILBOX_SCRATCH_REG_8, "MAILBOX_SCRATCH_REG_8"},
    {I2CM0_CTRL,    "I2CM0_CTRL"  },
    {I2CM0_D8t15,   "I2CM0_D8t15" },
    {I2CM0_FSTAT,   "I2CM0_FSTAT" },
    {I2CM0_D0t07,   "I2CM0_D0t07" },
    {I2CM0_CMD,     "I2CM0_CMD"   },
    {I2CM0_MODE,    "I2CM0_MODE"  },
    {I2CM0_WMRK,    "I2CM0_WMRK"  },
    {I2CM0_IMSK,    "I2CM0_IMSK"  },
    {I2CM0_ICND,    "I2CM0_ICND"  },
    {I2CM0_INTR,    "I2CM0_INTR"  },
    {I2CM0_STAT,    "I2CM0_STAT"  },
    {I2CM0_ESTAT,   "I2CM0_ESTAT" },
    {I2CM0_RSID,    "I2CM0_RSID"  },
    {I2CM0_PBUSY,   "I2CM0_PBUSY" },
    {I2CM1_CTRL,    "I2CM1_CTRL"  },
    {I2CM1_D8t15,   "I2CM1_D8t15" },
    {I2CM1_FSTAT,   "I2CM1_FSTAT" },
    {I2CM1_D0t07,   "I2CM1_D0t07" },
    {I2CM1_CMD,     "I2CM1_CMD"   },
    {I2CM1_MODE,    "I2CM1_MODE"  },
    {I2CM1_WMRK,    "I2CM1_WMRK"  },
    {I2CM1_IMSK,    "I2CM1_IMSK"  },
    {I2CM1_ICND,    "I2CM1_ICND"  },
    {I2CM1_INTR,    "I2CM1_INTR"  },
    {I2CM1_STAT,    "I2CM1_STAT"  },
    {I2CM1_ESTAT,   "I2CM1_ESTAT" },
    {I2CM1_RSID,    "I2CM1_RSID"  },
    {I2CM1_PBUSY,   "I2CM1_PBUSY" },
    {SBEFIFO_UPSTREAM_STATUS, "SBEFIFO_UPSTREAM_STATUS"},
    {SBEFIFO_DOWNSTREAM_STATUS, "SBEFIFO_DOWNSTREAM_STATUS"},
    {PCBM_REC_ERR_REG0,                "PCBM_REC_ERR_REG0"},
    {PCBM_REC_ERR_REG1,                "PCBM_REC_ERR_REG1"},
    {PCBM_REC_ERR_REG2,                "PCBM_REC_ERR_REG2"},
    {PCBM_REC_ERR_REG3,                "PCBM_REC_ERR_REG3"},
    {PCBM_FIRST_ERR,                   "PCBM_FIRST_ERR"},
    {PCBM_ERR_REG,                     "PCBM_ERR_REG"},
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
                                     std::vector<PIBMSRegValue_t>& pibms_reg_set)


{
    fapi2::buffer<uint64_t> INVALID_REGISTER = 0xDEADBEEFDEADBEEF;
    fapi2::buffer<uint8_t>  l_is_axone;
    fapi2::buffer<uint32_t> l_data32_cbs_cs;
    fapi2::buffer<uint32_t> l_data32_sb_cs;
    std::vector<PIBMSRegValue_t> v_pibms_reg_value;
    fapi2::buffer<uint64_t> l_data64;

    PIBMSRegValue_t l_regVal;
    uint32_t address ;


    FAPI_IMP("p9_pibms_reg_dump");
    FAPI_INF("Executing p9_pibms_reg_dump " );

    fapi2::buffer<uint64_t> buf;
    FAPI_TRY(FAPI_ATTR_GET(fapi2::ATTR_CHIP_EC_FEATURE_P9A_LOGIC_ONLY, i_target, l_is_axone));

    if (l_is_axone)
    {
        // Checking mux config and fence values for Axone
        fapi2::buffer<uint64_t> l_tempdata64;
        fapi2::buffer<uint32_t> l_tempdata32;

        FAPI_TRY(getCfamRegister(i_target, PERV_ROOT_CTRL0_FSI, l_tempdata32 ));
        FAPI_TRY(getScom(i_target, PERV_TP_CPLT_CTRL1, l_tempdata64));

        // RC0bits 16,18,19 != 000 && RC0bit16 != 1 && cplt_ctrl[pib(bit6)] != 1
        if ( ! ((l_tempdata32.getBit<PERV_ROOT_CTRL0_PIB2PCB_DC>()
                 || l_tempdata32.getBit<PERV_ROOT_CTRL0_18_SPARE_MUX_CONTROL>()
                 || l_tempdata32.getBit<PERV_ROOT_CTRL0_19_SPARE_MUX_CONTROL>()) &&
                !(l_tempdata32.getBit<PERV_ROOT_CTRL0_PIB2PCB_DC>())            &&
                !(l_tempdata64.getBit<PERV_1_CPLT_CTRL1_UNUSED_6B>()) ))
        {
            FAPI_ERR("Invalid Mux config(RC0 bits 16,18,19): %#010lX or Fence setup(CPLT_CTRL1 bits 6 (pib fence)): %#018lX to perform pibmem dump.\n",
                     l_tempdata32, l_tempdata64);
            goto fapi_try_exit;
        }
    }

    FAPI_TRY(fapi2::getCfamRegister(i_target, PERV_CBS_CS_FSI, l_data32_cbs_cs));
    FAPI_TRY(fapi2::getCfamRegister(i_target, PERV_SB_CS_FSI, l_data32_sb_cs));

    // check if in secure debug mode
    if (l_data32_cbs_cs.getBit<PERV_CBS_CS_SECURE_ACCESS_BIT>() &&
        l_data32_sb_cs.getBit<PERV_SB_CS_SECURE_DEBUG_MODE>() )
    {
        FAPI_DBG("In secure debug mode");

        for (auto it : v_pibms_regs_secure_mode)
        {
            // ******************************************************************
            address = it.number ;

            // No pibmem_registers in Axone. Pibmem_repair done through scan.
            if (l_is_axone && (address == 0x0008800B || address == 0x0008800C || address == 0x0008800D || address == 0x0008800E) )
            {
                buf = INVALID_REGISTER;
            }
            else
            {
                FAPI_TRY((getScom(i_target , address , buf )));
            }

            l_regVal.reg = it;
            l_regVal.value = buf;
            pibms_reg_set.push_back(l_regVal);
            // ******************************************************************
        }

    }

    else
    {
        // secure registers collection
        for (auto it : v_pibms_regs_secure_mode)
        {
            // ******************************************************************
            address = it.number ;

            // No pibmem_registers in Axone. Pibmem_repair done through scan.
            if (l_is_axone && (address == 0x0008800B || address == 0x0008800C || address == 0x0008800D || address == 0x0008800E) )
            {
                buf = INVALID_REGISTER;
            }
            else
            {
                FAPI_TRY((getScom(i_target , address , buf )));
            }

            l_regVal.reg = it;
            l_regVal.value = buf;
            pibms_reg_set.push_back(l_regVal);
            // ******************************************************************
        }

        for (auto it : v_pibms_regs)
        {
            // ******************************************************************
            address = it.number ;
            FAPI_TRY((getScom(i_target , address , buf )));
            l_regVal.reg = it;
            l_regVal.value = buf;
            pibms_reg_set.push_back(l_regVal);
            // ******************************************************************
        }
    }


fapi_try_exit:
    FAPI_INF("< p9_pibms_reg_dump");
    return fapi2::current_err;
}
