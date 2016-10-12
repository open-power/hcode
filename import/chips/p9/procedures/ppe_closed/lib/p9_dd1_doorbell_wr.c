/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/lib/p9_dd1_doorbell_wr.c $ */
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

#include "p9_dd1_doorbell_wr.h"

#include "stdint.h"
#include "ppe42_msr.h"
#include "ppe42_scom.h"
#include "gpehw_common.h"

#define PCB_MC_READ_OR  0x40000000ul
#define PCB_MC_READ_AND 0x48000000ul
#define PCB_MC_WRITE    0x68000000ul

/// Note: External and timer interrupts are disabled during the "polling"
//        portions of the code to allow for timeouts using the WDT.
//        MSR[EE] == 0 will disable the WDT callback and therefore cause
//        a halt/error condition if the polling takes "too long".

void p9_dd1_db_unicast_wr(uint32_t addr, uint64_t data)
{
    uint64_t rdata;

    // Clear the DB register
    wrteei(0);

    do
    {
        GPE_PUTSCOM(addr, 0ull);
        GPE_GETSCOM(addr, rdata);
    }
    while((rdata >> 32) != 0);

    wrteei(1);

    // TODO Does it make sense to open up for interrupts here, since the two
    //      polling loops are right after each other anyways?

    // Write data to the DB register
    wrteei(0);

    do
    {
        GPE_PUTSCOM(addr, data);
        GPE_GETSCOM(addr, rdata);
    }
    while((rdata >> 32) == 0);

    wrteei(1);
}

void p9_dd1_db_multicast_wr(uint32_t addr, uint64_t data, uint32_t coreMask)
{
    uint64_t rdata;

    // Clear out the multicast access type
    addr &= ~(0x38000000ul);

    // Clear the DB register
    wrteei(0);

    do
    {
        GPE_PUTSCOM(addr | PCB_MC_WRITE, 0ull);
        GPE_GETSCOM(addr | PCB_MC_READ_OR, rdata);
    }
    while((rdata >> 32) != 0);

    wrteei(1);

    // Write data to the DB register
    GPE_PUTSCOM(addr | PCB_MC_WRITE, data);
    GPE_GETSCOM(addr | PCB_MC_READ_AND, rdata);

    // One of the slaves (or multiple) did not return the correct data...
    // ... figure out which one(s) and write the DB data again to that
    // (those) slave(s)
    if((rdata >> 32) == 0)
    {
        uint32_t core = 0;

        for(; core < 24; ++core)
        {
            if(coreMask & (0x80000000ul >> core))
            {
                // Replace the multicast config bits with the slave address
                uint32_t unicastAddr = ((addr & ~(0xff000000ul)) |
                                        ((core + 0x20ul) << 24));
                GPE_GETSCOM(unicastAddr, rdata);
                // Only resend the write if needed (do not want duplicate DBs)
                wrteei(0);

                while((rdata >> 32) == 0)
                {
                    GPE_PUTSCOM(unicastAddr, data);
                    GPE_GETSCOM(unicastAddr, rdata);
                }

                wrteei(1);
            }
        }
    }
}
