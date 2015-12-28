# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p9/procedures/ppe_closed/sgpe/stop_gpe/p9_sgpe_qpmr.S $
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

.section ".qpmr" , "aw", @progbits

.global g_qpmr_magic_word
.global g_boot_copier_offset
.global g_qpmr_reserve1
.global g_boot_loader_offset
.global g_boot_loader_length
.global g_build_date
.global g_build_ver
.global g_reserve_flags
.global g_sgpe_hcode_offset
.global g_sgpe_hcode_length
.global g_quad_common_ring_offset
.global g_quad_common_ring_length
.global g_quad_spec_ring_offset
.global g_quad_spec_ring_length
.global g_quad_spec_scom_offset
.global g_quad_spec_scom_length
.global g_quad_cmn_ring_occ_offset
.global g_quad_spec_ring_occ_offset
.global g_quad_common_scom_occ_offset

#-----------------------------------------------------
#               QPMR HEADER
#-----------------------------------------------------
# Word 0                |     Word 1
#-----------------------------------------------------
# Boot Copier Offset    |     Reserved
#-----------------------------------------------------
# Boot Loader Offset    |     Boot Length
#-----------------------------------------------------
# Build Date            |     Version
#-----------------------------------------------------
#               Reserved Flags
#-----------------------------------------------------
# SGPE Hcode Offset     |     SGPE Length
#-----------------------------------------------------
# Quad Cmn Ring Offset  |     Quad common ring length
#-----------------------------------------------------
# Quad spec ring offset |     Quad spec ring length
#-----------------------------------------------------
# Quad spec SCOM offset |     Quad spec SCOM length
#-----------------------------------------------------
# quad cmn ring occ     |     Quad spec ring occ offset
# offset
#-----------------------------------------------------
#quad cmn SCOm OCC Offset |   Reserved
#-----------------------------------------------------
#                   Reserve
#-----------------------------------------------------
_start:
 g_qpmr_magic_word:
.quad   0x5849502053475045      #"XIP SGPE"

 g_boot_copier_offset:
.long 0

 g_qpmr_reserve1:
.long 0

g_boot_loader_offset:
.long 0

 g_boot_loader_length:
.long 0

 g_build_date:
.long 0

 g_build_ver:
.long 0

 g_reserve_flags:
.quad 0

 g_sgpe_hcode_offset:
.long 0

 g_sgpe_hcode_length:
.long 0

 g_quad_common_ring_offset:
.long 0

 g_quad_common_ring_length:
.long 0

 g_quad_spec_ring_offset:
.long 0
 g_quad_spec_ring_length:
.long 0

 g_quad_spec_scom_offset:
.long 0

 g_quad_spec_scom_length:
.long 0

 g_quad_cmn_ring_occ_offset:
.long 0

 g_quad_spec_ring_occ_offset:
.long 0

 g_quad_common_scom_occ_offset:
.long 0
