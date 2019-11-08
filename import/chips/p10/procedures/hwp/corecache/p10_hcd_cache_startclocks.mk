# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p10/procedures/hwp/corecache/p10_hcd_cache_startclocks.mk $
#
# OpenPOWER EKB Project
#
# COPYRIGHT 2019
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
PROCEDURE=p10_hcd_cache_startclocks
OBJS += p10_hcd_corecache_clock_control.o
$(call ADD_MODULE_SRCDIR,$(PROCEDURE),$(ROOTPATH)/chips/p10/common/include)
$(call ADD_MODULE_SRCDIR,$(PROCEDURE),$(ROOTPATH)/chips/p10/procedures/hwp/lib)
# TODO:  remove when skew adjust works.
lib$(PROCEDURE)_COMMONFLAGS += -DEQ_SKEW_ADJUST_DISABLE
# TODO:  remove when clock stat works.
lib$(PROCEDURE)_COMMONFLAGS += -DEQ_CLOCK_STAT_DISABLE
$(call BUILD_PROCEDURE)
