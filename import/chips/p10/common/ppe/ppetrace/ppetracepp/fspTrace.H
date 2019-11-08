/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/ppe/ppetrace/ppetracepp/fspTrace.H $  */
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
#if !defined(__FSPTRACE_H__)
#define __FSPTRACE_H__

#include <stdint.h>
#include <arpa/inet.h>
#include <string>
#include <sstream>
#include "trac_interface.h"

#define     TRACE_BUF_VERSION   0x01     /*!< Trace buffer version            */
#define     TRAC_TIME_REAL   0 // upper 32 = seconds, lower 32 = nanoseconds

using namespace std;

/**
 * Manage fsp-trace formated buffer
 */
class FspTrace
{
    public:
        /**
         * Constructor
         * @param[in] ostream for error information
         * @param[in] Component name
         */
        FspTrace(ostream& i_err, string& i_comp);

        /**
         * Dtor
         */
        ~FspTrace() {}

        /**
         * Add an fsp entry
         * @param[in] ppe Entry
         */
        void addEntry(const string& entry);

        /**
         * Output fsp-trace formatted trace bufffer
         * @param[in] output stream
         * @return true for no errors,
         *         otherwise false and error info written to iv_err
         */
        bool write(ostream& out);

    private:

        ostream&            iv_err;
        trace_buf_head_t    iv_head;
        ostringstream       iv_entries;
};

#endif
