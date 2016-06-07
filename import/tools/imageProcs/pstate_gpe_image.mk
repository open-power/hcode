# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/tools/imageProcs/pstate_gpe_image.mk $
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

IMAGE=pstate_gpe_image
# add dependency on the raw image.bin file completion
PGPE_DEPS=$$($(IMAGE)_PATH)/.$(IMAGE).setbuild_host

# dependencies for bin files needed in the pgpe xip image
LVL1_BL_BIN_FILE=$(IMAGEPATH)/pgpe_lvl1_copier/pgpe_lvl1_copier.bin
LVL2_BL_BIN_FILE=$(IMAGEPATH)/pgpe_lvl2_loader/pgpe_lvl2_loader.bin
PGPE_BIN_FILE=$(IMAGEPATH)/pstate_gpe/pstate_gpe.bin

$(call XIP_TOOL,append,.lvl1_bl,$(PGPE_DEPS) $(LVL1_BL_BIN_FILE), $(LVL1_BL_BIN_FILE))
$(call XIP_TOOL,append,.lvl2_bl,$(PGPE_DEPS) $$($(IMAGE)_PATH)/.$(IMAGE).append.lvl1_bl \
   	$(LVL2_BL_BIN_FILE), $(LVL2_BL_BIN_FILE))
$(call XIP_TOOL,append,.hcode,$(PGPE_DEPS) $$($(IMAGE)_PATH)/.$(IMAGE).append.lvl2_bl \
	$(PGPE_BIN_FILE),$(PGPE_BIN_FILE))
$(call XIP_TOOL,report,,$$($(IMAGE)_PATH)/.$(IMAGE).append.hcode,)
$(call BUILD_XIPIMAGE)
