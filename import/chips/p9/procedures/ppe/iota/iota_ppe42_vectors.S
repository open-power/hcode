/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p9/procedures/ppe/iota/iota_ppe42_vectors.S $    */
/*                                                                        */
/* OpenPOWER HCODE Project                                                */
/*                                                                        */
/* COPYRIGHT 2017                                                         */
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
#include "iota_ppe42.h"

.section    .vectors, "ax", @progbits

.global __vectors
__vectors:

.global __machine_check
__machine_check:
    trap

.global __set_msr
.org    __vectors + 0x0028
__set_msr:
    mtmsr   %r3
    blr

.global __system_reset
.org    __vectors + 0x0040
__system_reset:
    b       __iota_boot

.global __data_storage
.org    __vectors + 0x0060
__data_storage:
    trap

.global __instruction_storage
.org    __vectors + 0x0080
__instruction_storage:
    trap

.global ppe42_64bit_timebase
.global __external_interrupt
.org    __vectors + 0x00a0
__external_interrupt:
    __m_iota_interrupt_and_exception_handler _IOTA_SCHEDULE_REASON_EXT

.global __alignment_exception
.org    __vectors + 0x00c0
__alignment_exception:
    trap

.global __program_exception
.org    __vectors + 0x00e0
__program_exception:
    trap

.global __dec_interrupt
.org    __vectors + 0x0100
__dec_interrupt:
    stw     %r3,_IOTA_TEMPORARY_R3_STACK_OFFSET(%r1)
    // Increment upper 32 bits of 64 bit timebase
    lwz     %r3,ppe42_64bit_timebase@sda21(0)
    addi    %r3,%r3,1
    stw     %r3,ppe42_64bit_timebase@sda21(0)
    _liwa   %r3, TSR_DIS
    mttsr   %r3
    lwz     %r3,_IOTA_TEMPORARY_R3_STACK_OFFSET(%r1)
    rfi
    // remove rfi and restore following line to share DEC timer ovrflow
    //__m_iota_interrupt_and_exception_handler _IOTA_SCHEDULE_REASON_DEC

.global __fit_interrupt
.org    __vectors + 0x0120
__fit_interrupt:
    __m_iota_interrupt_and_exception_handler _IOTA_SCHEDULE_REASON_FIT

.global __watchdog_interrupt
.org    __vectors + 0x0140
__watchdog_interrupt:
    b __watchdog_interrupt
