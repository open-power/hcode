/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/qme/qme_init.c $              */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
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
    0, //Timer_enabled
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

    uint32_t local_data = in32_sh(QME_LCL_QMCR);
    G_qme_record.c_configured       = local_data & BITS64SH(60, 4);
    G_qme_record.fused_core_enabled = ( local_data >> SHIFT64SH(47) ) & 0x1;

    // TODO attributes or flag bits
    // TODO assert pm_entry_limit when stop levels are all disabled
    // However, cannot disable stop11 as gating the IPL, to be discussed with Greg
    //G_qme_record.stop_level_enabled = TBD ATTRIBUTES
    G_qme_record.mma_enabled        = 0;
    G_qme_record.pmcr_fwd_enabled   = 0;
    G_qme_record.throttle_enabled   = 0;

    PK_TRACE_INF("Setup: Git Head[%x], Chip DD Level[%d], Stop Level Enabled[%x], Configured Cores[%x]",
                 G_qme_record.git_head,
                 G_qme_record.chip_dd_level,
                 G_qme_record.stop_level_enabled,
                 G_qme_record.c_configured);

    // use SCDR[0:3] STOP_GATED to initialize core stop status
    // Note when QME is booted, either core is in stop11 or running
    G_qme_record.c_stop11_reached   = ((in32(QME_LCL_SCDR) & BITS32(0, 4))  >> SHIFT32(3)) ;
    G_qme_record.c_stop11_reached  |= (~G_qme_record.c_configured) & QME_MASK_ALL_CORES;
    G_qme_record.c_stop5_reached    = G_qme_record.c_stop11_reached;
    G_qme_record.c_stop2_reached    = G_qme_record.c_stop11_reached;

    // use SCDR[12:15] SPECIAL_WKUP_DONE to initialize special wakeup status
    G_qme_record.c_special_wakeup_done = ((in32(QME_LCL_SCDR) & BITS32(12, 4)) >> SHIFT32(15));
    G_qme_record.c_hostboot_master = G_qme_record.c_special_wakeup_done & G_qme_record.c_configured;
    G_qme_record.c_special_wakeup_done = 0;

    if( G_qme_record.c_hostboot_master )
    {
        PK_TRACE_DBG("Setup: Remove Hostboot Master[%x] from Istep4 Special Wakeup", G_qme_record.c_hostboot_master);
        out32( QME_LCL_CORE_ADDR_WR( QME_SPWU_OTR, G_qme_record.c_hostboot_master ), 0 );
    }

    // use SSDR[36:39] PM_BLOCK_INTERRUPTS to initalize block wakeup status
    G_qme_record.c_block_wake_done = ((in32_sh(QME_LCL_SSDR) & BITS64SH(36, 4)) >> SHIFT64SH(39));
    G_qme_record.c_block_stop_done = 0;

    PK_TRACE_INF("Setup: Core Stop Gated[%x], Core in Special Wakeup[%d], Core in Block Wakeup[%x]",
                 G_qme_record.c_stop11_reached,
                 G_qme_record.c_special_wakeup_done,
                 G_qme_record.c_block_wake_done);

    if( in32_sh( QME_LCL_FLAGS ) & BIT64SH( QME_FLAGS_RUNNING_EPM ) )
    {
        PK_TRACE_INF("EPM Always have cores ready to enter first, aka cores are running when boot");
        G_qme_record.c_stop2_reached  = 0;
        G_qme_record.c_stop3_reached  = 0;
        G_qme_record.c_stop5_reached  = 0;
        G_qme_record.c_stop11_reached = 0;

        if (G_qme_record.c_configured)
        {
            out32( QME_LCL_CORE_ADDR_WR( QME_SSH_SRC, G_qme_record.c_configured ), 0 );
        }

        // Always test shadows as well as DDS
        out32( QME_LCL_FLAGS_OR, ( BIT32(QME_FLAGS_TOD_SETUP_COMPLETE) | BIT32(QME_FLAGS_DDS_OPERABLE) ) );

        //EPM can turn PFET off, but no Scanning or BCE or self restore
        G_qme_record.hcode_func_enabled &= ~QME_SELF_RESTORE_ENABLE;
        G_qme_record.hcode_func_enabled &= ~QME_SELF_SAVE_ENABLE;
        G_qme_record.hcode_func_enabled &= ~QME_BLOCK_COPY_SCAN_ENABLE;
        G_qme_record.hcode_func_enabled &= ~QME_BLOCK_COPY_SCOM_ENABLE;
        G_qme_record.hcode_func_enabled &= ~QME_HWP_SCAN_INIT_ENABLE;
        G_qme_record.hcode_func_enabled &= ~QME_HWP_SCOM_INIT_ENABLE;
        G_qme_record.hcode_func_enabled &= ~QME_HWP_SCOM_CUST_ENABLE;
    }

    //technically contained mode implies stop11 is not supported with it
    if( G_qme_record.hcode_func_enabled & QME_CONTAINED_MODE_ENABLE )
    {
        G_qme_record.hcode_func_enabled &= ~QME_SELF_RESTORE_ENABLE;
        G_qme_record.hcode_func_enabled &= ~QME_SELF_SAVE_ENABLE;
        G_qme_record.hcode_func_enabled &= ~QME_BLOCK_COPY_SCAN_ENABLE;
        G_qme_record.hcode_func_enabled &= ~QME_BLOCK_COPY_SCOM_ENABLE;
        G_qme_record.hcode_func_enabled &= ~QME_HWP_SCAN_INIT_ENABLE;
        G_qme_record.hcode_func_enabled &= ~QME_HWP_SCOM_INIT_ENABLE;
        G_qme_record.hcode_func_enabled &= ~QME_HWP_SCOM_CUST_ENABLE;
        G_qme_record.hcode_func_enabled &= ~QME_HWP_PFET_CTRL_ENABLE;
    }

    //--------------------------------------------------------------------------
    // Initialize Hardware Settings
    //--------------------------------------------------------------------------

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

    PK_TRACE("Drop BCECSR_OVERRIDE_EN/STOP_OVERRIDE_MODE/STOP_ACTIVE_MASK/STOP_SHIFTREG_OVERRIDE_EN via QMCR[3,6,7,29]");
    out32( QME_LCL_QMCR_OR,  BITS32(16, 8) ); //0xB=1011 (Lo-Pri Sel)
    out32( QME_LCL_QMCR_CLR, (BIT32(17) | BIT32(21) | BITS32(6, 2) | BIT32(3) | BIT32(29)) );
    PK_TRACE_DBG( "DEBUG: QMCR value 0x%08x%08x", in32(QME_LCL_QMCR ));

    if (G_qme_record.c_configured)
    {
        PK_TRACE("Assert AUTO_SPECIAL_WAKEUP_DISABLE/ENABLE_PECE via PCR_SCSR[20, 26]");
        out32( QME_LCL_CORE_ADDR_WR(
                   QME_SCSR_WO_OR, G_qme_record.c_configured ), ( BIT32(20) | BIT32(26) ) );
    }

    //--------------------------------------------------------------------------
    // BCE Core Specific Scan Ring
    //--------------------------------------------------------------------------

    if( G_qme_record.hcode_func_enabled & QME_BLOCK_COPY_SCAN_ENABLE )
    {
        PK_TRACE_DBG("Setup: BCE Setup Kickoff to Copy Core Specific Scan Ring");

        QmeHeader_t* pQmeImgHdr = (QmeHeader_t*)(QME_SRAM_HEADER_ADDR);

        //right now a blocking call. Need to confirm this.
        qme_block_copy_start(QME_BCEBAR_1,
                             ((QME_IMAGE_CPMR_OFFSET + (pQmeImgHdr->g_qme_inst_spec_ring_offset)) >> 5),
                             ( pQmeImgHdr->g_qme_inst_spec_ring_offset >> 5 ),
                             ( pQmeImgHdr->g_qme_max_spec_ring_length >> 5) );

        PK_TRACE_DBG("Setup: BCE Check for Copy Completed");

        if( BLOCK_COPY_SUCCESS != qme_block_copy_check() )
        {
            PK_TRACE_DBG("ERROR: BCE Copy of Core Specific Scan Ring Failed. HALT QME!");
            IOTA_PANIC(QME_STOP_BLOCK_COPY_SCAN_FAILED);
        }
    }

    //--------------------------------------------------------------------------
    // QME Init Completed
    //--------------------------------------------------------------------------

    PK_TRACE_INF("Setup: QME STOP READY");
    out32( QME_LCL_FLAGS_OR, BIT32(QME_FLAGS_STOP_READY) );
    asm volatile ("tw 0, 31, 0"); // Marker for EPM

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
    // Re-enable this for DD2
    // out32   ( QME_LCL_EIMR_CLR, ( (uint32_t) ( ~( IRQ_VEC_PRTY12_QME >> 32 ) ) ) );
    // out32_sh( QME_LCL_EIMR_CLR, ( (~G_qme_record.c_all_stop_mask) & ( BITS64SH(32, 24) ) ) );
    {
        uint64_t eimr = ( ( (~IRQ_VEC_PRTY12_QME) & (~BITS64(32, 24)) ) |
                          ( ( ~( (uint64_t)G_qme_record.c_all_stop_mask ) ) & ( BITS64(32, 24) ) ) );
        out64( QME_LCL_EIMR_CLR, eimr );
    }
}
