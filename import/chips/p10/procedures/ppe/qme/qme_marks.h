/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/qme/qme_marks.h $             */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019                                                         */
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
#ifndef __QME_MARKS_H__
#define __QME_MARKS_H__

#ifdef EPM_SIM_ENV

#include <vector>
namespace QME_STOP_ENTRY_MARKS
{

#endif


enum QME_SE_MARKS
{
    IRQ_PM_STATE_ACTIVE_FAST_EVENT = 0x1f0      ,
    SE_L2_PURGE_HBUS_DIS           = 0x200      ,
    SE_L2_PURGE_CATCHUP            = 0x210      ,
    SE_L2_PURGE_ABORT              = 0x220      ,
    SE_L2_TLBIE_QUIESCE            = 0x230      ,
    SE_NCU_PURGE                   = 0x240      ,
    SE_NCU_PURGE_ABORT             = 0x250      ,
    SE_CORE_DISABLE_SHADOWS        = 0x2e0      ,
    SE_CORE_STOPCLOCKS             = 0x2f0      ,
    SE_CORE_STOPGRID               = 0x300      ,
    SE_STOP2_DONE                  = 0x310      ,
    SE_STOP5_CATCHUP               = 0x320      ,
    SE_IS0_BEGIN                   = 0x330      ,
    SE_IS0_END                     = 0x340      ,
    SE_CORE_VMIN_ENABLE            = 0x350      ,
    SE_STOP5_DONE                  = 0x3e0
};


#ifdef EPM_SIM_ENV

const std::vector<QME_SE_MARKS> MARKS =
{
//M2B_START_SE
    IRQ_PM_STATE_ACTIVE_FAST_EVENT,
    SE_L2_PURGE_HBUS_DIS,
    //SE_L2_PURGE_ABORT,             wakeup_pending
    //SE_L2_TLBIE_QUIESCE,           l2_purge_done_hbus_disabled
    SE_L2_PURGE_CATCHUP,             //M2B_BRANCH_ONLY
    //SE_L2_PURGE_HBUS_DIS,          catchup_detected
    SE_L2_PURGE_ABORT,               //M2B_BRANCH_ONLY
    //SX_CORE_HANDOFF_PC,            wakeup_stop0
    SE_L2_TLBIE_QUIESCE,
    SE_NCU_PURGE,                    //M2B_BRANCH_ONLY
    //SE_CORE_DISABLE_SHADOWS,       ncu_purge_done
    //SE_NCU_PURGE_ABORT,            wakeup_pending
    SE_NCU_PURGE_ABORT,              //M2B_BRANCH_ONLY
    //SX_CORE_HANDOFF_PC,            wakeup_stop0
    SE_CORE_DISABLE_SHADOWS,
    SE_CORE_STOPCLOCKS,
    SE_CORE_STOPGRID,
    SE_STOP2_DONE,
    //SE_IS0_BEGIN,                  abort_detecting
    SE_STOP5_CATCHUP,                //M2B_BRANCH_ONLY
    //SE_L2_PURGE_HBUS_DIS,          catchup_detected
    SE_IS0_BEGIN,
    //IRQ_REGULAR_WAKEUP_FAST_EVENT, abort_detected
    //IRQ_SPECIAL_WAKEUP_RISE_EVENT, abort_detected
    SE_IS0_END,
    SE_CORE_VMIN_ENABLE,
    SE_STOP5_DONE                    //M2b_BRANCH_ONLY
    //IRQ_REGULAR_WAKEUP_FAST_EVENT, wakeup_detected
    //IRQ_SPECIAL_WAKEUP_RISE_EVENT, wakeup_detected
//M2B_END_SE
};

const std::map<QME_SE_MARKS, std::string> mMARKS = boost::assign::map_list_of
        (IRQ_PM_STATE_ACTIVE_FAST_EVENT, "IRQ_PM_STATE_ACTIVE_FAST_EVENT")
        (SE_L2_PURGE_HBUS_DIS          , "SE_L2_PURGE_HBUS_DIS          ")
        (SE_L2_PURGE_CATCHUP           , "SE_L2_PURGE_CATCHUP           ")
        (SE_L2_PURGE_ABORT             , "SE_L2_PURGE_ABORT             ")
        (SE_L2_TLBIE_QUIESCE           , "SE_L2_TLBIE_QUIESCE           ")
        (SE_NCU_PURGE                  , "SE_NCU_PURGE                  ")
        (SE_NCU_PURGE_ABORT            , "SE_NCU_PURGE_ABORT            ")
        (SE_CORE_DISABLE_SHADOWS       , "SE_CORE_DISABLE_SHADOWS       ")
        (SE_CORE_STOPCLOCKS            , "SE_CORE_STOPCLOCKS            ")
        (SE_CORE_STOPGRID              , "SE_CORE_STOPGRID              ")
        (SE_STOP2_DONE                 , "SE_STOP2_DONE                 ")
        (SE_STOP5_CATCHUP              , "SE_STOP5_CATCHUP              ")
        (SE_IS0_BEGIN                  , "SE_IS0_BEGIN                  ")
        (SE_IS0_END                    , "SE_IS0_END                    ")
        (SE_CORE_VMIN_ENABLE           , "SE_CORE_VMIN_ENABLE           ")
        (SE_STOP5_DONE                 , "SE_STOP5_DONE                 ") ;


}
#endif


#ifdef EPM_SIM_ENV

#include <vector>
namespace QME_STOP_EXIT_MARKS
{

#endif


enum QME_SX_MARKS
{
    IRQ_REGULAR_WAKEUP_FAST_EVENT  = 0x620      ,
    IRQ_SPECIAL_WAKEUP_RISE_EVENT  = 0x630      ,
    IRQ_SPECIAL_WAKEUP_FALL_EVENT  = 0x640      ,
    SX_CORE_VMIN_DISABLE           = 0x650      ,
    SX_CORE_SKEWADJUST             = 0x6e0      ,
    SX_CORE_STARTCLOCKS            = 0x6f0      ,
    SX_CORE_ENABLE_SHADOWS         = 0x700      ,
    SX_CORE_HANDOFF_PC             = 0xdf0      ,
    SX_CORE_AWAKE                  = 0x1c00
};


#ifdef EPM_SIM_ENV

const std::vector<QME_SX_MARKS> MARKS =
{
//M2B_START_SX
    IRQ_REGULAR_WAKEUP_FAST_EVENT,    //M2B_BRANCH_ONLY
    //SX_CORE_VMIN_DISABLE,           stop5_exit
    //SX_CORE_SKEWADJUST,             stop2_exit
    IRQ_SPECIAL_WAKEUP_RISE_EVENT,
    //SX_CORE_VMIN_DISABLE,           stop5_exit
    //SX_CORE_SKEWADJUST,             stop2_exit
    IRQ_SPECIAL_WAKEUP_FALL_EVENT,    //M2B_BRANCH_ONLY
    //IRQ_PM_STATE_ACTIVE_FAST_EVENT, reentry_after_spwu_drop
    SX_CORE_VMIN_DISABLE,
    SX_CORE_SKEWADJUST,
    SX_CORE_STARTCLOCKS,
    SX_CORE_ENABLE_SHADOWS,
    SX_CORE_HANDOFF_PC,
    SX_CORE_AWAKE
//M2B_END_SX
};

const std::map<QME_SX_MARKS, std::string> mMARKS = boost::assign::map_list_of
        (IRQ_REGULAR_WAKEUP_FAST_EVENT , "IRQ_REGULAR_WAKEUP_FAST_EVENT ")
        (IRQ_SPECIAL_WAKEUP_RISE_EVENT , "IRQ_SPECIAL_WAKEUP_RISE_EVENT ")
        (IRQ_SPECIAL_WAKEUP_FALL_EVENT , "IRQ_SPECIAL_WAKEUP_FALL_EVENT ")
        (SX_CORE_VMIN_DISABLE          , "SX_CORE_VMIN_DISABLE          ")
        (SX_CORE_SKEWADJUST            , "SX_CORE_SKEWADJUST            ")
        (SX_CORE_STARTCLOCKS           , "SX_CORE_STARTCLOCKS           ")
        (SX_CORE_ENABLE_SHADOWS        , "SX_CORE_ENABLE_SHADOWS        ")
        (SX_CORE_HANDOFF_PC            , "SX_CORE_HANDOFF_PC            ")
        (SX_CORE_AWAKE                 , "SX_CORE_AWAKE                 ") ;


}
#endif


#ifdef EPM_SIM_ENV

#include <vector>
namespace GLOBAL_MARKS
{

#endif


enum GLOBAL_MARKS
{
    QME_READY                      = 0x1f00     ,
    PK_TRACE_ROLLOVER              = 0x1ff8
};


#ifdef EPM_SIM_ENV

const std::vector<GLOBAL_MARKS> MARKS =
{
    QME_READY,
    PK_TRACE_ROLLOVER
};

const std::map<GLOBAL_MARKS, std::string> mMARKS = boost::assign::map_list_of
        (QME_READY                     , "QME_READY                     ")
        (PK_TRACE_ROLLOVER             , "PK_TRACE_ROLLOVER             ") ;


}
#endif



#endif // __QME_MARKS_H__
