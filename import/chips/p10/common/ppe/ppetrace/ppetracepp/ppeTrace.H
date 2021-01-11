/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/ppe/ppetrace/ppetracepp/ppeTrace.H $  */
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
#if !defined(__PPETRACE_H__)
#define __PPETRACE_H__

#include "pk_trace.h"
#include "ppeTraceEntry.H"
#include "ppeTrex.H"

#include <stdint.h>
#include <ostream>
#include <string>
#include <vector>
#include <iostream>

#define HCODE_DEBUG_PTRS (0x200)
#define OCCGPE_DEBUG_PTRS (0x180)

#define PGPE_BASE_SRAM  (0xfff20000)
#define XGPE_BASE_SRAM  (0xfff30000)
#define QME_BASE_SRAM   (0xffff0000)
#define GPE1_BASE_SRAM  (0xfff10000)
#define GPE0_BASE_SRAM  (0xfff01000)

using namespace std;

/**
 * Access all the fields of the ppe trace binary blob
 */
class PpeTrace
{
    public:
        /**
         * Constructor
         * @param i_info  An ostream to dump error, debug and status information
         */
        PpeTrace(ostream& i_info, Trex& i_trex);
        ~PpeTrace();

        /**
         * Load the binary ppe trace buffer
         * @param[in] Filepath of ppe trace binary
         * @return true on success or false with error text sent to iv_info
         */
        bool loadFile(const char* filepath);

        /*#
         * Extract the ppe trace version
         */
        int extractVersion() const;

        /**
         * Extract the component name
         * @param[out] component name
         * @param[in] true == remove underscores from component name
         */
        void componentName(string& o_compName,
                           bool i_purgeUnderscore = true) const;

        /**
         * Extract instance ID
         */
        int instanceId() const;

        /*
         * Extract Hash id for Partial Trace Message
         * @return partial trace hash id
         */
        uint32_t partialTraceHash() const;

        /*
         * Construct complete string hash id
         * @return  internal upper16 + i_lower
         */
        uint32_t stringHash(uint16_t i_lower) const;

        /**
         * Get the size of circular buffer size
         */
        int circularBufferSize() const;

        /**
         * Max time between entries.
         */
        uint32_t maxTimeChange() const;

        /**
         * Extract the time base frequency of the PPE engine
         */
        uint32_t timeBaseFrequency() const;

        /**
         * Extrace time adjustment. Used to normalize time between PPE engines
         */
        uint64_t timeAdjust() const;

        /**
         * Make a time stamp from
         * @param lower 32 bits of timestamp
         * @return internal upper32 of ts + lower32 bits
         */
        uint64_t timeStamp(uint32_t i_lower32) const;

        /**
         * The byte SUM of all the trace entrees ever added to the trace buffer
         */
        int entryEndIndex() const;

        /**
         * Parse out the ppe trace entries
         */
        void parseEntries();

        /**
         * Get a word from the circular buffer
         * @parm index
         * @parm word to return
         * @return false if i_index outsize range
         */
        bool getWord(int i_index, uint32_t& o_word);

        /**
         * Convert hash ids to format strings and output text version of the ppe trace
         */
        void trexIt();

        /**
         * Generate a fsp-trace formated buffer
         */
        void genFspTrace(ostream& i_out);

        /**
         * Debug hash
         */
        void dumpMarkHashInfo(ostream& i_out);

        /**
         * isValid.   Is the buffer a valid pk_trace buffer
         */
        bool isValid(ostream& errInfo);

    private:

        ostream& iv_info;
        char* iv_alloc;
        PkTraceBuffer* iv_buffer;
        int iv_version;

        // These are all word counts
        int iv_endIndex;
        int iv_minIndex;
        int iv_cbwSize;

        uint64_t iv_savedTimeStamp;
        list<PpeTraceEntry> iv_entries;
        Trex& iv_trex;
        map<int, uint32_t> iv_markHash;
        map<int, vector<int> > iv_markFieldSizes;
};

// Create FSP trace buffer and write it.
// Read trexStringFile and use it.
// Add special hash for OP Traces.

#endif
