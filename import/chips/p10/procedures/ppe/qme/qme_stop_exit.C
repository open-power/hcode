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
#include <fapi2.H>
#include <fapi2_target.H>

#include "p10_hcd_cache_poweron.H"
#include "p10_hcd_cache_reset.H"
#include "p10_hcd_cache_gptr_time_initf.H"
#include "p10_hcd_cache_repair_initf.H"
#include "p10_hcd_cache_arrayinit.H"
#include "p10_hcd_cache_initf.H"
#include "p10_hcd_cache_startclocks.H"
#include "p10_hcd_cache_scominit.H"
#include "p10_hcd_cache_scom_customize.H"

#include "p10_hcd_core_poweron.H"
#include "p10_hcd_core_reset.H"
#include "p10_hcd_core_gptr_time_initf.H"
#include "p10_hcd_core_repair_initf.H"
#include "p10_hcd_core_arrayinit.H"
#include "p10_hcd_core_initf.H"
#include "p10_hcd_core_startclocks.H"
#include "p10_hcd_core_scominit.H"
#include "p10_hcd_core_scom_customize.H"

#include "p10_hcd_core_shadows_enable.H"
#include "p10_hcd_core_startgrid.H"
#include "p10_hcd_core_vmin_disable.H"


extern QmeRecord G_qme_record;



void
qme_stop_report_pls_srr1(uint32_t core_target)
{
    uint32_t c_loop         = 0;
    uint32_t c_end          = 0;
    uint32_t t_end          = 0;
    uint32_t t_offset       = 0;
    uint32_t pls_end        = 0;
    uint32_t srr1_end       = 0;
    uint32_t act_stop_level = 0;
    uint32_t old_pls        = 0;
    uint32_t new_pls        = 0;
    uint32_t srr1           = 0;
    uint32_t esl            = 1;
    uint32_t local_data     = 0;
    uint32_t qme_runtime    = 1;
    fapi2::Target<fapi2::TARGET_TYPE_PROC_CHIP> l_chip;

    PK_TRACE("Restore PSCDR.PLS+SRR1 back to actual level");

    for( c_end = 51, t_end = 3,
         c_loop = 8; c_loop > 0; c_loop = c_loop >> 1,
         c_end += 4, t_end += 16 )
    {
        if ( ! (c_loop & core_target) )
        {
            continue;
        }

        act_stop_level = ( in32_sh(QME_LCL_SCDR) >> SHIFT64SH(c_end) ) & 0xF;
        local_data     = 0;

        for( pls_end  = 3, srr1_end = 17,
             t_offset = 0; t_offset < 16; t_offset += 4,
             pls_end += 4, srr1_end += 2 )
        {
            old_pls = ( in64(QME_LCL_PLSR) >> SHIFT64( (t_end + t_offset) ) ) & 0xF;
            new_pls = ( act_stop_level > old_pls ) ? (act_stop_level) : (old_pls);

            PK_TRACE_DBG("Core[%x] act_stop_level[%x] old_pls[%x] new_pls[%x]",
                         c_loop, act_stop_level, old_pls, new_pls);

            // unless esl=0, srr1 = some_state_loss regardless stop_level
            srr1 = SOME_STATE_LOSS_BUT_NOT_TIMEBASE;
            esl = in32( ( QME_PSCRS | (c_loop << 16) | (t_offset << 4) ) ) & BIT32(2);

            if( !esl )
            {
                srr1 = NO_STATE_LOSS;
            }

            // However, cannot do Power Loss State when esl is actually 0 that would be error
            if( G_qme_record.hcode_func_enabled & QME_POWER_LOSS_ESL_CHECK_ENABLE )
            {
                if( (!esl) && ( act_stop_level >= STOP_LEVEL_POWOFF ) )
                {
                    PK_TRACE_ERR("ERROR: Core[%x] Thread[%x] Detected in Power Loss State while ESL=0. HALT QME!",
                                 c_loop, t_offset);
                    IOTA_PANIC(QME_POWER_LOSS_WITH_STATE_LOSS_DISABLED);
                }
            }
            else
            {
                // Turn this option on after cold core starts, which wont have esl setup yet.
                G_qme_record.hcode_func_enabled |= QME_POWER_LOSS_ESL_CHECK_ENABLE;
                // also set runtime mode
                FAPI_TRY(FAPI_ATTR_SET(fapi2::ATTR_QME_RUNTIME_MODE, l_chip, qme_runtime));
            }

            local_data |= ( new_pls << SHIFT32( pls_end  ) );
            local_data |= ( srr1    << SHIFT32( srr1_end ) );
        }

        out32( QME_LCL_CORE_ADDR_WR( QME_DCSR, c_loop ), local_data );
    }

    PK_TRACE("Polling for STOP_SHIFT_ACTIVE == 0 via QME_SCSR[47]");

    while( in32_sh( QME_LCL_CORE_ADDR_OR( QME_SCSR, core_target ) ) & BIT64SH(47) );

}


void
qme_stop_handoff_pc(uint32_t core_target, uint32_t& core_spwu)
{
    uint32_t scdr      = 0;
    uint32_t core_done = 0;

    PK_TRACE("Core Waking up(pm_exit=1) via PCR_SCSR[1]");
    out32( QME_LCL_CORE_ADDR_WR( QME_SCSR_WO_OR, core_target ), BIT32(1) );

#if !EPM_TUNING
    PPE_WAIT_4NOP_CYCLES
#endif

    PK_TRACE("Polling for Core Waking up(pm_active=0) via QME_SSDR[12-15]");

    while( ( ( (~in32(QME_LCL_SSDR)) >> SHIFT32(15) ) & core_target ) != core_target );

    //===============//

    PK_TRACE("Update STOP history: STOP exit completed, core ready");
    out32( QME_LCL_CORE_ADDR_WR( QME_SSH_SRC, core_target ), SSH_EXIT_COMPLETE );

    PK_TRACE("Drop halt STOP override disable via PCR_SCSR[21]");
    out32( QME_LCL_CORE_ADDR_WR( QME_SCSR_WO_CLEAR, core_target ), BIT32(21) );

    //===============//

    if( ( core_done = ( core_spwu & core_target ) ) )
    {
        if( G_qme_record.hcode_func_enabled & QME_SPWU_PROTOCOL_CHECK_ENABLE )
        {
            scdr = in32(QME_LCL_SCDR);

            if( core_done & ( scdr >> SHIFT32(3) ) )
            {
                G_qme_record.c_special_wakeup_error |= core_done;
                PK_TRACE_ERR("ERROR: Cores[%x] from Spwu[%x] Waking while Assert SPWU_Done when STOP_GATED=1 with SCDR[%x]. HALT QME!",
                             core_target, core_spwu, scdr);
                IOTA_PANIC(QME_STOP_SPWU_PROTOCOL_ERROR);
            }
        }

        PK_TRACE_INF("SX.0A: Cores[%x] Assert Special_Wakeup_Done via PCR_SCSR[16]",
                     core_done);
        out32( QME_LCL_CORE_ADDR_WR( QME_SCSR_WO_OR, core_done ), BIT32(16) );
        G_qme_record.c_special_wakeup_done |= core_done;
    }

    if( ( core_target = ( core_target & (~core_spwu) ) ) )
    {
        PK_TRACE_INF("SX.0B: Cores[%x] Drop PM_EXIT via PCR_SCSR[1]", core_target);
        out32( QME_LCL_CORE_ADDR_WR( QME_SCSR_WO_CLEAR, core_target ), BIT32(1) );
    }

    core_spwu &= ~core_done;
}



void
qme_stop_exit()
{
    QmeHeader_t* pQmeImgHdr = (QmeHeader_t*)(QME_SRAM_HEADER_ADDR);
    fapi2::Target < fapi2::TARGET_TYPE_PROC_CHIP > chip_target;
    fapi2::Target < fapi2::TARGET_TYPE_CORE |
    fapi2::TARGET_TYPE_MULTICAST, fapi2::MULTICAST_AND > core_target;

    if( G_qme_record.c_stop2_exit_targets )
    {
        out32( QME_LCL_CORE_ADDR_WR(
                   QME_SSH_SRC, G_qme_record.c_stop2_exit_targets ), SSH_EXIT_IN_SESSION );
    }
    else
    {
        //FUNC ERROR
    }

    ///// [STOP2 EXIT EXPRESS] /////

    G_qme_record.c_stop2_exit_express =
        G_qme_record.c_stop2_exit_targets  &
        (~G_qme_record.c_stop3_exit_targets) &
        (~G_qme_record.c_stop5_exit_targets) &
        (~G_qme_record.c_stop11_exit_targets);

    if( G_qme_record.c_stop2_exit_express )
    {
        PK_TRACE_INF("FAST2: Express Waking up Cores in STOP2[%x]", G_qme_record.c_stop2_exit_express);

        core_target = chip_target.getMulticast<fapi2::MULTICAST_AND>(fapi2::MCGROUP_GOOD_EQ,
                      static_cast<fapi2::MulticastCoreSelect>(G_qme_record.c_stop2_exit_express));

        //===============//

        MARK_TAG( G_qme_record.c_stop2_exit_express, SX_CORE_SKEWADJUST )

#ifndef EQ_SKEW_ADJUST_DISABLE

        p10_hcd_core_startgrid(core_target);

#endif

        //===============//

        MARK_TAG( G_qme_record.c_stop2_exit_express, SX_CORE_STARTCLOCKS )

        p10_hcd_core_startclocks(core_target);

        //===============//

        MARK_TAG( G_qme_record.c_stop2_exit_express, SX_CORE_ENABLE_SHADOWS )

        p10_hcd_core_shadows_enable(core_target);

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

        MARK_TAG( G_qme_record.c_stop3_exit_targets, SX_CACHE_POWERON )

#ifndef POWER_LOSS_DISABLE

        p10_hcd_cache_poweron(core_target);

#endif

        //===============//

        MARK_TAG( G_qme_record.c_stop3_exit_targets, SX_CACHE_RESET )

        p10_hcd_cache_reset(core_target);

        MARK_TAG( G_qme_record.c_stop3_exit_targets, SX_CACHE_POWERED )

        //===============//

        MARK_TAG( G_qme_record.c_stop3_exit_targets, SX_CACHE_GPTR_TIME_INITF )

        p10_hcd_cache_gptr_time_initf(core_target);

        //===============//

        MARK_TAG( G_qme_record.c_stop3_exit_targets, SX_CACHE_REPAIR_INITF )

        p10_hcd_cache_repair_initf(core_target);

        //===============//

        MARK_TAG( G_qme_record.c_stop3_exit_targets, SX_CACHE_ARRAYINIT )

        p10_hcd_cache_arrayinit(core_target);

        //===============//

        MARK_TAG( G_qme_record.c_stop3_exit_targets, SX_CACHE_INITF )

        p10_hcd_cache_initf(core_target);

        MARK_TAG( G_qme_record.c_stop3_exit_targets, SX_CACHE_SCANED )

        //===============//

        MARK_TAG( G_qme_record.c_stop3_exit_targets, SX_CACHE_STARTCLOCKS )

        p10_hcd_cache_startclocks(core_target);

        MARK_TAG( G_qme_record.c_stop3_exit_targets, SX_CACHE_CLOCKED )

        //===============//

        MARK_TAG( G_qme_record.c_stop3_exit_targets, SX_CACHE_SCOMINIT )

        //TODO commit77948//p10_hcd_cache_scominit(core_target);

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

        MARK_TAG( G_qme_record.c_stop3_exit_targets, SX_CACHE_SCOM_CUSTOMIZE )

#ifndef BLOCK_COPY_DISABLE

        p10_hcd_cache_scom_customize(core_target);

#endif

        MARK_TAG( G_qme_record.c_stop3_exit_targets, SX_CACHE_SCOMED )

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

        MARK_TAG( G_qme_record.c_stop3_exit_targets, SX_CORE_POWERON )

#ifndef POWER_LOSS_DISABLE

        p10_hcd_core_poweron(core_target);

#endif

        //===============//

        MARK_TAG( G_qme_record.c_stop3_exit_targets, SX_CORE_RESET )

        p10_hcd_core_reset(core_target);

        MARK_TAG( G_qme_record.c_stop3_exit_targets, SX_CORE_POWERED )

        //===============//

        MARK_TAG( G_qme_record.c_stop3_exit_targets, SX_CORE_GPTR_TIME_INITF )

        p10_hcd_core_gptr_time_initf(core_target);

        //===============//

        MARK_TAG( G_qme_record.c_stop3_exit_targets, SX_CORE_REPAIR_INITF )

        p10_hcd_core_repair_initf(core_target);

        //===============//

        MARK_TAG( G_qme_record.c_stop3_exit_targets, SX_CORE_ARRAYINIT )

        p10_hcd_core_arrayinit(core_target);

        //===============//

        MARK_TAG( G_qme_record.c_stop3_exit_targets, SX_CORE_INITF )

        p10_hcd_core_initf(core_target);

        MARK_TAG( G_qme_record.c_stop3_exit_targets, SX_CORE_SCANED )
        //rest continue to stop2 exit

        //===============//

        G_qme_record.c_stop5_reached &= (~G_qme_record.c_stop5_exit_targets);
        G_qme_record.c_stop5_exit_targets = 0;
    }

    ///// [STOP3 EXIT] /////

    if( G_qme_record.c_stop3_exit_targets )
    {
        PK_TRACE_INF("WAKE3: Waking up Cores in STOP3[%x]", G_qme_record.c_stop3_exit_targets);

        core_target = chip_target.getMulticast<fapi2::MULTICAST_AND>(fapi2::MCGROUP_GOOD_EQ,
                      static_cast<fapi2::MulticastCoreSelect>(G_qme_record.c_stop3_exit_targets));

        //===============//

        MARK_TAG( G_qme_record.c_stop3_exit_targets, SX_CORE_VMIN_DISABLE )

        p10_hcd_core_vmin_disable(core_target);

        MARK_TAG( G_qme_record.c_stop3_exit_targets, SX_CORE_VOLT_RESTORED )

        //===============//

        G_qme_record.c_stop3_reached &= (~G_qme_record.c_stop3_exit_targets);
        G_qme_record.c_stop3_exit_targets = 0;
    }

    ///// [STOP2 EXIT] /////

    if( G_qme_record.c_stop2_exit_targets )
    {
        PK_TRACE_INF("WAKE2: Waking up Cores in STOP2[%x]", G_qme_record.c_stop2_exit_targets);

        core_target = chip_target.getMulticast<fapi2::MULTICAST_AND>(fapi2::MCGROUP_GOOD_EQ,
                      static_cast<fapi2::MulticastCoreSelect>(G_qme_record.c_stop2_exit_targets));

        //===============//

        MARK_TAG( G_qme_record.c_stop2_exit_targets, SX_CORE_SKEWADJUST )

#ifndef EQ_SKEW_ADJUST_DISABLE

        p10_hcd_core_startgrid(core_target);

#endif

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

        MARK_TAG( G_qme_record.c_stop2_exit_targets, SX_CORE_SCOMINIT )

        //TODO commit78401//p10_hcd_core_scominit(core_target);

        //===============//

        MARK_TAG( G_qme_record.c_stop2_exit_targets, SX_CORE_SCOM_CUSTOMIZE )

#ifndef BLOCK_COPY_DISABLE

        p10_hcd_core_scom_customize(core_target);

#endif

        MARK_TAG( G_qme_record.c_stop2_exit_targets, SX_CORE_SCOMED )

        //===============//

        if( G_qme_record.hcode_func_enabled & QME_SELF_RESTORE_ENABLE )
        {
            MARK_TAG( G_qme_record.c_stop2_exit_targets, SX_CORE_SELF_RESTORE )

            qme_stop_self_execute(G_qme_record.c_stop2_exit_targets, SPR_SELF_RESTORE);

            MARK_TAG( G_qme_record.c_stop2_exit_targets, SX_CORE_SRESET_THREADS )

            qme_stop_self_complete(G_qme_record.c_stop2_exit_targets);

            MARK_TAG( G_qme_record.c_stop2_exit_targets, SX_CORE_RESTORED )
        }

        //===============//

        G_qme_record.c_stop11_exit_targets = 0;
    }

    ///// [STOP0 WAKEUP] /////

    if( G_qme_record.c_stop2_exit_targets )
    {
        PK_TRACE_INF("WAKE0: Waking up Cores in STOP0[%x]", G_qme_record.c_stop2_exit_targets);

        //===============//

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
