# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p10/procedures/utils/stopreg/p10_stop_save_cpureg_wrap.mk $
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
PROCEDURE=p10_stop_save_cpureg_wrap
lib$(PROCEDURE)_DEPLIBS += p10_stop_util
lib$(PROCEDURE)_DEPLIBS += p10_stop_api
$(call ADD_MODULE_INCDIR,$(PROCEDURE),$(ROOTPATH)/p10)
$(call ADD_MODULE_SRCDIR,$(PROCEDURE),$(ROOTPATH)/p10)
$(call BUILD_PROCEDURE)
