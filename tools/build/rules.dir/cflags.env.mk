# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: tools/build/rules.dir/cflags.env.mk $
#
# OpenPOWER EKB Project
#
# COPYRIGHT 2015,2020
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

# Makefile for additional compile flags.

# Force 64 bit compile and link.
ifeq ( $(UNAME), Linux )
LOCALCOMMONFLAGS += -m64
endif
CFLAGS += -O0
#Uncomment bellow to enable scom checking
#LOCALCOMMONFLAGS += -DSCOM_CHECKING
