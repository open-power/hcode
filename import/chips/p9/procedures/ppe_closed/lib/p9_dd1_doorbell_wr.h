/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/lib/p9_dd1_doorbell_wr.h $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2016,2017                                                    */
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
#ifndef _P9_DD1_DOORBELL_WR_H_
#define _P9_DD1_DOORBELL_WR_H_

#include "stdint.h"

void p9_dd1_db_unicast_wr  (uint32_t addr, uint64_t data);

//
/// @brief Provides a function to repeatedly attempt writes to multicast DB
///        registers as a workaround for DD1-HW issue.
/// @param addr     The address (valid for multicast!) to write to.
/// @param data     The data to write.
/// @param coreMask Bits 0:23 specify which of the CPPMs are present in the
///                 multicast group specified in the address.
///                 If all cores are active, then coreMask = 0xffffff00
void p9_dd1_db_multicast_wr(uint32_t addr, uint64_t data, uint32_t coreMask);

#endif // _P9_DD1_DOORBELL_WR_H_
