/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/stop_cme/p9_cme_stop_exit_marks.h $ */
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
#ifndef __CME_STOP_EXIT_MARKS_H__
#define __CME_STOP_EXIT_MARKS_H__

#ifdef EPM_SIM_ENV

#include <vector>
namespace CME_STOP_EXIT_MARKS
{

#endif


enum CME_SX_MARKS
{
    SX_STOP3        =   0x0,
    SX_POWERON      =   0x8,
    SX_POWERON_DONE     =   0x10,
    SX_CHIPLET_RESET        =   0x18,
    SX_CHIPLET_RESET_GLSMUX_RESET       =   0x20,
    SX_CHIPLET_RESET_SCAN0      =   0x28,
    SX_CATCHUP_A        =   0x30,
    SX_CHIPLET_INITS        =   0x38,
    SX_CHIPLET_INIT_SCAN0       =   0x40,
    SX_CATCHUP_B        =   0x48,
    SX_ARRAY_INIT       =   0x50,
    SX_ARRAY_INIT_SUBMODULE     =   0x68,
    SX_ARRAY_INIT_SCAN0     =   0xe0,
    SX_FUNC_INIT        =   0xe8,
    SX_STARTCLOCKS      =   0xf0,
    SX_STARTCLOCKS_GRID     =   0xf8,
    SX_STARTCLOCKS_DONE     =   0x100,
    SX_SCOM_INITS       =   0x108,
    SX_BCE_CHECK        =   0x110,
    SX_RUNTIME_INITS        =   0x118,
    SX_SELF_RESTORE     =   0x120,
    SX_RAM_HRMOR        =   0x128,
    SX_SRESET_THREADS       =   0x130,
    SX_STOP15_THREADS       =   0x138,
    SX_ENABLE_ANALOG        =   0x140,
    BEGINSCOPE_STOP_EXIT        =   0x1f28,
    ENDSCOPE_STOP_EXIT      =   0x1f30
};


#ifdef EPM_SIM_ENV

const std::vector<CME_SX_MARKS> MARKS =
{
    SX_STOP3,
    SX_POWERON,
    SX_POWERON_DONE,
    SX_CHIPLET_RESET,
    SX_CHIPLET_RESET_GLSMUX_RESET,
    SX_CHIPLET_RESET_SCAN0,
    SX_CATCHUP_A,
    SX_CHIPLET_INITS,
    SX_CHIPLET_INIT_SCAN0,
    SX_CATCHUP_B,
    SX_ARRAY_INIT,
    SX_ARRAY_INIT_SUBMODULE,
    SX_ARRAY_INIT_SCAN0,
    SX_FUNC_INIT,
    SX_STARTCLOCKS,
    SX_STARTCLOCKS_GRID,
    SX_STARTCLOCKS_DONE,
    SX_SCOM_INITS,
    SX_BCE_CHECK,
    SX_RUNTIME_INITS,
    SX_SELF_RESTORE,
    SX_RAM_HRMOR,
    SX_SRESET_THREADS,
    SX_STOP15_THREADS,
    SX_ENABLE_ANALOG,
    BEGINSCOPE_STOP_EXIT,
    ENDSCOPE_STOP_EXIT
};

}
#endif

#endif // __CME_STOP_EXIT_MARKS_H__
