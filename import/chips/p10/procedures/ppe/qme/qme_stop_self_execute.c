/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/qme/qme_stop_self_execute.c $ */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019,2021                                                    */
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
#include "errlutil.h"

enum
{
    SR_FAIL_SLAVE_THREAD    =   0x01,
    SR_FAIL_MASTER_THREAD   =   0x02,
    SR_FFDC_SIZE            =   864,
    INIT_FFDC_COLLECT       =   55,
    SLAVE_THRD_COMPLETE     =   56,
    FFDC_AVAILABLE          =   62,
    ODD_CORES_MASK          =   0x05,
    EVEN_CORES_MASK         =   0x0A,
};

extern QmeRecord G_qme_record;
uint64_t G_spattn_mask[4] = {0};

uint8_t get_core_pos( uint32_t i_mask )
{
    uint32_t l_corePos = 0;

    switch( i_mask )
    {
        case 8:
            l_corePos = 0;
            break;

        case 4:
            l_corePos = 1;
            break;

        case 2:
            l_corePos = 2;
            break;

        case 1:
            l_corePos = 3;
            break;
    }

    return l_corePos;
}

void
qme_stop_self_complete(uint32_t core_target, uint32_t i_saveRestore)
{
    data64_t scom_data;
    uint32_t core_mask;
    uint32_t core_index;
    uint32_t sr_fail_loc    =   SR_FAIL_SLAVE_THREAD;

    // RTC 248150: value needs to be reviewed post hardware
    // the timeout needs to cover the worst case save or
    // restore operation for all the slave threads
    static uint32_t CTS_TIMEOUT_COUNT    =  0x00FFFFFF;
    static uint32_t THREAD_TIMEOUT_COUNT =  0x000FFFFF;
    uint8_t core_inst = 0;
    uint32_t l_scratch_add = 0;

    PK_TRACE_INF("Core Target %08X", core_target );

    // check pm_active_lopri to be low
    // RTC 248149: needs timout for logging!!!
    while(((in32_sh(QME_LCL_EINR))) & (core_target << SHIFT64SH(55)));

    PK_TRACE_INF("Poll for slave threads (1,2,3) to complete via Core Thread State");

    for( core_mask = 8; core_mask; core_mask = core_mask >> 1 )
    {
        core_inst      =  get_core_pos( core_mask );
        l_scratch_add  =  SCRATCH0;

        if( core_mask & ODD_CORES_MASK  )
        {
            l_scratch_add = SCRATCH1;
        }

        if( core_target & core_mask )
        {
            PK_TRACE_INF("CORE_THREAD_STATE Loop Core Pos %d",  core_inst );
            G_qme_record.cts_timeout_count = 0;
            scom_data.value = 0;

            do
            {
                PPE_WAIT_4NOP_CYCLES;
                PPE_GETSCOM_UC ( CORE_THREAD_STATE, 0, core_mask, scom_data.value);
                scom_data.words.lower &= BITS64SH(56, 4); // vt[1,2,3]_stop_state
            }
            while( scom_data.words.lower >> 4 != 0x7 && ++G_qme_record.cts_timeout_count < CTS_TIMEOUT_COUNT );

            PPE_GETSCOM_UC ( l_scratch_add, 0, core_mask, scom_data.value);

            if ( CTS_TIMEOUT_COUNT == G_qme_record.cts_timeout_count )
            {
                G_qme_record.c_self_fault_vector |= ( SLAVE_THRD_FAIL << ( 24 - ( core_inst * 8 )) );
                G_qme_record.c_self_failed  |= core_mask;

                if( !( scom_data.value & BIT64( FFDC_AVAILABLE ) ) )
                {
                    //Slave threads failed to finish within time and there is no FFDC available,
                    //force FFDC collection
                    scom_data.value |= BIT64(INIT_FFDC_COLLECT);
                }
            }
            else
            {
                //Unlock master thread to finish self-save-restore
                scom_data.value |= BIT64(SLAVE_THRD_COMPLETE);
            }

            PPE_PUTSCOM_UC( l_scratch_add, 0, core_mask, scom_data.value );

            // check pm_active_lopri for stop11
            G_qme_record.cts_timeout_count = 0;

            //Good cores will finish core SPR-Save-Restore. However, bad cores will
            // collect FFDC during delay below

            do
            {
                PPE_WAIT_4NOP_CYCLES;

                if( in32_sh(QME_LCL_EINR) & ( core_mask << SHIFT64SH(55) ) )
                {
                    G_qme_record.c_self_fault_vector |= ( SR_SUCCESS << ( 24 - ( core_inst * 8 )) );
                    PK_TRACE_INF( "SR: All threads done" );
                    break;
                }

                PPE_GETSCOM_UC ( l_scratch_add, 0, core_mask, scom_data.value);

                if( scom_data.value & BIT64( FFDC_AVAILABLE ) )
                {
                    G_qme_record.cts_timeout_count = 0;

                    if( scom_data.value & BIT64(SLAVE_THRD_COMPLETE) )
                    {
                        //slave threads are done and FFDC is available i.e.
                        //master thread failed and FFDC collected
                        G_qme_record.c_self_fault_vector |= ( MASTER_THRD_FAIL << ( 24 - ( core_inst * 8 )) );
                        G_qme_record.c_self_failed  |= core_mask;
                    }
                    else
                    {
                        //FFDC collected due to slave thread failure
                        break;
                    }
                }
            }
            while(  ++G_qme_record.cts_timeout_count < CTS_TIMEOUT_COUNT );

            PK_TRACE_INF( "Core SR Time Over. Fault 0x%08x", G_qme_record.c_self_fault_vector );

            if( ( CTS_TIMEOUT_COUNT == G_qme_record.cts_timeout_count ) &&
                !( G_qme_record.c_self_fault_vector & ( 0xFF << ( 24 - ( core_inst * 8 ))) ))
            {
                PK_TRACE_INF( "Master Thread Timeout" );
                PPE_GETSCOM_UC ( l_scratch_add, 0, core_mask, scom_data.value);

                if( !( scom_data.value & BIT64( FFDC_AVAILABLE ) ) )
                {
                    //Trigger FFDC collection for master thread
                    scom_data.value |= BIT64(INIT_FFDC_COLLECT);
                    PPE_PUTSCOM_UC( l_scratch_add, 0, core_mask, scom_data.value );
                    PK_TRACE_INF( "Forcing Master Thread FFDC Collection" );
                    G_qme_record.c_self_fault_vector |= ( MASTER_THRD_FAIL << ( 24 - ( core_inst * 8 )) );
                    G_qme_record.c_self_failed  |= core_mask;
                }
            }

            PK_TRACE_INF( "Fault Vect 0x%08x", G_qme_record.c_self_fault_vector );

            continue;

        } //if (core_target & core_mask)

    } // completed handling of slave and master threads

    for( core_mask = 8; core_mask; core_mask = core_mask >> 1 )
    {
        if ( core_mask & core_target )
        {
            core_inst      =  get_core_pos( core_mask );
            l_scratch_add  =  SCRATCH0;

            if( core_mask & ODD_CORES_MASK  )
            {
                l_scratch_add = SCRATCH1;
            }

            G_qme_record.cts_timeout_count = 0;

            // FFDC not collected , wait a bit and hope it is DONE
            do
            {
                PPE_GETSCOM_UC ( l_scratch_add, 0, core_mask, scom_data.value );

                if( !( scom_data.value &  BIT64(INIT_FFDC_COLLECT)) )
                {
                    //No case of force collection of FFDC
                    break;
                }

                if( ( scom_data.value &  BIT64( FFDC_AVAILABLE ) ) )
                {
                    // Master thread FFDC is available now
                    break;
                }

                PPE_WAIT_4NOP_CYCLES;

            }
            while( ++G_qme_record.cts_timeout_count < THREAD_TIMEOUT_COUNT );

            PPE_GETSCOM_UC ( l_scratch_add, 0, core_mask, scom_data.value);

            //FFDC Available
            if( scom_data.value &  BIT64( FFDC_AVAILABLE ) )
            {
                PK_TRACE( "SR: FFDC Available, Logging Error" );
                G_qme_record.cts_timeout_count = 0;
                //commit error log and add self-save restore FFDC as user detail
                sr_fail_loc = ( G_qme_record.c_self_fault_vector & ( MASTER_THRD_FAIL << ( 24 - ( core_inst * 8 )) ) ) ?
                              SR_FAIL_MASTER_THREAD : SR_FAIL_SLAVE_THREAD;

                // commit error log, add self-save restore FFDC as user detail
                errlDataUsrDtls_t usrDtls =
                {
                    ERRL_USR_DTL_SR_FFDC,
                    SR_FFDC_SIZE,
                    &core_inst,
                    ERRL_STRUCT_VERSION_1,
                    NULL
                };

                uint32_t errStatus = ERRL_STATUS_SUCCESS;

                PPE_LOG_ERR_CRITICAL (
                    REASON_SR_FAIL,
                    QME_STOP11_EXIT,
                    QME_MODULE_ID_SR,
                    core_target,
                    scom_data.words.lower,
                    sr_fail_loc,
                    &usrDtls,
                    NULL,
                    errStatus );

                PK_TRACE_INF( "SR: Core %d Logging Done: status %d",
                              core_mask, errStatus );

            } //if( scom_data.value &  BIT64( FFDC_AVAILABLE ) )

        } //if( core_mask & core_target )

    }//for (core_mask

    PK_TRACE("Cleaning up thread scratch registers after self restore.");
    PPE_PUTSCOM_MC( SCRATCH0, core_target, 0 );
    PPE_PUTSCOM_MC( SCRATCH1, core_target, 0 );

    PK_TRACE("Restore SPATTN after self-restore");
    PK_TRACE("Always Unfreeze IMA (by clearing bit 34) in case the CHTM is enabled to sample it");

    for (core_mask = 8, core_index = 0;
         core_mask;
         core_mask = core_mask >> 1, core_index++)
    {
        if( core_mask & core_target )
        {
            PPE_PUTSCOM_UC( SPATTN_MASK,   0, core_mask, G_spattn_mask[core_index] );
            PPE_GETSCOM_UC( IMA_EVENT_MASK, 0, core_mask, scom_data.value);
            PPE_PUTSCOM_UC( IMA_EVENT_MASK, 0, core_mask, scom_data.value & ~BIT64(34));
        }
    }

    if( SPR_SELF_SAVE != i_saveRestore )
    {
        PK_TRACE("Drop BLOCK_INTERRUPT to PC and IGNORE_RECENT_PMCR via SCSR[0/19]");
        out32( QME_LCL_CORE_ADDR_WR( QME_SCSR_WO_CLEAR, core_target ), ( BIT32(0) | BIT32(19) ) );
    }

    PK_TRACE("Clear pm_active status via EISR[52:55]");
    out32_sh( QME_LCL_EISR_CLR, core_target << SHIFT64SH(55));
}

void
qme_stop_self_execute(uint32_t core_target, uint32_t i_saveRestore )
{
    uint32_t core_index;
    uint32_t core_mask;
    data64_t scom_data;
    //QmeHeader_t* pQmeImgHdr = (QmeHeader_t*)(QME_SRAM_HEADER_ADDR);

    // ===============================

    // consider for HW534619
    // for Stop11 Timebase, during Stop11 wakeup before setting the XFER start to restore timebase,
    // do scom write to PC to put their state machine in standby so they will accept the TFAC data coming in.
    // Also, before self-restore/save, SCOM to core to temporarily disable STOP tfac shawdowing.
    // This way, the subsequent ending STOP doesn't corrupt the shadow copy.
    PK_TRACE("Reset the core timefac to INACTIVE via PC.COMMON.TFX[0,1]=0b10");
    PPE_PUTSCOM_MC( EC_PC_TFX_SM, core_target, BIT64(0) );

    PK_TRACE("Assert BLOCK_INTERRUPT to PC and IGNORE_RECENT_PMCR via SCSR[0/19]");
    out32( QME_LCL_CORE_ADDR_WR( QME_SCSR_WO_OR, core_target ), ( BIT32(0) | BIT32(19) ) );

    PK_TRACE_INF("SF.RS: Self Restore Prepare, Core Waking up(pm_exit=1) via SCSR[1]");
    out32( QME_LCL_CORE_ADDR_WR( QME_SCSR_WO_OR, core_target ), BIT32(1) );

    PPE_WAIT_4NOP_CYCLES

    PK_TRACE("Polling for core wakeup(pm_active=0) via EINR[52:55]");

    // RTC 248149: needs timout for logging!!!
    while((in32_sh(QME_LCL_EINR)) & (core_target << SHIFT64SH(55)));

    // ===============================

    scom_data.value = in64( QME_LCL_BCEBAR0 ) & BITS64(13, 30); //HRMOR[13:42]
    PK_TRACE("*RMOR HOMER address: 0x%08lX %08lX",
             scom_data.words.upper, scom_data.words.lower);

    /* Commenting SMF as the feature is no longer POR
     * and DD2 scom timeout protection will require delay after the first
     * scom write to RMOR to give enough time for ack to be back from serial shifter.
     * otherwise second write to URMOR will fail. thus just commenting out
     * unused function as workaround instead of keeping it with a delay.
        if( G_qme_record.hcode_func_enabled & QME_SMF_SUPPORT_ENABLE )
        {
            // UV Mode
            PK_TRACE("SMF core self save/restore, write URMOR with HOMER address");

            // Write URMOR
            scom_data.value |= BIT64(63);
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

            // Write HRMOR
            // Clear the steering bit for HRMOR
            scom_data.value &= ~BIT64(63);
            out64( QME_LCL_CORE_ADDR_WR( QME_RMOR, core_target ), scom_data.value );
        }
        else
        {
    */

    // HV Mode
    PK_TRACE_INF("HV mode: %d [Save=0/Restore=1] write HRMOR and URMOR with HOMER address", i_saveRestore);

#ifdef EPM_TUNING
    scom_data.value = 0xA200000;
#else
    scom_data.words.upper =  scom_data.words.upper & ~BIT32(15);
#endif

    // Write HRMOR
    out64( QME_LCL_CORE_ADDR_WR( QME_RMOR, core_target ), scom_data.value );

    /*see comments above
            // Write URMOR
            scom_data.value |= BIT64(63);
            out64( QME_LCL_CORE_ADDR_WR( QME_RMOR, core_target ), scom_data.value );
        }
    */


    // ===============================

    PK_TRACE("Save off and mask SPATTN before self-restore");

    for (core_mask = 8, core_index = 0;
         core_mask;
         core_mask = core_mask >> 1, core_index++)
    {
        if( core_mask & core_target )
        {
            PPE_GETSCOM_UC( SPATTN_MASK, 0, core_mask, G_spattn_mask[core_index]);
            PPE_PUTSCOM_UC( SPATTN_MASK, 0, core_mask, BITS64(0, 64));
        }
    }

    for (core_mask = 8; core_mask; core_mask = core_mask >> 1)
    {
        if (core_target & core_mask)
        {
            if ( in32( QME_LCL_FLAGS ) & BIT32( QME_FLAGS_CORE_WKUP_ERR_INJECT ) )
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

                scom_data.value = 0;

                if ( in32( QME_LCL_FLAGS ) & BIT32( QME_FLAGS_RUNTIME_WAKEUP_MODE ) )
                {
                    //Core Wakeup as HV
                    scom_data.value = BIT64(59);
                }

                if( in32( QME_LCL_FLAGS ) & BIT32( QME_FLAGS_SMF_DISABLE_MODE ) )
                {
                    //Core wakeup with SMF Disabled
                    scom_data.value |= BIT64(58);
                }

#if POWER10_DD_LEVEL == 10

                if( G_IsSimics ||
                    (! ( in32( QME_LCL_FLAGS ) & BIT32( QME_FLAGS_TOD_SETUP_COMPLETE ) ) ) ||
                    // if fused core but no interrupt pending, always pick even core to perform, odd core to skip
                    ( G_qme_record.fused_core_enabled && (core_mask & 0x5) ) )
                {
#endif
                    PK_TRACE_INF("Self-Restore should ignore workaround for HW534619 at core %x", core_mask);
                    scom_data.value |= BIT64(61);
#if POWER10_DD_LEVEL == 10
                }

#endif

            }

            if (core_mask & 0xA) // Even cores
            {
                PK_TRACE("Setting self-restore function mode in SCRATCH 0.");
                PPE_PUTSCOM_UC( SCRATCH0, 0, core_mask, scom_data.value );
            }

            if (core_mask & 0x5) // Odd cores
            {
                PK_TRACE("Setting self-restore function mode in SCRATCH 1.");
                PPE_PUTSCOM_UC( SCRATCH1, 0, core_mask, scom_data.value );
            }
        }
    }

    // ===============================

    PK_TRACE_INF("SF.RS: Self Restore Kickoff, S-Reset All Core Threads");

    // Disable interrupts around the sreset to polling check to not miss the self-restore
    wrteei(0);

    PPE_PUTSCOM_MC( DIRECT_CONTROLS, core_target,
                    BIT64(4) | BIT64(12) | BIT64(20) | BIT64(28));
    sync();

    if( SPR_SELF_SAVE != i_saveRestore )
    {
        wrteei(1);
    }

    PK_TRACE("Allow threads to run(pm_exit=0)");
    out32( QME_LCL_CORE_ADDR_WR( QME_SCSR_WO_CLEAR, core_target ), BIT32(1) );
}
