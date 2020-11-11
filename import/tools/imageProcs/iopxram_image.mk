# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/tools/imageProcs/iopxram_image.mk $
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

# $1 == chipId

define BUILD_IOPXRAM_IMAGE
$(eval IMAGE=$1.iopxram_image)

$(eval $(IMAGE)_PATH=$(IMAGEPATH)/iopxram_image)
$(eval $(IMAGE)_LINK_SCRIPT=iopxram_image.cmd)
$(eval $(IMAGE)_LAYOUT=$(IMAGEPATH)/iopxram_image/iopxram_image.o)
$(eval iopxram_image_COMMONFLAGS += -I$(ROOTPATH)/chips/p10/utils/imageProcs/)

# Files to be appended to image
$(eval $(IMAGE)_FILE_IOPFW=$(IMAGEPATH)/gen_iop_bin/iop_fw.bin)
$(eval $(IMAGE)_FILE_IOPFW_VER=$(IMAGEPATH)/gen_iop_bin_ver/iop_fw_ver.bin)

# Setup dependencies for
# - building image ( $(IMAGE)_DEPS_IMAGE )
# - appending image sections in sequence ( $(IMAGE)_DEPS_{<section>,REPORT} )
#   - file to be appended
#   - all dependencies of previously appended sections or on raw image
#   - append operation as to other section that has to be finished first
$(eval $(IMAGE)_DEPS_IMAGE      = $$($(IMAGE)_FILE_IOPFW))
$(eval $(IMAGE)_DEPS_IOPFW      = $$($(IMAGE)_FILE_IOPFW))
$(eval $(IMAGE)_DEPS_IOPFW     += $$($(IMAGE)_PATH)/.$(IMAGE).setbuild_head_commit)

$(eval $(IMAGE)_DEPS_IMAGE     += $$($(IMAGE)_FILE_IOPFW_VER))
$(eval $(IMAGE)_DEPS_IOPFW_VER  = $$($(IMAGE)_FILE_IOPFW_VER))
$(eval $(IMAGE)_DEPS_IOPFW_VER += $$($(IMAGE)_PATH)/.$(IMAGE).append.iop_fw)

$(eval $(IMAGE)_DEPS_REPORT    = $$($(IMAGE)_DEPS_IOPFW_VER))
$(eval $(IMAGE)_DEPS_REPORT   += $$($(IMAGE)_PATH)/.$(IMAGE).append.iop_fw_ver)

# Image build using all files and serialised by dependencies
$(eval $(call XIP_TOOL,append,.iop_fw,$$($(IMAGE)_DEPS_IOPFW),$$($(IMAGE)_FILE_IOPFW)))
$(eval $(call XIP_TOOL,append,.iop_fw_ver,$$($(IMAGE)_DEPS_IOPFW_VER),$$($(IMAGE)_FILE_IOPFW_VER)))

# Create image report for image with all files appended
$(eval $(call XIP_TOOL,report,,$$($(IMAGE)_DEPS_REPORT)))
$(eval $(call BUILD_XIPIMAGE,$$($(IMAGE)_DEPS_IMAGE)))
endef

$(eval MYCHIPS := $(filter-out ocmb,$(CHIPS)))

$(foreach chip,$(MYCHIPS),\
	$(foreach chipId, $($(chip)_CHIPID),\
		$(eval $(call BUILD_IOPXRAM_IMAGE,$(chipId)))))
