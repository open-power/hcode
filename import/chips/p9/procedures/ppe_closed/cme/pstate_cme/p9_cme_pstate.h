/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe_closed/cme/pstate_cme/p9_cme_pstate.h $ */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2015,2017                                                    */
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
//-----------------------------------------------------------------------------
// *! (C) Copyright International Business Machines Corp. 2014
// *! All Rights Reserved -- Property of IBM
// *! *** IBM Confidential ***
//-----------------------------------------------------------------------------

/// \file pstate.h
/// \brief Shared and global definitions for pstate H codes.
/// \owner  Michael Olsen   Email: cmolsen@us.ibm.com
///

void pmcr_db0_thread(void*);

#define MAX_CORES               24
#define MAX_QUADS               6
#define MAX_CMES                12
#define CORES_PER_QUAD          (MAX_CORES/MAX_QUADS)
#define CORES_PER_CME           (MAX_CORES/MAX_CMES)
#define CMES_PER_QUAD           (MAX_CMES/MAX_QUADS)

#define QUAD_SCOM_ADDR_MASK     0x07000000
#define CME_SCOM_ADDR_MASK      0x00000C00
#define QUAD_CME_SCOM_ADDR_MASK_CLR ~(QUAD_SCOM_ADDR_MASK|CME_SCOM_ADDR_MASK)

#define QUAD_SCOM_ADDR_INCR     (uint32_t)0x01000000
#define CME_SCOM_ADDR_OFFSET    (uint32_t)0x00000400
#define CME_SCOM_ADDR_INCR      (uint32_t)0x00000400
#define CORE_SCOM_ADDR_OFFSET   (uint32_t)0x20000000
#define CORE_SCOM_ADDR_INCR     (uint32_t)0x01000000
#define CORE_SEL_LEFT           (uint32_t)0x00800000
#define CORE_SEL_RIGHT          (uint32_t)0x00400000

//#define TRUE                    1
//#define FALSE                   0

#define RIGHT_SHIFT_PTRN_0x8_32BIT  (uint32_t)0x80000000
#define RIGHT_SHIFT_PTRN_0xC_32BIT  (uint32_t)0xC0000000
#define RIGHT_SHIFT_PTRN_0xF_32BIT  (uint32_t)0xF0000000
#define RIGHT_SHIFT_PTRN_0x8_64BIT  (uint64_t)0x8000000000000000

//
// HOMER variables updated by PGPE
//
extern uint32_t    ULTRA_TURBO_FREQ_STEPS_PS;


#define VEXT_SLEW_RATE_MVPERUS  0x0A0A  // Trise=Tfall=10mv/us
#define MAX_POLL_COUNT_AVS      10
/*
// We define four levels of TRACE outputs:
// _INF:  Trace level used for main informational events.
// _DBG:  Trace level used for expanded debugging.
// _WARN: Trace level used when suspecious event happens.
// _ERR:  Trace level at time of an error that leads to a halt.
#define MY_TRACE_INF(...)   PK_TRACE("INF: "__VA_ARGS__);
#ifdef DEV_DEBUG
    #define MY_TRACE_DBG(...)   PK_TRACE("DBG: "__VA_ARGS__);
#else
    #define MY_TRACE_DBG(...)
#endif
#define MY_TRACE_WARN(...)  PK_TRACE("WARN: "__VA_ARGS__);
#define MY_TRACE_ERR(...)   PK_TRACE("ERR: "__VA_ARGS__);
*/

//
// PIR defines
//
#define PIR_INSTANCE_EVEN_ODD_MASK  (uint32_t)(0x00000001)
#define PIR_INSTANCE_NUM_MASK       (uint32_t)(0x0000001F)


//
// CME FLAGS defines
//
#define CME_FLAGS_STOP_READY    (uint32_t)(0x80000000)
#define CME_FLAGS_PMCR_READY    (uint32_t)(0x40000000)
#define CME_FLAGS_QMGR_READY    (uint32_t)(0x20000000)
#define CME_FLAGS_QMGR_MASTER   (uint32_t)(0x10000000)
#define CME_FLAGS_RCLK_READY    (uint32_t)(0x08000000)
#define CME_FLAGS_IVRM_READY    (uint32_t)(0x04000000)
#define CME_FLAGS_VDM_READY     (uint32_t)(0x02000000)


//
// Pstate defines
//
enum PSTATE_REQUEST_MODE_VALUES     // Partially supported in GA1
{
    PS_REQ_MODE_DEFAULT     = 0,
    PS_REQ_MODE_RELATIVE    = 1,
    PS_REQ_MODE_QOS         = 2,    // Only mode supported in GA1
    PS_REQ_MODE_PERFORMANCE = 3,
    PS_REQ_MODE_LAST        = 4
};

enum PSTATE_REQUEST_PRIORITY_VALUES // Not supported in GA1
{
    PS_REQ_PRTY_LOW         = 0,
    PS_REQ_PRTY_MEDIUM      = 1,
    PS_REQ_PRTY_HIGH        = 2,
    PS_REQ_PRTY_OVERRIDE    = 3,
    PS_REQ_PRTY_LAST        = 4
};

typedef union pmcr_pstate_request
{

    uint32_t value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint32_t reserved1 : 6;
        uint32_t mode : 2;              // Partialy supported in GA1
        uint32_t ps_upper : 8;          // NOT supported in GA1
        uint32_t reserved2 : 6;
        uint32_t priority : 2;          // NOT supported in GA1
        uint32_t ps_lower : 8;          // Only Pstate supported in GA1
#else
        uint32_t ps_lower : 8;
        uint32_t priority : 2;
        uint32_t reserved2 : 6;
        uint32_t ps_upper : 8;
        uint32_t mode : 2;
        uint32_t reserved1 : 6;
#endif // _BIG_ENDIAN
    } fields;

} pmcr_pstate_request_t;

typedef struct pstate_actuation_results
{

    uint32_t  freq_quad_last[MAX_QUADS];
    uint32_t  freq_quad_avg[MAX_QUADS];
    uint32_t  freq_chip_last;
    uint32_t  freq_chip_avg;
    uint32_t  vdd_quad_last[MAX_QUADS];
    uint32_t  vdd_quad_avg[MAX_QUADS];
    uint32_t  vdd_chip_last;
    uint32_t  vdd_chip_avg;

} pstate_actuation_results_t;


//
// QCME<->PGPE API
//

enum MESSAGE_ID_DB0
{
    MSGID_DB0_INVALID       = 0,
    MSGID_DB0_RESUME        = 1,
    MSGID_DB0_SUSPEND       = 2,
    MSGID_DB0_RESET         = 3,
    MSGID_DB0_PS_BROADCAST  = 4,
    MSGID_DB0_ACK           = 5
};

enum MESSAGE_ID_DB3
{
    MSGID_DB3_INVALID       = 0,
    MSGID_DB3_SAFE_MODE     = 1,
    MSGID_DB3_PS_BROADCAST  = 2,
    MSGID_DB3_ACK           = 3
};

enum MESSAGE_ID_TYPE4
{
    MSGID_T4_INVALID        = 0,
    MSGID_T4_REGISTER_QCME  = 1,
    MSGID_T4_ACK            = 2
};

//-------------
// Doorbell0
//-------------

// PGPE->QCME:  cb_to_qcme_base
// ------------------------------------
// This CB to decode the msg_id.
//
typedef union comm_block_to_qcme_base
{
    uint64_t  value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint64_t  msg_id : 8;
        uint64_t  reserved : 56;
#else
        uint64_t  reserved : 56;
        uint64_t  msg_id : 8;
#endif // _BIG_ENDIAN
    } fields;
} cb_to_qcme_base_t;

// PGPE->QCME:  cb_to_qcme_ps_bc
// ------------------------------------
// This CB is used by PGPE to broadcast Pstate requests.
//
typedef union comm_block_to_qcme_ps_bc
{
    uint64_t  value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint64_t  msg_id : 8;
        uint64_t  ps_global : 8;
        uint64_t  ps_local : 8;
        uint64_t  reserved : 40;
#else
        uint64_t  reserved : 40;
        uint64_t  ps_local : 8;
        uint64_t  ps_global : 8;
        uint64_t  msg_id : 8;
#endif // _BIG_ENDIAN
    } fields;
} cb_to_qcme_ps_bc_t;

// PGPE->QCME:  cb_to_qcme_ack
// ---------------------------
// This CB is used by PGPE to acknowledge CME requests.
//
typedef union comm_block_to_qcme_ack
{
    uint64_t  value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint64_t  msg_id : 8;
        uint64_t  msg_id_ref : 8;
        uint64_t  rc : 8;
        uint64_t  reserved : 40;
#else
        uint64_t  reserved : 40;
        uint64_t  rc : 8;
        uint64_t  msg_id_ref : 8;
        uint64_t  msg_id : 8;
#endif // _BIG_ENDIAN
    } fields;
} cb_to_qcme_ack_t;


//--------------
// Type4
//--------------

// QCME->PGPE:  cb_to_pgpe_base
// ----------------------------
// Used by PGPE to decode the msg_id.
//
typedef union comm_block_to_pgpe_base
{
    uint16_t  value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint16_t  do_not_use : 4;
        uint16_t  msg_id : 3;
        uint16_t  reserved : 9;
#else
        uint16_t  reserved : 9;
        uint16_t  msg_id : 3;
        uint16_t  do_not_use : 4;
#endif // _BIG_ENDIAN
    } fields;
} cb_to_pgpe_base_t;

// QCME->PGPE:  cb_to_pgpe_qcme
// ----------------------------
// Used by QCME to register itself with the PGPE.
//
typedef union comm_block_to_pgpe_qcme
{
    uint16_t  value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint16_t  do_not_use : 4;
        uint16_t  msg_id : 3;
        uint16_t  reserved : 9;
#else
        uint16_t  reserved : 9;
        uint16_t  msg_id : 3;
        uint16_t  do_not_use : 4;
#endif // _BIG_ENDIAN
    } fields;
} cb_to_pgpe_qcme_t;

// QCME->PGPE:  cb_to_pgpe_ack
// ---------------------------
// Used by QCME to acknowledge DB requests.
//
typedef union comm_block_to_pgpe_ack
{
    uint16_t  value;
    struct
    {
#ifdef _BIG_ENDIAN
        uint16_t  do_not_use : 4;
        uint16_t  msg_id : 3;
        uint16_t  msg_id_ref : 3; // Put msg_id from PGPE request
        uint16_t  reserved : 3;
        uint16_t  rc : 3;
#else
        uint16_t  rc : 3;
        uint16_t  reserved : 3;
        uint16_t  msg_id_ref : 3;
        uint16_t  msg_id : 3;
        uint16_t  do_not_use : 4;
#endif // _BIG_ENDIAN
    } fields;
} cb_to_pgpe_ack_t;

//
// Return Codes
//
enum API_RETURN_CODES
{
    API_RC_INVALID    =  0,   // Don't use zero. Not reliable.
    API_RC_SUCCESS    =  1,
    API_RC_FAILURE    =  2
};
