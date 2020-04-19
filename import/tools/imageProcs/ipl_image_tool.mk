# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/tools/imageProcs/ipl_image_tool.mk $
#
# OpenPOWER EKB Project
#
# COPYRIGHT 2016,2020
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

ifneq ($(OPENPOWER_BUILD),)
EXE = ipl_image_tool
OBJS += $(EXE).o
$(EXE)_DEPLIBS+=p10_ipl_image
$(EXE)_DEPLIBS+=common_ringId
$(EXE)_DEPLIBS+=p10_tor
$(EXE)_DEPLIBS+=p10_ringId
$(EXE)_DEPLIBS+=p10_scan_compression
$(EXE)_DEPLIBS+=p10_ddco
$(EXE)_DEPLIBS+=p10_dynamic
$(call ADD_EXE_INCDIR,$(EXE),$(ROOTPATH)/chips/common/utils/imageProcs)
$(call ADD_EXE_INCDIR,$(EXE),$(ROOTPATH)/chips/p10/utils/imageProcs)
$(call ADD_EXE_INCDIR,$(EXE),$(ROOTPATH)/hwpf/fapi2/include)
$(call BUILD_EXE)
else
WRAPPER = ipl_image_tool
OBJS += $(WRAPPER).o
$(WRAPPER)_DEPLIBS+=p10_ipl_image
$(WRAPPER)_DEPLIBS+=common_ringId
$(WRAPPER)_DEPLIBS+=p10_tor
$(WRAPPER)_DEPLIBS+=p10_ringId
$(WRAPPER)_DEPLIBS+=p10_scan_compression
$(WRAPPER)_DEPLIBS+=p10_ddco
$(WRAPPER)_DEPLIBS+=p10_dynamic
$(call ADD_WRAPPER_INCDIR,$(WRAPPER),$(ROOTPATH)/chips/common/utils/imageProcs)
$(call ADD_WRAPPER_INCDIR,$(WRAPPER),$(ROOTPATH)/chips/p10/utils/imageProcs)
$(call ADD_WRAPPER_INCDIR,$(WRAPPER),$(ROOTPATH)/hwpf/fapi2/include)
$(call BUILD_WRAPPER)
endif
