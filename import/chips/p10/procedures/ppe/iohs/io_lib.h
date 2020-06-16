/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/procedures/ppe/iohs/io_lib.h $               */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019,2020                                                    */
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
// *! FILENAME    : io_lib.h
// *! TITLE       :
// *! DESCRIPTION :
// *!
// *! OWNER NAME  : Vikram Raj          Email: vbraj@us.ibm.com
// *! BACKUP NAME : Mike Spear          Email: mspear@us.ibm.com
// *!
// *!---------------------------------------------------------------------------
// CHANGE HISTORY:
//------------------------------------------------------------------------------
// Version ID: |Author: | Comment:
//-------------|--------|-------------------------------------------------------
// vbr19111500 |vbr     | Initial implementation of debug levels
// vbr19081300 |vbr     | Removed mult_int16 (not needed for ppe42x)
// bja19081900 |bja     | ptr_ary macros save reg access info in an array, which is smaller than making many get/set_ptr calls
// vbr19051700 |vbr     | HW491895: Change latch_dac reverse from twos complement to ones complement negation (match HW).
// vbr19051400 |vbr     | HW491892: Change VDAC from 9-bit SM to 8-bit twos_comp (added new conversion wrappers)
// vbr19031300 |vbr     | Removed inlining on some set_gcr_addr_* functions.  Added new zcal_group and removed unused fir_group.
// gap19031300 |gap     | Rename TwosCompTo* to IntTo*, simplify IntToGray6 and Gray6ToInt
// gap19031200 |gap     | Added Gray5IQToInt, Gray6ToInt, TwosCompToGray5IQ, and TwosCompToGray6
// mbs19021800 |mbs     | Replaced mmio functions with ll and msg functions for the dl ppe to use
// vbr19011500 |vbr     | Max number of threads changed from 8 to 5.
// vbr18120400 |vbr     | Updated stopwatch to use constant from pk_app_cfg for divider. Improved local put/get functions.
// vbr18112900 |vbr     | Added new fir code constants.
// vbr18111400 |vbr     | Added fir code constants for set_fir function.
// vbr18102600 |vbr     | Added FIR local address constant.
// vbr18101700 |vbr     | Added scaled_microsecond global.  Added stopwatch macros for measuring code time.
// vbr18101000 |vbr     | Return the dividend on a divide by 0 in div_uint32 rather than hanging.
// vbr18100200 |vbr     | Updated run_servo_op wrappers to be more explicit abou setting of fir.
// vbr18091200 |vbr     | Increased the size of img_regs to 32B.
// vbr18081701 |vbr     | Added some assumption checking
// vbr18072000 |vbr     | HW456268: Updated for P10 where PPE runs at 250MHz (2GHz PAU clock divided by 8).
// vbr18030500 |vbr     | Further performance enhancements based on changing the gcr packet format.
// vbr18030200 |vbr     | Performance enhancements for hw reg access functions.
// vbr18022200 |vbr     | HW435186: run_servo_ops checks (and saves) servo_status and has option to set FIR on error.
// vbr17111500 |vbr     | Set FIR on divide by 0 in div_uint32().
// vbr17110100 |vbr     | Removed gcr_port (only 1 port).
// vbr17082801 |vbr     | Added mem_pg/pl_field_get/put, fw_field_get/put, and img_field_get/put wrappers. Improved the get/put_ptr_field wrappers.
// vbr17082800 |vbr     | Added get_ptr_field, put_ptr_field, and put_ptr_field_fast wrappers.
// vbr17081700 |vbr     | Increased fw_regs to 16B per thread.
// vbr17071801 |vbr     | Removed servo_queue_depth variable
// vbr17071800 |vbr     | Added div-by-0 check to div_uint32
// vbr17062900 |vbr     | Removed some wrappers
// vbr17062801 |vbr     | Added img_addr() and switched mem_regs/img_regs to moving pointers and added _base pointers.
// vbr17062800 |vbr     | Added functions for accessing img_regs.
// vbr17062700 |vbr     | Increased to 8 IO threads and added img_regs.
// vbr17062100 |vbr     | Updated run_servo_ops and added wrappers to work with rx_servo_disable_result=1.
// vbr17062100 |vbr     | Updated for increase in servo result size from 8 bits to 10 bits.
// vbr17062000 |vbr     | Added servo_queue_depth constant.
// vbr17061400 |vbr     | Added new return codes and updated comments.
// vbr17051900 |vbr     | Updated mem_regs address translation for the new definitions.
// vbr17051800 |vbr     | Remove IOF code.
// vbr17042700 |vbr     | Removed PHASE and DD switches (using PHASE=2, DD=2)
// vbr17042500 |vbr     | Added IOO thread support
// vbr17041200 |vbr     | Added recal_bit to run_servo_ops.
// vbr16120600 |vbr     | Added limit function to limit a value to within [min, max]
// vbr16102500 |vbr     | Split recal filter and self-seed into seperate inputs to run_servo_op
// mtk16102000 |mtk     | Added fir_group for register access
// vbr16101900 |vbr     | Added global variable to indicate the final thread in the round robin chain.
// mtk16100601 |mtk     | Added done_fin tracking to struct_sls_lane_ctl
// mtk16093001 |mtk     | Moved SLS structs to io_lib.h for broader use
// vbr16090900 |vbr     | Moved FW Reg consants into a new header file.
// vbr16082600 |vbr     | Use NOP instead of ABORT for sls_abort in DD1.
// vbr16082500 |vbr     | Converted some functions to macros
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

#include <stdbool.h>
#include <stdint.h>

#include "pk.h"

#include "ppe_mem_reg_const_pkg.h"
#include "ppe_com_reg_const_pkg.h"

///////////////////////////////////////////////////////////////////////////////////////
// PPE FIR Codes and Set Function
// Masks are defined for a 16 bit register so need to shift into the proper position
///////////////////////////////////////////////////////////////////////////////////////
#define fir_code_recal_abort     (ppe_fir_recal_abort_mask    << 16)
#define fir_code_fatal_error     (ppe_fir_fatal_error_mask    << 16)
#define fir_code_warning         (ppe_fir_warning_mask        << 16)
#define fir_code_dft_error       (ppe_fir_dft_error_mask      << 16)
#define fir_code_recal_not_run   (ppe_fir_recal_not_run_mask  << 16)
#define fir_code_thread_locked   (ppe_fir_thread_locked_mask  << 16)

void set_fir(uint32_t fir_code);


///////////////////////////////////////////////////////////////////////////////////////
// Return Codes
// Selected so that no_error is a 'false' for conditionals and error is a 'true'.
// Also see return codes in eo_common.h for eyeopt functions.
///////////////////////////////////////////////////////////////////////////////////////
#define rc_no_error  0x00
#define rc_error     0x01
#define rc_warning   0x02
#define rc_pass      rc_no_error
#define rc_fail      rc_error


///////////////////////////////////////////////////////////////////////////////////////
// Polling interval between gcr reads of servo_done or ddc_done when no threading.
// This does not include the ~1us each gcr read takes.
///////////////////////////////////////////////////////////////////////////////////////
#if PK_THREAD_SUPPORT == 0
    #define polling_interval_us 1
#endif


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
static inline int abs(int v)
{
    return ((v < 0) ? -v : v);
}

// Min/Max functions. MIN/MAX macros also exist in pk.h
static inline int min(int a, int b)
{
    return ((a < b) ? a : b);
}
static inline int max(int a, int b)
{
    return ((a > b) ? a : b);
}

// Limit a value between Min/Max values (inclusive): [min_val, max_val]
static inline int limit(int val, int min_val, int max_val)
{
    // Alternate method which seems less efficient: return ( (val < min_val) ? min_val : ((val > max_val) ? max_val : val) );
    int floor_val = max(val, min_val);
    return min(floor_val, max_val);
}

// Convert a two's complement value to an integer, length is number of bits of input (two's complement) value
static inline int TwosCompToInt(int val, int length)
{
    return (val << (32 - length) >> (32 - length));
}

// Convert a signed-magnitude value to an integer, length is number of bits of input (signed-magnitude) value
static inline int SignedMagToInt(int val, int length)
{
    int mask = (1 << (length - 1)) - 1;
    int ret_val = val & mask;
#ifdef INVERT_SM

    // Inverted polarity
    if (val == ret_val)
    {
        ret_val = -ret_val;
    }

#else

    // Normal polarity
    if (val > ret_val)
    {
        ret_val = -ret_val;
    }

#endif
    return ret_val;
}

// Convert an integer to a signed-magnitude value, length is number of bits of output (signed-magnitude) value
static inline int IntToSignedMag(int val, int length)
{
    int mag = (val < 0) ? -val : val; //abs(val);
#ifdef INVERT_SM
    // Inverted polarity
    int sign = (val > 0) ? (1 << (length - 1)) : 0;
#else
    // Normal polarity
    int sign = (val < 0) ? (1 << (length - 1)) : 0;
#endif
    return (sign | mag);
}

// Convert a rx_*_latch_dac_* value to an integer
static inline int LatchDacToInt(int val)
{
#ifdef INVERT_DACS
    return ( ~TwosCompToInt(val, rx_ad_latch_dac_n000_width) );
#else
    return ( TwosCompToInt(val, rx_ad_latch_dac_n000_width) );
#endif
}

// Convert an integer to a rx_*_latch_dac_* value
static inline int IntToLatchDac(int val)
{
    const int mask = (1 << rx_ad_latch_dac_n000_width) - 1;
#ifdef INVERT_DACS
    return (~val & mask);
#else
    return (val & mask);
#endif
}

// Convert a 5-bit gray code to int for dcc IQ usage
//   1) convert 5-bit binary reflected gray code to an unsigned int value from 0 to 63
//   2) convert unsigned int value to int, mapping 0..31 --> -15..16
static inline int Gray5IQToInt(unsigned int gray_i)
{
    int int_l;
    int_l = (gray_i >> 4) ^ (gray_i >> 3) ^ (gray_i >> 2) ^ (gray_i >> 1) ^ gray_i;
    int_l -= 15;
    return int_l;
} //Gray5IQToInt

// Convert a 6-bit gray code value to int for dcc I and Q usage
//   1) convert 6-bit binary reflected gray code to 6 bit twos complement
//   2) sign extend twos complement
static inline int32_t Gray6ToInt(unsigned int gray_i)
{
    int32_t int_l;
    int_l = (gray_i >> 5) ^ (gray_i >> 4) ^ (gray_i >> 3) ^ (gray_i >> 2) ^ (gray_i >> 1) ^ gray_i;
    int_l = int_l << 26 >> 26;
    return int_l;
} //Gray6ToInt

// Convert a 5-bit gray code value to 2's complement value for dcc IQ usage
//   1) convert int value to unsigned int, mapping -15..16 --> 0..31
//   2) convert 5 bit unsigned int value to 5-bit 'binary-reflected Gray code'
static inline unsigned int IntToGray5IQ(int int_i)
{
    unsigned int gray5iq_l;
    int_i += 15 ;
    gray5iq_l = int_i ^ (int_i >> 1);
    return gray5iq_l;
} //IntToGray5IQ

// Convert an int to a 6-bit gray code for dcc I and Q usage
//   1) convert int to 6-bit twos complement
//   2) convert 6 bit twos complement value to 6-bit 'binary-reflected Gray code'
static inline unsigned int IntToGray6(int int_i)
{
    unsigned int gray6_l;
    int_i = int_i & 0x3F;
    gray6_l = int_i ^ (int_i >> 1);
    return gray6_l;
} //IntToGray6

// Simple unsigned integer divide - returns floor(a/b) rather than rounding. Good to use when the expected result is small.
// Much more efficient that the emulated __divsi3 and __udivsi3 functions used for the '/' operator with a non-power-of-2 divisor.
// On a divide by 0, sets a FIR and returns the dividend.
// Inline since very simple function that isn't used often.
static inline uint32_t div_uint32(uint32_t a, uint32_t b)
{
    if(b == 0)
    {
        set_fir(fir_code_fatal_error);
        return a;
    }

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


///////////////////////////////////////////////////////////////
// RAM REGISTER (MEM_REGS) FUNCTIONS
///////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////////
// Mem Regs: 1KB section of memory allocated by the linker (link_ioo.cmd) in the RAM.
// It is actually max_io_threads x 1KB sections (1 per thread/bus).
// See link_ioo.cmd for actual offset addresses.
// Using a uint16_t* so indexed 2B at a time. The array _size could be calculated using the linker symbols, but hard code it instead.
// Marked as volatile so always accesses SRAM instead of local register copy.
////////////////////////////////////////////////////////////////////////////////////////////
extern volatile uint16_t* mem_regs_u16;
extern volatile uint16_t* mem_regs_u16_base;
extern uint16_t _mem_regs0_start __attribute__ ((section ("iodata0")));
#define mem_regs_u16_size 512

////////////////////////////////////////////////////////////////////////////////////////////
// FW Regs: 16B section of memory allocated by the linker (link_ioo.cmd) in the RAM.
// It is actually max_io_threads x 16B (1 per thread/bus).
// See link_ioo.cmd for actual offset addresses.
// Using a uint16_t* so indexed 2B at a time. The array _size could be calculated using the linker symbols, but hard code it instead.
// Marked as volatile so always accesses SRAM instead of local register copy.
////////////////////////////////////////////////////////////////////////////////////////////
extern volatile uint16_t* fw_regs_u16;
extern volatile uint16_t* fw_regs_u16_base;
extern uint16_t _fw_regs0_start __attribute__ ((section ("iodatafw0")));
#define fw_regs_u16_size 8

////////////////////////////////////////////////////////////////////////////////////////////
// Img Regs: 32B section of memory allocated by the linker (link_ioo.cmd) in the RAM.
// See link_ioo.cmd for actual offset address.
// Using a uint16_t* so indexed 2B at a time. The array _size could be calculated using the linker symbols, but hard code it instead.
// Marked as volatile so always accesses SRAM instead of local register copy.
////////////////////////////////////////////////////////////////////////////////////////////
extern volatile uint16_t* img_regs_u16;
extern uint16_t _img_regs_start __attribute__ ((section ("imgdata")));
#define img_regs_u16_size 16


// Simple macros for bit set/clear, register read/write, etc
// Address translation for RegDef to mem_reg. This must be used for mem_regs accesses.
// PK_STATIC_ASSERT() is used to provide compile-time checking of address validity.
// RX Per-Group Regs: 0x180 - 0x1FF (last 128 registers)
// RX Per-Lane Reg :  0x000 - 0x00F (16 registers x 24 lanes) => 0byyyyyxxxx (y = 5-bit lane #, x = 4-bit per-lane register)
// Takes RegDef address (a), group/thread (g), and lane (l)
#if PK_THREAD_SUPPORT
    #define pg_base_addr(a, g)    ({ PK_STATIC_ASSERT((a)>=0x180 && (a)<=0x1FF); ( (a) + ((g) * mem_regs_u16_size) ); })
    #define pl_base_addr(a, g, l) ({ PK_STATIC_ASSERT((a)>=0x000 && (a)<=0x00F); ( ((a) | ((l) << 4)) + ((g) * mem_regs_u16_size) ); })
    #define pg_addr(a)            pg_base_addr(a, 0)
    #define pl_addr(a, l)         pl_base_addr(a, 0, l)
#else
    #define pg_base_addr(a, g)    ({ PK_STATIC_ASSERT((a)>=0x180 && (a)<=0x1FF); ( (a) ); })
    #define pl_base_addr(a, g, l) ({ PK_STATIC_ASSERT((a)>=0x000 && (a)<=0x00F); ( ((a) | ((l) << 4)) ); })
    #define pg_addr(a)            pg_base_addr(a, 0)
    #define pl_addr(a, l)         pl_base_addr(a, 0, l)
#endif

// bit_set/bit_clr take a register (r) and a mask (m) - NOT bit position
#define bit_set(r, m) (r |= (m))
#define bit_clr(r, m) (r &= ~(m))

// bitfield_put/get take a register (r), a mask (m), a shift (s), and a value (v) for put
#define bitfield_get(r, m, s) ((r & (m)) >> (s))
#define bitfield_put(r, m, s, v) (r = ( (r & ~(m)) | (((v) << (s)) & (m)) ))

// put/get for work regs (mem_regs) takes an address (a), a mask (m), a shift (s), and a value (v) for put
#define mem_regs_u16_get(a, m, s)    (bitfield_get(mem_regs_u16[a], m, s))
#define mem_regs_u16_put(a, m, s, v) (bitfield_put(mem_regs_u16[a], m, s, v))
#define mem_regs_u16_bit_set(a, m)   (bit_set(mem_regs_u16[a], m))
#define mem_regs_u16_bit_clr(a, m)   (bit_clr(mem_regs_u16[a], m))

#define mem_regs_u16_base_get(a, m, s)    (bitfield_get(mem_regs_u16_base[a], m, s))
#define mem_regs_u16_base_put(a, m, s, v) (bitfield_put(mem_regs_u16_base[a], m, s, v))
#define mem_regs_u16_base_bit_set(a, m)   (bit_set(mem_regs_u16_base[a], m))
#define mem_regs_u16_base_bit_clr(a, m)   (bit_clr(mem_regs_u16_base[a], m))

// Wrapper functions to simplify the calls a bit. Seperate versions for PG and PL fields.
// Takes a field name and lane instead of address/mask/shift.  Also takes a value.
#define mem_pg_field_get(field)              (mem_regs_u16_get(pg_addr(field##_addr),         field##_mask, field##_shift))
#define mem_pl_field_get(field, lane)        (mem_regs_u16_get(pl_addr(field##_addr, (lane)), field##_mask, field##_shift))
#define mem_pg_field_put(field, val)         (mem_regs_u16_put(pg_addr(field##_addr),         field##_mask, field##_shift, (val)))
#define mem_pl_field_put(field, lane, val)   (mem_regs_u16_put(pl_addr(field##_addr, (lane)), field##_mask, field##_shift, (val)))
#define mem_pg_bit_set(field)                (mem_regs_u16_bit_set(pg_addr(field##_addr),         field##_mask))
#define mem_pl_bit_set(field, lane)          (mem_regs_u16_bit_set(pl_addr(field##_addr, (lane)), field##_mask))
#define mem_pg_bit_clr(field)                (mem_regs_u16_bit_clr(pg_addr(field##_addr),         field##_mask))
#define mem_pl_bit_clr(field, lane)          (mem_regs_u16_bit_clr(pl_addr(field##_addr, (lane)), field##_mask))

// put/get for fw_regs takes an address (a), a mask (m), a shift (s), and a value (v) for put
#define fw_regs_u16_get(a, m, s)    (bitfield_get(fw_regs_u16[a], m, s))
#define fw_regs_u16_put(a, m, s, v) (bitfield_put(fw_regs_u16[a], m, s, v))
#define fw_regs_u16_bit_set(a, m)   (bit_set(fw_regs_u16[a], m))
#define fw_regs_u16_bit_clr(a, m)   (bit_clr(fw_regs_u16[a], m))

#define fw_regs_u16_base_get(a, m, s)    (bitfield_get(fw_regs_u16_base[a], m, s))
#define fw_regs_u16_base_put(a, m, s, v) (bitfield_put(fw_regs_u16_base[a], m, s, v))
#define fw_regs_u16_base_bit_set(a, m)   (bit_set(fw_regs_u16_base[a], m))
#define fw_regs_u16_base_bit_clr(a, m)   (bit_clr(fw_regs_u16_base[a], m))

#if PK_THREAD_SUPPORT
    #define fw_base_addr(a, g) ( (a) + ((g) * fw_regs_u16_size) )
    #define fw_addr(a)         fw_base_addr(a, 0)
#else
    #define fw_base_addr(a, g) ( (a) )
    #define fw_addr(a)         fw_base_addr(a, 0)
#endif

// Wrapper functions to simplify the calls a bit.
// Takes a field name instead of address/mask/shift and incorporates the fw_addr() call.  Also takes a value.
#define fw_field_get(field)        (fw_regs_u16_get(fw_addr(field##_addr), field##_mask, field##_shift))
#define fw_field_put(field, val)   (fw_regs_u16_put(fw_addr(field##_addr), field##_mask, field##_shift, (val)))
#define fw_bit_set(field)          (fw_regs_u16_bit_set(fw_addr(field##_addr), field##_mask))
#define fw_bit_clr(field)          (fw_regs_u16_bit_clr(fw_addr(field##_addr), field##_mask))

// put/get for img_regs takes an address (a), a mask (m), a shift (s), and a value (v) for put
#define img_regs_u16_get(a, m, s)    (bitfield_get(img_regs_u16[a], m, s))
#define img_regs_u16_put(a, m, s, v) (bitfield_put(img_regs_u16[a], m, s, v))
#define img_regs_u16_bit_set(a, m)   (bit_set(img_regs_u16[a], m))
#define img_regs_u16_bit_clr(a, m)   (bit_clr(img_regs_u16[a], m))

#define img_addr(a) ( (a) )

// Wrapper functions to simplify the calls a bit.
// Takes a field name instead of address/mask/shift and incorporates the img_addr() call.  Also takes a value.
#define img_field_get(field)        (img_regs_u16_get(img_addr(field##_addr), field##_mask, field##_shift))
#define img_field_put(field, val)   (img_regs_u16_put(img_addr(field##_addr), field##_mask, field##_shift, (val)))
#define img_bit_set(field)          (img_regs_u16_bit_set(img_addr(field##_addr), field##_mask))
#define img_bit_clr(field)          (img_regs_u16_bit_clr(img_addr(field##_addr), field##_mask))


///////////////////////////////////////
// HALF RATE (4:1) MODE
///////////////////////////////////////
//#define half_rate_mode mem_regs_u16_base_get(pg_addr(rx_half_rate_mode_datasm_addr, 0), rx_half_rate_mode_datasm_mask, rx_half_rate_mode_datasm_shift)


///////////////////////////////////////
// THREAD BARRIER SEMAPHORE
///////////////////////////////////////
#if PK_THREAD_SUPPORT
    // Max number of threads is limited to this number by the mem_regs/fw_regs allocation in the linker script.
    #define max_io_threads 5
    extern PkSemaphore thread_barrier;
    extern int final_thread;
#endif


///////////////////////////////////////
// THREAD POINTER ADJUSTMENT
///////////////////////////////////////
// This moves the pointers for the mem_reg and fw_regs to a thread's offset.
// It must be called everytime a thread is activated to move the pointer to the current thread's offset.
// This is to reduce the indexing code when accessing the arrays.
static inline void set_pointers(uint8_t thread)
{
    // Use pointer math to adjust the pointer by u16 array entries from the base pointer.
    mem_regs_u16 = &_mem_regs0_start + (thread * mem_regs_u16_size);
    fw_regs_u16  = &_fw_regs0_start  + (thread * fw_regs_u16_size);
} //set_pointers


////////////////////////////////////////////////////////////////////////////////////////////
// SLEEP & WAIT
////////////////////////////////////////////////////////////////////////////////////////////

// Saved value of a scaled microsecond to reduce operations in some places.
// Use u32 instead of PkInterval (u64) since this will always be less than 2^32.
extern uint32_t scaled_microsecond;

// Constants to use with io_spin.
// For IOO, the PPE is always running at 250MHz. However, the UI per cycle depends on bus rate.
// Use the slowest data rate (32Gbps) for UI per cycle so that the code always waits the minimum desired UI.
// For IOF, we use a single image regardless of whether we are in 4:1 or 8:1 mode; for the code to function correctly,
// 1 us must be specified in cycles of the slower clock bewteen the two modes.
#ifdef IOF
    // hr_timebase_rshift=2 gives (cycles + cycles/4) for half rate (4:1) mode.
    // This works out to 250 + 62 = 312 cycles for 1 us which is close to the actual 300 cycles.
    // The number of UI per cycle is half for 4:1 mode versus 8:1 mode.
    #define hr_timebase_rshift 2
    #define cycles_1us 250
    #define ui_per_cycle 64
#endif
#if defined(IOO) || defined(NV)
    #define cycles_1us 250
    #define ui_per_cycle 128
#endif

// Wait by spinning (busy wait)
// Input parameter is number of PPE core clock cycles to wait.
// The PPE runs on the PAU clock / 8:
// P10: PPE clock =  250 MHz = 4.000 ns / cycle
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
#if defined(IOO) || defined(NV)
    unsigned int cycles = (ui / ui_per_cycle);
#endif
#ifdef IOF
    // Adjust for potentially being in 4:1 mode where we are running at half the UI per cycle
    unsigned int cycles;

    if (half_rate_mode)
    {
        cycles = (ui / (ui_per_cycle / 2));
    }
    else
    {
        cycles = (ui / ui_per_cycle);
    }

#endif
    io_spin(cycles);
} //io_spin_ui

// Wrapper for io_spin in terms of mircoseconds
static inline void io_spin_us(unsigned int us)
{
#if defined(IOO) || defined(NV)
    unsigned int cycles = (us * cycles_1us);
#endif
#ifdef IOF
    // Adjust for potentially being in 4:1 mode where the clock is faster.
    // Not using __pk_timebase_rshift because the code does not compile to the desired ASM code when it is used.
    unsigned int cycles;

    if (half_rate_mode)
    {
        cycles = (us * cycles_1us) + ((us * cycles_1us) >> hr_timebase_rshift);
    }
    else
    {
        cycles = (us * cycles_1us);
    }

#endif
    io_spin(cycles);
} //io_spin_us

#if PK_THREAD_SUPPORT
    // Sleep the thread by blocking on the semaphore - allows other threads to run. Takes current thread as a parameter.
    // This can not be inlined since the if...else.. requires that it refer to its own address.
    void io_sleep(int thread);

    // Wait for at least X microseconds/milliseconds by sleeping.
    void io_wait(int thread, PkInterval wait_time);
    #define io_wait_us(thread, wait_time_us) { io_wait((thread), PK_MICROSECONDS((wait_time_us))); }
    #define io_wait_ms(thread, wait_time_ms) { io_wait((thread), PK_MILLISECONDS((wait_time_ms))); }
#endif

// Stopwatch macros for measuring time in the code.
// To avoid doing a divide, we assume a power-of-2 timer base which is close enough to the actual frequency.
#define STOPWATCH_START  PkTimebase sw_start_time = pk_timebase_get();
#define STOPWATCH_STOP { \
        uint32_t sw_time = (uint32_t)(pk_timebase_get() - sw_start_time); \
        uint16_t sw_time_us = sw_time / TIMER_US_DIVIDER; \
        mem_pg_field_put(ppe_debug_stopwatch_time_us, sw_time_us); \
    }


////////////////////////////////////////////////////////////////////////////////////////////
// HW I/O FUNCTIONS
////////////////////////////////////////////////////////////////////////////////////////////
// reg_id options for use in set_gcr_addr_reg_id
#define rx_group    0x00
#define tx_group    0x20
#define zcal_group  0x2E

#define zcal_bus_id  0xE

// rmw options for put
#define read_modify_write 1
#define fast_write 0

// constant for the lane field to indicate a broadcast put
#define bcast_all_lanes 31

// Local IO PPE Register Addresses
#define scom_ppe_work1_lcl_addr       0x0260
#define scom_ppe_work2_lcl_addr       0x0270
#define scom_ppe_flags_lcl_addr       0x0280
#define scom_ppe_flags_set_lcl_addr   0x0290
#define scom_ppe_flags_clr_lcl_addr   0x02A0
#define scom_ppe_func_lcl_addr        0x02B0
#define scom_ppe_fir_lcl_addr         0x02C0
#define scom_ppe_fir_set_lcl_addr     0x02D0
#define scom_ppe_fir_clr_lcl_addr     0x02E0
#define scom_ppe_fir_mask_lcl_addr    0x02F0

// Local PPE Register for configuring timers: [0:3]=watchdog_sel, [4:7]=fit_sel
// Physical register exists in clib.c_ppe_comp.vhdl when INCLUDE_TIMERSEL_REG=1
// Address definition also exists in pk/std/std_register_addresses.h
#define ppe_local_timer_sel_lcl_addr  0x0100
#define ppe_local_timer_sel_width     8

// Only have a single GCR/MMIO port and thus have a fixed address
#define gcr_port_addr 0xC0000200

// Address Forming FUNCTIONS and types
// Threading:    This struct is 12B
// No Threading: This struct is 11B, but gets re-aligned to 12B
typedef struct struct_gcr_addr
{
    // Input data
#if PK_THREAD_SUPPORT
    uint8_t thread;
#endif
    uint8_t bus_id;
    uint8_t reg_id; //rx_group, tx_group
    uint8_t lane;

    // Calculated values
    uint32_t gcr_write_packet;
    uint32_t gcr_read_packet;
} t_gcr_addr;

#if PK_THREAD_SUPPORT
void set_gcr_addr(t_gcr_addr* gcr_addr, int thread, int bus_id, int reg_id, int lane);
static inline void set_gcr_addr_thread(t_gcr_addr* gcr_addr, int thread)
{
    gcr_addr->thread = thread;
}
#else
void set_gcr_addr(t_gcr_addr* gcr_addr, int bus_id, int reg_id, int lane);
#endif
void set_gcr_addr_bus_id(t_gcr_addr* gcr_addr, int bus_id);
void set_gcr_addr_reg_id(t_gcr_addr* gcr_addr, int reg_id);
void set_gcr_addr_lane(t_gcr_addr* gcr_addr, int lane);

#if PK_THREAD_SUPPORT
static inline int get_gcr_addr_thread(t_gcr_addr* gcr_addr)
{
    return gcr_addr->thread;
}
#endif
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


// Link Layer Port
void ll_put(uint32_t addr, uint32_t data);
uint32_t ll_get(uint32_t addr);

// Messag Port
void msg_put(uint64_t data);
uint64_t msg_get();

// GCR Ports - Internal signals.  Use wrapper functions.

// GCR Ports - Internal signals.  Use wrapper functions.
void gcr_wr_raw(t_gcr_addr* gcr_addr, uint64_t packet);
void put_ptr_fast_int(t_gcr_addr* gcr_addr, uint32_t reg_addr, uint32_t data); // fast write, no read-modify-write
//void put_ptr_int     (t_gcr_addr* gcr_addr, uint32_t reg_addr, uint32_t and_mask, int shift_amt, int data); // always does read-modify-write
void put_ptr_int     (t_gcr_addr* gcr_addr, uint32_t reg_addr, uint32_t and_mask,
                      uint32_t data); // always does read-modify-write
uint32_t get_ptr_int (t_gcr_addr* gcr_addr, uint32_t reg_addr, uint32_t and_mask, uint32_t shift_amt);

#define mk_ptr_ary(ary) uint32_t ary[3]
#define asn_ptr_ary(ary, reg) ary[0] = reg##_addr; ary[1] = reg##_startbit; ary[2] = reg##_endbit
#define init_ptr_ary(ary, reg)  mk_ptr_ary(ary); asn_ptr_ary(ary, reg)
//#define init_ptr_ary(ary, reg)  mk_ptr_ary(ary) = { reg##_addr, reg##_startbit, reg##_endbit }

// Macro the pre-shift constant inputs (compiler should dissolve these)
#define put_ptr_fast(gcr_addr, reg_addr, endbit, data) { \
        put_ptr_fast_int( \
                          (gcr_addr), \
                          ((reg_addr) << 16), \
                          ((data) << (15 - (endbit))) \
                        ); \
    }
#define put_ptr_field_fast(gcr_addr, reg, data) put_ptr_fast(gcr_addr, reg##_addr, reg##_endbit, data)

// When rmw=0, this is the same as calling put_ptr_fast. Using a macro since does unwanted code duplication when inline.
#define put_ptr(gcr_addr, reg_addr, startbit, endbit, data, rmw) { \
        if (rmw) \
            put_ptr_int( \
                         (gcr_addr), \
                         ((reg_addr) << 16), \
                         (~ ( ( ((1 << ((endbit) - (startbit) + 1)) - 1) << (15 - (endbit)) ) ) ) & 0x0000ffff, \
                         ((data) << (15 - (endbit))) \
                       ); \
        else \
            put_ptr_fast_int( \
                              (gcr_addr), \
                              ((reg_addr) << 16), \
                              ((data) << (15 - (endbit))) \
                            ); \
    }
#define put_ptr_field(gcr_addr, reg, data, rmw) put_ptr(gcr_addr, reg##_addr, reg##_startbit, reg##_endbit, data, rmw)

#define put_ptr_ary(gcr_addr, ary, data, rmw) put_ptr(gcr_addr, ary[0], ary[1], ary[2], data, rmw)

#define get_ptr(gcr_addr, reg_addr, startbit, endbit) ({ \
        get_ptr_int ( \
                      (gcr_addr), \
                      ((reg_addr) << 16), \
                      ( ((1 << ((endbit) - (startbit) + 1)) - 1) << (15 - (endbit)) ), \
                      (15 - (endbit)) \
                    ); \
    })
#define get_ptr_field(gcr_addr, reg) get_ptr(gcr_addr, reg##_addr, reg##_startbit, reg##_endbit)

#define get_ptr_ary(gcr_addr, ary) get_ptr(gcr_addr, ary[0], ary[1], ary[2])

// The *_id functions are for switching between RX and TX groups before the access and thus add some overhead.
#define put_ptr_fast_id(gcr_addr, reg_id, reg_addr, endbit, data) { \
        set_gcr_addr_reg_id(gcr_addr, reg_id); \
        put_ptr_fast(gcr_addr, reg_addr, endbit, data); \
    }

#define put_ptr_id(gcr_addr, reg_id, reg_addr, startbit, endbit, data, rmw) { \
        set_gcr_addr_reg_id(gcr_addr, reg_id); \
        put_ptr(gcr_addr, reg_addr, startbit, endbit, data, rmw); \
    }

#define get_ptr_id(gcr_addr, reg_id, reg_addr, startbit, endbit) ({ \
        set_gcr_addr_reg_id(gcr_addr, reg_id); \
        get_ptr(gcr_addr, reg_addr, startbit, endbit); \
    })


// Local Register Access
// Making these inline would improve access times (no branches), but increases code size.
void lcl_put_int(uint32_t reg_addr, uint32_t data);
uint32_t lcl_get_int(uint32_t reg_addr, uint32_t shift);

#define lcl_put(reg_addr, width, data) { \
        PK_STATIC_ASSERT((width)>=0 && (width)<=32); \
        lcl_put_int ( \
                      (reg_addr), \
                      ((data) << (32 - (width))) \
                    ); \
    }

#define lcl_get(reg_addr, width) ({ \
        PK_STATIC_ASSERT((width)>=0 && (width)<=32); \
        lcl_get_int ( \
                      (reg_addr), \
                      (32 - (width)) \
                    ); \
    })


////////////////////////////////////////////////////////////////////////////////////////////
// SERVO OP FUNCTIONS
////////////////////////////////////////////////////////////////////////////////////////////

// Run a list of servo ops and return the results in an array (2's complement integers).
// Return value indicates if there was an error reported by the servo status.
// Can disable the pushing (and thus reading and returning) of results to improve speed.
// Can disable the setting of the FIR on a servo error if want to handle the error rather than reporting it.
int run_servo_ops_base(t_gcr_addr* gcr_addr, unsigned int queue, unsigned int num_ops, uint16_t* servo_ops,
                       int32_t* results, bool results_enabled, bool set_fir_on_error);

// Wrapper function for when want result to be pushed by servo ops and read.
// Sets FIR on error.
static inline int run_servo_ops_and_get_results_fir_on_error(t_gcr_addr* gcr_addr, unsigned int queue,
        unsigned int num_ops, uint16_t* servo_ops, int32_t* results)
{
    bool set_fir_on_error = true;
    bool results_enabled  = true;
    int status = run_servo_ops_base(gcr_addr, queue, num_ops, servo_ops, results, results_enabled, set_fir_on_error);
    return status;
} //run_servo_ops_and_get_results

// Wrapper function for when want result to be pushed by servo ops and read.
// Does not set FIR on error.
static inline int run_servo_ops_and_get_results_no_fir_on_error(t_gcr_addr* gcr_addr, unsigned int queue,
        unsigned int num_ops, uint16_t* servo_ops, int32_t* results)
{
    bool set_fir_on_error = false;
    bool results_enabled  = true;
    int status = run_servo_ops_base(gcr_addr, queue, num_ops, servo_ops, results, results_enabled, set_fir_on_error);
    return status;
} //run_servo_ops_and_get_results_no_fir_on_error

// Wrapper function for when do not want results to be pushed.
// Includes the register writes to disable results and then re-enable them when done (since that is the default setting).
// Can disable the setting of the FIR on a servo error if want to handle that in calling function.
int run_servo_ops_with_results_disabled_base(t_gcr_addr* gcr_addr, unsigned int queue, unsigned int num_ops,
        uint16_t* servo_ops, bool set_fir_on_error);

// Wrapper function for when do not want results to be pushed
// Sets FIR on error.
static inline int run_servo_ops_with_results_disabled_fir_on_error(t_gcr_addr* gcr_addr, unsigned int queue,
        unsigned int num_ops, uint16_t* servo_ops)
{
    bool set_fir_on_error = true;
    int status = run_servo_ops_with_results_disabled_base(gcr_addr, queue, num_ops, servo_ops, set_fir_on_error);
    return status;
} //run_servo_ops_with_results_disabled

// Wrapper function for when do not want results to be pushed
// Does not set FIR on error.
static inline int run_servo_ops_with_results_disabled_no_fir_on_error(t_gcr_addr* gcr_addr, unsigned int queue,
        unsigned int num_ops, uint16_t* servo_ops)
{
    bool set_fir_on_error = false;
    int status = run_servo_ops_with_results_disabled_base(gcr_addr, queue, num_ops, servo_ops, set_fir_on_error);
    return status;
} //run_servo_ops_with_results_disabled_no_fir_on_error

// Default wrappers are to set the FIR on a servo error
#define run_servo_ops_and_get_results(gcr_addr, queue, num_ops, servo_ops, results)  run_servo_ops_and_get_results_fir_on_error(gcr_addr, queue, num_ops, servo_ops, results)
#define run_servo_ops_with_results_disabled(gcr_addr, queue, num_ops, servo_ops)     run_servo_ops_with_results_disabled_fir_on_error(gcr_addr, queue, num_ops, servo_ops)


////////////////////////////////////////////////////////////////////////////////////////////
// DEBUG FUNCTIONS
// Some functions and macros to help in debugging.
// These are light weight but the code size and performance hit can add up,
// so allow for a compiler options to enable/disable based on debug level.
////////////////////////////////////////////////////////////////////////////////////////////
#if IO_DEBUG_LEVEL == 0
#define set_debug_state(...) {}
#define set_debug_state_at_level(state, level) {}
#define set_debug_state_at_level_1(state) {}
#define set_debug_state_at_level_2(state) {}
#define set_debug_state_at_level_3(state) {}
#else
// This writes a "state" to the mem_regs when the debug level is exceeded which can be used for tracking execution state.
#define set_debug_state_at_level(state, level) {      \
        PK_STATIC_ASSERT(ppe_debug_state_width == 16); \
        PK_STATIC_ASSERT((level) > 0); \
        if (IO_DEBUG_LEVEL >= (level)) { mem_regs_u16[pg_addr(ppe_debug_state_addr)] = (state); }  \
    }

#define set_debug_state_at_level_1(state) set_debug_state_at_level((state), 1)
#define set_debug_state_at_level_2(state) set_debug_state_at_level((state), 2)
#define set_debug_state_at_level_3(state) set_debug_state_at_level((state), 3)

// set_debug_state(state)         Set ppe_debug_state to state when the IO_DEBUG_LEVEL >= 1
// set_debug_state(state, level)  Set ppe_debug_state to state when the IO_DEBUG_LEVEL >= level
// Overload set_debug_state() to call the appropriate macro based on number of inputs
#define set_debug_state_overload(_1, _2, _func, ...) _func
#define set_debug_state(...) set_debug_state_overload(__VA_ARGS__, set_debug_state_at_level, set_debug_state_at_level_1)(__VA_ARGS__)
#endif //IO_DEBUG_LEVEL


#endif //_IO_LIB_H_
