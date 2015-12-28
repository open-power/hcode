# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p9/procedures/ppe_closed/cme/stop_cme/p9_cme_cpmr.S $
#
# OpenPOWER HCODE Project
#
# COPYRIGHT 2015,2017
# [+] International Business Machines Corp.
#
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
# implied. See the License for the specific language governing
# permissions and limitations under the License.
#
# IBM_PROLOG_END_TAG

.section ".cpmr" , "aw", @progbits

.global g_cpmr_attn_quad
.global g_cpmr_magic_word
.global g_build_date
.global g_build_ver
.global g_reserve_flags
.global g_cme_hcode_offset
.global g_cme_hcode_length
.global g_cme_common_ring_offset
.global g_cme_common_ring_length
.global g_cme_pstate_region_offset
.global g_cme_pstate_region_length
.global g_cme_core_spec_ring_offset
.global g_cme_core_spec_ring_length
.global g_cme_core_scom_offset
.global g_cme_core_scom_length

#-----------------------------------------------------
#               CPMR HEADER
#-----------------------------------------------------
# Word 0                |     Word 1
#-----------------------------------------------------
# ATTN Opcode           |     ATTN Opcode
#-----------------------------------------------------
#                   Magic Number
#-----------------------------------------------------
# Build Date            |     Version
#-----------------------------------------------------
#               Reserved Flags
#-----------------------------------------------------
# CME Hcode Offset     |     CME Length
#-----------------------------------------------------
# CME Cmn Ring Offset  |     CME common ring length
#-----------------------------------------------------
# CME Pstate offset    |     CME Pstate length
#-----------------------------------------------------
# Core spec ring offset |    Core spec ring length
#-----------------------------------------------------
# Core SCOM restore     |    Core SCOM restore length
# offset
#-----------------------------------------------------
#                   ATTN Opcodes
#-----------------------------------------------------
_start:

g_cpmr_attn_quad:
.quad 0x0000020000000200   #ATTN OPCODE ATTN OPCODE

g_cpmr_magic_word:
.quad   0x484F4D4552312E30      #"HOMER1.0"

 g_build_date:
.long 0

 g_build_ver:
.long 0

 g_reserve_flags:
.quad 0

 g_cme_hcode_offset:
.long 0

 g_cme_hcode_length:
.long 0

 g_cme_common_ring_offset:
.long 0

 g_cme_common_ring_length:
.long 0

 g_cme_pstate_region_offset:
.long 0
 g_cme_pstate_region_length:
.long 0

g_cme_core_spec_ring_offset:
.long 0

g_cme_core_spec_ring_length:
.long 0

g_cme_core_scom_offset:
.long 0

g_cme_core_scom_length:
.long 0
