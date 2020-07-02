/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/ppe/powmanlib/pstate_pgpe_xgpe_api.h $ */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2020                                                         */
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
#ifndef __PSTATES_PGPE_XGPE_API_H__
#define __PSTATES_PGPE_XGPE_API_H__


#define IPC_PGPE_XGPE_RC_NULL       0x0
#define IPC_PGPE_XGPE_RC_SUCCESS       0x1

enum UPDATE_VRET_TYPES
{
    UPDATE_VRET_TYPE_CLEAR  =   0x0,
    UPDATE_VRET_TYPE_SET    =   0x1,
};

typedef union
{
    uint64_t value;
    struct
    {
        uint64_t  reserved          : 4;
        uint64_t  update_type       : 4;
        uint64_t  reserved1         : 48;
        uint64_t  return_code       : 8;
    } fields;
} ipcmsg_p2x_update_vret_t;

#endif
