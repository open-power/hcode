/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/hwp/lib/p9_sbe_localreg_dump.C $   */
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
/// @file p9_sbe_localreg_dump.C
/// @brief

// *HWP HWP Owner       : Pradeep CN <pradeepcn@in.ibm.com>
// *HWP Backup HWP Owner: Anay K Desai
// *HWP FW Owner        :
// *HWP Team            : PERV
// *HWP Level           : 2
// *HWP Consumed by     :

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
#include <p9_ppe_state.H>
// #include <p9_sbe_trace.H>
#include <p9_ppe_common.H>
#include <p9_sbe_localreg_dump.H>

// ----------------------------------------------------------------------
// Constants
// ----------------------------------------------------------------------

// these are probably in some include file






enum SBE_LREGS
{
    FI2C_CFG     = 0x800 ,
    FI2C_STAT    = 0x820 ,
    FI2C_SCFG0   = 0x860 ,
    FI2C_SCFG1   = 0x880 ,
    FI2C_SCFG2   = 0x8A0 ,
    FI2C_SCFG3   = 0x8C0 ,
    SBE_SCRATCH0 = 0x1000 ,
    SBE_SCRATCH1 = 0x1020 ,
    SBE_SCRATCH2 = 0x1040 ,
    SBE_SCRATCH3 = 0x1060 ,
    SBE_MISC     = 0x2000 ,
    SBE_EISR     = 0x0000 ,
    SBE_EIMR     = 0x0020 ,
    SBE_EIPR     = 0x0040 ,
    SBE_EITR     = 0x0060 ,
    SBE_EISTR    = 0x0080 ,
    SBE_EINR     = 0x00A0 ,
    SBE_TSEL     = 0x0100 ,
    SBE_DBG      = 0x0120 ,
    SBE_TBR      = 0x0140 ,
    SBE_IVPR     = 0x0160 ,

};

std::vector<PPEReg_t> v_sbe_local_regs =
{
    { FI2C_CFG,      "FI2C_CFG" },
    { FI2C_STAT,     "FI2C_STAT" },
    { FI2C_SCFG0,    "FI2C_SCFG0" },
    { FI2C_SCFG1,    "FI2C_SCFG1" },
    { FI2C_SCFG2,    "FI2C_SCFG2" },
    { FI2C_SCFG3,    "FI2C_SCFG3" },
    { SBE_SCRATCH0,  "SBE_SCRTH0" },
    { SBE_SCRATCH1,  "SBE_SCRTH1" },
    { SBE_SCRATCH2,  "SBE_SCRTH2" },
    { SBE_SCRATCH3,  "SBE_SCRTH3" },
    { SBE_MISC,      "SBE_MISC" },
    { SBE_EISR,      "SBE_EISR" },
    { SBE_EIMR,      "SBE_EIMR" },
    { SBE_EIPR,      "SBE_EIPR" },
    { SBE_EITR,      "SBE_EITR" },
    { SBE_EISTR,     "SBE_EISTR" },
    { SBE_EINR,      "SBE_EINR" },
    { SBE_TSEL,      "SBE_TSEL" },
    { SBE_DBG,       "SBE_DBG" },
    { SBE_TBR,       "SBE_TBR" },
    { SBE_IVPR,      "SBE_IVPR" },
};



// -----------------------------------------------------------------------------
//  Function prototypes
// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
//  Function definitions
// -----------------------------------------------------------------------------

/// @brief Dump the contents of the SBE SRAM
///
/// @param [in]  i_target                  Chip target
/// @param [out] v_sbe_local_reg_value     Vector of structure of LocalReg
///
/// @retval FAPI_RC_SUCCESS
/// @retval ERROR defined in xml

fapi2::ReturnCode p9_sbe_localreg_dump( const fapi2::Target<fapi2::TARGET_TYPE_PROC_CHIP>& i_target ,
                                        const uint16_t force_halt,
                                        std::vector<SCOMRegValue_t>& v_sbe_local_reg_value)

{

    fapi2::buffer<uint64_t> l_data64;

    SCOMRegValue_t l_regVal;
    uint16_t address = 0 ;

    FAPI_IMP("p9_sbe_trace");
    FAPI_INF("Executing p9_sbe_trace " );
    fapi2::buffer<uint32_t> l_gpr0_save;
    fapi2::buffer<uint32_t> l_gpr1_save;
    fapi2::buffer<uint32_t> l_gpr9_save;
    fapi2::buffer<uint64_t> l_sprg0_save;
    fapi2::buffer<uint64_t> buf;

    if (force_halt == 0)
    {
        FAPI_TRY(pollHaltStateDone(i_target , sbe_base_address ));
    }

    else

    {
        FAPI_INF("p9_sbe_localreg_dump : Forcing halt thru SCOM");
        FAPI_TRY(haltDone(i_target, sbe_base_address ));
        FAPI_TRY(pollHaltStateDone(i_target, sbe_base_address ));
    }






    FAPI_TRY(backup_gprs_sprs(i_target , l_gpr0_save, l_gpr1_save, l_gpr9_save, l_sprg0_save ));


    for (auto it : v_sbe_local_regs)
    {
        // ******************************************************************
        address = it.number ; // defined in enums in p9_ppe_common.H files
        FAPI_TRY(LocalRegRead(i_target , address , buf ));

        FAPI_INF(" %-6s : Local_reg_addr :  0xC000_%04x :  0x%016lX \n", it.name.c_str() , it.number , buf);
        l_regVal.reg = it;
        l_regVal.value = buf;
        v_sbe_local_reg_value.push_back(l_regVal);
        // ******************************************************************
    }

    FAPI_TRY(restore_gprs_sprs(i_target , l_gpr0_save, l_gpr1_save, l_gpr9_save, l_sprg0_save ));
    FAPI_INF("< p9_sbe_localreg_dump");

fapi_try_exit:
    return fapi2::current_err;
}
