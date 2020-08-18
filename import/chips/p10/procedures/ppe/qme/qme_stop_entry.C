/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/qme/qme_stop_entry.C $        */
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

#include "p10_hcd_l2_purge.H"
#include "p10_hcd_l2_tlbie_quiesce.H"
#include "p10_hcd_ncu_purge.H"
#include "p10_hcd_core_shadows_disable.H"
#include "p10_hcd_core_stopclocks.H"
#include "p10_hcd_core_stopgrid.H"
#include "p10_hcd_core_vmin_enable.H"
#include "p10_hcd_core_poweroff.H"

#include "p10_hcd_chtm_purge.H"
#include "p10_hcd_l3_purge.H"
#include "p10_hcd_powerbus_purge.H"
#include "p10_hcd_cache_stopclocks.H"
#include "p10_hcd_cache_stopgrid.H"
#include "p10_hcd_cache_poweroff.H"

extern QmeRecord G_qme_record;

inline void
qme_stop_prepare()
{
    PK_TRACE("Assert HALTED_STOP_OVERRIDE_DISABLE via PCR_SCSR[21]");
    out32( QME_LCL_CORE_ADDR_WR(
               QME_SCSR_WO_OR, G_qme_record.c_stop2_enter_targets ), BIT32(21) );
}

// called in p10_hcd_l2_purge()
void
qme_l2_purge_catchup_detect(uint32_t& core_select)
{
    uint32_t c_stop2  = 0;

    // Detect and Process L2 Purge Catchup
    if( G_qme_record.hcode_func_enabled & QME_L2_PURGE_CATCHUP_PATH_ENABLE )
    {
        c_stop2 = G_qme_record.c_stop2_enter_targets;
        qme_parse_pm_state_active_fast();
        c_stop2 = G_qme_record.c_stop2_enter_targets & (~c_stop2);

        if( c_stop2 )
        {
            PK_TRACE_DBG("Event: Detected L2 Purge Catchup on Cores[%x]", c_stop2);
            MARK_TAG(c_stop2, SE_L2_PURGE_CATCHUP);

            //===============//

            qme_stop_prepare();

            out32( QME_LCL_CORE_ADDR_WR(
                       QME_SCSR_WO_OR, c_stop2 ), ( BITS32(4, 2) | BIT32(22) ) );

            core_select = G_qme_record.c_stop2_enter_targets;
            G_qme_record.c_l2_purge_catchup_targets |= c_stop2;
        }
    }
}

// called in p10_hcd_l2_purge()
void
qme_l2_purge_abort_detect()
{
    uint32_t c_wakeup = 0;
    uint32_t c_spwu   = 0;

    // Detect and Process L2 Purge Abort
    if( G_qme_record.hcode_func_enabled & QME_L2_PURGE_ABORT_PATH_ENABLE )
    {
        c_wakeup = ( in32_sh(QME_LCL_EISR) & (BITS64SH(32, 4) | BITS64SH(40, 4)) ) >> SHIFT64SH(43);
        c_spwu   = c_wakeup >> 8;
        c_wakeup = (c_wakeup | c_spwu) &
                   G_qme_record.c_stop2_enter_targets &
                   ( ~G_qme_record.c_block_wake_done ) &
                   ( ~G_qme_record.c_stop11_enter_targets ) &
                   ( ~G_qme_record.c_l2_purge_abort_targets );

        if( c_wakeup )
        {
            PK_TRACE_DBG("Event: Detected L2 Purge Abort on Cores[%x]", c_wakeup);
            out32_sh( QME_LCL_EISR_CLR, ( (c_wakeup << SHIFT64SH(35)) | (c_wakeup << SHIFT64SH(43)) ) );

            G_qme_record.c_l2_purge_abort_targets        |= c_wakeup;
            G_qme_record.c_special_wakeup_abort_pending  |= c_wakeup & c_spwu;
            G_qme_record.c_l2_purge_catchup_targets      &= (~c_wakeup);

            PK_TRACE("Assert L2_PURGE_ABORT via PCR_SCSR[6]");
            out32( QME_LCL_CORE_ADDR_WR( QME_SCSR_WO_OR, c_wakeup ), BIT32(6) );

            //===============//

            MARK_TAG(c_wakeup, SE_L2_PURGE_ABORT);
        }
    }
}

// called in p10_hcd_ncu_purge()
void
qme_ncu_purge_abort_detect()
{
    uint32_t c_wakeup = 0;
    uint32_t c_spwu   = 0;

    // Detect and Process NCU Purge Abort
    if( G_qme_record.hcode_func_enabled & QME_NCU_PURGE_ABORT_PATH_ENABLE )
    {
        c_wakeup = ( in32_sh(QME_LCL_EISR) & (BITS64SH(32, 4) | BITS64SH(40, 4)) ) >> SHIFT64SH(43);
        c_spwu   = c_wakeup >> 8;
        c_wakeup = (c_wakeup | c_spwu) &
                   G_qme_record.c_stop2_enter_targets &
                   ( ~G_qme_record.c_block_wake_done ) &
                   ( ~G_qme_record.c_stop11_enter_targets ) &
                   ( ~G_qme_record.c_ncu_purge_abort_targets );

        if( c_wakeup )
        {
            PK_TRACE_DBG("Event: Detected NCU Purge Abort on Cores[%x]", c_wakeup);
            out32_sh( QME_LCL_EISR_CLR, ( (c_wakeup << SHIFT64SH(35)) | (c_wakeup << SHIFT64SH(43)) ) );

            G_qme_record.c_ncu_purge_abort_targets       |= c_wakeup;
            G_qme_record.c_special_wakeup_abort_pending  |= c_wakeup & c_spwu;

            PK_TRACE("Assert NCU_PURGE_ABORT via PCR_SCSR[10]");
            out32( QME_LCL_CORE_ADDR_WR( QME_SCSR_WO_OR, c_wakeup ), BIT32(10) );

            //===============//

            MARK_TAG(c_wakeup, SE_NCU_PURGE_ABORT);
        }
    }
}

void
qme_stop2_abort_cleanup(uint32_t abort_targets)
{
    //To avoid incurring the latency of shifting the Timefac back into the core,
    //on stop aborts that happen before clocking off the core, following is applied
    //(P.S. this same thing is done when aborting stop entry due to TFAC error being
    //reported in TFSCR (34:36) and the ERR register and maybe in avoid false errorEISR)

    PK_TRACE("Clear XFR_RECEIVE_DONE via PCR_TFCSR[32]");
    out32_sh( QME_LCL_CORE_ADDR_WR( QME_TFCSR_WO_CLEAR, abort_targets ), BIT64SH(32) );

    PK_TRACE("Assert TFAC_RESET via PCR_TFCSR[1]");
    out32(    QME_LCL_CORE_ADDR_WR( QME_TFCSR_WO_OR, abort_targets ), BIT32(1) );

    PK_TRACE("Reset the core timefac to ACTIVE via PC.COMMON.TFX[0,1]=0b01");
    PPE_PUTSCOM_MC( EC_PC_TFX_SM, abort_targets, BIT64(1) );

    //===============//

    MARK_TAG(abort_targets, SX_CORE_HANDOFF_PC);

    qme_stop_report_pls_srr1(abort_targets);

    qme_stop_handoff_pc(abort_targets,
                        G_qme_record.c_special_wakeup_abort_pending);

    //===============//

    MARK_TAG(abort_targets, SX_CORE_AWAKE);

    G_qme_record.c_stop2_enter_targets &= (~abort_targets);
    G_qme_record.c_stop3_enter_targets &= (~abort_targets);
    G_qme_record.c_stop5_enter_targets &= (~abort_targets);
}


void
qme_stop_entry()
{
    G_qme_record.c_stop3or5_catchup_targets = 0;
    G_qme_record.c_stop3or5_abort_targets   = 0;

    fapi2::Target < fapi2::TARGET_TYPE_PROC_CHIP > chip_target;
    fapi2::Target < fapi2::TARGET_TYPE_CORE |
    fapi2::TARGET_TYPE_MULTICAST, fapi2::MULTICAST_AND > core_target;
    fapi2::Target < fapi2::TARGET_TYPE_CORE |
    fapi2::TARGET_TYPE_MULTICAST, fapi2::MULTICAST_OR > core_target_or;

    do
    {
        ///// [STOP2] /////

        qme_stop_prepare();

        core_target = chip_target.getMulticast<fapi2::MULTICAST_AND>(fapi2::MCGROUP_GOOD_EQ,
                      static_cast<fapi2::MulticastCoreSelect>(G_qme_record.c_stop2_enter_targets));

        //===============//

        MARK_TAG( G_qme_record.c_stop2_enter_targets, SE_L2_PURGE_HBUS_DIS )

        p10_hcd_l2_purge(core_target);

        //===============//

        // L2 Purge Abort Cleanup and Wakeup
        if( G_qme_record.c_l2_purge_abort_targets )
        {
            PK_TRACE("Drop HBUS_DISABLE/AUTO_PMSR_SHIFT_DIS via PCR_SCSR[4,22]");

            out32( QME_LCL_CORE_ADDR_WR(
                       QME_SCSR_WO_CLEAR, G_qme_record.c_l2_purge_abort_targets ),
                   ( BIT32(4) | BIT32(22) ) );

            qme_stop2_abort_cleanup(G_qme_record.c_l2_purge_abort_targets);

            MARK_TAG( G_qme_record.c_l2_purge_abort_targets, SE_L2_PURGE_ABORT_DONE )
            G_qme_record.c_l2_purge_abort_targets = 0;
        }

        //===============//

        //If L2 Purge Abort occured, and all previous targets aborted, terminate current stop entry
        if( !G_qme_record.c_stop2_enter_targets )
        {
            return;
        }

        //recreate target in case catchup/abort
        core_target = chip_target.getMulticast<fapi2::MULTICAST_AND>(fapi2::MCGROUP_GOOD_EQ,
                      static_cast<fapi2::MulticastCoreSelect>(G_qme_record.c_stop2_enter_targets));

        //===============//

        MARK_TAG( (G_qme_record.c_stop2_enter_targets & (~G_qme_record.c_l2_purge_catchup_targets)), SE_L2_TLBIE_QUIESCE )

        if (G_qme_record.c_l2_purge_catchup_targets)
        {
            MARK_TAG( G_qme_record.c_l2_purge_catchup_targets, SE_L2_TLBIE_QUIESCE_CATCHUP )

            G_qme_record.c_l2_purge_catchup_targets = 0;
        }

        p10_hcd_l2_tlbie_quiesce(core_target);

        //===============//

        MARK_TAG( G_qme_record.c_stop2_enter_targets, SE_NCU_PURGE )

        p10_hcd_ncu_purge(core_target);

        //===============//

        // NCU Purge Abort Cleanup and Wakeup
        if( G_qme_record.c_ncu_purge_abort_targets )
        {
            PK_TRACE("Drop HBUS_DISABLE/L2RCMD_INTF_QUIESCE/NCU_TLBIE_QUIESCE/AUTO_PMSR_SHIFT_DIS via PCR_SCSR[4,7,8,22]");

            out32( QME_LCL_CORE_ADDR_WR(
                       QME_SCSR_WO_CLEAR, G_qme_record.c_ncu_purge_abort_targets ),
                   ( BIT32(4) | BITS32(7, 2) | BIT32(22) ) );

            qme_stop2_abort_cleanup(G_qme_record.c_ncu_purge_abort_targets);

            MARK_TAG( G_qme_record.c_ncu_purge_abort_targets, SE_NCU_PURGE_ABORT_DONE )
            G_qme_record.c_ncu_purge_abort_targets = 0;
        }

        //===============//

        //If NCU Purge Abort occured, and all previous targets aborted, terminate current stop entry
        if( !G_qme_record.c_stop2_enter_targets )
        {
            return;
        }

        //recreate target in case abort
        core_target = chip_target.getMulticast<fapi2::MULTICAST_AND>(fapi2::MCGROUP_GOOD_EQ,
                      static_cast<fapi2::MulticastCoreSelect>(G_qme_record.c_stop2_enter_targets));

        //===============//

        MARK_TAG( G_qme_record.c_stop2_enter_targets, SE_CORE_DISABLE_SHADOWS )

        p10_hcd_core_shadows_disable(core_target);

        // Assert STOP_GATED before Assert regional fence which will block pm_active
        out32( QME_LCL_CORE_ADDR_WR(
                   QME_SSH_SRC, G_qme_record.c_stop2_enter_targets ), SSH_ENTRY_IN_SESSION );

        //===============//

        MARK_TAG( G_qme_record.c_stop2_enter_targets, SE_CORE_STOPCLOCKS )

        core_target_or = chip_target.getMulticast<fapi2::MULTICAST_OR>(fapi2::MCGROUP_GOOD_EQ,
                         static_cast<fapi2::MulticastCoreSelect>(G_qme_record.c_stop2_enter_targets));

        p10_hcd_core_stopclocks(core_target_or);

        //===============//

        MARK_TAG( G_qme_record.c_stop2_enter_targets, SE_CORE_STOPGRID )

#ifndef EQ_SKEW_ADJUST_DISABLE

        p10_hcd_core_stopgrid(core_target);

#endif

        //===============//

        out32( QME_LCL_CORE_ADDR_WR(
                   QME_SSH_SRC, G_qme_record.c_stop2_enter_targets ), SSH_ACT_LV2_COMPLETE );

        MARK_TAG( G_qme_record.c_stop2_enter_targets, SE_STOP2_DONE )

        //===============//

        G_qme_record.c_stop2_reached |= G_qme_record.c_stop2_enter_targets;

        PK_TRACE_INF("STOP2: Completed STOP2 on Cores[%x], Total Cores in STOP2[%x], Current STOP3 targets on Cores[%x], Current STOP5 targets on Cores[%x]",
                     G_qme_record.c_stop2_enter_targets,
                     G_qme_record.c_stop2_reached,
                     G_qme_record.c_stop3_enter_targets,
                     G_qme_record.c_stop5_enter_targets);

        G_qme_record.c_stop2_enter_targets = 0;

        // If no more Stop3/5/11 Entries, terminates current stop entry
        if( (!G_qme_record.c_stop3_enter_targets) && (!G_qme_record.c_stop5_enter_targets) )
        {
            return;
        }

        ///// [STOP3/5_CATCHUP] /////

        if( G_qme_record.hcode_func_enabled & QME_STOP3OR5_CATCHUP_PATH_ENABLE)
        {
            if( G_qme_record.c_stop3or5_catchup_targets )
            {
                G_qme_record.c_stop3or5_catchup_targets = 0;
                G_qme_record.hcode_func_enabled |= QME_L2_PURGE_ABORT_PATH_ENABLE;
                G_qme_record.hcode_func_enabled |= QME_NCU_PURGE_ABORT_PATH_ENABLE;
                break;
            }

            PK_TRACE("STOP2: Sampling PM_STATE_ACTIVE for Catchup Detection");

            qme_parse_pm_state_active_fast();

            if( G_qme_record.c_stop2_enter_targets )
            {
                //===============//

                MARK_TAG( G_qme_record.c_stop2_enter_targets, SE_STOP3OR5_CATCHUP )

                PK_TRACE_INF("Catch: New STOP2 Request on Cores[%x], Updated STOP3 targets on Cores[%x], Updated STOP5 targets on Cores[%x]",
                             G_qme_record.c_stop2_enter_targets,
                             G_qme_record.c_stop3_enter_targets,
                             G_qme_record.c_stop5_enter_targets);

                G_qme_record.c_stop3or5_catchup_targets = G_qme_record.c_stop2_enter_targets;
                G_qme_record.hcode_func_enabled &= ~QME_L2_PURGE_ABORT_PATH_ENABLE;
                G_qme_record.hcode_func_enabled &= ~QME_NCU_PURGE_ABORT_PATH_ENABLE;
            }
        }
    }
    while( G_qme_record.c_stop3or5_catchup_targets );



    if( ( G_qme_record.hcode_func_enabled & QME_STOP3OR5_ABORT_PATH_ENABLE ) &&
        ( G_qme_record.c_stop3_enter_targets || G_qme_record.c_stop5_enter_targets ) )
    {
        ///// [STOP3/5_ABORT] /////

        PK_TRACE("STOP3/5: Umasking Regular and Special Wakeup for Abort Detection, IS0: %x, %x, %x",
                 G_qme_record.c_stop3_enter_targets,  G_qme_record.c_stop5_enter_targets,
                 (G_qme_record.c_stop3_enter_targets | G_qme_record.c_stop5_enter_targets) );

        MARK_TAG( (G_qme_record.c_stop3_enter_targets | G_qme_record.c_stop5_enter_targets), SE_IS0_BEGIN )

        //===============//

        G_qme_record.c_stop3or5_abort_targets = (G_qme_record.c_stop3_enter_targets |
                                                G_qme_record.c_stop5_enter_targets) &
                                                (~G_qme_record.c_stop11_enter_targets) &
                                                (~G_qme_record.c_block_wake_done);

        out32_sh( QME_LCL_EIMR_CLR,
                  ( (G_qme_record.c_stop3or5_abort_targets << SHIFT64SH(35)) |
                    (G_qme_record.c_stop3or5_abort_targets << SHIFT64SH(43)) ) );
        sync();

        wrteei(0);
        out32_sh( QME_LCL_EIMR_OR, ( BITS64SH(32, 4) | BITS64SH(40, 4) ) );
        wrteei(1);

        //===============//

        MARK_TAG( (G_qme_record.c_stop3_enter_targets | G_qme_record.c_stop5_enter_targets), SE_IS0_END )

        G_qme_record.c_stop3or5_abort_targets &= (~G_qme_record.c_stop2_reached);
        G_qme_record.c_stop3_enter_targets &= G_qme_record.c_stop2_reached;
        G_qme_record.c_stop5_enter_targets &= G_qme_record.c_stop2_reached;

        if( G_qme_record.c_stop3or5_abort_targets )
        {
            PK_TRACE_INF("Abort: Aborted STOP3/5 on Cores[%x], Updated STOP3 targets on Cores[%x], Updated STOP5 targets on Cores[%x]",
                         G_qme_record.c_stop3or5_abort_targets,
                         G_qme_record.c_stop3_enter_targets,
                         G_qme_record.c_stop5_enter_targets);

            G_qme_record.c_stop3or5_abort_targets = 0;
        }
    }



    if( G_qme_record.c_stop3_enter_targets )
    {
        ///// [STOP3] /////

        out32( QME_LCL_CORE_ADDR_WR(
                   QME_SSH_SRC, G_qme_record.c_stop3_enter_targets ), SSH_ACT_LV2_CONTINUE );

        core_target = chip_target.getMulticast<fapi2::MULTICAST_AND>(fapi2::MCGROUP_GOOD_EQ,
                      static_cast<fapi2::MulticastCoreSelect>(G_qme_record.c_stop3_enter_targets));

        //===============//

        MARK_TAG( G_qme_record.c_stop3_enter_targets, SE_CORE_VMIN_ENABLE )

#if POWER10_DD_LEVEL != 10

        p10_hcd_core_vmin_enable(core_target);

#endif

        //===============//

        out32( QME_LCL_CORE_ADDR_WR(
                   QME_SSH_SRC, G_qme_record.c_stop3_enter_targets ), SSH_ACT_LV3_COMPLETE );

        MARK_TAG(G_qme_record.c_stop3_enter_targets, SE_STOP3_DONE)

        //===============//

        G_qme_record.c_stop3_reached |= G_qme_record.c_stop3_enter_targets;

        PK_TRACE_INF("STOP3: Completed STOP3 on Cores[%x], Total Cores in STOP3[%x], Current STOP5 targets on Cores[%x]",
                     G_qme_record.c_stop3_enter_targets,
                     G_qme_record.c_stop3_reached,
                     G_qme_record.c_stop5_enter_targets);

        G_qme_record.c_stop3_enter_targets = 0;
    }



    if( G_qme_record.c_stop5_enter_targets )
    {
        ///// [STOP5] /////

        out32( QME_LCL_CORE_ADDR_WR(
                   QME_SSH_SRC, G_qme_record.c_stop5_enter_targets ), SSH_ACT_LV2_CONTINUE );

        core_target = chip_target.getMulticast<fapi2::MULTICAST_AND>(fapi2::MCGROUP_GOOD_EQ,
                      static_cast<fapi2::MulticastCoreSelect>(G_qme_record.c_stop5_enter_targets));

        //===============//

        MARK_TAG(G_qme_record.c_stop5_enter_targets, SE_CORE_POWEROFF)

#ifndef POWER_LOSS_DISABLE

        p10_hcd_core_poweroff(core_target);

#endif

        //===============//

        out32( QME_LCL_CORE_ADDR_WR(
                   QME_SSH_SRC, G_qme_record.c_stop5_enter_targets ), SSH_ACT_LV5_COMPLETE );

        MARK_TAG(G_qme_record.c_stop5_enter_targets, SE_STOP5_DONE)

        //===============//

        G_qme_record.c_stop5_reached |= G_qme_record.c_stop5_enter_targets;

        PK_TRACE_INF("STOP5: Completed STOP5 on Cores[%x], Total Cores in STOP5[%x], Current STOP11 targets on Cores[%x]",
                     G_qme_record.c_stop5_enter_targets,
                     G_qme_record.c_stop5_reached,
                     G_qme_record.c_stop11_enter_targets);

        G_qme_record.c_stop5_enter_targets = 0;
    }



    if( G_qme_record.c_stop11_enter_targets )
    {
        ///// [STOP11] /////

        out32( QME_LCL_CORE_ADDR_WR(
                   QME_SSH_SRC, G_qme_record.c_stop11_enter_targets ), SSH_ACT_LV5_CONTINUE );

        core_target = chip_target.getMulticast<fapi2::MULTICAST_AND>(fapi2::MCGROUP_GOOD_EQ,
                      static_cast<fapi2::MulticastCoreSelect>(G_qme_record.c_stop11_enter_targets));

        //===============//

        MARK_TAG(G_qme_record.c_stop11_enter_targets, SE_CHTM_PURGE)

        p10_hcd_chtm_purge(core_target);

        //===============//

        MARK_TAG(G_qme_record.c_stop11_enter_targets, SE_L3_PURGE)

        core_target_or = chip_target.getMulticast<fapi2::MULTICAST_OR>(fapi2::MCGROUP_GOOD_EQ,
                         static_cast<fapi2::MulticastCoreSelect>(G_qme_record.c_stop11_enter_targets));

        p10_hcd_l3_purge(core_target_or);

        //===============//

        MARK_TAG(G_qme_record.c_stop11_enter_targets, SE_POWERBUS_PURGE)

        p10_hcd_powerbus_purge(core_target);

        //===============//

        MARK_TAG(G_qme_record.c_stop11_enter_targets, SE_CACHE_STOPCLOCKS)

        p10_hcd_cache_stopclocks(core_target);

        //===============//

        MARK_TAG( G_qme_record.c_stop11_enter_targets, SE_CACHE_STOPGRID )

        p10_hcd_cache_stopgrid(core_target);

        //===============//

        MARK_TAG(G_qme_record.c_stop11_enter_targets, SE_CACHE_POWEROFF)

#ifndef POWER_LOSS_DISABLE

        p10_hcd_cache_poweroff(core_target);

#endif

        //===============//

        out32( QME_LCL_CORE_ADDR_WR(
                   QME_SSH_SRC, G_qme_record.c_stop11_enter_targets ), SSH_ACT_LV11_COMPLETE );

        MARK_TAG(G_qme_record.c_stop11_enter_targets, SE_STOP11_DONE)

        //===============//

        G_qme_record.c_stop11_reached |= G_qme_record.c_stop11_enter_targets;

        PK_TRACE_INF("STOP11: Completed STOP11 on Cores[%x], Total Cores in STOP11[%x]",
                     G_qme_record.c_stop11_enter_targets,
                     G_qme_record.c_stop11_reached);

        G_qme_record.c_stop11_enter_targets = 0;

        G_qme_record.hcode_func_enabled |= QME_L2_PURGE_CATCHUP_PATH_ENABLE;
        G_qme_record.hcode_func_enabled |= QME_L2_PURGE_ABORT_PATH_ENABLE;
        G_qme_record.hcode_func_enabled |= QME_NCU_PURGE_ABORT_PATH_ENABLE;
        G_qme_record.hcode_func_enabled |= QME_STOP3OR5_CATCHUP_PATH_ENABLE;
        G_qme_record.hcode_func_enabled |= QME_STOP3OR5_ABORT_PATH_ENABLE;
    }
}
