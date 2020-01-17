# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p10/procedures/hwp/corecache/p10_hcd_core_reset.mk $
#
# OpenPOWER EKB Project
#
# COPYRIGHT 2019,2020
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
PROCEDURE=p10_hcd_core_reset
$(call ADD_MODULE_SRCDIR,$(PROCEDURE),$(ROOTPATH)/chips/p10/common/include)
$(call ADD_MODULE_SRCDIR,$(PROCEDURE),$(ROOTPATH)/chips/p9/common/include)
$(call ADD_MODULE_SRCDIR,$(PROCEDURE),$(ROOTPATH)/chips/p10/procedures/hwp/lib)
$(call ADD_MODULE_SRCDIR,$(PROCEDURE),$(ROOTPATH)/chips/p10/procedures/hwp/perv)
OBJS+=p10_perv_sbe_cmn.o
OBJS+=p10_hcd_corecache_realign.o
#lib$(PROCEDURE)_COMMONFLAGS += -DP10_HCD_CORECACHE_SKIP_FLUSH
$(call BUILD_PROCEDURE)
