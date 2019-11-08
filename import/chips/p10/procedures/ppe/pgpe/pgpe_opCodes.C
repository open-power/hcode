/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/pgpe/pgpe_opCodes.C $         */
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
#include "pk_trace.h"

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
        {0x02, OP_HASH("FIT Timebase Re-Sync %d"),  {3, 0, 0, 0, 0, 0, 0, 0, 0}},

        {0x10, OP_HASH("Auction Done. QuadPS %d %d %d %d %d %d. GlobalPS %d"),  {1, 1, 1, 1, 1, 1, 1, 0, 0}},
        {0x11, OP_HASH("WOF Calc Done. Vratio %d Fratio %d WOF Clip %d Active Quads %d Cores Active %d"),   {1, 1, 1, 1, 1, 0, 0, 0, 0}},

        {0x4e, OP_HASH("PM Complex Suspend"), {0, 0, 0, 0, 0, 0, 0, 0, 0}},
        {0x4f, OP_HASH("Safe Mode %08x %02x %02x %02x"), {1, 1, 1, 1, 0, 0, 0, 0, 0}},

        {0x50, OP_HASH("Halt Condition, Kernel Panic code %04x."), {2, 0, 0, 0, 0, 0, 0, 0, 0}},
        {0x51, OP_HASH("Unexpected Event %02x"),    {1, 0, 0, 0, 0, 0, 0, 0, 0}},
        {0x54, OP_HASH("Wof CTRL. Active Quads %08x Control %d QCSR %04x"), {1, 1, 2, 0, 0, 0, 0, 0, 0}},
        {0x55, OP_HASH("PCB Type4 (Register) Active Quads %08x Present PS %02x QCSR %04x"), {1, 1, 2, 0, 0, 0, 0, 0, 0}},
        {0x56, OP_HASH("PCB Type1 (PMCR) CoreNum %d Present global PS %d UpperPS %d LowerPs %d"), {1, 1, 1, 1, 0, 0, 0, 0, 0}},
        {0x58, OP_HASH("Stop/Start OwnerPS %d Present Global PS %d QCSR %04x"), {1, 1, 2, 0, 0, 0, 0, 0, 0}},
        {0x5a, OP_HASH("Cores Active Active Quads %08x Core Requested %06x"),   {4, 3, 0, 0, 0, 0, 0, 0, 0}},
        {0x5b, OP_HASH("Quads Active Quads Requested %08x Active Cores %06x"),  {4, 3, 0, 0, 0, 0, 0, 0, 0}},
        {0x5c, OP_HASH("FIT Timebase Sync %08x"),   {4, 0, 0, 0, 0, 0, 0, 0, 0}},
        {0x5d, OP_HASH("Severe Falult Detected Active Quads %08x Active or Fault cores %06x Present GlobalPS %d Vext %04x %02x"), {1, 3, 1, 2, 1, 0, 0, 0, 0}},

        {0x62, OP_HASH("Wof VFRT %016x"),           {8, 0, 0, 0, 0, 0, 0, 0, 0}},

        {0x69, OP_HASH("Set PMCR Req. Quad %d %d %d %d %d Present Global %d"),  {1, 1, 1, 1, 1, 1, 1, 0, 0}},

        {0x73, OP_HASH("Actuate Step Done. Present Quads 0x%08x%04x New Global PS %d Target PS %d Vext %d Veff %d"), {4, 2, 1, 1, 2, 2, 0, 0, 0}},
        {0x77, OP_HASH("Clip Update. ClipMax %012llx ClipMin %012llx"),         {6, 6, 0, 0, 0, 0, 0, 0, 0}},

        {0x9e, OP_HASH("Prolonged Droop Event %08x Global PS %d Target PS %d"), {1, 1, 1, 0, 0, 0, 0, 0, 0}},
        {0xaf, OP_HASH("Prolonged Droop Resolved %08x %08x %08x"), {1, 3, 4, 0, 0, 0, 0, 0, 0}},

        {0xc0, OP_HASH("Mark: 0xC0"),               {0, 0, 0, 0, 0, 0, 0, 0, 0}},
        {0xc2, OP_HASH("Wof VFRT"),                 {0, 0, 0, 0, 0, 0, 0, 0, 0}},
        {0xc4, OP_HASH("Wof Ctrl"),                 {0, 0, 0, 0, 0, 0, 0, 0, 0}},
        {0xc5, OP_HASH("Global Actual Broadcast"),  {0, 0, 0, 0, 0, 0, 0, 0, 0}},
        {0xc6, OP_HASH("Global Actual ACK done"),   {0, 0, 0, 0, 0, 0, 0, 0, 0}},
        {0xc7, OP_HASH("Clip Update"),              {0, 0, 0, 0, 0, 0, 0, 0, 0}},
        {0xc8, OP_HASH("Start/Stop"),               {0, 0, 0, 0, 0, 0, 0, 0, 0}},
        {0xc9, OP_HASH("Mark: 0xC9"),               {0, 0, 0, 0, 0, 0, 0, 0, 0}},
        {0xca, OP_HASH("Cores Active"),             {0, 0, 0, 0, 0, 0, 0, 0, 0}},
        {0xcb, OP_HASH("Quad Active"),              {0, 0, 0, 0, 0, 0, 0, 0, 0}},
        {0xcc, OP_HASH("Start Trace Record"),       {0, 0, 0, 0, 0, 0, 0, 0, 0}},
        {0xcd, OP_HASH("Memory Trace Loss Record"), {0, 0, 0, 0, 0, 0, 0, 0, 0}},
        {0xce, OP_HASH("PM Suspend Done"),          {0, 0, 0, 0, 0, 0, 0, 0, 0}},
        {0xcf, OP_HASH("Safe Mode Done"),           {0, 0, 0, 0, 0, 0, 0, 0, 0}},

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

