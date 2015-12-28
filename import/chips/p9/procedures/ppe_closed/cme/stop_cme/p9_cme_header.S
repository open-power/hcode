# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p9/procedures/ppe_closed/cme/stop_cme/p9_cme_header.S $
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


#Definition of a CME Image header to be used by CME Hcode when loaded in
#SRAM. Linker script maps this 56 bit image header to an SRAM address range
#after interrupt vector area. Some fields will be populated during Hcode
#image build activity. Build date, version, Hcode offset and position are
#populated during CME Image build process.

.set BUILD_VER, 0x01    # version * 10
.section ".cme_image_header" , "aw"

.global g_cme_magic_word
.global g_cme_build
.global g_cme_build_ver
.global g_cme_hcode_offset
.global g_cme_hcode_length
.global g_cme_cmn_ring_ofset
.global g_cme_cmn_ring_len
.global g_cme_pstate_offset
.global g_cme_pstate_length
.global g_cme_Inst_ring_offset
.global g_cme_Inst_ring_length
.global g_cme_attr_mode
#-----------------------------------------------------
#               CME HEADER
#-----------------------------------------------------
# Word 0                |     Word 1
#-----------------------------------------------------
#                   Magic Number
#-----------------------------------------------------
# Build Date            |     Version
#-----------------------------------------------------
# CME Hcode Offset      |     CME Hcode Length
#-----------------------------------------------------
# CME Common Rings      |     CME Common Rings Sections
# Sections Offset       |     Length
#-----------------------------------------------------
# CME Quad PState       |     CME Quad PState Region
# Region Offset         |     Length
#-----------------------------------------------------
# Core Instance Spec.   |     Max instance Spec Scan
# Scan Ring Offset      |     Ring Length
#-----------------------------------------------------
# ATTR_CME_MODE         |     Reserved
#-----------------------------------------------------
#                   Reserved
#-----------------------------------------------------

g_cme_magic_word:
.quad  0x58495020434D454D           #XIP CMEM

g_cme_build:
.long 0

g_cme_build_ver:
.long  BUILD_VER

g_cme_hcode_offset:
.long  0

g_cme_hcode_length:
.long  0

g_cme_cmn_ring_offset:
.long  0

g_cme_cmn_ring_len:
.long  0

g_cme_pstate_offset:
.long  0

g_cme_pstate_length:
.long  0

g_cme_Inst_ring_offset:
.long  0

g_cme_Inst_ring_length:
.long  0

g_cme_attr_mode:
.long  0
