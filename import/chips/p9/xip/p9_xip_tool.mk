# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p9/xip/p9_xip_tool.mk $
#
# OpenPOWER HCODE Project
#
# COPYRIGHT 2016,2017
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
EXE = p9_xip_tool
$(EXE)_COMMONFLAGS += -DXIP_TOOL_ENABLE_DISSECT
OBJS += $(EXE).o
$(EXE)_DEPLIBS += p9_xip_image p9_tor p9_ringId
$(call ADD_EXE_INCDIR,$(EXE),$(ROOTPATH)/tools/imageProcs)
$(call BUILD_EXE)
