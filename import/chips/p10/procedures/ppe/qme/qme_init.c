/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/qme/qme_init.c $              */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2016,2021                                                    */
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

#define QME_INIT_ENABLE_INTERRUPT_VECTOR

// QME Stop Header and Structure
QmeRecord G_qme_record __attribute__((section (".dump_ptr"))) =
{
    // Put Static fingerprints into image
    QME_SCOREBOARD_VERSION,
    sizeof(QmeRecord),
    POWER10_DD_LEVEL,
    CURRENT_GIT_HEAD,
    0, //quad_id placeholder
    ENABLED_HCODE_FUNCTIONS,
    ( BIT32(STOP_LEVEL_2) | BIT32(STOP_LEVEL_3) | BIT32(STOP_LEVEL_11) ),
    0
};

// The throttle table from the core group.  May be dynamically generated.
#include "p10_core_throttle_table_values.H"

void
qme_init()
{
    //--------------------------------------------------------------------------
    // Initialize Software Scoreboard
    //--------------------------------------------------------------------------

    uint32_t c_loop, c_end, act_stop_level, c_mask;
    uint32_t local_data = in32_sh(QME_LCL_QMCR);
    G_qme_record.c_configured       = local_data & BITS64SH(60, 4);
    G_qme_record.fused_core_enabled = ( local_data >> SHIFT64SH(47) ) & 0x1;

    // TODO assert pm_entry_limit when stop levels are all disabled
    // However, cannot disable stop11 as gating the IPL, to be discussed with Greg
    if( in32( QME_LCL_SCRB ) & BIT32( QME_SCRB_STOP2_TO_STOP0 ) )
    {
        G_qme_record.stop_level_enabled &= ~BIT32(STOP_LEVEL_2);
    }

    if( in32( QME_LCL_SCRB ) & BIT32( QME_SCRB_STOP3_TO_STOP2 ) )
    {
        G_qme_record.stop_level_enabled &= ~BIT32(STOP_LEVEL_3);
    }

    G_qme_record.c_cache_only_enabled = ( in32( QME_LCL_SCRB ) &
                                          BITS32(QME_SCRB_CACHE_ONLY_MODE_VECTOR_BASE,
                                                  QME_SCRB_CACHE_ONLY_MODE_VECTOR_SIZE) ) >>
                                        SHIFT32( ( QME_SCRB_CACHE_ONLY_MODE_VECTOR_BASE +
                                                QME_SCRB_CACHE_ONLY_MODE_VECTOR_SIZE - 1 ) ) ;

    G_qme_record.c_in_error = ( in32(QME_LCL_SCRA) &
                                BITS32(QME_SCRA_STOP_CALLOUT_VECTOR_BASE,
                                       QME_SCRA_STOP_CALLOUT_VECTOR_SIZE) ) >>
                              SHIFT32( ( QME_SCRA_STOP_CALLOUT_VECTOR_BASE +
                                         QME_SCRA_STOP_CALLOUT_VECTOR_SIZE - 1 ) );

    PK_TRACE_INF("Setup: Git Head[%x], Stop Level Enabled[%x], Configured Cores[%x], Callout Cores[%x]",
                 G_qme_record.git_head,
                 G_qme_record.stop_level_enabled,
                 G_qme_record.c_configured,
                 G_qme_record.c_in_error);

    // use SCDR[0:3] STOP_GATED to initialize core stop status
    // Note when QME is booted, either core is in stop11 or running
    G_qme_record.c_stop11_reached   = ((in32(QME_LCL_SCDR) & BITS32(0, 4))  >> SHIFT32(3)) ;
    G_qme_record.c_stop11_reached  |= (~G_qme_record.c_configured) & QME_MASK_ALL_CORES;
    G_qme_record.c_stop5_reached    = G_qme_record.c_stop11_reached;
    G_qme_record.c_stop2_reached    = G_qme_record.c_stop11_reached;

    // This data will be used to know we are in ipl mode or runtime mode to
    // handle the master/backing core case, which is valid only in ipl case.
    // Now I have check for TOD_SETUPC_OMPLETE to know we are in runtime or not,
    // because the new flag QME_FLAGS_RUNTIME_MODE has a dependency of HB
    // code.Once that code is in ,then we can remove the TOD check.
    uint32_t ipl_time = ((in32( QME_LCL_FLAGS ) & BIT32(QME_FLAGS_RUNTIME_MODE)) ||
                         (in32( QME_LCL_FLAGS ) & BIT32(QME_FLAGS_TOD_SETUP_COMPLETE))) ? 0x00 : 0x0F;

    // use SCDR[12:15] SPECIAL_WKUP_DONE to initialize special wakeup status
    G_qme_record.c_special_wakeup_done = ((in32(QME_LCL_SCDR) & BITS32(12, 4)) >> SHIFT32(15));
    // do not provide spwu done or pm exit to callout cores
    G_qme_record.c_special_wakeup_done &= ~G_qme_record.c_in_error;

    if( G_qme_record.c_in_error )
    {
        PK_TRACE("Drop spwu_done and pm_exit on callout Cores");
        out32( QME_LCL_CORE_ADDR_WR( QME_SCSR_WO_CLEAR, G_qme_record.c_in_error ), (BIT32(1) | BIT32(16)) );
    }

    if( G_qme_record.c_special_wakeup_done )
    {
        PK_TRACE_INF("Assert manual SPECIAL_WAKEUP_DONE[%x] via PCR_SCSR[16] in turning off auto mode",
                     G_qme_record.c_special_wakeup_done);
        out32( QME_LCL_CORE_ADDR_WR(
                   QME_SCSR_WO_OR, G_qme_record.c_special_wakeup_done ), BIT32(16) );
    }

    //This should be valid only in ipl time case, because in istep4
    //master/backing cores are spwu asserted(OTR), so we need to de-assert in istep
    //16 only and in runtime mode will not have the concept of master/backing,
    //so this condition should be skipped.
    G_qme_record.c_hostboot_cores = G_qme_record.c_special_wakeup_done & G_qme_record.c_configured & ipl_time;

    if( G_qme_record.c_hostboot_cores )
    {
        G_qme_record.c_special_wakeup_done &= ~G_qme_record.c_hostboot_cores;

        PK_TRACE_INF("Setup: Remove Hostboot cores[%x] from Istep4 Special Wakeup", G_qme_record.c_hostboot_cores);
        out32( QME_LCL_CORE_ADDR_WR( QME_SPWU_OTR, G_qme_record.c_hostboot_cores ), 0 );

        PK_TRACE("Clear SPWU_FALL caused by drop SPWU_OTR while in spwu auto mode");
        out64( QME_LCL_EISR_CLR, ( ( (uint64_t)G_qme_record.c_hostboot_cores ) << SHIFT64SH(39) ) );

        // Simics does not model the SSDR and never sees instructions running.
        // That would cause markup evaluations to not send an intr. to QME to exit STOP15 on master cores
        // when SBE triggers it at the end of istep 16.1
        if (!G_IsSimics)
        {
            local_data = ((in32(QME_LCL_SSDR) & BITS32(4, 4)) >> SHIFT32(7)); // instruction running
            PK_TRACE_INF("Setup: Current HB cores and backing caches %x Instruction_Running %x",
                         G_qme_record.c_hostboot_cores, local_data);

            G_qme_record.c_hostboot_cores &= local_data;
        }

        if( G_qme_record.c_hostboot_cores )
        {
            PK_TRACE_INF("Drop PM_EXIT only on primary core[%x] via PCR_SCSR[1]", G_qme_record.c_hostboot_cores);
            out32( QME_LCL_CORE_ADDR_WR( QME_SCSR_WO_CLEAR, G_qme_record.c_hostboot_cores ), BIT32(1) );
        }

    }

    // use SSDR[36:39] PM_BLOCK_INTERRUPTS to initalize block wakeup status
    G_qme_record.c_block_wake_done = ((in32_sh(QME_LCL_SSDR) & BITS64SH(36, 4)) >> SHIFT64SH(39));
    G_qme_record.c_block_stop_done = 0;

    PK_TRACE_INF("Setup: Core Stop Gated[%x], Core in Special Wakeup[%x], Core in Block Wakeup[%x], Core in Cache Only[%x]",
                 G_qme_record.c_stop11_reached,
                 G_qme_record.c_special_wakeup_done,
                 G_qme_record.c_block_wake_done,
                 G_qme_record.c_cache_only_enabled);

#ifdef EPM_TUNING

    if( in32_sh( QME_LCL_FLAGS ) & BIT64SH( QME_FLAGS_RUNNING_EPM ) )
    {
        PK_TRACE_INF("EPM Always have cores ready to enter first, aka cores are running when boot");
        G_qme_record.c_stop2_reached  = 0;
        G_qme_record.c_stop3_reached  = 0;
        G_qme_record.c_stop5_reached  = 0;
        G_qme_record.c_stop11_reached = 0;
        G_qme_record.c_mma_available  = 0xF;

        if (G_qme_record.c_configured)
        {
            out32( QME_LCL_CORE_ADDR_WR( QME_SSH_SRC, G_qme_record.c_configured ), 0 );
        }

        // Always test shadows as well as DDS
        out32( QME_LCL_FLAGS_OR, ( BIT32(QME_FLAGS_TOD_SETUP_COMPLETE) | BIT32(QME_FLAGS_DDS_OPERABLE) ) );

        G_qme_record.hcode_func_enabled &= ~QME_BLOCK_COPY_SCAN_ENABLE;
        G_qme_record.hcode_func_enabled &= ~QME_BLOCK_COPY_SCOM_ENABLE;
        G_qme_record.hcode_func_enabled &= ~QME_HWP_SCAN_INIT_ENABLE;
        G_qme_record.hcode_func_enabled &= ~QME_HWP_SCOM_CUST_ENABLE;
        G_qme_record.hcode_func_enabled &= ~QME_SELF_SAVE_ENABLE;

        G_qme_record.hcode_func_enabled |= QME_EPM_BROADSIDE_ENABLE;

        if( !( G_qme_record.hcode_func_enabled & QME_EPM_BROADSIDE_ENABLE ) )
        {
            //EPM do real scan0 and arrayinit and self restore with broadside
            //otherwise
            //EPM can turn PFET off, but no Scanning or BCE or self restore
            G_qme_record.hcode_func_enabled &= ~QME_HWP_SCOM_INIT_ENABLE;
            G_qme_record.hcode_func_enabled &= ~QME_SELF_RESTORE_ENABLE;
            G_qme_record.hcode_func_enabled &= ~QME_HWP_ARRAYINIT_ENABLE;
            G_qme_record.hcode_func_enabled &= ~QME_HWP_SCANFLUSH_ENABLE;
        }
    }

#endif

#ifdef USE_RUNN

    //technically contained mode implies stop11 is not supported with it
    if( ( G_qme_record.hcode_func_enabled & QME_CONTAINED_MODE_ENABLE ) ||
        ( G_qme_record.hcode_func_enabled & QME_RUNN_MODE_ENABLE ) )
    {
        G_qme_record.hcode_func_enabled &= ~QME_SELF_RESTORE_ENABLE;
        G_qme_record.hcode_func_enabled &= ~QME_SELF_SAVE_ENABLE;
        G_qme_record.hcode_func_enabled &= ~QME_BLOCK_COPY_SCAN_ENABLE;
        G_qme_record.hcode_func_enabled &= ~QME_BLOCK_COPY_SCOM_ENABLE;
        G_qme_record.hcode_func_enabled &= ~QME_HWP_SCAN_INIT_ENABLE;
        G_qme_record.hcode_func_enabled &= ~QME_HWP_SCOM_CUST_ENABLE;
        G_qme_record.hcode_func_enabled &= ~QME_HWP_ARRAYINIT_ENABLE;
        G_qme_record.hcode_func_enabled &= ~QME_HWP_SCANFLUSH_ENABLE;
        G_qme_record.hcode_func_enabled &= ~QME_HWP_PFET_CTRL_ENABLE;
    }

#endif

    //--------------------------------------------------------------------------
    // Initialize Hardware Settings
    //--------------------------------------------------------------------------

    // Initialize the throttle table

    PK_TRACE("Assert SRAM_SCRUB_ENABLE via QSCR[1]and set QSCR[DTCBASE] to the throttle table");
    uint64_t qscr = 0;

    // clear DTCBASE in the hardware first so that OR operations can be used
    // to set it.  This must be done as this can get executed on a code update
    // path that moves the throttle table location location
    qscr = BITS64(32, 8);
    out64( QME_LCL_QSCR_CLR, qscr);

    uint32_t* core_throttle_table_ptr = (uint32_t*)&core_throttle_table_values;

    // This "copy to itself" is a trick to make the compiler not optimize out the
    // throttle table array being pointed as it is only being accessed by hardware
    // and not anywhere else in the Hcode.
    ((uint32_t volatile*)core_throttle_table_ptr)[0] = core_throttle_table_ptr[0];

    // DTCBase field (32:39)
    qscr  = ((uint64_t)((uint32_t)core_throttle_table_ptr & 0x0000FF00)) << 16;

    // SRAM scrub
    qscr |=  BIT64(1);
    out64( QME_LCL_QSCR_OR, qscr );

    // Initialize the resonant clock setup

    PK_TRACE("Drop RCMR STEP_ENABLE via RCMR[0]");
    out32 ( QME_LCL_RCMR_CLR, BIT32(QME_RCMR_STEP_ENABLE) );

    PK_TRACE("Assert RCMR AUTO_DONE_DISABLE via RCMR[3]");
    out32 ( QME_LCL_RCMR_OR, BIT32(QME_RCMR_AUTO_DONE_DISABLE) );

    PK_TRACE("Set RCSCR CORE_CHANGE_DONE for all cores to provide a done until the resonant clocks are enabled");
    out32 ( QME_LCL_RCSCR_OR, BITS32(QME_RCSCR_CHANGE_DONE, QME_RCSCR_CHANGE_DONE_LEN) );

    // Initialize stop and qme settings

    PK_TRACE("Drop BCECSR_OVERRIDE_EN/STOP_OVERRIDE_MODE/STOP_ACTIVE_MASK/STOP_SHIFTREG_OVERRIDE_EN via QMCR[3,6,7,29]");
    out32( QME_LCL_QMCR_OR,  BITS32(16, 8) ); //0xB=1011 (Lo-Pri Sel)
    out32( QME_LCL_QMCR_CLR, (BIT32(17) | BIT32(21) | BITS32(6, 2) | BIT32(3) | BIT32(29)) );
    PK_TRACE_DBG( "DEBUG: QMCR value 0x%08x%08x", in32(QME_LCL_QMCR ));

    if (G_qme_record.c_configured)
    {
        PK_TRACE("Drop potential entry_limit set by previous error path before possible reboot");
        out32( QME_LCL_CORE_ADDR_WR(
                   QME_SCSR_WO_CLEAR, G_qme_record.c_configured ), BIT32(2) );

        PK_TRACE("Apply run-time CUCR settings to allow CPMS sampling transfers upon STOP");
        out32( QME_LCL_CORE_ADDR_WR(
                   CPMS_CUCR_WO_OR, G_qme_record.c_configured ),  BITS32(5, 2) );

        PK_TRACE("Assert AUTO_SPECIAL_WAKEUP_DISABLE/ENABLE_PECE via PCR_SCSR[20, 26]");
        out32( QME_LCL_CORE_ADDR_WR(
                   QME_SCSR_WO_OR, G_qme_record.c_configured ), ( BIT32(20) | BIT32(26) ) );

        for( c_end = 51,
             c_loop = 8; c_loop > 0; c_loop = c_loop >> 1,
             c_end += 4 )
        {
            if( c_loop & G_qme_record.c_configured )
            {
                act_stop_level = ( in32_sh(QME_LCL_SCDR) >> SHIFT64SH(c_end) ) & 0xF;

                if( act_stop_level == 0xF )
                {
                    //apply only to the configured secondary cores
                    //do not assert to primary core because those are running and we need the filter
                    //do not need to cover backing cache as there is assertion in core_poweroff hwp
                    PK_TRACE_DBG("Assert REG_WKUP_FILTER_DIS via QME_SCSR[14] to secondary cores[%x] at stop[F]",
                                 c_loop);
                    out32( QME_LCL_CORE_ADDR_WR( QME_SCSR_WO_OR, c_loop ), BIT32(14) );

                    //likely qme rebooted, and there are cache_only cores left in stop6(if stop gated)
                    //OR those cores can be in spwu_done(stop ungated), when it drops they can go back to stop6
                    //either way this provents stop6 flow gets on the wrong foot.
                    // stop_gated, act_level 0xF => wake to stop6
                    // stop_gated, act_level 0x6 => no action
                    // note gated, act_level 0x6 => no action, spwu drop does
                    G_qme_record.c_stop11_exit_targets |=
                        ( G_qme_record.c_stop11_reached & c_loop & G_qme_record.c_cache_only_enabled );
                }
                else if( act_stop_level == 0x6 )
                {
                    G_qme_record.c_stop11_reached &= ~(c_loop & G_qme_record.c_cache_only_enabled);
                }
            }
        }
    }

    //--------------------------------------------------------------------------
    // BCE Core Specific Scan Ring
    //--------------------------------------------------------------------------

    QmeHeader_t* pQmeImgHdr = (QmeHeader_t*)(QME_SRAM_HEADER_ADDR);

    if( pQmeImgHdr->g_qme_common_ring_offset == pQmeImgHdr->g_qme_inst_spec_ring_offset )
    {
        //If QME hcode has migrated to an approach of copy ring on demand then
        //do not copy repair ring upfront on boot of QME. Retaining line 233 - 251
        //for backward compatibility.
        G_qme_record.hcode_func_enabled  &= ~QME_BLOCK_COPY_SCAN_ENABLE;
    }
    else
    {
        G_qme_record.bce_buf_content_type  =  ALL;
    }

    if( G_qme_record.hcode_func_enabled & QME_BLOCK_COPY_SCAN_ENABLE )
    {
        PK_TRACE_DBG("Setup: BCE Setup Kickoff to Copy Core Specific Scan Ring");


        //right now a blocking call. Need to confirm this.
        qme_block_copy_start(QME_BCEBAR_1,
                             ((QME_IMAGE_CPMR_OFFSET + (pQmeImgHdr->g_qme_inst_spec_ring_offset)) >> 5),
                             ( pQmeImgHdr->g_qme_inst_spec_ring_offset >> 5 ),
                             ( pQmeImgHdr->g_qme_max_spec_ring_length >> 5),
                             QME_SPECIFIC );

        PK_TRACE_DBG("Setup: BCE Check for Copy Completed");

        if( BLOCK_COPY_SUCCESS != qme_block_copy_check() )
        {
            PK_TRACE_DBG("ERROR: BCE Copy of Core Specific Scan Ring Failed. HALT QME!");
            QME_ERROR_HANDLER(QME_STOP_BLOCK_COPY_AT_BOOT_FAILED,
                              pQmeImgHdr->g_qme_common_ring_offset,
                              pQmeImgHdr->g_qme_inst_spec_ring_offset,
                              pQmeImgHdr->g_qme_max_spec_ring_length);
        }
    }

    //--------------------------------------------------------------------------
    // Cache Only Cores Boot
    //--------------------------------------------------------------------------

    wrteei(0);

    if( G_qme_record.c_stop11_exit_targets )
    {
        PK_TRACE_INF("Check: ECO core[%x] detected, boot to stop[6]", G_qme_record.c_stop11_exit_targets);
        qme_stop_exit();
    }

    wrteei(1);

    //--------------------------------------------------------------------------
    // QME Init Completed
    //--------------------------------------------------------------------------

#if POWER10_DD_LEVEL == 10

    if (!G_IsSimics)
    {
        PK_TRACE_INF("DD1: Mask PCB_RESET_WHEN_ACTIVE in QME_LFIR");
        out32( QME_LCL_LFIRMASK_OR, BIT32(16) );
    }

#endif

    PK_TRACE_INF("Setup: QME STOP READY");
    out32( QME_LCL_FLAGS_OR, BIT32(QME_FLAGS_STOP_READY) );
    asm volatile ("tw 0, 31, 0"); // Marker for EPM

    // initialize mma available in case of qme reboot, where you cannot assume the same state as cold boot
    for( c_mask = 8; c_mask > 0; c_mask = c_mask >> 1 )
    {
        if ( c_mask & G_qme_record.c_configured)
        {
            if( in64( QME_LCL_CORE_ADDR_WR(CPMS_MMAR, c_mask) ) & BIT64(0) )
            {
                G_qme_record.c_mma_available |= c_mask;
            }
            else
            {
                G_qme_record.c_mma_available &= ~c_mask;
            }
        }
    }

    PK_TRACE_INF("Setup: Current MMA Available[%x]", G_qme_record.c_mma_available);


    //--------------------------------------------------------------------------
    // Enable Interrupts
    //--------------------------------------------------------------------------

    qme_eval_eimr_override();

    //TODO If there are no valid cores, the Resclk bits in EISR should remain masked since no workarounds are needed.
    //By the way, this is true for many EISR bits, the QME Hcode does not unmask them if there are no good cores in the Quad.

    PK_TRACE_DBG("Setup: Unmask STOP Interrupts Now with Reversing Initial Mask[%x]", G_qme_record.c_all_stop_mask);

#ifdef QME_EDGE_TRIGGER_INTERRUPT
    out32_sh( QME_LCL_EITR_OR,  0x0000FF00 );
    out32_sh( QME_LCL_EISR_CLR, 0x0000FF00 );
#endif

    // HW525040
#if POWER10_DD_LEVEL == 10
    {
        uint64_t eimr = ( ( ( ~( IRQ_VEC_PRTY12_QME | ((uint64_t)G_qme_record.c_mma_available << 32) ) ) & (~BITS64(32, 24)) ) |
                          ( ( ~( (uint64_t)G_qme_record.c_all_stop_mask ) ) & ( BITS64(32, 24) ) ) );

        out64( QME_LCL_EIMR_CLR, eimr );
    }
#else
    out32   ( QME_LCL_EIMR_CLR, ( (uint32_t) ( ~( ( IRQ_VEC_PRTY12_QME >> 32 ) | G_qme_record.c_mma_available ) ) ) );
    out32_sh( QME_LCL_EIMR_CLR, ( (~G_qme_record.c_all_stop_mask) & ( BITS64SH(32, 24) ) ) );
#endif
}
