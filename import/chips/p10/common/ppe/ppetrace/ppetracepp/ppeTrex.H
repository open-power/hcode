/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/ppe/ppetrace/ppetracepp/ppeTrex.H $   */
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
#if !defined(__TREX_H__)
#define __TREX_H__
#include <map>
#include <ostream>
#include "ppeTraceEntry.H"

using namespace std;

/**
 * Manage the trexStringfile for ppe-trace
 */
class Trex
{
    public:

        /**
         * Ctor
         * @param[in] ostream for sending information
         */
        Trex(ostream& i_err);
        ~Trex() {}

        /**
         * Load trexStringfile
         * @parm[i] filepath
         * @return  true == success
         */
        bool load(string& filepath);

        /**
         * Add a hash/string pair
         * @param[in] hash value
         * @param[in] Description string
         */
        void addHash(int i_hashVal, const string& text);

        /**
         * Print out a trace entry
         */
        void print(const PpeTraceEntry& i_entry);

        /**
         * dump state of object (for debug)
         * @param ostream to send displayable information
         */
        void dump(ostream& out);

    private:

        ostream& iv_out;
        map<int, string> iv_map;
        const PpeTraceEntry* iv_previous;

};

#endif
