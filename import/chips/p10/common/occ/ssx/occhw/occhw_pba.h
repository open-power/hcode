/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/occ/ssx/occhw/occhw_pba.h $           */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2016,2020                                                    */
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
#ifndef __OCCHW_PBA_H__
#define __OCCHW_PBA_H__

//-----------------------------------------------------------------------------
// *! (C) Copyright International Business Machines Corp. 2014
// *! All Rights Reserved -- Property of IBM
// *! *** IBM Confidential ***
//-----------------------------------------------------------------------------

/// \file occhw_pba.h
/// \brief PBA unit header.  Local and mechanically generated macros.

/// \todo Add Doxygen grouping to constant groups

#include "pba_register_addresses.h"
#include "pba_firmware_registers.h"

#include "occhw_pba_common.h"

#define POWERBUS_CACHE_LINE_SIZE 128
#define LOG_POWERBUS_CACHE_LINE_SIZE 7

/// The PBA OCI region is always either 0 or 3
#define PBA_OCI_REGION 0

// It is assumed the the PBA BAR sets will be assigned according to the
// following scheme.  There are still many open questions concerning PBA
// setup.

/// The number of PBA Base Address Registers (BARS)
#define PBA_BARS 4

#define PBA_BAR_CHIP    0
#define PBA_BAR_NODE    2
#define PBA_BAR_SYSTEM  3
#define PBA_BAR_CENTAUR 1

#define PBA_BAR_OCC      0    /* OCC image (HOMER) */
#define PBA_BAR_PORE_SLW 2    /* Redundant mapping for SLW offset into HOMER */

// Standard PBA slave assignments, set up by FAPI procedure prior to releasing
// OCC from reset.

/// The number of PBA slaves
#define PBA_SLAVES 4

#define PBA_SLAVE_PORE_GPE 0    /* GPE0/1, but only 1 can access mainstore */
#define PBA_SLAVE_OCC      1    /* 405 I- and D-cache */
#define PBA_SLAVE_PORE_SLW 2
#define PBA_SLAVE_OCB      3

/// The maximum number of bytes a PBA block-copy engine can transfer at once
#define PBA_BCE_SIZE_MAX 4096

/// The base-2 log of the minimum PBA translation window size in bytes
#define PBA_LOG_SIZE_MIN 20

/// The base-2 log of the maximum PBA translation window size in bytes
///
/// Note that windows > 2**27 bytes require the extended address.
#define PBA_LOG_SIZE_MAX 41

/// The number of PBA slaves
#define PBA_SLAVES 4

/// The number of PBA read buffers
#define PBA_READ_BUFFERS 6

/// The number of PBA write buffers
#define PBA_WRITE_BUFFERS 2

// PBASLVCTLn and PBASLVRST macros defined in occhw_pba_common.h

// PBA PowerBus command scope and priority, and PBA defaults

/// Nodal, Local Node
#define POWERBUS_COMMAND_SCOPE_NODAL 0x0

/// Group, Local 4-chip, (aka, node pump)
#define POWERBUS_COMMAND_SCOPE_GROUP 0x1

/// System,  All units in the system
#define POWERBUS_COMMAND_SCOPE_SYSTEM 0x2

/// RGP, All units in the system (aka, system pump)
#define POWERBUS_COMMAND_SCOPE_RGP 0x3

/// Foreign, All units on the local chip, local SMP, and remote chip (pivot
/// nodes), In P8, only 100 and 101 are valid.
#define POWERBUS_COMMAND_SCOPE_FOREIGN0 0x4

/// Foreign, All units on the local chip, local SMP, and remote chip (pivot
/// nodes), In P8, only 100 and 101 are valid.
#define POWERBUS_COMMAND_SCOPE_FOREIGN1 0x5


/// Default command scope for BCDE/BCUE transfers
#define PBA_POWERBUS_COMMAND_SCOPE_DEFAULT POWERBUS_COMMAND_SCOPE_NODAL

// PBA Error/Panic codes

#define PBA_SCOM_ERROR1                    0x00722001
#define PBA_SCOM_ERROR2                    0x00722002
#define PBA_SLVRST_TIMED_OUT1              0x00722003
#define PBA_SLVRST_TIMED_OUT2              0x00722004
#define PBA_INVALID_ARGUMENT_BARSET        0x00779005
#define PBA_INVALID_ARGUMENT_RESET         0x00779006
#define PBAX_INVALID_ARGUMENT_CONFIG       0x00779007
#define PBAX_INVALID_ARGUMENT_TARGET       0x00779008
#define PBAX_INVALID_OBJECT                0x00722009

#ifndef __ASSEMBLER__

/// The PBA extended address in the form of a 'firmware register'
///
/// The extended address covers only bits 23:36 of the 50-bit PowerBus address.

typedef union pba_extended_address
{

    uint64_t value;
    uint32_t word[2];
    struct
    {
        uint64_t reserved0        : 23;
        uint64_t extended_address : 14;
        uint64_t reserved1        : 27;
    } fields;
} pba_extended_address_t;


int
pba_barset_initialize(int idx, uint64_t base, int log_size);

int
_pba_slave_reset(int id, SsxInterval timeout, SsxInterval sleep);

int
pba_slave_reset(int id);


////////////////////////////////////////////////////////////////////////////
// PBAX
////////////////////////////////////////////////////////////////////////////

// PBAX error/panic codes

#define PBAX_SEND_TIMEOUT  0x00722901
#define PBAX_SEND_ERROR    0x00722902
#define PBAX_RECEIVE_ERROR 0x00722903

/// The number of receive queues implemented by PBAX
#define PBAX_QUEUES 2

/// The number of PBAX Node Ids
#define PBAX_GROUPS 16

/// The number of PBAX Chip Ids (and group Ids)
#define PBAX_CHIPS 8

/// The maximum legal PBAX group mask
#define PBAX_GROUP_MASK_MAX 0xff

// PBAX Send Message Scope

#define PBAX_GROUP  3
#define PBAX_SYSTEM 5

// PBAX Send Type

#define PBAX_UNICAST   0
#define PBAX_BROADCAST 1

// Default timeout for pbax_send()

#ifndef PBAX_SEND_DEFAULT_TIMEOUT
    #define PBAX_SEND_DEFAULT_TIMEOUT SSX_MICROSECONDS(30)
#endif

/// An abstract target for PBAX send operations
///
/// This structure contains an abstraction of a communication target for PBAX
/// send operations.  An application using PBAX to transmit data first creates
/// an instance of the PbaxTarget for each abstract target using
/// pbax_target_create(), then calls pbax_send() or _pbax_send() with a
/// PbaxTarget and an 8-byte data packet to effect a transmission.
///
/// For applications that use GPE programs to implement PBAX sends, a pointer
/// to this object could also be passed to the GPE program.

typedef struct
{

    /// The abstract target
    ///
    /// pbax_target_create() condenses the target parameters into a copy of
    /// the PBAXSNDTX register used to configure the transmission.
    pba_xsndtx_t target;

} PbaxTarget;


int
pbax_target_create(PbaxTarget* target,
                   int type, int scope, int queue,
                   int node, int chip_or_group, int cnt);

int
pbax_configure(int master, int node, int chip, int group_mask);

int
_pbax_send(PbaxTarget* target, uint64_t data, SsxInterval timeout);

int
pbax_send(PbaxTarget* target, uint64_t data);

/// Enable the PBAX send mechanism

static inline void
pbax_send_enable(void)
{
    pba_xcfg_t pxc;

    pxc.words.high_order = in32(PBA_XCFG);
    pxc.fields.pbax_en = 1;
    out32(PBA_XCFG, pxc.words.high_order);

}


/// Disable the PBAX send mechanism

static inline void
pbax_send_disable(void)
{
    pba_xcfg_t pxc;

    pxc.words.high_order = in32(PBA_XCFG);
    pxc.fields.pbax_en = 0;
    out32(PBA_XCFG, pxc.words.high_order);

}


/// Clear the PBAX send error condition

static inline void
pbax_clear_send_error(void)
{
    pba_xcfg_t pxc;

    pxc.words.high_order = in32(PBA_XCFG);
    pxc.fields.snd_reset = 1;
    out32(PBA_XCFG, pxc.words.high_order);
}


/// Clear the PBAX receive error condition

static inline void
pbax_clear_receive_error(void)
{
    pba_xcfg_t pxc;

    pxc.words.high_order = in32(PBA_XCFG);
    pxc.fields.rcv_reset = 1;
    out32(PBA_XCFG, pxc.words.high_order);
}

#endif /* __ASSEMBLER__ */

#endif  /* __OCCHW_PBA_H__ */
