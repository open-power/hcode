# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p10/procedures/utils/stopreg/p10_stop_api_tool.mk $
#
# OpenPOWER EKB Project
#
# COPYRIGHT 2015,2021
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
WRAPPER=p10_stop_api_tool
$(WRAPPER)_COMMONFLAGS += -DP10_STOP_API_TOOL
$(WRAPPER)_DEPLIBS+=proc_scomt
#lib$(WRAPPER)_DEPLIBS += p10_stop_util
#lib$(WRAPPER)_DEPLIBS += p10_stop_api
OBJS+= p10_stop_util.o
OBJS+= p10_stop_api.o
$(call ADD_EXE_INCDIR, $(WRAPPER), $(ROOTPATH)/chips/p10/procedures/utils/stopreg)
$(call ADD_EXE_INCDIR, $(WRAPPER), $(ROOTPATH)/chips/p10/procedures/hwp/lib)
#$(call ADD_EXE_INCDIR, $(EXE), $(ROOTPATH)/hwpf/fapi2/include/)
#$(call ADD_EXE_INCDIR, $(EXE), $(ROOTPATH)/hwpf/fapi2/include/plat/)
#$(call ADD_EXE_INCDIR, $(EXE), $(ROOTPATH)/output/gen/)
#$(call ADD_EXE_INCDIR, $(EXE), $(ROOTPATH)/tools/ifCompiler/plat/)
#$(call ADD_EXE_INCDIR, $(EXE), $(ROOTPATH)/chips/p10/procedures/hwp/ffdc/)
$(call BUILD_WRAPPER)
