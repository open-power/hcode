/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_opCodes.C $         */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019,2021                                                    */
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
#include "pk_trace.h"
#include "pgpe_optrace.h"

#define OP_HASH_PREFIX -1
#define OP_HASH(x) trace_ppe_hash(x, OP_HASH_PREFIX)

#if !defined(__PPE2FSP__)
struct mark_hash_t
{
    int mark;
    unsigned int hash;
    int fieldSize[9];
};
#endif

extern "C"
{
    unsigned int trace_ppe_hash(const char*, int);
    typedef unsigned int trace_hash_val;
}

// In HCODE, The object does not get included in the binary.
// It's purpose in HCODE is so that tracehash will collect the trace hash IDs
// for these strings.
void pgpe_opCodeTable(
#if defined(__PPE2FSP__)
    std::map<std::string, mark_hash_t*>& i_markHash
#else
    void
#endif
)
{
#if defined(__PPE2FSP__)
    static
#endif
    mark_hash_t pgpe_v1[]
#if !defined(__PPE2FSP__)
    __attribute__((unused))
#endif
    =
    {
        //mark                 msg                              field lengths(0-8 bytes) 9 fields max

        //Events with NO timestamps

        //Events with timestamps and payload(Process Requests)
        {PGPE_OPT_ERROR_MODE,       OP_HASH("OP: ERROR_MODE     | ErrCode=0x%04x"), {2, 0, 0, 0, 0, 0, 0, 0, 0}},
        {PGPE_OPT_SAFE_MODE ,       OP_HASH("OP: SAFE_MODE      | PresentPS=0x%02x SafePS=0x%02x ErrCode=__EXP01__%u__EXP01__"), {2, 1, 1, 0, 0, 0, 0, 0, 0}},

        {PGPE_OPT_HALT_CONDITION,   OP_HASH("OP: HALT_CONDITION "), {0, 0, 0, 0, 0, 0, 0, 0, 0}},
        {PGPE_OPT_UNEXP_EVENT,      OP_HASH("OP: UNEXP_EVENT    | Err=0x%02x"), {4, 0, 0, 0, 0, 0, 0, 0, 0}},
        {PGPE_OPT_WOF_CTRL,         OP_HASH("OP: WOF_CTRL       | Control=%u(0:OFF,1:ON"), {2, 0, 0, 0, 0, 0, 0, 0, 0}},
        {PGPE_OPT_WOV,              OP_HASH("OP: WOV            | Vdd=0x%umV Vcs=%umV VddOffset=%dmV VcsOffset=%dmV"), {2, 2, 2, 2, 0, 0, 0, 0, 0}},

        {PGPE_OPT_PCB_TYPE1,        OP_HASH("OP: PCB_TYPE1(PMCR)| CoreNum=%u PresentPS=0x%02x ReqPS=0x%02x"), {1, 1, 1, 0, 0, 0, 0, 0, 0}},
        {PGPE_OPT_START_STOP,       OP_HASH("OP: START/STOP     | Action=%u(0:STOP,1:HOST,2:OCC,3:CHAR) PresentPS=0x%02x SRC=%u(1:IPC,2:SCOM) DPLLMode=%u"),   {1, 1, 1, 1, 0, 0, 0, 0, 0}},
        {PGPE_OPT_SEV_FAULT ,       OP_HASH("OP: SEV_FAULT "), {0, 0, 0, 0, 0, 0, 0, 0, 0}},

        {PGPE_OPT_WOF_VRT ,         OP_HASH("OP: WOF_VRT        | Header=0x%08x"), {4, 0, 0, 0, 0, 0, 0, 0, 0}},

        {PGPE_OPT_SET_PMCR ,        OP_HASH("OP: SET_PMCR       | ReqPS=0x%02x PresentPS=0x%02x"), {1, 1, 0, 0, 0, 0, 0, 0, 0}},

        {PGPE_OPT_ACTUATE_STEP_DONE, OP_HASH("OP: ACT_STEP_DONE  | TargetPS=%02x PresentPS=%02x VDD=%umV VCS(mV)=%umV"), {1, 1, 2, 2, 0, 0, 0, 0, 0}},
        {PGPE_OPT_CLIP_UPDT ,       OP_HASH("OP: CLIP_UPDT      | ClipMax=%02x ClipMin=%02x"), {1, 1, 0, 0, 0, 0, 0, 0, 0}},

        //Events with timestamps and payload(Debug Markers)
        {PGPE_OPT_AUCTION_DONE ,    OP_HASH("OP: AUCTION_DONE   | TargetPS=%02x"), {1, 0, 0, 0, 0, 0, 0, 0, 0}},
        {PGPE_OPT_WOF_CALC_DONE,    OP_HASH("OP: WOF_CALC_DONE  | Vratio=0x%04x Vindex=%d WOF_Clip=0x%02x MMAOff=%d CoreClockOff=%d CoreVmin=%d CoreCacheOff=%d"), {2, 1, 1, 1, 1, 1, 1, 0, 0}},
        {PGPE_OPT_OCS_THRESH_TRANS, OP_HASH("OP: OCS_THRESHOLD  | Thresh=%u(Amp) Delta=%d(Amp)"), {2, 2, 0, 0, 0, 0, 0, 0, 0}},
        {PGPE_OPT_OCS_DIRTY_TYPE,   OP_HASH("OP: OCS_DIRTY_TYPE | Type=%d"), {1, 0, 0, 0, 0, 0, 0, 0, 0}},
        {PGPE_OPT_OCS_DROOP_COND ,  OP_HASH("OP: DROOP_COND     | Condition=0x%01x(0x3:OK,0x2:LIGHT,0x1:HEAVY)"), {1, 0, 0, 0, 0, 0, 0, 0, 0}},
        {PGPE_OPT_CEFF_OVERAGE_UPDT, OP_HASH("OP: CEFF_OVERAGE   | Overage=%u PrevOverage=%u OverIdx=%u PrevOverIdx=%u"), {1, 1, 1, 1, 0, 0, 0, 0, 0}},

        //Events with timestamps only
        {PGPE_OPT_WOF_VRT_ACK ,     OP_HASH("OP: WOF_VRT ACKed"),            {0, 0, 0, 0, 0, 0, 0, 0, 0}},
        {PGPE_OPT_WOF_CTRL_ACK ,    OP_HASH("OP: WOF_CTRL ACKed"),           {0, 0, 0, 0, 0, 0, 0, 0, 0}},
        {PGPE_OPT_PGPE_BOOTED,      OP_HASH("OP: PGPE_BOOTED "),             {0, 0, 0, 0, 0, 0, 0, 0, 0}},
        {PGPE_OPT_CLIP_UPDT_ACK ,   OP_HASH("OP: CLIP_UPD ACKed"),           {0, 0, 0, 0, 0, 0, 0, 0, 0}},
        {PGPE_OPT_START_STOP_ACK,   OP_HASH("OP: START_STOP ACKed"),         {0, 0, 0, 0, 0, 0, 0, 0, 0}},
        {PGPE_OPT_MEM_TRACE_LOSS,   OP_HASH("OP: MEM_TRACE_LOSS"),           {0, 0, 0, 0, 0, 0, 0, 0, 0}},

        {PGPE_OPT_ERROR_MODE_DONE,  OP_HASH("OP: ERROR_MODE_DONE"),          {0, 0, 0, 0, 0, 0, 0, 0, 0}},
        {PGPE_OPT_SAFE_MODE_DONE,   OP_HASH("OP: SAFE_MODE_DONE"),           {0, 0, 0, 0, 0, 0, 0, 0, 0}},

        // 0xd1  reserved for PK_TRACE/IOTA_TRACE (tiny)
        // 0xd2  reserved for PK_TRACE/IOTA_TRACE (big)
        // 0xd3  reserved for PK_TRACE/IOTA_TRACE (binary)

        {0x00, 0, {0, 0, 0, 0, 0, 0, 0, 0, 0}}  //This must always be last.
    };

#if defined(__PPE2FSP__)
    i_markHash["default"] = pgpe_v1;
    i_markHash["pgpe_p10dd10"] = pgpe_v1;
#endif
};
