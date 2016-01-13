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
    SE_POLL_PCBMUX_GRANT        =   0x0,
    SE_STOP_CORE_CLKS       =   0x8,
    SE_DROP_CLK_SYNC        =   0x10,
    SE_STOP2_DONE       =   0x18,
    SE_IS0_BEGIN        =   0x20,
    SE_IS0_END      =   0x28,
    SE_CORE_VMIN        =   0x30,
    SE_STOP3_DONE       =   0x38,
    SE_POWER_OFF_CORE       =   0x40,
    SE_STOP4_DONE       =   0x48,
    SE_IS1_BEGIN        =   0x50,
    SE_IS1_END      =   0x68,
    SE_PURGE_L2     =   0xe0,
    SE_IS2_BEGIN        =   0xe8,
    SE_IS2_END      =   0xf0,
    SE_L2_PURGE_DONE        =   0xf8,
    SE_SGPE_HANDOFF     =   0x100,
    BEGINSCOPE_STOP_ENTRY       =   0x1f08,
    ENDSCOPE_STOP_ENTRY     =   0x1f10,
    STOP_EVENT_HANDLER      =   0x1f18,
    STOP_DOORBELL_HANDLER       =   0x1f20
};


#ifdef EPM_SIM_ENV

const std::vector<CME_SE_MARKS> MARKS =
{
    SE_POLL_PCBMUX_GRANT,
    SE_STOP_CORE_CLKS,
    SE_DROP_CLK_SYNC,
    SE_STOP2_DONE,
    SE_IS0_BEGIN,
    SE_IS0_END,
    SE_CORE_VMIN,
    SE_STOP3_DONE,
    SE_POWER_OFF_CORE,
    SE_STOP4_DONE,
    SE_IS1_BEGIN,
    SE_IS1_END,
    SE_PURGE_L2,
    SE_IS2_BEGIN,
    SE_IS2_END,
    SE_L2_PURGE_DONE,
    SE_SGPE_HANDOFF,
    BEGINSCOPE_STOP_ENTRY,
    ENDSCOPE_STOP_ENTRY,
    STOP_EVENT_HANDLER,
    STOP_DOORBELL_HANDLER
};

}
#endif

#endif // __CME_STOP_ENTRY_MARKS_H__
