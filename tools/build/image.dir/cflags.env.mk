# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: tools/build/image.dir/cflags.env.mk $
#
# OpenPOWER EKB Project
#
# COPYRIGHT 2016,2019
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

# Override the LOCALCOMMONFLAGS from other cflags.env.mk files
PPE_LOCALCOMMONFLAGS =  -Wall -Werror
PPE_LOCALCOMMONFLAGS += -fsigned-char
PPE_LOCALCOMMONFLAGS += -msoft-float
PPE_LOCALCOMMONFLAGS += -meabi
PPE_LOCALCOMMONFLAGS += -msdata=eabi
PPE_LOCALCOMMONFLAGS += -ffreestanding
PPE_LOCALCOMMONFLAGS += -fno-common
PPE_LOCALCOMMONFLAGS += -fno-inline-functions-called-once

PPE_CFLAGS = -Os
PPE_CFLAGS += -gpubnames -gdwarf-3
PPE_CFLAGS += -ffunction-sections
PPE_CFLAGS += -fdata-sections
PPE_CFLAGS += -mcpu=ppe42x
PPE_CFLAGS += -mstrict-align
PPE_CFLAGS += -pipe

PPE_CXXFLAGS = -std=c++11
PPE_CXXFLAGS += -nostdinc++
PPE_CXXFLAGS += -fno-rtti
PPE_CXXFLAGS += -fno-threadsafe-statics
PPE_CXXFLAGS += -fno-strict-aliasing
PPE_CXXFLAGS += -fno-exceptions

ASFLAGS = -mppe42x


