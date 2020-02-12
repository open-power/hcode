/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/qme/qme_marks.h $             */
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

#ifndef __QME_MARKS_H__
#define __QME_MARKS_H__

//----------------------

#ifdef EPM_SIM_ENV
    #define FOOBAR(foo, bar) (foo, bar)
#else
    #define FOOBAR(foo, bar) {foo, bar},
#endif

//----------------------

#ifdef EPM_SIM_ENV

#include <vector>
namespace QME_STOP_ENTRY_MARKS
{

#endif

//----------------------

enum QME_SE_MARKS
{
    IRQ_PM_STATE_ACTIVE_FAST_EVENT = 0x1f0      ,
    IRQ_PM_STATE_ACTIVE_SLOW_EVENT = 0x200      ,
    SE_L2_PURGE_HBUS_DIS           = 0x210      ,
    SE_L2_PURGE_CATCHUP            = 0x220      ,
    SE_L2_PURGE_ABORT              = 0x230      ,
    SE_L2_PURGE_ABORT_DONE         = 0x240      ,
    SE_L2_TLBIE_QUIESCE            = 0x250      ,
    SE_L2_TLBIE_QUIESCE_CATCHUP    = 0x2e0      ,
    SE_NCU_PURGE                   = 0x2f0      ,
    SE_NCU_PURGE_ABORT             = 0x300      ,
    SE_NCU_PURGE_ABORT_DONE        = 0x310      ,
    SE_CORE_DISABLE_SHADOWS        = 0x320      ,
    SE_CORE_STOPCLOCKS             = 0x330      ,
    SE_CORE_STOPGRID               = 0x340      ,
    SE_STOP2_DONE                  = 0x350      ,
    SE_STOP3OR5_CATCHUP            = 0x3e0      ,
    SE_IS0_BEGIN                   = 0x3f0      ,
    SE_IS0_END                     = 0x400      ,
    SE_CORE_VMIN_ENABLE            = 0x410      ,
    SE_STOP3_DONE                  = 0x420      ,
    SE_CORE_POWEROFF               = 0x430      ,
    SE_STOP5_DONE                  = 0x440      ,
    SE_CHTM_PURGE                  = 0x450      ,
    SE_L3_PURGE                    = 0x4e0      ,
    SE_POWERBUS_PURGE              = 0x4f0      ,
    SE_CACHE_STOPCLOCKS            = 0x500      ,
    SE_CACHE_STOPGRID              = 0x510      ,
    SE_CACHE_POWEROFF              = 0x520      ,
    SE_STOP11_DONE                 = 0x530
};

//----------------------

#ifdef EPM_SIM_ENV

const std::vector<QME_SE_MARKS> MARKS =
{
//M2B_START_SE
    IRQ_PM_STATE_ACTIVE_FAST_EVENT, //M2B_BRANCH_ONLY
    //SE_L2_PURGE_HBUS_DIS,         stop2/3
    IRQ_PM_STATE_ACTIVE_SLOW_EVENT,
    SE_L2_PURGE_HBUS_DIS,
    //SE_L2_PURGE_ABORT,             wakeup_pending
    //SE_L2_TLBIE_QUIESCE,           l2_purge_done_hbus_disabled
    SE_L2_PURGE_CATCHUP,             //M2B_BRANCH_ONLY
    //SE_L2_TLBIE_QUIESCE_CATCHUP,   catchup_detected
    SE_L2_PURGE_ABORT,
    SE_L2_PURGE_ABORT_DONE,          //M2B_BRANCH_ONLY
    //SX_CORE_HANDOFF_PC,            wakeup_stop0
    SE_L2_TLBIE_QUIESCE,             //M2B_BRANCH_ONLY
    //SE_NCU_PURGE,                  no catchup path
    SE_L2_TLBIE_QUIESCE_CATCHUP,
    SE_NCU_PURGE,                    //M2B_BRANCH_ONLY
    //SE_CORE_DISABLE_SHADOWS,       ncu_purge_done
    //SE_NCU_PURGE_ABORT,            wakeup_pending
    SE_NCU_PURGE_ABORT,
    SE_NCU_PURGE_ABORT_DONE,         //M2B_BRANCH_ONLY
    //SX_CORE_HANDOFF_PC,            wakeup_stop0
    SE_CORE_DISABLE_SHADOWS,
    SE_CORE_STOPCLOCKS,
    SE_CORE_STOPGRID,
    SE_STOP2_DONE,
    //IRQ_REGULAR_WAKEUP_FAST_EVENT, wakeup_detected
    //IRQ_SPECIAL_WAKEUP_RISE_EVENT, wakeup_detected
    //SE_IS0_BEGIN,                  abort_detecting
    SE_STOP3OR5_CATCHUP,             //M2B_BRANCH_ONLY
    //SE_L2_PURGE_HBUS_DIS,          catchup_detected
    SE_IS0_BEGIN,
    //IRQ_REGULAR_WAKEUP_FAST_EVENT, abort_detected
    //IRQ_SPECIAL_WAKEUP_RISE_EVENT, abort_detected
    SE_IS0_END,
    //SE_CORE_POWEROFF,              stop5_after_stop2
    SE_CORE_VMIN_ENABLE,
    SE_STOP3_DONE,                   //M2B_BRANCH_ONLY
    //IRQ_REGULAR_WAKEUP_FAST_EVENT, wakeup_detected
    //IRQ_SPECIAL_WAKEUP_RISE_EVENT, wakeup_detected
    SE_CORE_POWEROFF,
    SE_STOP5_DONE,
    //IRQ_REGULAR_WAKEUP_FAST_EVENT, wakeup_detected
    //IRQ_SPECIAL_WAKEUP_RISE_EVENT, wakeup_detected
    SE_CHTM_PURGE,
    SE_L3_PURGE,
    SE_POWERBUS_PURGE,
    SE_CACHE_STOPCLOCKS,
    SE_CACHE_STOPGRID,
    SE_CACHE_POWEROFF,
    SE_STOP11_DONE                   //M2B_BRANCH_ONLY
    //IRQ_REGULAR_WAKEUP_FAST_EVENT, wakeup_detected
    //IRQ_SPECIAL_WAKEUP_RISE_EVENT, wakeup_detected
//M2B_END_SE
};

#endif

//----------------------

#ifndef __PPE_QME

#ifdef EPM_SIM_ENV
const std::map<QME_SE_MARKS, std::string> mMARKS = boost::assign::map_list_of
#else
//used by p10_qme_mark_decoder
std::map<uint32_t, std::string> g_QME_SE_MARKS_MAP =
{
#endif

        FOOBAR (IRQ_PM_STATE_ACTIVE_FAST_EVENT, "IRQ_PM_STATE_ACTIVE_FAST_EVENT")
        FOOBAR (IRQ_PM_STATE_ACTIVE_SLOW_EVENT, "IRQ_PM_STATE_ACTIVE_SLOW_EVENT")
        FOOBAR (SE_L2_PURGE_HBUS_DIS          , "SE_L2_PURGE_HBUS_DIS          ")
        FOOBAR (SE_L2_PURGE_CATCHUP           , "SE_L2_PURGE_CATCHUP           ")
        FOOBAR (SE_L2_PURGE_ABORT             , "SE_L2_PURGE_ABORT             ")
        FOOBAR (SE_L2_PURGE_ABORT_DONE        , "SE_L2_PURGE_ABORT_DONE        ")
        FOOBAR (SE_L2_TLBIE_QUIESCE           , "SE_L2_TLBIE_QUIESCE           ")
        FOOBAR (SE_L2_TLBIE_QUIESCE_CATCHUP   , "SE_L2_TLBIE_QUIESCE_CATCHUP   ")
        FOOBAR (SE_NCU_PURGE                  , "SE_NCU_PURGE                  ")
        FOOBAR (SE_NCU_PURGE_ABORT            , "SE_NCU_PURGE_ABORT            ")
        FOOBAR (SE_NCU_PURGE_ABORT_DONE       , "SE_NCU_PURGE_ABORT_DONE       ")
        FOOBAR (SE_CORE_DISABLE_SHADOWS       , "SE_CORE_DISABLE_SHADOWS       ")
        FOOBAR (SE_CORE_STOPCLOCKS            , "SE_CORE_STOPCLOCKS            ")
        FOOBAR (SE_CORE_STOPGRID              , "SE_CORE_STOPGRID              ")
        FOOBAR (SE_STOP2_DONE                 , "SE_STOP2_DONE                 ")
        FOOBAR (SE_STOP3OR5_CATCHUP           , "SE_STOP3OR5_CATCHUP           ")
        FOOBAR (SE_IS0_BEGIN                  , "SE_IS0_BEGIN                  ")
        FOOBAR (SE_IS0_END                    , "SE_IS0_END                    ")
        FOOBAR (SE_CORE_VMIN_ENABLE           , "SE_CORE_VMIN_ENABLE           ")
        FOOBAR (SE_STOP3_DONE                 , "SE_STOP3_DONE                 ")
        FOOBAR (SE_CORE_POWEROFF              , "SE_CORE_POWEROFF              ")
        FOOBAR (SE_STOP5_DONE                 , "SE_STOP5_DONE                 ")
        FOOBAR (SE_CHTM_PURGE                 , "SE_CHTM_PURGE                 ")
        FOOBAR (SE_L3_PURGE                   , "SE_L3_PURGE                   ")
        FOOBAR (SE_POWERBUS_PURGE             , "SE_POWERBUS_PURGE             ")
        FOOBAR (SE_CACHE_STOPCLOCKS           , "SE_CACHE_STOPCLOCKS           ")
        FOOBAR (SE_CACHE_STOPGRID             , "SE_CACHE_STOPGRID             ")
        FOOBAR (SE_CACHE_POWEROFF             , "SE_CACHE_POWEROFF             ")
        FOOBAR (SE_STOP11_DONE                , "SE_STOP11_DONE                ")

#ifdef EPM_SIM_ENV
//map
        ;
//namespace
}
#else
//map
};
#endif

//__PPE_QME
#endif

//----------------------

#ifdef EPM_SIM_ENV

#include <vector>
namespace QME_STOP_EXIT_MARKS
{

#endif

//----------------------

enum QME_SX_MARKS
{
    IRQ_REGULAR_WAKEUP_FAST_EVENT  = 0x620      ,
    IRQ_REGULAR_WAKEUP_SLOW_EVENT  = 0x630      ,
    IRQ_SPECIAL_WAKEUP_RISE_EVENT  = 0x640      ,
    IRQ_SPECIAL_WAKEUP_FALL_EVENT  = 0x650      ,
    SX_CACHE_POWERON               = 0x6e0      ,
    SX_CACHE_RESET                 = 0x6f0      ,
    SX_CACHE_POWERED               = 0x700      ,
    SX_CACHE_GPTR_TIME_INITF       = 0x710      ,
    SX_CACHE_REPAIR_INITF          = 0x720      ,
    SX_CACHE_ARRAYINIT             = 0x730      ,
    SX_CACHE_INITF                 = 0x740      ,
    SX_CACHE_SCANED                = 0x750      ,
    SX_CACHE_SKEWADJUST            = 0x7e0      ,
    SX_CACHE_STARTCLOCKS           = 0x7f0      ,
    SX_CACHE_CLOCKED               = 0x800      ,
    SX_CACHE_SCOMINIT              = 0x810      ,
    SX_CACHE_SCOM_CUSTOMIZE        = 0x820      ,
    SX_CACHE_SCOMED                = 0x830      ,
    SX_CORE_POWERON                = 0x840      ,
    SX_CORE_RESET                  = 0x850      ,
    SX_CORE_POWERED                = 0x8e0      ,
    SX_CORE_GPTR_TIME_INITF        = 0x8f0      ,
    SX_CORE_REPAIR_INITF           = 0x900      ,
    SX_CORE_ARRAYINIT              = 0x910      ,
    SX_CORE_INITF                  = 0x920      ,
    SX_CORE_SCANED                 = 0x930      ,
    SX_CORE_VMIN_DISABLE           = 0x940      ,
    SX_CORE_VOLT_RESTORED          = 0x950      ,
    SX_CORE_SKEWADJUST             = 0x9e0      ,
    SX_CORE_STARTCLOCKS            = 0x9f0      ,
    SX_CORE_ENABLE_SHADOWS         = 0xa00      ,
    SX_CORE_CLOCKED                = 0xa10      ,
    SX_CORE_SCOMINIT               = 0xa20      ,
    SX_CORE_SCOM_CUSTOMIZE         = 0xa30      ,
    SX_CORE_SCOMED                 = 0xa40      ,
    SX_CORE_SELF_RESTORE           = 0xa50      ,
    SX_CORE_SRESET_THREADS         = 0xae0      ,
    SX_CORE_RESTORED               = 0xaf0      ,
    SX_CORE_HANDOFF_PC             = 0xdf0      ,
    SX_CORE_AWAKE                  = 0x1c00
};

//----------------------

#ifdef EPM_SIM_ENV

const std::vector<QME_SX_MARKS> MARKS =
{
//M2B_START_SX
    IRQ_REGULAR_WAKEUP_FAST_EVENT,    //M2B_BRANCH_ONLY
    //SX_CORE_VMIN_DISABLE,           stop3_exit
    //SX_CORE_SKEWADJUST,             stop2_exit
    IRQ_REGULAR_WAKEUP_SLOW_EVENT,    //M2B_BRANCH_ONLY
    //SX_CACHE_POWERON,               stop11_exit
    IRQ_SPECIAL_WAKEUP_RISE_EVENT,
    //SX_CACHE_POWERON,               stop11_exit
    //SX_CORE_VMIN_DISABLE,           stop3_exit
    //SX_CORE_SKEWADJUST,             stop2_exit
    IRQ_SPECIAL_WAKEUP_FALL_EVENT,    //M2B_BRANCH_ONLY
    //IRQ_PM_STATE_ACTIVE_FAST_EVENT, reentry_after_spwu_drop
    SX_CACHE_POWERON,
    SX_CACHE_RESET,
    SX_CACHE_POWERED,
    SX_CACHE_GPTR_TIME_INITF,
    SX_CACHE_REPAIR_INITF,
    SX_CACHE_ARRAYINIT,
    SX_CACHE_INITF,
    SX_CACHE_SCANED,
    SX_CACHE_SKEWADJUST,
    SX_CACHE_STARTCLOCKS,
    SX_CACHE_CLOCKED,
    SX_CACHE_SCOMINIT,
    SX_CACHE_SCOM_CUSTOMIZE,
    SX_CACHE_SCOMED,
    SX_CORE_POWERON,
    SX_CORE_RESET,
    SX_CORE_POWERED,
    SX_CORE_GPTR_TIME_INITF,
    SX_CORE_REPAIR_INITF,
    SX_CORE_ARRAYINIT,
    SX_CORE_INITF,
    SX_CORE_SCANED,
    SX_CORE_VMIN_DISABLE,
    SX_CORE_VOLT_RESTORED,
    SX_CORE_SKEWADJUST,
    SX_CORE_STARTCLOCKS,
    SX_CORE_ENABLE_SHADOWS,
    SX_CORE_CLOCKED,
    //SX_CORE_HANDOFF_PC,             stop2/3_exit
    SX_CORE_SCOMINIT,
    SX_CORE_SCOM_CUSTOMIZE,
    SX_CORE_SCOMED,
    SX_CORE_SELF_RESTORE,
    SX_CORE_SRESET_THREADS,
    SX_CORE_RESTORED,
    SX_CORE_HANDOFF_PC,
    SX_CORE_AWAKE                     //M2B_BRANCH_ONLY
    //IRQ_PM_STATE_ACTIVE_FAST_EVENT, another entry
    //IRQ_PM_STATE_ACTIVE_SLOW_EVENT, another entry
//M2B_END_SX
};

#endif

//----------------------

#ifndef __PPE_QME

#ifdef EPM_SIM_ENV
const std::map<QME_SX_MARKS, std::string> mMARKS = boost::assign::map_list_of
#else
//used by p10_qme_mark_decoder
std::map<uint32_t, std::string> g_QME_SX_MARKS_MAP =
{
#endif

        FOOBAR (IRQ_REGULAR_WAKEUP_FAST_EVENT , "IRQ_REGULAR_WAKEUP_FAST_EVENT ")
        FOOBAR (IRQ_REGULAR_WAKEUP_SLOW_EVENT , "IRQ_REGULAR_WAKEUP_SLOW_EVENT ")
        FOOBAR (IRQ_SPECIAL_WAKEUP_RISE_EVENT , "IRQ_SPECIAL_WAKEUP_RISE_EVENT ")
        FOOBAR (IRQ_SPECIAL_WAKEUP_FALL_EVENT , "IRQ_SPECIAL_WAKEUP_FALL_EVENT ")
        FOOBAR (SX_CACHE_POWERON              , "SX_CACHE_POWERON              ")
        FOOBAR (SX_CACHE_RESET                , "SX_CACHE_RESET                ")
        FOOBAR (SX_CACHE_POWERED              , "SX_CACHE_POWERED              ")
        FOOBAR (SX_CACHE_GPTR_TIME_INITF      , "SX_CACHE_GPTR_TIME_INITF      ")
        FOOBAR (SX_CACHE_REPAIR_INITF         , "SX_CACHE_REPAIR_INITF         ")
        FOOBAR (SX_CACHE_ARRAYINIT            , "SX_CACHE_ARRAYINIT            ")
        FOOBAR (SX_CACHE_INITF                , "SX_CACHE_INITF                ")
        FOOBAR (SX_CACHE_SCANED               , "SX_CACHE_SCANED               ")
        FOOBAR (SX_CACHE_SKEWADJUST           , "SX_CACHE_SKEWADJUST           ")
        FOOBAR (SX_CACHE_STARTCLOCKS          , "SX_CACHE_STARTCLOCKS          ")
        FOOBAR (SX_CACHE_CLOCKED              , "SX_CACHE_CLOCKED              ")
        FOOBAR (SX_CACHE_SCOMINIT             , "SX_CACHE_SCOMINIT             ")
        FOOBAR (SX_CACHE_SCOM_CUSTOMIZE       , "SX_CACHE_SCOM_CUSTOMIZE       ")
        FOOBAR (SX_CACHE_SCOMED               , "SX_CACHE_SCOMED               ")
        FOOBAR (SX_CORE_POWERON               , "SX_CORE_POWERON               ")
        FOOBAR (SX_CORE_RESET                 , "SX_CORE_RESET                 ")
        FOOBAR (SX_CORE_POWERED               , "SX_CORE_POWERED               ")
        FOOBAR (SX_CORE_GPTR_TIME_INITF       , "SX_CORE_GPTR_TIME_INITF       ")
        FOOBAR (SX_CORE_REPAIR_INITF          , "SX_CORE_REPAIR_INITF          ")
        FOOBAR (SX_CORE_ARRAYINIT             , "SX_CORE_ARRAYINIT             ")
        FOOBAR (SX_CORE_INITF                 , "SX_CORE_INITF                 ")
        FOOBAR (SX_CORE_SCANED                , "SX_CORE_SCANED                ")
        FOOBAR (SX_CORE_VMIN_DISABLE          , "SX_CORE_VMIN_DISABLE          ")
        FOOBAR (SX_CORE_VOLT_RESTORED         , "SX_CORE_VOLT_RESTORED         ")
        FOOBAR (SX_CORE_SKEWADJUST            , "SX_CORE_SKEWADJUST            ")
        FOOBAR (SX_CORE_STARTCLOCKS           , "SX_CORE_STARTCLOCKS           ")
        FOOBAR (SX_CORE_ENABLE_SHADOWS        , "SX_CORE_ENABLE_SHADOWS        ")
        FOOBAR (SX_CORE_CLOCKED               , "SX_CORE_CLOCKED               ")
        FOOBAR (SX_CORE_SCOMINIT              , "SX_CORE_SCOMINIT              ")
        FOOBAR (SX_CORE_SCOM_CUSTOMIZE        , "SX_CORE_SCOM_CUSTOMIZE        ")
        FOOBAR (SX_CORE_SCOMED                , "SX_CORE_SCOMED                ")
        FOOBAR (SX_CORE_SELF_RESTORE          , "SX_CORE_SELF_RESTORE          ")
        FOOBAR (SX_CORE_SRESET_THREADS        , "SX_CORE_SRESET_THREADS        ")
        FOOBAR (SX_CORE_RESTORED              , "SX_CORE_RESTORED              ")
        FOOBAR (SX_CORE_HANDOFF_PC            , "SX_CORE_HANDOFF_PC            ")
        FOOBAR (SX_CORE_AWAKE                 , "SX_CORE_AWAKE                 ")

#ifdef EPM_SIM_ENV
//boost map
        ;
//namespace
}
#else
//std map
};
#endif

//__PPE_QME
#endif

//----------------------

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
