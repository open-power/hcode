/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/ppe/ppetrace/ppetracepp/ppeOpCodes.H $ */
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
#if !defined(__PPEOPCODES_H__)
#define __PPEOPCODES_H__
#include <vector>
#include <map>
#include <string>

/**
 * @file ppeOpCodes
 * Pick up opcodes from Hcode source
 */
using namespace std;

struct mark_hash_t
{
    int mark;
    unsigned int hash;
    int fieldSize[9];
};

mark_hash_t* pgpe_opCodeTable(void);

void getOpCodeTables(map<string, mark_hash_t*>& i_markHash);

#endif
