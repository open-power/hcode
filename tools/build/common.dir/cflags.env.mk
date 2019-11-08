# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: tools/build/common.dir/cflags.env.mk $
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

# Makefile to define useful common flags for all environments.

LOCALCOMMONFLAGS += -O3 -fPIC -Wall -Werror
LOCALCOMMONFLAGS += -Wno-unused-label
LOCALCOMMONFLAGS += -fsigned-char
LOCALCOMMONFLAGS += -fno-inline-functions-called-once
LOCALLDFLAGS += --std=gnu++11
ifeq ($(UNAME),Linux)
LOCALLDFLAGS += -rdynamic
endif
LOCALCXXFLAGS += --std=gnu++11
LOCALCXXFLAGS += -fexceptions
LOCALCXXFLAGS += -Wno-conversion-null

LOCALCFLAGS += -fno-strict-aliasing
LOCALCFLAGS += -pipe
