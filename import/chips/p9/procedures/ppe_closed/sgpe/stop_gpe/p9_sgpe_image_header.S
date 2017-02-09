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

#include <p9_hcode_image_defines.H>

.sgpe_header
