# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/p9_sgpe_image_header.S $
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
#Definition of a SGPE Image header to be used by SGPE Hcode when loaded in
#SRAM. Linker script maps this 64 bit image header to an SRAM address starting from
#0xffff8180.Some fields will be populated during Hcode image build activity. Build date,
#version, IVPR address, __system_reset_address are populated during SGPE image build
#process.

.section ".sgpe_image_header" , "aw"

.global g_sgpe_magic_word
.global g_sgpe_reset_address
.global g_sgpe_reserve1
.global g_sgpe_ivpr_address
.global g_sgpe_reserve2
.global g_sgpe_build_date
.global g_sgpe_build_ver
.global g_sgpe_resv_flag
.global g_sgpe_cmn_ring_occ_offset
.global g_sgpe_spec_ring_occ_offset
.global g_sgpe_cmn_scom_offset
.global g_sgpe_reserve3
.global g_sgpe_reserve4
.global g_sgpe_reserve5
#-----------------------------------------------------
#               SGPE HEADER
#-----------------------------------------------------
# Word 0                |     Word 1
#-----------------------------------------------------
#                   Magic Number
#-----------------------------------------------------
# __system_reset_address|     Reserved
#-----------------------------------------------------
# IVPR  address         |     Reserved
#-----------------------------------------------------
# Build Date            |     Version
#-----------------------------------------------------
#                   Reserve Flag
#-----------------------------------------------------
# Quad Cmn Ring Occ     |     Quad Spec Rings Occ
#   Offset              |         Offset
#-----------------------------------------------------
# Quad Cmn SCOM Occ     |     Reserved
#   Offset              |
#-----------------------------------------------------
#                   Reserved
#-----------------------------------------------------

g_sgpe_magic_word:
.quad  0x5849502053475045   #XIP SGPE

g_sgpe_reset_address:
.long 0

g_sgpe_reserve1:
.long  0

g_sgpe_ivpr_address:
.long  0xFFF30000

g_sgpe_reserve2:
.long  0

g_sgpe_build_date:
.long  0

g_sgpe_build_ver:
.long 0

g_sgpe_resv_flag:
.quad 0

g_sgpe_cmn_ring_occ_offset:
.long  0

g_sgpe_spec_ring_occ_offset:
.long  0

g_sgpe_cmn_scom_offset:
.long  0
