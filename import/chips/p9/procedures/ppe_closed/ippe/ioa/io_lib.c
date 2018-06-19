/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/ippe/ioa/io_lib.c $     */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2018                                                         */
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
// *!---------------------------------------------------------------------------
// *! (C) Copyright International Business Machines Corp. 2016
// *! All Rights Reserved -- Property of IBM
// *! *** IBM Confidential ***
// *!---------------------------------------------------------------------------
// *! FILENAME    : io_lib.c
// *! TITLE       :
// *! DESCRIPTION :
// *!
// *! OWNER NAME  : John Rell           Email: jgrell@us.ibm.com
// *! BACKUP NAME : Mike Spear          Email: mspear@us.ibm.com
// *!
// *!---------------------------------------------------------------------------
// CHANGE HISTORY:
//------------------------------------------------------------------------------
// Version ID: |Author: | Comment:
// ------------|--------|-------------------------------------------------------
// vbr17072600 |vbr     | Copied gcr_wr_raw from other branch.
// vbr16081800 |vbr     | Moved some functions from eo_common to io_lib (and renamed some).
// vbr16070700 |vbr     | Removed deprecated put/get; minor stack/code size optimizations
// vbr16070100 |vbr     | Removed RMW option from put_ptr_int (only does RMW).
// vbr16062800 |vbr     | Optimization
// mbs16062400 |mbs     | Added gcr_addr struct
// mbs16062400 |mbs     | Added put_ptr, put_ptr_fast, and get_ptr functions
// vbr16050500 |vbr     |- Moved mem_regs and various functions from eo_common to io_lib
// vbr16050300 |vbr     |- Added lcl_get()
// mbs16040800 |mbs     |- Added instance parm to mmio_put and mmio_get, and adjusted bit fields
// -----------------------------------------------------------------------------

#include "io_lib.h"
#include "pk.h"

#include "ppe_mem_reg_const_pkg.h"
#include "ppe_com_reg_const_pkg.h"
#include "ppe_opt_reg_const_pkg.h"



////////////////////////////////////////////////////////////////////////////////////////////
// GCR ADDRESS FORMING FUNCTIONS
////////////////////////////////////////////////////////////////////////////////////////////

// These functions are setup to interace with a "t_gcr_addr" structure which is only infrequently updated.
// A pointer to this structure can be passed down the call stack and provide all the necessary information
// to put and get functions as well as precalculated masks

void set_gcr_addr(t_gcr_addr* gcr_addr, int bus_id, int reg_id, int lane)
{
    gcr_addr->bus_id = bus_id;
    gcr_addr->reg_id = reg_id;
    gcr_addr->lane = lane;

    // Single thread on gcr_port 0
    gcr_addr->gcr_port_addr = 0xC0000200;

    gcr_addr->gcr_read_packet =
        0x9000000000E00000 //base_gcr_write_msg
        | ((uint64_t)bus_id    << (63 - 10))  // 53
        | ((uint64_t)reg_id    << (63 - 16))  // 47
        | ((uint64_t)lane      << (63 - 31)); // 32

    gcr_addr->gcr_write_packet =  gcr_addr->gcr_read_packet | 0x0800000000000000;

    return;
};


void set_gcr_addr_bus_id(t_gcr_addr* gcr_addr, int bus_id)
{
    gcr_addr->bus_id = bus_id;

    gcr_addr->gcr_read_packet =   (gcr_addr->gcr_read_packet & 0xf81fffffffffffff)
                                  | ((uint64_t)bus_id    << (63 - 10));

    gcr_addr->gcr_write_packet =  gcr_addr->gcr_read_packet | 0x0800000000000000;

    return;
}

void set_gcr_addr_reg_id(t_gcr_addr* gcr_addr, int reg_id)
{
    gcr_addr->reg_id = reg_id;

    gcr_addr->gcr_read_packet =   (gcr_addr->gcr_read_packet & 0xffe07fffffffffff)
                                  | ((uint64_t)reg_id    << (63 - 16));

    gcr_addr->gcr_write_packet =  gcr_addr->gcr_read_packet | 0x0800000000000000;

    return;
}

void set_gcr_addr_lane(t_gcr_addr* gcr_addr, int lane)
{
    gcr_addr->lane = lane;

    gcr_addr->gcr_read_packet =   (gcr_addr->gcr_read_packet & 0xffffffe0ffffffff)
                                  | ((uint64_t)lane << (63 - 31));

    gcr_addr->gcr_write_packet =  gcr_addr->gcr_read_packet | 0x0800000000000000;

    return;
}


////////////////////////////////////////////////////////////////////////////////////////////
// HW I/O FUNCTIONS
////////////////////////////////////////////////////////////////////////////////////////////

void mmio_put(int instance, int addr, int data)
{
    uint64_t volatile* lclmem_addr = (uint64_t*)(0xC0000250);

    (*lclmem_addr) =
        0x8000000000000000 // 0, write
        | ((uint64_t)instance  << (63 - 11)) // 2:3, DL Instance (00 : DL0, 01 : DL1, 10 : DL2, 11 : PHY)
        | ((uint64_t)addr  << (63 - 11))   // 11:31
        | ((uint64_t)data);  // 32:63

    // poll for msg rcvd flag to indicate an echo
    while ( ((*lclmem_addr) & 0x3) == 0x0 );

    return;
}

uint32_t mmio_get(int instance, int addr)
{
    uint64_t volatile* lclmem_addr = (uint64_t*)(0xC0000250);

    (*lclmem_addr) =
        0x0000000000000000 // 0, read
        | ((uint64_t)instance  << (63 - 11)) // 2:3, DL Instance (00 : DL0, 01 : DL1, 10 : DL2, 11 : PHY)
        | ((uint64_t)addr  << (63 - 11));   // 11:31

    // poll for read data flag
    uint64_t result = (*lclmem_addr);

    while ( (result & 0x1) == 0x0 )
    {
        result = (*lclmem_addr);
    };

    uint32_t r_data = (uint32_t)(result >> 32);

    return r_data; // 16 bits

    //return;
}


// This allows writing a raw GCR packet to the bus.
// Primarily meant as a workaround for the GCR interrupt packet not being ack'd.
void gcr_wr_raw(t_gcr_addr* gcr_addr, uint64_t packet)
{
    // Setup the pointer
    uint64_t volatile* lclmem_addr = (uint64_t*)gcr_addr->gcr_port_addr;

    // wait on previous op while start bit is set but echo flag is not set
    while (((*lclmem_addr) & 0xC000000000000003) == 0x8000000000000000 );

    // send write op and exit
    (*lclmem_addr) = packet;
} //gcr_wr_raw


// fast put where the packet is preformed and the data field uses all 16 bits so we just need to fill in the reg addr and 16-bit data
//void put_ptr_fast_int(t_gcr_addr *gcr_addr, int reg_addr, int endbit, int data) {
void put_ptr_fast_int(t_gcr_addr* gcr_addr, uint64_t reg_addr, int shift_amt, int data)
{
    //uint64_t w_data = data << (15+4 - endbit);
    uint64_t w_data = data << shift_amt;

    uint64_t packet =
        gcr_addr->gcr_write_packet
        | ((uint64_t)reg_addr)  // already shifted
        | ((uint64_t)w_data);

    // Put result to reg
    uint64_t volatile* lclmem_addr = (uint64_t*)gcr_addr->gcr_port_addr;

    // wait on previous op while start bit is set but echo flag is not set
    while (((*lclmem_addr) & 0xC000000000000003) == 0x8000000000000000 );

    // send write op and exit
    (*lclmem_addr) = packet;

    return;
}


// put where the packet is preformed. always does read-modify-write.
void put_ptr_int(t_gcr_addr* gcr_addr, uint64_t reg_addr, uint64_t and_mask, int shift_amt, int data)
{
    uint64_t volatile* lclmem_addr = (uint64_t*)gcr_addr->gcr_port_addr;
    uint64_t packet;
    uint64_t w_data;

    // For a read-modify-write, first do a read of the register in question.
    // However we don't need to do a full get() because we don't care about shifting the
    // data around.

    packet =
        gcr_addr->gcr_read_packet
        | ((uint64_t)reg_addr);// already shifted

    // wait on previous op while start bit is set but echo flag or read response flag is not set
    while (((*lclmem_addr) & 0xC000000000000003) == 0x8000000000000000 );

    (*lclmem_addr) = packet;


    // ******************************************************************
    // Form AND and OR masks - do all this while the read command is running
    // ******************************************************************

    /*
        // Form the mask by shifting a one N+1 times and then subtracting one to make a ones mask of length N
        uint64_t and_mask = (1 << (endbit - startbit + 1)) - 1;

        // Shift the mask into the proper bit field for the gcr packet
        and_mask <<= (15+4 - endbit);

        // Invert the mask so all the bits except the start/end bit data field are ones (e.g. xfffffffffffff1ff)
        and_mask = (~and_mask);

        // Now mask off all but the actual 16 bit data field, so we have ones with hole in the middle (e.g. x00000000000ff1f0)
        and_mask &= 0x00000000000ffff0;

        w_data = data << (15+4 - endbit);
    */
    w_data = data << shift_amt;

    // Prepare or_mask
    uint64_t or_mask =
        gcr_addr->gcr_write_packet
        | ((uint64_t)reg_addr)  // already shifted
        | ((uint64_t)w_data); // 4

    // ******************************************************************

    // poll for read response packet flag to indicate returned data
    packet = (*lclmem_addr);

    while ( (packet & 0x4000000000000000) == 0x0 )
    {
        packet = (*lclmem_addr);
    };

    // Apply masks
    packet &= and_mask;

    packet |= or_mask;

    // write data back and exit
    (*lclmem_addr) = packet;

    // poll for msg rcvd flag to indicate an echo
    //while ( ((*lclmem_addr) & 0x3) == 0x0 );

    return;
} //put_ptr_int

void put_ptr_fast_id(t_gcr_addr* gcr_addr, int reg_id, uint64_t reg_addr, int endbit, int data)
{
    set_gcr_addr_reg_id(gcr_addr, reg_id);
    put_ptr_fast(gcr_addr, reg_addr, endbit, data);
}

void put_ptr_id     (t_gcr_addr* gcr_addr, int reg_id, uint64_t reg_addr, int startbit, int endbit, int data, int rmw)
{
    set_gcr_addr_reg_id(gcr_addr, reg_id);
    put_ptr(gcr_addr, reg_addr, startbit, endbit, data, rmw);
}

uint32_t get_ptr_id (t_gcr_addr* gcr_addr, int reg_id, uint64_t reg_addr, int startbit, int endbit)
{
    set_gcr_addr_reg_id(gcr_addr, reg_id);
    return get_ptr(gcr_addr, reg_addr, startbit, endbit);
}


// get where the packet is preformed
//uint32_t get_ptr_int(t_gcr_addr *gcr_addr, int reg_addr, int startbit, int endbit) {
uint32_t get_ptr_int(t_gcr_addr* gcr_addr, uint64_t reg_addr, uint64_t and_mask, int shift_amt)
{
    uint64_t volatile* lclmem_addr = (uint64_t*)(gcr_addr->gcr_port_addr);

    (*lclmem_addr) =
        gcr_addr->gcr_read_packet
        | ((uint64_t)reg_addr);// already shifted

    /*
      // ******************************************************************
      // Form AND mask - do all this while the read command is running
      // ******************************************************************
      // Form the mask by shifting a one N+1 times and then subtracting one to make a ones mask of length N
      uint64_t and_mask = (1 << (endbit - startbit + 1)) - 1;

      // Shift the mask into the proper bit field for the gcr packet
      uint32_t shift_amt = (4 + 15 - endbit);

      and_mask <<= shift_amt;

      // ******************************************************************
    */

    // poll for read response packet flag to indicate returned data
    uint64_t result = (*lclmem_addr);

    while ( (result & 0x4000000000000000) == 0x0 )
    {
        result = (*lclmem_addr);
    };

    uint32_t r_data = (uint32_t)((result & and_mask) >> shift_amt);

    return r_data; // 16 bits
}


void lcl_put(int reg_addr, int width, int data)
{

    uint64_t volatile* lclmem_addr = (uint64_t*)(0xC0000000 | reg_addr);

    (*lclmem_addr) =  (uint64_t)data << (64 - width);

    return;
}

uint32_t lcl_get(int reg_addr, int width)
{
    uint64_t volatile* lclmem_addr = (uint64_t*)(0xC0000000 | reg_addr);
    uint32_t r_data = (uint32_t)((*lclmem_addr) >> (64 - width));
    return r_data;
}

void set_fir()
{
    uint64_t volatile* fir_addr = (uint64_t*)(0xC0000240);

    (*fir_addr) = 0x1; // Any write will trigger the FIR, regardless of data

    return;
}
