/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/stop_cme/p9_cme_stop_enter_marks.h $ */
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
#ifndef __CME_STOP_ENTRY_MARKS_H__
#define __CME_STOP_ENTRY_MARKS_H__

#ifdef EPM_SIM_ENV

#include <vector>
namespace CME_STOP_ENTRY_MARKS
{

#endif


enum CME_SE_MARKS
{
    BEGINSCOPE_STOP_ENTRY       =   0x10,
    ENDSCOPE_STOP_ENTRY     =   0x18,
    STOP_ENTER_HANDLER      =   0x20,
    STOP_PCWU_HANDLER      =   0x28,
    STOP_SPWU_HANDLER       =   0x30,
    STOP_RGWU_HANDLER       =   0x38,
    STOP_DB1_HANDLER       =   0x40,
    STOP_DB2_HANDLER       =   0x48,
    SE_QUIESCE_CORE_INTF        =   0x68,
    SE_STOP_CORE_CLKS       =   0xe0,
    SE_STOP_CORE_GRID       =   0xe8,
    SE_STOP2_DONE       =   0xf0,
    SE_IS0_BEGIN        =   0xf8,
    SE_IS0_END      =   0x100,
    SE_CATCHUP      =   0x108,
    SE_CORE_VMIN        =   0x110,
    SE_STOP3_DONE       =   0x118,
    SE_POWER_OFF_CORE       =   0x120,
    SE_STOP4_DONE       =   0x128,
    SE_IS1_BEGIN        =   0x130,
    SE_IS1_END      =   0x138,
    SE_PURGE_L2     =   0x140,
    SE_PURGE_L2_ABORT       =   0x148,
    SE_PURGE_L2_DONE        =   0x150,
    SE_SGPE_HANDOFF     =   0x168
};


#ifdef EPM_SIM_ENV

const std::vector<CME_SE_MARKS> MARKS =
{
    BEGINSCOPE_STOP_ENTRY,
    ENDSCOPE_STOP_ENTRY,
    STOP_ENTER_HANDLER,
    STOP_PCWU_HANDLER,
    STOP_SPWU_HANDLER,
    STOP_RGWU_HANDLER,
    STOP_DB1_HANDLER,
    STOP_DB2_HANDLER,
    SE_QUIESCE_CORE_INTF,
    SE_STOP_CORE_CLKS,
    SE_STOP_CORE_GRID,
    SE_STOP2_DONE,
    SE_IS0_BEGIN,
    SE_IS0_END,
    SE_CATCHUP,
    SE_CORE_VMIN,
    SE_STOP3_DONE,
    SE_POWER_OFF_CORE,
    SE_STOP4_DONE,
    SE_IS1_BEGIN,
    SE_IS1_END,
    SE_PURGE_L2,
    SE_PURGE_L2_ABORT,
    SE_PURGE_L2_DONE,
    SE_SGPE_HANDOFF
};

const std::map<CME_SE_MARKS, std::string> mMARKS = boost::assign::map_list_of
        (BEGINSCOPE_STOP_ENTRY, "BEGINSCOPE_STOP_ENTRY")
        (ENDSCOPE_STOP_ENTRY, "ENDSCOPE_STOP_ENTRY")
        (STOP_ENTER_HANDLER, "STOP_ENTER_HANDLER")
        (STOP_PCWU_HANDLER, "STOP_PCWU_HANDLER")
        (STOP_SPWU_HANDLER, "STOP_SPWU_HANDLER")
        (STOP_RGWU_HANDLER, "STOP_RGWU_HANDLER")
        (STOP_DB1_HANDLER, "STOP_DB1_HANDLER")
        (STOP_DB2_HANDLER, "STOP_DB2_HANDLER")
        (SE_QUIESCE_CORE_INTF, "SE_QUIESCE_CORE_INTF")
        (SE_STOP_CORE_CLKS, "SE_STOP_CORE_CLKS")
        (SE_STOP_CORE_GRID, "SE_STOP_CORE_GRID")
        (SE_STOP2_DONE, "SE_STOP2_DONE")
        (SE_IS0_BEGIN, "SE_IS0_BEGIN")
        (SE_IS0_END, "SE_IS0_END")
        (SE_CATCHUP, "SE_CATCHUP")
        (SE_CORE_VMIN, "SE_CORE_VMIN")
        (SE_STOP3_DONE, "SE_STOP3_DONE")
        (SE_POWER_OFF_CORE, "SE_POWER_OFF_CORE")
        (SE_STOP4_DONE, "SE_STOP4_DONE")
        (SE_IS1_BEGIN, "SE_IS1_BEGIN")
        (SE_IS1_END, "SE_IS1_END")
        (SE_PURGE_L2, "SE_PURGE_L2")
        (SE_PURGE_L2_ABORT, "SE_PURGE_L2_ABORT")
        (SE_PURGE_L2_DONE, "SE_PURGE_L2_DONE")
        (SE_SGPE_HANDOFF, "SE_SGPE_HANDOFF");

}
#endif

#endif // __CME_STOP_ENTRY_MARKS_H__
