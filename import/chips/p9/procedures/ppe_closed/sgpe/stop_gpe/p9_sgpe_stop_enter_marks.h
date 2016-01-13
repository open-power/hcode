/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/p9_sgpe_stop_enter_marks.h $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2015,2017                                                    */
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
#ifndef __SGPE_STOP_ENTRY_MARKS_H__
#define __SGPE_STOP_ENTRY_MARKS_H__

#ifdef EPM_SIM_ENV

#include <vector>
namespace SGPE_STOP_ENTRY_MARKS
{

#endif


enum SGPE_SE_MARKS
{
    SE_STOP_SUSPEND_PSTATE      =   0x0,
    SE_STOP_L2_CLKS     =   0x8,
    SE_STOP_L2_GRID     =   0x10,
    SE_STOP8_DONE       =   0x18,
    SE_PURGE_L3     =   0x20,
    SE_PURGE_L3_ABORT       =   0x28,
    SE_PURGE_L3_ABORT_DONE      =   0x30,
    SE_PURGE_PB     =   0x38,
    SE_WAIT_PGPE_SUSPEND        =   0x40,
    SE_STOP_CACHE_CLKS      =   0x48,
    SE_STOP_CACHE_CLKS_DONE     =   0x50,
    SE_POWER_OFF_CACHE      =   0x68,
    SE_STOP11_DONE      =   0xe0,
    BEGINSCOPE_STOP_ENTRY       =   0x1f08,
    ENDSCOPE_STOP_ENTRY     =   0x1f10,
    STOP_TYPE2_HANDLER      =   0x1f18
};


#ifdef EPM_SIM_ENV

const std::vector<SGPE_SE_MARKS> MARKS =
{
    SE_STOP_SUSPEND_PSTATE,
    SE_STOP_L2_CLKS,
    SE_STOP_L2_GRID,
    SE_STOP8_DONE,
    SE_PURGE_L3,
    SE_PURGE_L3_ABORT,
    SE_PURGE_L3_ABORT_DONE,
    SE_PURGE_PB,
    SE_WAIT_PGPE_SUSPEND,
    SE_STOP_CACHE_CLKS,
    SE_STOP_CACHE_CLKS_DONE,
    SE_POWER_OFF_CACHE,
    SE_STOP11_DONE,
    BEGINSCOPE_STOP_ENTRY,
    ENDSCOPE_STOP_ENTRY,
    STOP_TYPE2_HANDLER
};

}
#endif

#endif // __SGPE_STOP_ENTRY_MARKS_H__
