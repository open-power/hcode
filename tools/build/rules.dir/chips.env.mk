# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: tools/build/rules.dir/chips.env.mk $
#
# OpenPOWER EKB Project
#
# COPYRIGHT 2015,2019
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

# Lists of chip subdirectories.
ifeq ($(PROJECT_NAME),p9)
CHIPS += p9
CHIPS += ocmb
CHIPS += common
CHIPS += ocmb/explorer
CHIPS += p10

p9_CHIPID += p9n
p9_CHIPID += p9c
p9_CHIPID += p9a
ocmb_CHIPID += explorer

p9n_EC += 10 20 21 22 23
p9c_EC += 10 11 12 13
p9a_EC += 10
explorer_EC += 10
endif

ifeq ($(PROJECT_NAME),p10)
CHIPS += common
CHIPS += p10
CHIPS += ocmb
CHIPS += ocmb/common
CHIPS += ocmb/explorer
p10_CHIPID += p10
ocmb_CHIPID += explorer
p10_EC += 10
explorer_EC += 10
endif

HW_IMAGE_VARIATIONS = hw sim
