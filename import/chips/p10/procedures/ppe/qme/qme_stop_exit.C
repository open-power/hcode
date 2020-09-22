/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/qme/qme_stop_exit.C $         */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2018,2020                                                    */
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
#include "errl.h"
#include <fapi2.H>
#include <fapi2_target.H>

#include "p10_hcd_cache_poweron.H"
#include "p10_hcd_cache_reset.H"
#include "p10_hcd_cache_scan0.H"
#include "p10_hcd_cache_gptr_time_initf.H"
#include "p10_hcd_cache_repair_initf.H"
#include "p10_hcd_cache_arrayinit.H"
#include "p10_hcd_cache_initf.H"
#include "p10_hcd_cache_startclocks.H"
#include "p10_hcd_cache_scominit.H"
#include "p10_hcd_cache_scom_customize.H"

#include "p10_hcd_core_poweron.H"
#include "p10_hcd_core_reset.H"
#include "p10_hcd_core_scan0.H"
#include "p10_hcd_core_gptr_time_initf.H"
#include "p10_hcd_core_repair_initf.H"
#include "p10_hcd_core_arrayinit.H"
#include "p10_hcd_core_initf.H"
#include "p10_hcd_core_startclocks.H"
#include "p10_hcd_core_scominit.H"
#include "p10_hcd_core_scom_customize.H"

#include "p10_hcd_core_timefac_to_pc.H"
#include "p10_hcd_core_shadows_enable.H"
#include "p10_hcd_core_startgrid.H"
#include "p10_hcd_core_vmin_disable.H"


extern QmeRecord G_qme_record;



void
qme_stop_report_pls_srr1(uint32_t core_target)
{
    uint32_t c_index        = 0;
    uint32_t c_loop         = 0;
    uint32_t c_end          = 0;
    uint32_t t_index        = 0;
    uint32_t t_end          = 0;
    uint32_t t_offset       = 0;
    uint32_t pls_end        = 0;
    uint32_t srr1_end       = 0;
    uint32_t act_stop_level = 0;
    uint32_t old_pls        = 0;
    uint32_t new_pls        = 0;
    uint32_t srr1           = 0;
    uint32_t pscrs          = 0;
    uint32_t esl            = 0;
    uint32_t local_data     = 0;

    PK_TRACE("Restore PSCDR.PLS+SRR1 back to actual level");

    for( c_end = 51, t_end = 3,  c_index = 0,
         c_loop = 8; c_loop > 0; c_loop = c_loop >> 1,
         c_end += 4, t_end += 16, c_index++ )
    {
        if ( ! (c_loop & core_target) )
        {
            continue;
        }

        act_stop_level = ( in32_sh(QME_LCL_SCDR) >> SHIFT64SH(c_end) ) & 0xF;
        local_data     = 0;

        PK_TRACE_DBG("Core[%x] act_stop_level[%x] previous act_stop_level[%x]",
                     c_loop, act_stop_level, G_qme_record.c_act_stop_level[c_index]);
        G_qme_record.c_act_stop_level[c_index] = act_stop_level;

        for( pls_end  = 3, srr1_end = 17, t_index = 0,
             t_offset = 0; t_offset < 16; t_offset += 4,
             pls_end += 4, srr1_end += 2, t_index++ )
        {
            pscrs = in32( ( QME_PSCRS | (c_loop << 16) | (t_offset << 4) ) );

            PK_TRACE_DBG("c_loop[%x] t_offset[%x] pscrs_addr[%x], pscrs_data[%x]",
                         c_loop, t_offset,
                         ( QME_PSCRS | (c_loop << 16) | (t_offset << 4) ),
                         pscrs);

#if POWER10_DD_LEVEL == 10
            old_pls = ( pscrs & BITS32(24, 4) ) >> SHIFT32(27);
#else
            old_pls = ( in64(QME_LCL_PLSR) >> SHIFT64( (t_end + t_offset) ) ) & 0xF;
#endif

            new_pls = ( act_stop_level > old_pls ) ? (act_stop_level) : (old_pls);

            PK_TRACE_DBG("old_pls[%x] new_pls[%x] previous old_pls[%x] new_pls[%x]",
                         old_pls, new_pls,
                         G_qme_record.t_old_pls[c_index][t_index],
                         G_qme_record.t_new_pls[c_index][t_index]);

            G_qme_record.t_old_pls[c_index][t_index] = old_pls;
            G_qme_record.t_new_pls[c_index][t_index] = new_pls;

            // unless esl=0, srr1 = some_state_loss regardless stop_level
            srr1 = SOME_STATE_LOSS_BUT_NOT_TIMEBASE;
            esl = pscrs & BIT32(2);

            if( !esl )
            {
                srr1 = NO_STATE_LOSS;
            }

            local_data |= ( new_pls << SHIFT32( pls_end  ) );
            local_data |= ( srr1    << SHIFT32( srr1_end ) );

            // Due to special wakeup to stop11 can be done with esl = 0
            // especially with ipl cases where core start with esl = 0
            // print these info as possible debug aid, instead of check and panic
            PK_TRACE_INF("DEBUG: Core|Thread[%x] act_stop_level[%x] PSCRS = %x with esl[%x]",
                         (c_loop << 8 | t_offset), act_stop_level, pscrs, esl);
        }

        out32( QME_LCL_CORE_ADDR_WR( QME_DCSR, c_loop ), local_data );
    }

    // Do this to make sure the PLS is checked in
    PK_TRACE("Polling for STOP_SHIFT_ACTIVE == 0 via QME_SCSR[47]");

    while( in32_sh( QME_LCL_CORE_ADDR_OR( QME_SCSR, core_target ) ) & BIT64SH(47) );
}


void
qme_stop_handoff_pc(uint32_t core_target, uint32_t& core_spwu)
{
    uint32_t core_done = 0;
    uint32_t core_mask = 0;
    uint32_t cisr0     = 0;
    uint32_t cisr1     = 0;
    uint32_t scsr0     = 0;
    uint32_t scsr1     = 0;

    //===============//

    wrteei(0);

    // ===============================
    /*
        // Action below will cause PC to enter stop0, where PC is allowed to wakeup immediately without Pm_exit.
        // Thus protect PC from doing so until we assert pm_exit
        PK_TRACE("Assert BLOCK_INTERRUPT to PC via SCSR[0]");
        out32( QME_LCL_CORE_ADDR_WR( QME_SCSR_WO_OR, core_target ), BIT32(0) );

        // Workaround for HW527893 to force PM_STATE = 0 via function of this bit
        // Juan's logic is going to block further regular wakeup as for stop0
        // especially for QME not get notified for interrupts to running core.
        PK_TRACE("Pulse Entry_Limit via PCR_SCSR[2]");
        out32( QME_LCL_CORE_ADDR_WR( QME_SCSR_WO_OR,    core_target ), BIT32(2) );
        out32( QME_LCL_CORE_ADDR_WR( QME_SCSR_WO_CLEAR, core_target ), BIT32(2) );
    */
    //stopclocks will take pm_active and regular wakeup away from EINR via its fencing
    //startclocks will reassert EINR via its unfencing so phantom wakeup will be created to EISR
    //clear them here, and pm_active will be taking care of via pm_exit below
    //special wakeup shouldnt be affacted via fences.
    PK_TRACE("Clear EISR on Regular Wakeup for extra edge caused by fencing/unfencing between entry and exit");
    out32_sh(QME_LCL_EISR_CLR, ( (core_target << SHIFT64SH(43)) | (core_target << SHIFT64SH(47)) ) );

    if( in32(QME_LCL_QMCR) & BIT32(10) )
    {
        for( core_mask = 8; core_mask > 0; core_mask = core_mask >> 1 )
        {
            if ( core_target & core_mask )
            {
                cisr0 = in32( QME_LCL_CORE_ADDR_OR( QME_CISR, core_mask ) );
                cisr1 = in32_sh( QME_LCL_CORE_ADDR_OR( QME_CISR, core_mask ) );

                scsr0 = in32( QME_LCL_CORE_ADDR_OR( QME_SCSR, core_mask ) );
                scsr1 = in32_sh( QME_LCL_CORE_ADDR_OR( QME_SCSR, core_mask ) );

                PK_TRACE_INF("Cisr %x %x Scsr %x %x", cisr0, cisr1, scsr0, scsr1);

                // No interrupt pending AND no special wakeup
                if( ( ! ( scsr1 & BIT64SH(46) ) ) &&
                    ( ! ( core_spwu & core_mask ) ) )
                {
                    PK_TRACE_INF("Warning: No PC_INTR_PENDING on core %x that only has Regular Wakeup via QME_SCSR[46]", core_mask);
                    G_qme_record.c_stop1_targets |= core_mask;
                }
            }
        }
    }

    //===============//

    PK_TRACE("Core Waking up(pm_exit=1) via PCR_SCSR[1]");
    out32( QME_LCL_CORE_ADDR_WR( QME_SCSR_WO_OR, core_target ), BIT32(1) );

    PPE_WAIT_4NOP_CYCLES

    PK_TRACE("Polling for Core Waking up(pm_active=0) via QME_SSDR[12-15]");

    while( ( ( (~in32(QME_LCL_SSDR)) >> SHIFT32(15) ) & core_target ) != core_target );

    /*
        PK_TRACE("Drop BLOCK_INTERRUPT to PC via SCSR[0]");
        out32( QME_LCL_CORE_ADDR_WR( QME_SCSR_WO_CLEAR, core_target ), BIT32(0) );
    */
    //===============//

    PK_TRACE("Update STOP history: STOP exit completed, core ready");
    out32( QME_LCL_CORE_ADDR_WR( QME_SSH_SRC, core_target ), SSH_EXIT_COMPLETE );

    PK_TRACE("Drop halt STOP override disable via PCR_SCSR[21]");
    out32( QME_LCL_CORE_ADDR_WR( QME_SCSR_WO_CLEAR, core_target ), BIT32(21) );

    //===============//

    if( ( core_done = ( core_spwu & core_target ) ) )
    {
        PK_TRACE_INF("SX.0A: Cores[%x] Assert Special_Wakeup_Done via PCR_SCSR[16]", core_done);
        out32( QME_LCL_CORE_ADDR_WR( QME_SCSR_WO_OR, core_done ), BIT32(16) );
        G_qme_record.c_special_wakeup_done |= core_done;
    }

    if( ( core_target = ( core_target & (~core_spwu) ) ) )
    {
        PK_TRACE_INF("SX.0B: Cores[%x] Drop PM_EXIT via PCR_SCSR[1]", core_target);
        out32( QME_LCL_CORE_ADDR_WR( QME_SCSR_WO_CLEAR, core_target ), BIT32(1) );
    }

    core_spwu &= ~core_done;

    wrteei(1);

}



void
qme_stop_exit()
{
    QmeHeader_t* pQmeImgHdr = (QmeHeader_t*)(QME_SRAM_HEADER_ADDR);
    fapi2::Target < fapi2::TARGET_TYPE_PROC_CHIP > chip_target;
    fapi2::Target < fapi2::TARGET_TYPE_CORE |
    fapi2::TARGET_TYPE_MULTICAST, fapi2::MULTICAST_AND > core_target;

    if( in32( QME_LCL_FLAGS ) & BIT32( QME_FLAGS_STOP_EXIT_INJECT ) )
    {
        errlHndl_t rc = NULL;
        rc = createErrl (
                 0xBABE, // i_modId,
                 0x0B, // i_reasonCode, 0x0B
                 QME_STOP_EXIT_ENTRY_ERROR_INJECT,  // i_extReasonCode, 0x1c1f
                 ERRL_SEV_UNRECOVERABLE, // ERRL_SEVERITY,
                 0xDEADBEEF,   // i_userData1,
                 0xBADBADBA,   // i_userData2,
                 0xC0DEFEED ); // i_userData3

        if (NULL != rc)
        {
            addTraceToErrl (rc);
            commitErrl (&rc);
        }

        uint32_t pig_data = 0;
        pig_data = ( PIG_TYPE_E << SHIFT32(4) ) |
                   ( G_qme_record.quad_id       << SHIFT32(19) ) |
                   ( (QME_STOP_EXIT_ENTRY_ERROR_INJECT) << SHIFT32(23) );
        qme_send_pig_packet(pig_data);
        IOTA_PANIC(QME_STOP_EXIT_ENTRY_ERROR_INJECT);

    }


    if( G_qme_record.c_stop2_exit_targets )
    {
        out32( QME_LCL_CORE_ADDR_WR(
                   QME_SSH_SRC, G_qme_record.c_stop2_exit_targets ), SSH_EXIT_IN_SESSION );
    }

    ///// [STOP3 EXIT EXPRESS] /////

    if( G_qme_record.c_stop3_exit_targets )
    {
        PK_TRACE_INF("WAKE3: Waking up Cores in STOP3[%x]", G_qme_record.c_stop3_exit_targets);

        core_target = chip_target.getMulticast<fapi2::MULTICAST_AND>(fapi2::MCGROUP_GOOD_EQ,
                      static_cast<fapi2::MulticastCoreSelect>(G_qme_record.c_stop3_exit_targets));

        //===============//

        MARK_TAG( G_qme_record.c_stop3_exit_targets, SX_CORE_VMIN_DISABLE )

#if POWER10_DD_LEVEL != 10

        p10_hcd_core_vmin_disable(core_target);

#endif

        MARK_TAG( G_qme_record.c_stop3_exit_targets, SX_CORE_VOLT_RESTORED )

        //===============//

        G_qme_record.c_stop3_reached &= (~G_qme_record.c_stop3_exit_targets);
        G_qme_record.c_stop3_exit_targets = 0;
    }

    ///// [STOP2 EXIT EXPRESS] /////

    G_qme_record.c_stop2_exit_express =
        G_qme_record.c_stop2_exit_targets  &
        (~G_qme_record.c_stop5_exit_targets) &
        (~G_qme_record.c_stop11_exit_targets);

    if( G_qme_record.c_stop2_exit_express )
    {
        PK_TRACE_INF("FAST2: Express Waking up Cores in STOP2[%x]", G_qme_record.c_stop2_exit_express);

        core_target = chip_target.getMulticast<fapi2::MULTICAST_AND>(fapi2::MCGROUP_GOOD_EQ,
                      static_cast<fapi2::MulticastCoreSelect>(G_qme_record.c_stop2_exit_express));

        //===============//

        MARK_TAG( G_qme_record.c_stop2_exit_express, SX_CORE_SKEWADJUST )

        p10_hcd_core_startgrid(core_target);

        //===============//

        MARK_TAG( G_qme_record.c_stop2_exit_express, SX_CORE_STARTCLOCKS )

        p10_hcd_core_startclocks(core_target);

        //===============//

        MARK_TAG( G_qme_record.c_stop2_exit_express, SX_CORE_ENABLE_SHADOWS )

        p10_hcd_core_shadows_enable(core_target);
        p10_hcd_core_timefac_to_pc(core_target);

        MARK_TAG( G_qme_record.c_stop2_exit_express, SX_CORE_CLOCKED )

        //===============//

        MARK_TAG( G_qme_record.c_stop2_exit_express, SX_CORE_HANDOFF_PC )

        qme_stop_report_pls_srr1(G_qme_record.c_stop2_exit_express);

        //===============//

        qme_stop_handoff_pc(G_qme_record.c_stop2_exit_express,
                            G_qme_record.c_special_wakeup_exit_pending);

        MARK_TAG( G_qme_record.c_stop2_exit_express, SX_CORE_AWAKE )

        //===============//

        G_qme_record.c_stop2_reached      &= (~G_qme_record.c_stop2_exit_express);
        G_qme_record.c_stop2_exit_targets &= (~G_qme_record.c_stop2_exit_express);

        PK_TRACE_INF("FAST2: Completed Waken up Cores from STOP2[%x], Updated Cores still in STOP2+[%x], Updated Cores still waking up[%x]",
                     G_qme_record.c_stop2_exit_express,
                     G_qme_record.c_stop2_reached,
                     G_qme_record.c_stop2_exit_targets);
    }

    ///// [STOP11 EXIT] /////

    if( G_qme_record.c_stop11_exit_targets )
    {

        if( G_qme_record.hcode_func_enabled & QME_BLOCK_COPY_SCOM_ENABLE )
        {
            PK_TRACE("BCE Runtime Kickoff to Copy Scom Restore core");
            qme_block_copy_start(QME_BCEBAR_0,
                                 SCOM_RESTORE_CPMR_OFFSET,
                                 pQmeImgHdr->g_qme_scom_offset,
                                 (pQmeImgHdr->g_qme_scom_length >> 5));
        }

        PK_TRACE_INF("WAKE11: Waking up Cores in STOP11[%x]", G_qme_record.c_stop11_exit_targets);

        core_target = chip_target.getMulticast<fapi2::MULTICAST_AND>(fapi2::MCGROUP_GOOD_EQ,
                      static_cast<fapi2::MulticastCoreSelect>(G_qme_record.c_stop11_exit_targets));

        //===============//

        MARK_TAG( G_qme_record.c_stop11_exit_targets, SX_CACHE_POWERON )

        if( G_qme_record.hcode_func_enabled & QME_HWP_PFET_CTRL_ENABLE )
        {
            p10_hcd_cache_poweron(core_target);
        }

        //===============//

        MARK_TAG( G_qme_record.c_stop11_exit_targets, SX_CACHE_RESET )

        p10_hcd_cache_reset(core_target);

        if( G_qme_record.hcode_func_enabled & QME_HWP_SCANFLUSH_ENABLE )
        {
            p10_hcd_cache_scan0(core_target);
        }

        MARK_TAG( G_qme_record.c_stop11_exit_targets, SX_CACHE_POWERED )

        //===============//

        MARK_TAG( G_qme_record.c_stop11_exit_targets, SX_CACHE_GPTR_TIME_INITF )

        if( G_qme_record.hcode_func_enabled & QME_HWP_SCAN_INIT_ENABLE )
        {
            p10_hcd_cache_gptr_time_initf(core_target);
        }

        //===============//

        MARK_TAG( G_qme_record.c_stop11_exit_targets, SX_CACHE_REPAIR_INITF )

        if( G_qme_record.hcode_func_enabled & QME_HWP_SCAN_INIT_ENABLE )
        {
            p10_hcd_cache_repair_initf(core_target);
        }

        //===============//

        MARK_TAG( G_qme_record.c_stop11_exit_targets, SX_CACHE_ARRAYINIT )

        if( G_qme_record.hcode_func_enabled & QME_HWP_ARRAYINIT_ENABLE )
        {
            p10_hcd_cache_arrayinit(core_target);
        }

        //===============//

        MARK_TAG( G_qme_record.c_stop11_exit_targets, SX_CACHE_INITF )

        if( G_qme_record.hcode_func_enabled & QME_HWP_SCAN_INIT_ENABLE )
        {
            p10_hcd_cache_initf(core_target);
        }

        MARK_TAG( G_qme_record.c_stop11_exit_targets, SX_CACHE_SCANED )


        //===============//

        MARK_TAG( G_qme_record.c_stop11_exit_targets, SX_CACHE_STARTCLOCKS )

        p10_hcd_cache_startclocks(core_target);

        MARK_TAG( G_qme_record.c_stop11_exit_targets, SX_CACHE_CLOCKED )

        //===============//

        MARK_TAG( G_qme_record.c_stop11_exit_targets, SX_CACHE_SCOMINIT )

        if( G_qme_record.hcode_func_enabled & QME_HWP_SCOM_INIT_ENABLE )
        {
            p10_hcd_cache_scominit(core_target);
        }

        //===============//

        if( G_qme_record.hcode_func_enabled & QME_BLOCK_COPY_SCOM_ENABLE )
        {
            PK_TRACE_DBG("BCE Runtime Check Scom Restore Copy Completed");

            if( BLOCK_COPY_SUCCESS != qme_block_copy_check() )
            {
                PK_TRACE_DBG("ERROR: BCE Scom Restore Copy Failed. HALT QME!");
                IOTA_PANIC(QME_STOP_BLOCK_COPY_SCOM_FAILED);
            }
        }

        MARK_TAG( G_qme_record.c_stop11_exit_targets, SX_CACHE_SCOM_CUSTOMIZE )

        if( G_qme_record.hcode_func_enabled & QME_HWP_SCOM_CUST_ENABLE )
        {
            p10_hcd_cache_scom_customize(core_target);
        }

        MARK_TAG( G_qme_record.c_stop11_exit_targets, SX_CACHE_SCOMED )

        //===============//

        G_qme_record.c_stop11_reached &= (~G_qme_record.c_stop11_exit_targets);
        //note, not reset stop11_exit_targets until stop11 scom restore is completed below
    }

    ///// [STOP5 EXIT] /////

    if( G_qme_record.c_stop5_exit_targets )
    {
        PK_TRACE_INF("WAKE5: Waking up Cores in STOP5[%x]", G_qme_record.c_stop5_exit_targets);

        core_target = chip_target.getMulticast<fapi2::MULTICAST_AND>(fapi2::MCGROUP_GOOD_EQ,
                      static_cast<fapi2::MulticastCoreSelect>(G_qme_record.c_stop5_exit_targets));

        //===============//

        MARK_TAG( G_qme_record.c_stop5_exit_targets, SX_CORE_POWERON )

        if( G_qme_record.hcode_func_enabled & QME_HWP_PFET_CTRL_ENABLE )
        {
            p10_hcd_core_poweron(core_target);
        }

        //===============//

        MARK_TAG( G_qme_record.c_stop5_exit_targets, SX_CORE_RESET )

        p10_hcd_core_reset(core_target);

        if( G_qme_record.hcode_func_enabled & QME_HWP_SCANFLUSH_ENABLE )
        {
            p10_hcd_core_scan0(core_target);
        }

        MARK_TAG( G_qme_record.c_stop5_exit_targets, SX_CORE_POWERED )

        //===============//

        MARK_TAG( G_qme_record.c_stop5_exit_targets, SX_CORE_GPTR_TIME_INITF )

        if( G_qme_record.hcode_func_enabled & QME_HWP_SCAN_INIT_ENABLE )
        {
            p10_hcd_core_gptr_time_initf(core_target);
        }

        //===============//

        MARK_TAG( G_qme_record.c_stop5_exit_targets, SX_CORE_REPAIR_INITF )

        if( G_qme_record.hcode_func_enabled & QME_HWP_SCAN_INIT_ENABLE )
        {
            p10_hcd_core_repair_initf(core_target);
        }

        //===============//

        MARK_TAG( G_qme_record.c_stop5_exit_targets, SX_CORE_ARRAYINIT )

        if( G_qme_record.hcode_func_enabled & QME_HWP_ARRAYINIT_ENABLE )
        {
            p10_hcd_core_arrayinit(core_target);
        }

        //===============//

        MARK_TAG( G_qme_record.c_stop5_exit_targets, SX_CORE_INITF )

        if( G_qme_record.hcode_func_enabled & QME_HWP_SCAN_INIT_ENABLE )
        {
            p10_hcd_core_initf(core_target);
        }

        MARK_TAG( G_qme_record.c_stop5_exit_targets, SX_CORE_SCANED )
        //rest continue to stop2 exit

        //===============//

        // for forcing core shadow refresh
        // Per comments in p10_hcd_core_shadows_enable.C
        // which is the solo consumer of this attribute and only on QME Platform
        // therefore this is actually a qme bounded attribute,
        // which means it is defined at chip level to avoid multicast targets
        // but it is really meant to be used by local qme and local qme only,
        // in such scope, there is no concerns about other qmes and their cores
        // as they will have their own attribute container at local.
        // Note chip target scope at qme platform is not really a chip scope,
        // as this chip would only have one qme, which is the only local one.
        fapi2::Target<fapi2::TARGET_TYPE_PROC_CHIP> l_chip;
        FAPI_TRY(FAPI_ATTR_SET(fapi2::ATTR_QME_STATE_LOSS_CORES, l_chip, G_qme_record.c_stop5_exit_targets));

        G_qme_record.c_stop5_reached &= (~G_qme_record.c_stop5_exit_targets);
        G_qme_record.c_stop5_exit_targets = 0;
    }

    ///// [STOP2 EXIT] /////

    if( G_qme_record.c_stop2_exit_targets )
    {
        PK_TRACE_INF("WAKE2: Waking up Cores in STOP2[%x]", G_qme_record.c_stop2_exit_targets);

        core_target = chip_target.getMulticast<fapi2::MULTICAST_AND>(fapi2::MCGROUP_GOOD_EQ,
                      static_cast<fapi2::MulticastCoreSelect>(G_qme_record.c_stop2_exit_targets));

        //===============//

        MARK_TAG( G_qme_record.c_stop2_exit_targets, SX_CORE_SKEWADJUST )

        p10_hcd_core_startgrid(core_target);

        //===============//

        MARK_TAG( G_qme_record.c_stop2_exit_targets, SX_CORE_STARTCLOCKS )

        p10_hcd_core_startclocks(core_target);

        //===============//

        MARK_TAG( G_qme_record.c_stop2_exit_targets, SX_CORE_ENABLE_SHADOWS )

        p10_hcd_core_shadows_enable(core_target);

        MARK_TAG( G_qme_record.c_stop2_exit_targets, SX_CORE_CLOCKED )
    }

    ///// [STOP11 EXIT SCOM] /////

    if( G_qme_record.c_stop11_exit_targets )
    {
        PK_TRACE_INF("WAKE11: Scominit Cores in STOP11[%x]", G_qme_record.c_stop11_exit_targets);

        //===============//

        MARK_TAG( G_qme_record.c_stop11_exit_targets, SX_CORE_SCOMINIT )

        if( G_qme_record.hcode_func_enabled & QME_HWP_SCOM_INIT_ENABLE )
        {
            p10_hcd_core_scominit(core_target);
        }

        //===============//

        MARK_TAG( G_qme_record.c_stop11_exit_targets, SX_CORE_SCOM_CUSTOMIZE )

        if( G_qme_record.hcode_func_enabled & QME_HWP_SCOM_CUST_ENABLE )
        {
            p10_hcd_core_scom_customize(core_target);
        }

        MARK_TAG( G_qme_record.c_stop11_exit_targets, SX_CORE_SCOMED )

        //===============//

        MARK_TAG( G_qme_record.c_stop11_exit_targets, SX_CORE_SELF_RESTORE )

        if( G_qme_record.hcode_func_enabled & QME_SELF_RESTORE_ENABLE )
        {
            PK_TRACE_INF("WAKE11: self restore STOP11[%x] 0x%08x",
                         G_qme_record.c_stop11_exit_targets,
                         G_qme_record.hcode_func_enabled);

            qme_stop_self_execute(G_qme_record.c_stop11_exit_targets, SPR_SELF_RESTORE);
        }

        MARK_TAG( G_qme_record.c_stop11_exit_targets, SX_CORE_SRESET_THREADS )

        if( G_qme_record.hcode_func_enabled & QME_SELF_RESTORE_ENABLE )
        {
            qme_stop_self_complete(G_qme_record.c_stop11_exit_targets);
        }

        MARK_TAG( G_qme_record.c_stop11_exit_targets, SX_CORE_RESTORED )

        //===============//

        G_qme_record.c_stop11_exit_targets = 0;
    }

    ///// [STOP0 WAKEUP] /////

    if( G_qme_record.c_stop2_exit_targets )
    {
        PK_TRACE_INF("WAKE0: Waking up Cores in STOP0[%x]", G_qme_record.c_stop2_exit_targets);

        //===============//

        // HW534619 DD1 workaround move to after self restore
        p10_hcd_core_timefac_to_pc(core_target);

        MARK_TAG( G_qme_record.c_stop2_exit_targets, SX_CORE_HANDOFF_PC )

        qme_stop_report_pls_srr1(G_qme_record.c_stop2_exit_targets);

        //===============//

        qme_stop_handoff_pc(G_qme_record.c_stop2_exit_targets,
                            G_qme_record.c_special_wakeup_exit_pending);

        MARK_TAG( G_qme_record.c_stop2_exit_targets, SX_CORE_AWAKE )

        //===============//

        G_qme_record.c_stop2_reached &= ~G_qme_record.c_stop2_exit_targets;
        G_qme_record.c_stop2_exit_targets = 0;
    }

}
