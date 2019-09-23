/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/qme/qme_stop_self_execute.c $ */
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
#include "qme.h"

extern QmeRecord G_qme_record;
uint64_t G_spattn_mask = 0;

void
qme_stop_self_complete(uint32_t core_target)
{
    data64_t scom_data;

    PK_TRACE("Poll for core stop again(pm_active=1)");

    // check pm_active_lopri for stop11
    while((~(in32_sh(QME_LCL_EINR))) & (core_target << SHIFT64SH(55)));

    PK_TRACE_INF("SF.RS: Self Save/Restore Completed, Core Stopped Again(pm_exit=0/pm_active=1)");

    PK_TRACE("Cleaning up thread scratch register after self restore.");
    PPE_PUTSCOM_MC( SCRATCH0, core_target, 0 );

    PK_TRACE("Restore SPATTN after self-restore");
    PPE_PUTSCOM_MC( SPATTN_MASK, core_target, G_spattn_mask );

    PK_TRACE("Always Unfreeze IMA (by clearing bit 34) in case the CHTM is enabled to sample it");
    PPE_GETSCOM_MC_EQU( IMA_EVENT_MASK, core_target, scom_data.value);
    PPE_PUTSCOM_MC    ( IMA_EVENT_MASK, core_target, scom_data.value & ~BIT64(34));

    PK_TRACE("Drop BLOCK_INTERRUPT to PC and IGNORE_RECENT_PMCR via SCSR[0/19]");
    out32( QME_LCL_CORE_ADDR_WR( QME_SCSR_WO_CLEAR, core_target ), ( BIT32(0) | BIT32(19) ) );

    PK_TRACE("Clear pm_active status via EISR[52:55]");
    out32( QME_LCL_EISR_CLR, core_target << SHIFT64SH(55));
}

void
qme_stop_self_execute(uint32_t core_target, uint32_t i_saveRestore )
{
    uint32_t core_mask;
    data64_t scom_data;
    QmeHeader_t* pQmeImgHdr = (QmeHeader_t*)(QME_SRAM_HEADER_ADDR);

    // ===============================

    PK_TRACE("Assert BLOCK_INTERRUPT to PC and IGNORE_RECENT_PMCR via SCSR[0/19]");
    out32( QME_LCL_CORE_ADDR_WR( QME_SCSR_WO_OR, core_target ), ( BIT32(0) | BIT32(19) ) );

    PK_TRACE_INF("SF.RS: Self Restore Prepare, Core Waking up(pm_exit=1) via SCSR[1]");
    out32( QME_LCL_CORE_ADDR_WR( QME_SCSR_WO_OR, core_target ), BIT32(1) );

    PPE_WAIT_4NOP_CYCLES

    PK_TRACE("Polling for core wakeup(pm_active=0) via EINR[52:55]");

    while((in32_sh(QME_LCL_EINR)) & (core_target << SHIFT64SH(55)));

    // ===============================
    /*
    #if EPM_TUNING

        scom_data.value = 0xA200000;

        if( G_qme_record.hcode_func_enabled & QME_SMF_SUPPORT_ENABLE )
        {
            // set bit 63:QME_RMOR_URMOR_SELECT
            scom_data.value |= 1;
        }

        out64( QME_LCL_CORE_ADDR_WR( QME_RMOR, core_target ), scom_data.value );

    #else
    */
    scom_data.value = pQmeImgHdr->g_qme_cpmr_PhyAddr & BITS64(13, 30); //HRMOR[13:42]

    if( G_qme_record.hcode_func_enabled & QME_SMF_SUPPORT_ENABLE )
    {
        PK_TRACE("SMF core self save/restore, write URMOR with HOMER address" );
        scom_data.value |= 1;
        out64( QME_LCL_CORE_ADDR_WR( QME_RMOR, core_target ), scom_data.value );

        if( SPR_SELF_SAVE == i_saveRestore )
        {
            PK_TRACE_INF("SMF core self save, write HRMOR un-secure HOMER address");
            scom_data.value = pQmeImgHdr->g_qme_unsec_cpmr_PhyAddr & BITS64(13, 30); //Unsecure HOMER
        }
        else
        {
            PK_TRACE_INF("SMF core wakeup, write HRMOR un-secure HOMER address");
            scom_data.words.upper =  scom_data.words.upper & ~BIT32(15);
        }
    }
    else
    {
        PK_TRACE_INF("Non SMF core wakes up, write HRMOR with HOMER address");
        scom_data.words.upper =  scom_data.words.upper & ~BIT32(15);
    }

    out64( QME_LCL_CORE_ADDR_WR( QME_RMOR, core_target ), scom_data.value );

//#endif

    // ===============================

    PK_TRACE("Save off and mask SPATTN before self-restore");
    PPE_GETSCOM_MC_EQU( SPATTN_MASK, core_target, G_spattn_mask);
    PPE_PUTSCOM_MC    ( SPATTN_MASK, core_target, BITS64(0, 64));

    for (core_mask = 8; core_mask; core_mask = core_mask >> 1)
    {
        if (core_target & core_mask)
        {
//            PK_TRACE("Read WKUP_ERR_INJECT_MODE via CPMMR[8]");
//            PPE_GETSCOM_UC(CPPM_CPMMR, 0, core_mask, scom_data.value);

            if (scom_data.words.upper & BIT32(8))
            {
                PK_TRACE_INF("WARNING: Injecting a core[%d] xstop via C_LFIR[1]", core_mask);
                PPE_PUTSCOM_UC( CORE_FIR_OR, 0, core_mask, BIT64(1));
            }

            if( SPR_SELF_SAVE == i_saveRestore )
            {
                //Writing thread scratch register to
                //Signal Self Save Restore code for save operation.
                scom_data.words.upper     =   0;
                scom_data.words.lower     =   1;
            }
            else
            {
                //Writing thread scratch register to
                // 1. Init Runtime wakeup mode for core.
                // 2. Signal Self Save Restore code for restore operation.

                if (scom_data.words.upper & BIT32(3))
                {
                    scom_data.value = BIT64(59);
                }
                else
                {
                    scom_data.value = 0;
                }
            }

            PPE_PUTSCOM_UC( SCRATCH0, 0, core_mask, scom_data.value);
        }
    }

    // ===============================

    PK_TRACE_INF("SF.RS: Self Restore Kickoff, S-Reset All Core Threads");

    // Disable interrupts around the sreset to polling check to not miss the self-restore
    wrteei(0);

    PPE_PUTSCOM_MC( DIRECT_CONTROLS, core_target,
                    BIT64(4) | BIT64(12) | BIT64(20) | BIT64(28));
    sync();

    wrteei(1);

    PK_TRACE("Allow threads to run(pm_exit=0)");
    out32( QME_LCL_CORE_ADDR_WR( QME_SCSR_WO_CLEAR, core_target ), BIT32(1) );
}
