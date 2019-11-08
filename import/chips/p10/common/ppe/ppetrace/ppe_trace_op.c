/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/ppe/ppetrace/ppe_trace_op.c $         */
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
#include "pk_trace.h"
#if (PK_TRACE_SUPPORT)


//0101 xxxx
//5x
//dx

// OP trace
// i_mark [24:31] has mark
// i_mark [0:15] has hash (if relevant)
// i_mark [16:23] has count (if relevant)
// payload points to data parms
void ppe_trace_op(uint32_t i_mark,
                  uint32_t* i_payload)
{
    PkTraceTime         footer;
    uint32_t            footer2 = 0;
    uint32_t*           ptr32;
    PkMachineContext    ctx;
    op_trace_mark_t     mark;
    PkTraceState        state;
    int                 payload_size;  // trace payload size
    int                 trace_size;
    int                 footer_offset;
    int                 cur_offset;

    mark.byte = i_mark;

    if(i_payload == (void*)0)
    {
        if((mark.fields.timestamp == 0 ||
            mark.fields.word_count != 0) &&
           mark.byte != PPE_TRACE_TINY_MARK)
        {
            // Ignore invalid trace
            return;
        }
    }

    // Create the footer of the trace entry
    if(mark.fields.timestamp)
    {
        // bits 8:40 goes in tbu32, bits 41:63 go in footer
        // bits 0:7 are tossed
        uint64_t tb64 = pk_timebase_get() << 8;
        state.tbu32 = tb64 >> 32;
        footer.word32 = tb64;
    }
    else // if no timestamp requested then there must always be a payload
    {
        // For OP traces, the word_count field in the mark indicates the number
        // of 4 byte words - 1 of the entire trace entry, including the mark;
        // therefore the payload will always be at least 1 byte less than
        // 4*(mark.word_count + 1) and the tail of the payload will always fit
        // in the footer along with the mark.
        footer.word32 = (i_payload[mark.fields.word_count]); //tail end of the payload
    }

    footer.format = mark.byte;

    // mark.word_count is total size of op trace - 1
    // The footer counts as 1, therefore the remaining
    // payload word size is mark.word_count
    if(mark.byte == PPE_TRACE_BIG_MARK)
    {
        PkTraceBigParms big_trace;
        big_trace.word32 = i_mark;
        big_trace.num_parms = big_trace.complete;
        //*i_payload;
        payload_size = 4 * (big_trace.num_parms);
        trace_size = payload_size + sizeof(PkTraceBig);
        big_trace.complete = 1;
        footer2 = big_trace.word32;
        //++i_payload;
    }
    else if(mark.byte == PPE_TRACE_TINY_MARK)
    {
        // Everything fits into the 64 bit header, no parm data
        PkTraceTinyParms tiny_trace;
        tiny_trace.word32 = i_mark;

        if(i_payload)
        {
            tiny_trace.parm = *i_payload;
        }

        payload_size = 0;
        trace_size = sizeof(PkTraceTiny);
        footer2 = tiny_trace.word32;
    }
    else if(mark.byte == PPE_TRACE_BIN_MARK)
    {
        PkTraceBinaryParms bin_trace;
        bin_trace.word32 = i_mark;
        bin_trace.num_bytes = bin_trace.complete;
        bin_trace.complete = 1;
        //*i_payload;
        //++i_payload;
        payload_size = bin_trace.num_bytes;
        trace_size = payload_size + sizeof(PkTraceBinary);
        footer2 = bin_trace.word32;
    }
    else // op trace - 32 bit footer
    {
        payload_size = 4 * ((int)mark.fields.word_count);
        trace_size = payload_size + sizeof(footer);
    }


    // Atonomous
    pk_critical_section_enter(&ctx);

    // get offset in the cb for the footer we are adding
    cur_offset = g_pk_trace_buf.state.offset;
    state.offset = cur_offset + trace_size;

    // If there is a timestamp then the footer contains part of it,
    // otherwise the footer contains OP trace data.
    if(mark.fields.timestamp)
    {
        // update header tbu and offset
        g_pk_trace_buf.state.word64 = state.word64;
    }
    else
    {
        //update the cb state offset
        g_pk_trace_buf.state.offset = state.offset;
    }

    footer_offset = state.offset - sizeof(footer);

    //calculate the address of the footer
    ptr32 = (uint32_t*)&g_pk_trace_buf.cb[footer_offset & PK_TRACE_CB_MASK];

    //write the footer to the circular buffer
    *ptr32 = footer.word32;

    if(footer2)
    {
        footer_offset -= sizeof(footer2);
        ptr32 = (uint32_t*)&g_pk_trace_buf.cb[footer_offset & PK_TRACE_CB_MASK];
        *ptr32 = footer2;
    }

    int i;

    for(i = 0; i < payload_size; i += 4)
    {
        ptr32 = (uint32_t*)&g_pk_trace_buf.cb[(cur_offset + i) & PK_TRACE_CB_MASK];
        *ptr32 = *i_payload++;
    }

    pk_critical_section_exit(&ctx);

    // write the payload

}

void ppe_trace_op1(uint32_t i_mark)
{
    ppe_trace_op(i_mark, NULL);
}

void ppe_trace_op2(uint32_t i_mark, uint32_t parm1)
{
    ppe_trace_op(i_mark, &parm1);
}

void ppe_trace_op3(uint32_t i_mark, uint32_t parm1, uint32_t parm2)
{
    uint32_t parms[2] =
    {
        parm1, parm2
    };
    barrier(); // A memory barrier here forces double word stores to init parms.

    ppe_trace_op(i_mark, parms);
}

void ppe_trace_op5(uint32_t i_mark, uint32_t parm1, uint32_t parm2,
                   uint32_t parm3, uint32_t parm4)
{
    uint32_t parms[4] =
    {
        parm1, parm2, parm3, parm4
    };
    barrier(); // A Memory barrier here forces double word stores to init parms.

    ppe_trace_op(i_mark, parms);
}

#endif
