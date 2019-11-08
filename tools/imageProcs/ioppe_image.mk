# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: tools/imageProcs/ioppe_image.mk $
#
# OpenPOWER EKB Project
#
# COPYRIGHT 2016,2019
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

define BUILD_IOPPE_IMAGE
$(eval IMAGE=$1.ioppe_image)

$(eval $(IMAGE)_PATH=$(IMAGEPATH)/ioppe_image)
$(eval $(IMAGE)_LINK_SCRIPT=ioppe_image.cmd)
$(eval $(IMAGE)_LAYOUT=$(IMAGEPATH)/ioppe_image/ioppe_image.o)
$(eval ioppe_image_COMMONFLAGS += -I$(ROOTPATH)/chips/p10/utils/imageProcs/)

# Files to be appended to image
$(eval $(IMAGE)_FILE_IOO=$(IMAGEPATH)/ioo/ioo.bin)
$(eval $(IMAGE)_FILE_MEMREGS=$(IMAGEPATH)/memregs/memregs.bin)
$(eval $(IMAGE)_FILE_NV=$(IMAGEPATH)/nv/nv.bin)

# Setup dependencies for
# - building image ( $(IMAGE)_DEPS_IMAGE )
# - appending image sections in sequence ( $(IMAGE)_DEPS_{<section>,REPORT} )
#   - file to be appended
#   - all dependencies of previously appended sections or on raw image
#   - append operation as to other section that has to be finished first
$(eval $(IMAGE)_DEPS_IMAGE    = $$($(IMAGE)_FILE_IOO))
$(eval $(IMAGE)_DEPS_IOO      = $$($(IMAGE)_FILE_IOO))
$(eval $(IMAGE)_DEPS_IOO     += $$($(IMAGE)_PATH)/.$(IMAGE).setbuild_host)

$(eval $(IMAGE)_DEPS_IMAGE   += $$($(IMAGE)_FILE_MEMREGS))
$(eval $(IMAGE)_DEPS_MEMREGS  = $$($(IMAGE)_FILE_MEMREGS))
$(eval $(IMAGE)_DEPS_MEMREGS += $$($(IMAGE)_DEPS_IOO))
$(eval $(IMAGE)_DEPS_MEMREGS += $$($(IMAGE)_PATH)/.$(IMAGE).append.ioo)

$(eval $(IMAGE)_DEPS_IMAGE   += $$($(IMAGE)_FILE_NV))
$(eval $(IMAGE)_DEPS_NV       = $$($(IMAGE)_FILE_NV))
$(eval $(IMAGE)_DEPS_NV      += $$($(IMAGE)_DEPS_MEMREGS))
$(eval $(IMAGE)_DEPS_NV      += $$($(IMAGE)_PATH)/.$(IMAGE).append.memregs)

$(eval $(IMAGE)_DEPS_REPORT   = $$($(IMAGE)_DEPS_NV))
$(eval $(IMAGE)_DEPS_REPORT  += $$($(IMAGE)_PATH)/.$(IMAGE).append.nv)

# Image build using all files and serialised by dependencies
$(eval $(call XIP_TOOL,append,.ioo,$$($(IMAGE)_DEPS_IOO),$$($(IMAGE)_FILE_IOO)))
$(eval $(call XIP_TOOL,append,.memregs,$$($(IMAGE)_DEPS_MEMREGS),$$($(IMAGE)_FILE_MEMREGS)))
$(eval $(call XIP_TOOL,append,.nv,$$($(IMAGE)_DEPS_NV),$$($(IMAGE)_FILE_NV)))

# Create image report for image with all files appended
$(eval $(call XIP_TOOL,report,,$$($(IMAGE)_DEPS_REPORT)))

$(eval $(call BUILD_XIPIMAGE,$$($(IMAGE)_DEPS_IMAGE)))
endef

$(eval MYCHIPS := $(filter-out ocmb,$(CHIPS)))

$(foreach chip,$(MYCHIPS),\
	$(foreach chipId, $($(chip)_CHIPID),\
		$(eval $(call BUILD_IOPPE_IMAGE,$(chipId)))))

