/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/ppe/ppetrace/ppetracepp/fspTrace.C $  */
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
#include "fspTrace.H"
#include <string.h>

FspTrace::FspTrace(ostream& i_err, string& i_comp)
    : iv_err(i_err)
{
    iv_head.ver = TRACE_BUF_VERSION;
    iv_head.hdr_len = sizeof(trace_buf_head_t);
    iv_head.time_flg = TRAC_TIME_REAL;
    iv_head.endian_flg = 'B'; //big endian
    iv_head.times_wrap = htonl(1);
    iv_head.size = sizeof(trace_buf_head_t);
    iv_head.next_free = htonl(sizeof(trace_buf_head_t));
    iv_head.extracted = htonl(0);
    iv_head.te_count = 0;
    memcpy(iv_head.comp, i_comp.c_str(), i_comp.length());
}

void FspTrace::addEntry(const string& entry)
{
    iv_entries << entry;
    iv_head.size += entry.length();
    iv_head.te_count++;
}

bool FspTrace::write(ostream& out)
{
    iv_head.size = htonl(iv_head.size);
    iv_head.te_count = htonl(iv_head.te_count);

    out.write( reinterpret_cast<const char*>(&iv_head),
               sizeof(trace_buf_head_t));

    out << iv_entries.str();
    return true;
}
