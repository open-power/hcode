/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/ippe/ioa/io_lib.h $     */
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
// vbr16082300 |vbr     | get_enabled_lanes() now returns 0 in bits 24-31.
// vbr16081900 |vbr     | Adjusted the size of variables in the gcr_addr struct.
// vbr16081800 |vbr     | Moved some functions from eo_common to io_lib (and renamed some).
// vbr16081700 |vbr     | Added address range checking to pg_addr() and pl_addr() functions.
// vbr16072700 |vbr     | Modified set_debug_state() to no longer read the debug_state before setting it (saves 1 instruction per call)
// vbr16072100 |vbr     | Added div_uint32 (~216B saved versus __divsi3) and mult_int16 (~72B saved and much faster than __mulsi3)
// vbr16071200 |vbr     | Changed to rx_eye_opt_state for set_debug_state.
// vbr16070700 |vbr     | Removed deprecated put/get; minor stack/code size optimizations
// vbr16070100 |vbr     | Removed RMW option from put_ptr_int (only does RMW).
// vbr16062800 |vbr     | Optimization of put_ptr wrapper
// mbs16062400 |mbs     | Added gcr_addr struct
// mbs16062400 |mbs     | Added put_ptr, put_ptr_fast, and get_ptr functions
// vbr16060700 |vbr     |- Simplified TwosCompToInt()
// vbr16052700 |vbr     |- Removed hw write from debug_state
// vbr16052400 |vbr     |- Added set_debug_state
// vbr16050500 |vbr     |- Moved more from eo_common to io_lib (mem_regs, functions)
// vbr16050300 |vbr     |- Added lcl_get()
// vbr16042100 |vbr     |- Moved helpful constants from eo_common.h
// mbs16040800 |mbs     |- Added instance parm to mmio_put and mmio_get, and adjusted bit fields
// -----------------------------------------------------------------------------

#ifndef _IO_LIB_H_
#define _IO_LIB_H_

#define IOO 1

#include <stdbool.h>
#include <stdint.h>

#include "pk.h"

#include "ppe_mem_reg_const_pkg.h"
#include "ppe_com_reg_const_pkg.h"
#include "ppe_opt_reg_const_pkg.h"


////////////////////////////////////////////////////////////////////////////////////////////
// MATH FUNCTIONS
// Most of these are so simple they should remain inline.
// Some can even be converted to macros (if careful to avoid double evaluation).
////////////////////////////////////////////////////////////////////////////////////////////

// Absolute value function to replace stdlib::abs()
// Note that it should compile to three instructions which are essentially a conditional NOT(v)+1:
// ffff1b00:    7d 47 fe 70     srawi   r7,r10,31
// ffff1b04:    7c e8 52 78     xor     r8,r7,r10
// ffff1b08:    7d 07 40 50     subf    r8,r7,r8
//static inline int abs(int v) { return ((v < 0) ? -v : v); }

// Min/Max functions. MIN/MAX macros also exist in pk.h
//static inline int min(int a, int b) { return ((a < b) ? a : b); }
//static inline int max(int a, int b) { return ((a > b) ? a : b); }

//Convert a two's complement value to an integer, length is number of bits of input (two's complement) value
static inline int TwosCompToInt(int val, int length)
{
    return (val << (32 - length) >> (32 - length));
}

//Convert a signed-magnitude value to an integer, length is number of bits of input (signed-magnitude) value
static inline int SignedMagToInt(int val, int length)
{
    int mask = (1 << (length - 1)) - 1;
    int ret_val = val & mask;

    if (val > ret_val)
    {
        ret_val = -ret_val;
    }

    return ret_val;
}

//Convert an integer to a signed-magnitude value, length is number of bits of output (signed-magnitude) value
static inline int IntToSignedMag(int val, int length)
{
    int mag = (val < 0) ? -val : val; //abs(val);
    int sign = (val < 0) ? (1 << (length - 1)) : 0;
    return (sign | mag);
}

// Convert servo_result (8-bit two's complement value) to a 32-bit integer; probably more efficeint than the TwosCompToInt function
static inline int ServoResultToInt(int v)
{
    return (v << 24 >> 24);    // This should result in an extsb instruction
}

// Convert DDC left/right edge (6-bit two's complement value) to a 32-bit integer; probably more efficeint than the TwosCompToInt function
static inline int DdcEdgeToInt(int v)
{
    return (v << 26 >> 26);
}

// Convert path_offset (6-bit two's complement value) to a 32-bit integer; probably more efficeint than the TwosCompToInt function
static inline int PathOffsetToInt(int v)
{
    return (v << 26 >> 26);
}

// Simple unsigned integer divide - returns floor(a/b) rather than rounding. Good to use when the expected result is small.
// Inline since very simple function that isn't used often.
static inline uint32_t div_uint32(uint32_t a, uint32_t b)
{
    int count = -1;
    int val = a;

    do
    {
        val -= b;
        count++;
    }
    while (val > 0);

    return ((uint32_t)count);
}

// Simple signed 16x16 multiply (with a 32-bit result) that is meant to take advantage of the PPE's 16x16 multiplier.
// Do not pass in inputs as int16 because that causes the compiler to include extra instructions as it promotes everything to 32-bits.
// This function only looks at the bottom 16 bits of the value passed in, so it does not matter if it is a 32-bit input.
// Inline since it reduces to a single instruction.
static inline int mult_int16(int a, int b)
{
    int val;
    // mullhw - Multiply Low Halfword to Word Signed
    // (RT)0:31 <- (RA)16:31 x (RB)16:31 signed
    // The low-order halfword of RA is multiplied by the low-order halfword of RB. The resulting signed product replaces the contents of RT.
    asm(
        "mullhw %[RT], %[RA], %[RB]"
        : [RT] "=r" (val)
        : [RA] "r"  (a), [RB] "r"  (b)
    );
    return val;
}


// Simple macros for bit set/clear, register read/write, etc
// Address translation for RegDef to mem_reg. This must be used for mem_regs accesses.
// RX Per-Group Regs: 0b10xxxxxxx -> 0b11xxxxxxx (last 128 registers)
// RX Per-Lane Regs (0x60-0x67, 0x70-0x77): 0b0011x0xxx -> 0byyyyyxxxx (y = 5-bit lane #)
// Takes RegDef address (a), group/thread (g), and lane (l)
#define pg_addr(a, g) ({ PK_STATIC_ASSERT((a)>=0x100 && (a)<=0x17F); ((a) | 0x180); })
#define pl_addr(a, g, l) ({ PK_STATIC_ASSERT(((a)>=0x60 && (a)<=0x67) || ((a)>=0x70 && (a)<=0x77)); ( ((a) & 0x007) | (((a) & 0x010) >> 1) | ((l) << 4) ); })

// bit_set/bit_clr take a register (r) and a mask (m) - NOT bit position
#define bit_set(r, m) (r |= (m))
#define bit_clr(r, m) (r &= ~(m))

// bitfield_put/get take a register (r), a mask (m), a shift (s), and a value (v) for put
#define bitfield_get(r, m, s) ((r & (m)) >> (s))
#define bitfield_put(r, m, s, v) (r = ( (r & ~(m)) | (((v) << (s)) & (m)) ))

// put/get for work regs takes an address (a), a mask (m), a shift (s), and a value (v) for put
#define mem_regs_u16_get(a, m, s) (bitfield_get(mem_regs_u16[a], m, s))
#define mem_regs_u16_put(a, m, s, v) (bitfield_put(mem_regs_u16[a], m, s, v))
#define mem_regs_u16_bit_set(a, m) (bit_set(mem_regs_u16[a], m))
#define mem_regs_u16_bit_clr(a, m) (bit_clr(mem_regs_u16[a], m))

// put/get for fw regs takes an address (a), a mask (m), a shift (s), and a value (v) for put
#define fw_regs_u16_get(a, m, s) (bitfield_get(fw_regs_u16[a], m, s))
#define fw_regs_u16_put(a, m, s, v) (bitfield_put(fw_regs_u16[a], m, s, v))
#define fw_regs_u16_bit_set(a, m) (bit_set(fw_regs_u16[a], m))
#define fw_regs_u16_bit_clr(a, m) (bit_clr(fw_regs_u16[a], m))
#define fw_addr(a, g) ( (a) )



////////////////////////////////////////////////////////////////////////////////////////////
// SLEEP & WAIT
////////////////////////////////////////////////////////////////////////////////////////////
// Constants to use with io_spin.
// Have seperate constants for IOO and NV since they are different images and have different grid clock frequencies.
// For IOF, we use a single image regardless of whether we are in 4:1 or 8:1 mode; for the code to function correctly,
// 1 us must be specified in cycles of the slower clock bewteen the two modes.
#define cycles_1us 201
#define ui_per_cycle 128

// Wait by spinning (busy wait)
// Input parameter is number of PPE core clock cycles to wait.
// The PPE runs on the slow_clock (nest/8):
// IOO:       C128 clock =  201 MHz = 4.975 ns / cycle
// IOO (NV):  C128 clock =  195 MHz = 5.128 ns / cycle
// IOF (8:1): C64  clock =  250 MHz = 4.000 ns / cycle
// IOF (4:1): C32  clock =  300 MHz = 3.333 ns / cycle
static inline void io_spin(unsigned int cycles)
{
    // Divide cycles by 2 to account for the bdnz instruction we are using to spin taking 2 cycles to execute (page 18 of PPE manual).
    unsigned int loop_cycles = (cycles >> 1);
    unsigned int i = 0;

    for (i = 0; i < loop_cycles; i++)
    {
        // To prevent this loop from being optimized out, we place an empty assembly instruction in the loop.
        // An example of the resulting assembly from run_servo_op() which calls io_spin(500):
        // ffff0960:        39 20 01 f4     li      r9,500
        // ffff0964:        7d 29 03 a6     mtctr   r9
        // ffff0968:        42 00 00 00     bdnz    ffff0968 <run_servo_op+0x54>
        asm(""); // empty assembly instruction so this loop does not get optimized out
    }
}//io_spin

// Wrapper for io_spin in terms of UI
static inline void io_spin_ui(unsigned int ui)
{
    unsigned int cycles = (ui / ui_per_cycle);
    io_spin(cycles);
} //io_spin_ui

// Wrapper for io_spin in terms of mircoseconds
static inline void io_spin_us(unsigned int us)
{
    unsigned int cycles = (us * cycles_1us);
    io_spin(cycles);
} //io_spin_us


////////////////////////////////////////////////////////////////////////////////////////////
// HW I/O FUNCTIONS
////////////////////////////////////////////////////////////////////////////////////////////
// reg_id options - Since put/get use the user-programmable format, the reg_id is just 0x00 or 0x20 for RX/TX
#define rx_group 0x00
#define tx_group 0x20

// rmw options for put
#define read_modify_write 1
#define fast_write 0

// constant for the lane field to indicate a broadcast put
#define bcast_all_lanes 31

// Local PPE Register Addresses
#define scom_ppe_work1_lcl_addr     0x0260
#define scom_ppe_work2_lcl_addr     0x0270
#define scom_ppe_flags_lcl_addr     0x0280
#define scom_ppe_flags_set_lcl_addr 0x0290
#define scom_ppe_flags_clr_lcl_addr 0x02A0

// SLS Message constants
#define sls_nop             0x00
#define shadow_req          0x01
#define shadow_done         0x02
#define shadow_rpr_req      0x03
#define shadow_rpr_done     0x04
#define unshadow_req        0x05
#define unshadow_done       0x06
#define unshadow_rpr_req    0x07
#define unshadow_rpr_done   0x08
#define sls_exception       0x09
#define sls_init_done       0x0A
#define sls_recal_req       0x0B
#define sls_recal_running   0x0C
#define sls_recal_done      0x0D
#define sls_recal_failed    0x0E
#define sls_recal_abort     0x0F
#define sls_exception2      0x10
#define sls_eye_opt_done    0x18
#define sls_init_done_ack   0x19
#define sls_recal_ack       0x1B
#define sls_recal_abort_ack 0x1F

// FW register map
#define fw_ctl_reg_addr         0x00
#define fw_stop_thread_startbit 0x01
#define fw_stop_thread_stopbit  0x01
#define fw_stop_thread_mask     0x80
#define fw_stop_thread_shift      15


// Address Forming FUNCTIONS and types
// IOF: This struct is only 25B, but gets re-aligned to 32B.
// IOO: This struct is only 23B, but gets re-aligned to 24B.
typedef struct struct_gcr_addr
{
    // Input data
    uint8_t bus_id;
    uint8_t reg_id;
    uint8_t lane;

    // Calculated values
    uint32_t gcr_port_addr;
    uint64_t gcr_write_packet;
    uint64_t gcr_read_packet;
} t_gcr_addr;

void set_gcr_addr(t_gcr_addr* gcr_addr, int bus_id, int reg_id, int lane);
void set_gcr_addr_bus_id(t_gcr_addr* gcr_addr, int bus_id);
void set_gcr_addr_reg_id(t_gcr_addr* gcr_addr, int reg_id);
void set_gcr_addr_lane(t_gcr_addr* gcr_addr, int lane);

//#if defined(IOO) || defined(NV)
//static inline int get_gcr_addr_thread(t_gcr_addr *gcr_addr) {return 0;}
//#endif
static inline int get_gcr_addr_bus_id(t_gcr_addr* gcr_addr)
{
    return gcr_addr->bus_id;
}
static inline int get_gcr_addr_reg_id(t_gcr_addr* gcr_addr)
{
    return gcr_addr->reg_id;
}
static inline int get_gcr_addr_lane  (t_gcr_addr* gcr_addr)
{
    return gcr_addr->lane;
}


// MMIO Port
void mmio_put(int instance, int addr, int data);
uint32_t mmio_get(int instance, int addr);

// GCR Ports
void gcr_wr_raw(t_gcr_addr* gcr_addr, uint64_t packet);
void put_ptr_fast_int(t_gcr_addr* gcr_addr, uint64_t reg_addr, int shift_amt, int data);
void put_ptr_int     (t_gcr_addr* gcr_addr, uint64_t reg_addr, uint64_t and_mask, int shift_amt,
                      int data); // always does read-modify-write
uint32_t get_ptr_int (t_gcr_addr* gcr_addr, uint64_t reg_addr, uint64_t and_mask, int shift_amt);

// Inline functions the pre-shift constant inputs (compiler should dissolve these)
static inline void put_ptr_fast(t_gcr_addr* gcr_addr, uint64_t reg_addr, int endbit, int data)
{
    put_ptr_fast_int(
        gcr_addr,
        (reg_addr << (63 - 25)), // reg_addr absolute shift - precomputed by compiler
        (4 + 15 - endbit), // shift_amt - precomputed by compiler
        data
    );
}

// When rmw=0, this is the same as calling put_ptr_fast. Using a macro since does some weird code duplication when inline.
#define put_ptr(gcr_addr, reg_addr, startbit, endbit, data, rmw) { \
        if (rmw) \
            put_ptr_int( \
                         (gcr_addr), \
                         ((uint64_t)(reg_addr) << (63 - 25)), \
                         (~ ( (uint64_t)( ((1 << ((endbit) - (startbit) + 1)) - 1) << (4 + 15 - (endbit)) ) ) ) & 0x00000000000ffff0, \
                         (4 + 15 - (endbit)), \
                         (data) \
                       ); \
        else \
            put_ptr_fast_int( \
                              (gcr_addr), \
                              ((uint64_t)(reg_addr) << (63 - 25)), \
                              (4 + 15 - (endbit)), \
                              (data) \
                            ); \
    }
/*static inline void put_ptr(t_gcr_addr* gcr_addr, uint64_t reg_addr, int startbit, int endbit, int data, int rmw) {
  put_ptr_int(
    gcr_addr,
    (reg_addr << (63 - 25)), // reg_addr absolute shift - precomputed by compiler
    (~ ( (uint64_t)( ((1 << (endbit - startbit + 1)) - 1) << (4 + 15 - endbit) ) ) ) & 0x00000000000ffff0,  // and_mask - precomputed by compiler
    (4 + 15 - endbit), // shift_amt - precomputed by compiler
    data
  );
}*/
#define put_ptr_field(gcr_addr, reg, data, rmw) put_ptr(gcr_addr, reg##_addr, reg##_startbit, reg##_endbit, data, rmw)

static inline uint32_t get_ptr(t_gcr_addr* gcr_addr, uint64_t reg_addr, int startbit, int endbit)
{
    return get_ptr_int (
               gcr_addr,
               (reg_addr << (63 - 25)), // reg_addr absolute shift - precomputed by compiler
               ((1 << (endbit - startbit + 1)) - 1) << (4 + 15 - endbit),  // and_mask - precomputed by compiler
               (4 + 15 - endbit) // shift_amt - precomputed by compiler
           );

}
#define get_ptr_field(gcr_addr, reg) get_ptr(gcr_addr, reg##_addr, reg##_startbit, reg##_endbit)

void put_ptr_fast_id(t_gcr_addr* gcr_addr, int reg_id, uint64_t reg_addr, int endbit, int data);
void put_ptr_id     (t_gcr_addr* gcr_addr, int reg_id, uint64_t reg_addr, int startbit, int endbit, int data, int rmw);
uint32_t get_ptr_id (t_gcr_addr* gcr_addr, int reg_id, uint64_t reg_addr, int startbit, int endbit);


// Local Registers
void lcl_put(int reg_addr, int width, int data);
uint32_t lcl_get(int reg_addr, int width);
void set_fir();


////////////////////////////////////////////////////////////////////////////////////////////
// SERVO OP FUNCTIONS
////////////////////////////////////////////////////////////////////////////////////////////
// Run a servo op and wait to complete; do not read/return result. Slow procedure, so not much advantage to inline.
void run_servo_op(t_gcr_addr* gcr_addr, unsigned int servo_op, bool recal);

// Run a servo op and wait for result; returns two's complement integer.
// Does so little that makes sense to inline, however gcc chooses not to inline it (probably since it is called so much).
int run_servo_op_and_get_result(t_gcr_addr* gcr_addr, unsigned int servo_op, bool recal);


#endif //_IO_LIB_H_
