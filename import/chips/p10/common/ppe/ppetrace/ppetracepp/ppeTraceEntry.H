/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/ppe/ppetrace/ppetracepp/ppeTraceEntry.H $ */
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
#if !defined(__PPETRACEENTRY_H__)
#define __PPETRACEENTRY_H__

#include "pk_trace.h"
#include <list>
#include <ostream>

#define     TRACE_FIELDTRACE    0x4654   /*!< Field Trace - "FT"              */
#define     TRACE_FIELDBIN      0x4644   /*!< Binary Field Trace - "FD"       */

using namespace std;

/**
 * Processes PPE trace entry
 */
class PpeTraceEntry
{
    public:
        PpeTraceEntry();
        ~PpeTraceEntry()
        {
            delete[] iv_fspEntry;
        }

        /**
         * Set trace to type binary
         */
        void setBinary()
        {
            iv_binary = true;
        }

        /**
         * Set trace to type OPcode
         */
        void setOpTrace()
        {
            iv_opTrace = true;
        }

        /**
         * Push param data to front of list
         */
        void pushFrontParm(uint32_t i_parm)
        {
            iv_data.push_front(i_parm);
        }

        /**
         * Push param data to back of list
         */
        void pushBackParm(uint32_t i_parm)
        {
            iv_data.push_back(i_parm);
        }

        /**
         * Add format string hash id
         */
        void addHash(uint32_t i_hash)
        {
            iv_hashId = i_hash;
        }

        /**
         * Add timestamp to entry
         */
        void addTimeStamp(uint64_t i_ts, uint32_t i_timeBase);

        /**
         * Get the formated timestamp
         */
        string getTimeStamp() const;

        /**
         * Get a differential timestamp
         */
        string getTimeDiff(const PpeTraceEntry* i_previous) const;

        /**
         * Query if entry is of type binary
         */
        bool isBinary() const
        {
            return iv_binary;
        }

        /**
         * Query if entry is of tyep opTrace
         */
        bool isOpTrace() const
        {
            return iv_opTrace;
        }

        /**
         * Text Output the entry to stream
         */
        void print(ostream& out);

        /**
         * Get the complete hash id
         */
        int getHash() const
        {
            return iv_hashId;
        }

        /**
         * Get the number of data parameters in the entry
         */
        int parmCount() const
        {
            return iv_data.size();
        }

        /**
         * Export the parms as array of big-endian 32 bit values.
         * Each call overwrites the internal array.
         */
        const unsigned int* parms() const;

        /**
         * Convert ppe trace entry into an fsp entry
         */
        int createFspEntry(const uint8_t*& o_fspEntry);

    private:

        list<uint32_t> iv_data;
        uint32_t  iv_hashId;
        bool      iv_binary;
        bool      iv_opTrace;
        uint32_t  iv_Seconds;
        uint32_t  iv_microSeconds;

        uint8_t* iv_fspEntry;

};

#endif
