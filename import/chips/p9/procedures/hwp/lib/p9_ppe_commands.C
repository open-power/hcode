/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/hwp/lib/p9_ppe_commands.C $        */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2016,2020                                                    */
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
///
/// @file  p9_ppe_commands.C
/// @brief Get PPE's internal state
///
/// *HWP HW Owner        : Ashish More <ashish.more.@in.ibm.com>
/// *HWP HW Backup Owner : Brian Vanderpool <vanderp@us.ibm.com>
/// *HWP FW Owner        : Sangeetha T S <sangeet2@in.ibm.com>
/// *HWP Team            : PM
/// *HWP Level           : 2
/// *HWP Consumed by     : SBE, Cronus
///
/// @verbatim
///
/// Procedure Summary:
///   - Dump out PPE's internal state
///
/// @endverbatim

//-----------------------------------------------------------------------------
// Includes
//-----------------------------------------------------------------------------
#include <fapi2.H>
#include <p9_ppe_commands.H>
#include <p9_hcd_common.H>

//-----------------------------------------------------------------------------

/**
 * @brief Perform PPE internal reg "read" operation
 * @param[in]   i_target        Chip Target
 * @param[in]   i_base_address  Base SCOM address of the PPE
 * @param[in]   i_mode          PPE Dump Mode
 * @param[out]  v_ppe_minor_sprs_value   Returned data
 * @param[out]  v_ppe_major_sprs_value   Returned data
 * @param[out]  v_ppe_xirs_value   Returned data
 * @param[out]  v_ppe_gprs_value   Returned data
 * @param[out]  v_ppe_special_sprs_value   Returned data
 * @return  fapi2::ReturnCode
 */
fapi2::ReturnCode
ppe_check_status_data(const fapi2::Target<fapi2::TARGET_TYPE_PROC_CHIP>& i_target,
                      const uint64_t i_base_address,
                      std::vector<PPERegValue_t>& v_ppe_xirs_value,
                      uint8_t& l_ppe_halt_state)
{


    PPERegValue_t l_regVal;
    char outstr[32];
    fapi2::buffer<uint64_t> l_data64;
    fapi2::buffer<uint32_t> l_data32;

    FAPI_INF("Base Address : 0x%08llX", i_base_address);
    FAPI_INF("------   XIRs   ------");
    // XSR and IAR
    FAPI_TRY(getScom(i_target, i_base_address + PPE_XIDBGPRO, l_data64), "Error in GETSCOM");
    l_data64.extractToRight(l_data32, 0, 32);
    sprintf(outstr, "XSR");
    FAPI_INF("%-9s = 0x%08llX", outstr, l_data32);
    l_regVal.number = XSR;
    l_regVal.value = l_data32;
    v_ppe_xirs_value.push_back(l_regVal);

    l_data64.extractToRight(l_data32, 32, 32);
    sprintf(outstr, "IAR");
    FAPI_INF("%-9s = 0x%08llX", outstr, l_data32);
    l_regVal.number = IAR;
    l_regVal.value = l_data32;
    v_ppe_xirs_value.push_back(l_regVal);

    // IR and EDR
    FAPI_TRY(getScom(i_target, i_base_address + PPE_XIRAMEDR, l_data64), "Error in GETSCOM");
    l_data64.extractToRight(l_data32, 0, 32);
    sprintf(outstr, "IR");
    FAPI_INF("%-9s = 0x%08llX", outstr, l_data32);
    l_regVal.number = IR;
    l_regVal.value = l_data32;
    v_ppe_xirs_value.push_back(l_regVal);


    l_data64.extractToRight(l_data32, 32, 32);
    sprintf(outstr, "EDR");
    FAPI_INF("%-9s = 0x%08llX", outstr, l_data32);
    l_regVal.number = EDR;
    l_regVal.value = l_data32;
    v_ppe_xirs_value.push_back(l_regVal);


    // Save SPRG0
    FAPI_TRY(getScom(i_target, i_base_address + PPE_XIRAMDBG, l_data64), "Error in GETSCOM");
    l_data64.extractToRight(l_data32, 32, 32);
    sprintf(outstr, "SPRG0");
    FAPI_INF("%-9s = 0x%08llX", outstr, l_data32);
    l_regVal.number = SPRG0;
    l_regVal.value = l_data32;
    v_ppe_xirs_value.push_back(l_regVal);


    //Initially Check for halt
    FAPI_TRY(getScom(i_target, i_base_address + PPE_XIRAMDBG, l_data64), "Error in GETSCOM");

    if (l_data64.getBit(0, 1))
    {
        l_ppe_halt_state  = 1;

    }
    else
    {
        l_ppe_halt_state  = 0;
    }


fapi_try_exit:
    return fapi2::current_err;
}

// Main Hardware procedure
fapi2::ReturnCode
p9_ppe_commands(const fapi2::Target<fapi2::TARGET_TYPE_PROC_CHIP>& i_target,
                const uint64_t i_base_address,
                const PPE_Cmnds i_cmnds,
                std::vector<PPERegValue_t>& v_ppe_xirs_value,
                uint8_t& v_ppe_halt_state
               )
{
    fapi2::buffer<uint32_t> l_gpr31_save;
    fapi2::buffer<uint64_t> l_sprg0_save;
    fapi2::buffer<uint64_t> l_data64;
    uint32_t l1_data32 = 0;
    uint32_t l2_data32 = 0;
    char outstr[32];

    if(i_cmnds.cmnd_check_status)
    {
        //Call the function to collect the data.
        ppe_check_status_data(i_target,
                              i_base_address,
                              v_ppe_xirs_value,
                              v_ppe_halt_state
                             );
    }

    if(i_cmnds.cmnd_force_halt)
    {
        FAPI_TRY(ppe_force_halt(i_target, i_base_address));
    }

    if(i_cmnds.cmnd_halt)
    {
        FAPI_TRY(ppe_halt(i_target, i_base_address));
    }

    if(i_cmnds.xcr_cmnd_clear_dbg_status)
    {
        FAPI_DBG("XCR command to clear debug status");
        FAPI_TRY(ppe_clear_dbg(i_target, i_base_address));
    }

    if(i_cmnds.xcr_cmnd_toggle_xsr_trh)
    {
        FAPI_DBG("XCR command to toggle XSR TRH");
        FAPI_TRY(ppe_toggle_trh(i_target, i_base_address));
    }

    if(i_cmnds.xcr_cmnd_soft_reset)
    {
        FAPI_DBG("XCR command soft reset");
        FAPI_TRY(ppe_soft_reset(i_target, i_base_address));
    }

    if(i_cmnds.xcr_cmnd_hard_reset)
    {
        FAPI_DBG("XCR command hard reset");
        FAPI_TRY(ppe_hard_reset(i_target, i_base_address));
    }


    if(i_cmnds.cmnd_resume_brkpt || i_cmnds.cmnd_clear_brkpt ||
       i_cmnds.cmnd_set_instr_addr_brkpt || i_cmnds.cmnd_set_load_addr_brkpt ||
       i_cmnds.cmnd_set_store_addr_brkpt || i_cmnds.cmnd_set_store_load_addr_brkpt || i_cmnds.cmnd_set_trap ||
       i_cmnds.cmnd_reset_trap  )
    {
        // Save SPRG0
        FAPI_DBG("Save SPRG0");
        FAPI_TRY(getScom(i_target, i_base_address + PPE_XIRAMDBG, l_data64), "Error in GETSCOM");
        l_data64.extractToRight(l_sprg0_save, 32, 32);
        FAPI_DBG("Saved SPRG0 value : 0x%08llX", l_sprg0_save );

        FAPI_DBG("Save GPR31");
        l_data64.flush<0>().insertFromRight(ppe_getMtsprInstruction(R31, SPRG0), 0, 32);
        FAPI_DBG("getMtsprInstruction(%d, SPRG0): 0x%16llX", R31, l_data64 );

        FAPI_TRY(ppe_RAMRead(i_target, i_base_address, l_data64, l_gpr31_save));
        FAPI_DBG("Saved GPR31 value : 0x%08llX", l_gpr31_save );

        if(i_cmnds.cmnd_resume_brkpt || i_cmnds.cmnd_clear_brkpt )
        {
            FAPI_DBG("Resume/clear Breakpoint");
            //Modify DBCR
            //clear DBCR[8] IACE and DBCR[12:13] DACE
            FAPI_TRY(ppe_update_dbcr(i_target, i_base_address, ANDIS_CONST, 0x0F73, R31));
            //then resume at the end if resume_brkpt

        }


        if(i_cmnds.cmnd_set_instr_addr_brkpt | i_cmnds.cmnd_set_load_addr_brkpt |
           i_cmnds.cmnd_set_store_addr_brkpt | i_cmnds.cmnd_set_store_load_addr_brkpt)
        {
            FAPI_INF("Update DACR with address 0x%X", i_cmnds.brkpt_address);
            //Update address in DACR(Common)
            FAPI_TRY(ppe_update_dacr(i_target, i_base_address, i_cmnds.brkpt_address, R31));

            //Now set DBCR
            if(i_cmnds.cmnd_set_instr_addr_brkpt)
            {
                FAPI_DBG("Set INSTR Addr Brkpt");
                FAPI_TRY(ppe_update_dbcr(i_target, i_base_address, ORIS_CONST, 0x0080, R31));

            }

            if(i_cmnds.cmnd_set_store_addr_brkpt)
            {
                FAPI_DBG("Set Store Addr Brkpt");
                //Disable IACE bit 8
                FAPI_TRY(ppe_update_dbcr(i_target, i_base_address, ANDIS_CONST, 0x0F73, R31));
                //Enable DACE i.e. bit 12:13 = 01
                FAPI_TRY(ppe_update_dbcr(i_target, i_base_address, ORIS_CONST, 0x0004, R31));

            }

            if(i_cmnds.cmnd_set_load_addr_brkpt)
            {
                FAPI_DBG("Set Load Addr Brkpt");
                //Disable IACE bit 8
                FAPI_TRY(ppe_update_dbcr(i_target, i_base_address, ANDIS_CONST, 0x0F73, R31));
                //Enable DACE i.e. bit 12:13 = 10
                FAPI_TRY(ppe_update_dbcr(i_target, i_base_address, ORIS_CONST, 0x0008, R31));

            }

            if(i_cmnds.cmnd_set_store_load_addr_brkpt)
            {
                FAPI_DBG("Set Store Load Addr Brkpt");
                //Disable IACE bit 8
                FAPI_TRY(ppe_update_dbcr(i_target, i_base_address, ANDIS_CONST, 0x0F73, R31));
                //Enable DACE i.e. bit 12:13 = 11
                FAPI_TRY(ppe_update_dbcr(i_target, i_base_address, ORIS_CONST, 0x000C, R31));

            }

        }

        if(i_cmnds.cmnd_set_trap)   //set bit DBCR[trap] 7th bit
        {
            FAPI_DBG("Set DBCR[TRAP]");
            FAPI_TRY(ppe_update_dbcr(i_target, i_base_address, ORIS_CONST, 0x0100, R31));
        }

        if(i_cmnds.cmnd_reset_trap)   //reset bit DBCR[trap] 7th bit
        {
            FAPI_DBG("Reset DBCR[TRAP]");
            FAPI_TRY(ppe_update_dbcr(i_target, i_base_address, ANDIS_CONST, 0x0EFF, R31));
        }


        FAPI_DBG("Restore GPR31");
        l_data64.flush<0>().insertFromRight(ppe_getMfsprInstruction(R31, SPRG0), 0, 32);
        FAPI_DBG("getMfsprInstruction(R31, SPRG0): 0x%16llX",  l_data64 );
        l_data64.insertFromRight(l_gpr31_save, 32, 32);
        FAPI_DBG("Final Instr + SPRG0: 0x%16llX", l_data64 );
        //write sprg0 with address and ram mfsprg0 to i_Rs
        FAPI_TRY(fapi2::putScom(i_target, i_base_address + PPE_XIRAMGA, l_data64 ));

        FAPI_DBG("Restore SPRG0");
        FAPI_TRY(ppe_pollHaltState(i_target, i_base_address));
        FAPI_TRY(putScom(i_target, i_base_address + PPE_XIRAMDBG , l_sprg0_save), "Error in GETSCOM");

    }

    if(i_cmnds.cmnd_single_step)
    {
        FAPI_DBG("Single step PPE");
        FAPI_TRY(ppe_single_step(i_target, i_base_address, R31, i_cmnds.step_count));

    }

    if(i_cmnds.cmnd_resume_with_ram )
    {
        //Get IAR
        FAPI_DBG("Resume With Ram");
        FAPI_TRY(fapi2::getScom(i_target, i_base_address + PPE_XIDBGPRO, l_data64), "Error in GETSCOM");
        l_data64.extractToRight(l1_data32, 32, 32);
        sprintf(outstr, "IAR before ramming instruction");
        FAPI_INF("%-9s = 0x%08llX", outstr, l1_data32);

        FAPI_INF("Ram the instruction 0x%08llX ", i_cmnds.ram_instr);
        FAPI_TRY(ppe_RAM(i_target, i_base_address, i_cmnds.ram_instr));

        //Get IAR again
        FAPI_TRY(fapi2::getScom(i_target, i_base_address + PPE_XIDBGPRO, l_data64), "Error in GETSCOM");
        l_data64.extractToRight(l2_data32, 32, 32);
        sprintf(outstr, "IAR after ramming instruction");
        FAPI_INF("%-9s = 0x%08llX", outstr, l2_data32);

        //If IAR is same after Ramming, increment IAR + 4
        if(l1_data32 == l2_data32)
        {
            FAPI_DBG("IAR matches, increment IAR + 4");
            l1_data32 = l1_data32 + 4 ;
            FAPI_INF("new iar = 0x%08llX",  l1_data32);
            l_data64.flush<0>().insertFromRight(l1_data32, 32, 32);
            FAPI_INF("New IAR = 0x%08llX",  l_data64);
            FAPI_TRY(putScom(i_target, i_base_address + PPE_XIDBGPRO, l_data64),
                     "Error in PUTSCOM in XIDBGPRO to change IAR + 4 ");
        }

        //Then resume
        //FAPI_TRY(ppe_resume(i_target, i_base_address));

    }


    if(i_cmnds.cmnd_step_trap)   // Advance past a trap instruction
    {
        //Get IAR
        FAPI_TRY(fapi2::getScom(i_target, i_base_address + PPE_XIDBGPRO, l_data64), "Error in GETSCOM");
        l_data64.extractToRight(l1_data32, 32, 32);
        sprintf(outstr, "IAR of the Trap instruction");
        FAPI_INF("%-9s = 0x%08llX", outstr, l1_data32);

        l1_data32 = l1_data32 + 4 ;
        FAPI_DBG("new iar = 0x%08llX",  l1_data32);
        l_data64.flush<0>().insertFromRight(l1_data32, 32, 32);
        FAPI_INF("New IAR = 0x%08llX",  l_data64);
        FAPI_TRY(putScom(i_target, i_base_address + PPE_XIDBGPRO, l_data64),
                 "Error in PUTSCOM in XIDBGPRO to change IAR + 4 ");
    }

    //consider Resume after setting breakpoint
    if(i_cmnds.cmnd_resume || i_cmnds.cmnd_resume_brkpt || i_cmnds.cmnd_resume_with_ram )
    {
        FAPI_DBG("Resume PPE");
        FAPI_TRY(ppe_resume(i_target, i_base_address));
    }

    if(i_cmnds.cmnd_ram)
    {
        FAPI_DBG("RAM PPE");
        FAPI_TRY(ppe_RAM(i_target, i_base_address, i_cmnds.ram_instr));

    }

    if(i_cmnds.xcr_cmnd_resume_only)
    {
        FAPI_DBG("Only Resume PPE");
        FAPI_TRY(ppe_resume_only(i_target, i_base_address));

    }

    if(i_cmnds.xcr_cmnd_ss_only)
    {
        FAPI_DBG("Only Single step PPE");
        FAPI_TRY(ppe_ss_only(i_target, i_base_address,  i_cmnds.step_count));

    }

    if(i_cmnds.write_iar)
    {
        FAPI_DBG("change PPE's IAR");
        FAPI_TRY(ppe_write_iar(i_target, i_base_address, i_cmnds.brkpt_address));

    }


fapi_try_exit:
    return fapi2::current_err;
} // Procedure
