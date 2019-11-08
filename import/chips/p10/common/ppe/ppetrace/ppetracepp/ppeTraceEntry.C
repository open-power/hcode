/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/ppe/ppetrace/ppetracepp/ppeTraceEntry.C $ */
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
#include "ppeTraceEntry.H"
#include "trac_interface.h"
#include <arpa/inet.h>
#include <iomanip>
#include <sstream>

PpeTraceEntry::PpeTraceEntry()
    : iv_hashId(0),
      iv_binary(false),
      iv_opTrace(false),
      iv_Seconds(0),
      iv_microSeconds(0),
      iv_fspEntry(NULL)
{
}

void PpeTraceEntry::print(ostream& out)
{
    out << "Hash id:   " << hex << setfill('0') << setw(8) << iv_hashId << endl;
    out << "TimeStamp: " << getTimeStamp() << endl;
    out << "Data: ";

    for(list<uint32_t>::const_iterator i = iv_data.begin(); i != iv_data.end(); ++i)
    {
        out << setw(8) << *i << " ";
    }

    out << endl;
}

string PpeTraceEntry::getTimeStamp() const
{
    ostringstream oss;
    oss << dec << setfill('0') << setw(8) << iv_Seconds
        << '.' << setw(9) << iv_microSeconds;
    return oss.str();
}

void PpeTraceEntry::addTimeStamp(uint64_t i_ts, uint32_t i_timeBase)
{
    uint32_t seconds = i_ts / i_timeBase;
    uint32_t microSeconds = ((i_ts % i_timeBase) * 1000000ull) / i_timeBase;
    iv_Seconds = seconds;
    iv_microSeconds = microSeconds;
}

const unsigned int* PpeTraceEntry::parms() const
{
    int index = 0;
    static unsigned int l_parms[64];

    for(list<uint32_t>::const_iterator i = iv_data.begin(); i != iv_data.end(); ++i)
    {
        // always big-endian so that 64 bit vars always work right.
        l_parms[index] = htonl(*i);
        ++index;
    }

    return l_parms;
}


int PpeTraceEntry::createFspEntry(const uint8_t*& o_fspEntry)
{
    int fspEntrySize = sizeof(trace_entry_stamp_t) +
                       sizeof(trace_entry_head_t) +
                       parmCount() * sizeof(uint32_t) +
                       sizeof(uint32_t);

    delete[] iv_fspEntry;
    iv_fspEntry = new uint8_t[fspEntrySize];
    uint8_t* p = iv_fspEntry;
    trace_entry_stamp_t* stamp = reinterpret_cast<trace_entry_stamp_t*>(p);
    p += sizeof(trace_entry_stamp_t);
    trace_entry_head_t* head  = reinterpret_cast<trace_entry_head_t*>(p);
    p += sizeof(trace_entry_head_t);
    uint32_t* args = reinterpret_cast<uint32_t*>(p);

    stamp->tid = htonl(0);
    stamp->tbh = htonl(iv_Seconds);
    stamp->tbl = htonl(iv_microSeconds);

    head->length = htons(parmCount() * sizeof(uint32_t));

    if(iv_binary)
    {
        head->tag = htons(TRACE_FIELDBIN);
    }
    else
    {
        head->tag    = htons(TRACE_FIELDTRACE);
    }

    head->hash = htonl(iv_hashId);
    head->line = htonl(1);

    int index = 0;

    for(list<uint32_t>::const_iterator i = iv_data.begin(); i != iv_data.end(); ++i)
    {
        args[index] = htonl(*i);
        ++index;
    }

    // Value after arg is total size of entry
    args[index] = htonl(fspEntrySize);
    o_fspEntry = iv_fspEntry;
    return fspEntrySize;
}
