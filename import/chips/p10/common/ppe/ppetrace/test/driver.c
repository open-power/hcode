/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/ppe/ppetrace/test/driver.c $          */
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

// ******************************************************
// Unit test code.  Compile on big-endian machine (AIX)
// ******************************************************

#include "pk_trace.h"
#include <time.h>
#include <stdio.h>

extern void ppe_trace_op(uint32_t mark, uint32_t* payload);

int main(int narg, char* argv[])
{

    uint32_t payload[1024];

    // Tiny trace - text only
    ppe_trace_op(PPE_TRACE_TINY_MARK | 0xcfcf0000, NULL);

    // Tiny trace with 16 bit parm
    payload[0] = 0xdead1234;
    ppe_trace_op(PPE_TRACE_TINY_MARK | 0xefef0000, payload);

    // Big trace with 4 parms
    // Mark is  hash|num_parms|mark
    // payload[0-3] are 1-4 parms
    //payload[4] = 0xabab0004;
    payload[0] = 0x98765432;
    payload[1] = 0x10777777;
    payload[2] = 0x45454545;
    payload[3] = 0x53535353;
    ppe_trace_op(PPE_TRACE_BIG_MARK | 0xabab0400, payload);

    // Big trace with 3 parms
    //payload[3] = 0xabab0003;
    payload[0] = 0x11111111;
    payload[1] = 0x22222222;
    payload[2] = 0x33333333;
    ppe_trace_op(PPE_TRACE_BIG_MARK | 0xabab0300, payload);

    // Big trace with 2 parms
    //payload[3] = 0xabab0002;
    payload[0] = 0x44444444;
    payload[1] = 0x55555555;
    ppe_trace_op(PPE_TRACE_BIG_MARK | 0xabab0200, payload);

    // Big trace with 1 parms
    //payload[0] = 0xabab0001;
    payload[0] = 0x66666666;
    ppe_trace_op(PPE_TRACE_BIG_MARK | 0xabab0100, payload);

    // Binary trace - 16 bytes
    // Mark  is hash|num_bytes|opmark
    //payload[4] = 0xdfdf0010;
    payload[0] = 0x01234567;
    payload[1] = 0x89abcdef;
    payload[2] = 0x01020304;
    payload[3] = 0x05060708;

    ppe_trace_op(PPE_TRACE_BIN_MARK | 0xdfdf1000, payload);

    //add Events w/o timestamps
    payload[0] = 0x01020304;
    payload[1] = 0x050607ff;
    ppe_trace_op(0x10, payload);

    payload[0] = 0x51525354;
    payload[1] = 0x55badbad;
    ppe_trace_op(0x11, payload);

    payload[0] = 0x111213ff;
    ppe_trace_op(0x02, payload);

    // add 4 byte events (TimeStamp+mark only)
    uint32_t mark;

    for(mark = 0xc0; mark < 0xd0; ++mark)
    {
        ppe_trace_op(mark, payload);
    }

    // Biggest op mark 16 bytes
    payload[0] = 0x01020304;
    payload[1] = 0x05060709;
    payload[2] = 0x0a0b0c0d;
    ppe_trace_op(0x77, payload);

    // Mark 12 bytes
    ppe_trace_op(0x69, payload);

    //while(g_pk_trace_buf.state.offset < PK_TRACE_SZ-4)
    //{
    //    ppe_trace_op(0x77, payload);
    //}

    ppe_trace_op(PPE_TRACE_BIG_MARK | 0xabab0400, payload);

    // print out the trace buffer
    int i, j, k;
    uint32_t* p = (uint32_t*)(&g_pk_trace_buf);
    uint8_t*  b = (uint8_t*)(&g_pk_trace_buf);

    for(i = 0; i < sizeof(g_pk_trace_buf); i += 16)
    {
        for(j = 0; j < 4; ++j)
        {
            printf("%08x ", p[j]);
        }

        for(k = i; k < i + 16; ++k)
        {
            char c = b[k];

            if(c > 31 && c < 127)
            {
                printf("%c", c);
            }
            else
            {
                printf(".");
            }
        }

        printf("\n");
        p += 4;
    }

    FILE* fptr;
    fptr = fopen("trace.bin", "wb");

    if(fptr)
    {
        fwrite(&g_pk_trace_buf, sizeof(g_pk_trace_buf), 1, fptr);
    }

    fclose(fptr);

    return 0;
}

void pk_critical_section_enter(PkMachineContext* ctx)
{
}

void pk_critical_section_exit(PkMachineContext* ctx)
{
}

uint64_t pk_timebase_get()
{
    return (uint64_t)clock();
}

void barrier(void)
{
}

