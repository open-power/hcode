# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: tools/build/rules.dir/ecmd.env.mk $
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
#
# ECMD paths from Cronus.
ECMD_PLAT_INCLUDE += $(CTEPATH)/tools/ecmd/$(ECMD_RELEASE)/capi
ECMD_PLAT_LIB = $(CTEPATH)/tools/ecmd/$(ECMD_RELEASE)/x86_64/lib

# Extra libs to link against for Cronus
ECMD_REQUIRED_LIBS += $(ECMD_PLAT_LIB)/ecmdClientCapi.a
ECMD_REQUIRED_LIBS += $(ECMD_PLAT_LIB)/libecmd.so
ECMD_REQUIRED_LIBS += $(ECMD_PLAT_LIB)/croClientCapi.a
