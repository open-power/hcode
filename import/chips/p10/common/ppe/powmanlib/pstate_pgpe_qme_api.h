/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/ppe/powmanlib/pstate_pgpe_qme_api.h $ */
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
#ifndef __PSTATE_PGPE_QME_API_H__
#define __PSTATE_PGPE_QME_API_H__


enum MESSAGE_ID_DB2
{
    MSGID_DB2_DDS_AUTO          = 0xFC,
    MSGID_DB2_DDS_DISABLE       = 0xFD,
};

enum MESSAGE_ID_PCB_TYPE2_ACK_TYPES
{
    MSGID_PCB_TYPE2_ACK_AUTO_DDS_SUCCESS        = 0xFC,
    MSGID_PCB_TYPE2_ACK_DDS_DISABLE_SUCCESS     = 0xFD,
    MSGID_PCB_TYPE2_ACK_QME_ERROR               = 0xFF,
};

typedef union qme_pgpe_pcb0
{
    uint32_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t reserved       : 24;
        uint32_t pstate_target  : 8;
#else
        uint32_t pstate_target  : 8;
        uint32_t reserved       : 24;
#endif
    } fields;
}   qme_pgpe_pcb0_t;



#endif //__PSTATE_PGPE_QME_API_H__
