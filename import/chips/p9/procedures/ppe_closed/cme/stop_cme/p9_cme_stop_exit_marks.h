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
    BEGINSCOPE_STOP_EXIT        =   0x8,
    ENDSCOPE_STOP_EXIT      =   0x10,
    SX_STOP3        =   0x68,
    SX_POWERON      =   0xe0,
    SX_CHIPLET_RESET        =   0xe8,
    SX_CHIPLET_RESET_SCAN0      =   0xf0,
    SX_CATCHUP_A        =   0xf8,
    SX_CHIPLET_INITS        =   0x100,
    SX_CATCHUP_B        =   0x108,
    SX_ARRAY_INIT       =   0x110,
    SX_FUNC_INIT        =   0x118,
    SX_STARTCLOCKS      =   0x120,
    SX_STARTCLOCKS_ALIGN        =   0x128,
    SX_STARTCLOCKS_REGION       =   0x130,
    SX_STARTCLOCKS_DONE     =   0x138,
    SX_SCOM_INITS       =   0x140,
    SX_BCE_CHECK        =   0x148,
    SX_RUNTIME_INITS        =   0x150,
    SX_SELF_RESTORE     =   0x168,
    SX_SRESET_THREADS       =   0x1e0,
    SX_ENABLE_ANALOG        =   0x1e8
};


#ifdef EPM_SIM_ENV

const std::vector<CME_SX_MARKS> MARKS =
{
    BEGINSCOPE_STOP_EXIT,
    ENDSCOPE_STOP_EXIT,
    SX_STOP3,
    SX_POWERON,
    SX_CHIPLET_RESET,
    SX_CHIPLET_RESET_SCAN0,
    SX_CATCHUP_A,
    SX_CHIPLET_INITS,
    SX_CATCHUP_B,
    SX_ARRAY_INIT,
    SX_FUNC_INIT,
    SX_STARTCLOCKS,
    SX_STARTCLOCKS_ALIGN,
    SX_STARTCLOCKS_REGION,
    SX_STARTCLOCKS_DONE,
    SX_SCOM_INITS,
    SX_BCE_CHECK,
    SX_RUNTIME_INITS,
    SX_SELF_RESTORE,
    SX_SRESET_THREADS,
    SX_ENABLE_ANALOG
};

const std::map<CME_SX_MARKS, std::string> mMARKS = boost::assign::map_list_of
        (BEGINSCOPE_STOP_EXIT, "BEGINSCOPE_STOP_EXIT")
        (ENDSCOPE_STOP_EXIT, "ENDSCOPE_STOP_EXIT")
        (SX_STOP3, "SX_STOP3")
        (SX_POWERON, "SX_POWERON")
        (SX_CHIPLET_RESET, "SX_CHIPLET_RESET")
        (SX_CHIPLET_RESET_SCAN0, "SX_CHIPLET_RESET_SCAN0")
        (SX_CATCHUP_A, "SX_CATCHUP_A")
        (SX_CHIPLET_INITS, "SX_CHIPLET_INITS")
        (SX_CATCHUP_B, "SX_CATCHUP_B")
        (SX_ARRAY_INIT, "SX_ARRAY_INIT")
        (SX_FUNC_INIT, "SX_FUNC_INIT")
        (SX_STARTCLOCKS, "SX_STARTCLOCKS")
        (SX_STARTCLOCKS_ALIGN, "SX_STARTCLOCKS_ALIGN")
        (SX_STARTCLOCKS_REGION, "SX_STARTCLOCKS_REGION")
        (SX_STARTCLOCKS_DONE, "SX_STARTCLOCKS_DONE")
        (SX_SCOM_INITS, "SX_SCOM_INITS")
        (SX_BCE_CHECK, "SX_BCE_CHECK")
        (SX_RUNTIME_INITS, "SX_RUNTIME_INITS")
        (SX_SELF_RESTORE, "SX_SELF_RESTORE")
        (SX_SRESET_THREADS, "SX_SRESET_THREADS")
        (SX_ENABLE_ANALOG, "SX_ENABLE_ANALOG");

}
#endif

#endif // __CME_STOP_EXIT_MARKS_H__
