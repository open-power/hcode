# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: tools/imageProcs/sbe_image.mk $
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

# $1 == type (hw/sim)
# $2 == chip
# $3 == chipId
define BUILD_SBE_IMAGE
$(eval IMAGE=$3.$1.sbe_image)

$(eval $(IMAGE)_PATH=$(IMAGEPATH)/sbe_image)
$(eval $(IMAGE)_LINK_SCRIPT=sbe_image.cmd)
$(eval $(IMAGE)_LAYOUT=$(IMAGEPATH)/sbe_image/sbe_image.o)
$(eval sbe_image_COMMONFLAGS += -I$(ROOTPATH)/chips/p10/utils/imageProcs/)

# Files to be appended to image
$(eval $(IMAGE)_FILE_RINGS=$(RINGFILEPATH)/$3.$1.sbe.rings.bin)

# Setup dependencies for
# - building image ( $(IMAGE)_DEPS_IMAGE )
# - appending image sections in sequence ( $(IMAGE)_DEPS_{<section>,REPORT} )
#   - file to be appended
#   - all dependencies of previously appended sections or on raw image
#   - append operation as to other section that has to be finished first
# We only need to add the .rings section here (the rest will come from PPE repo side)
$(eval $(IMAGE)_DEPS_IMAGE   = $$($(IMAGE)_FILE_RINGS))
$(eval $(IMAGE)_DEPS_RINGS   = $$($(IMAGE)_FILE_RINGS))
$(eval $(IMAGE)_DEPS_RINGS  += $$($(IMAGE)_PATH)/.$(IMAGE).setbuild_head_commit)
$(eval $(IMAGE)_DEPS_REPORT  = $$($(IMAGE)_DEPS_RINGS))
$(eval $(IMAGE)_DEPS_REPORT += $$($(IMAGE)_PATH)/.$(IMAGE).append.rings)

# Append the rings section
$(eval $(call XIP_TOOL,append,.rings,$$($(IMAGE)_DEPS_RINGS),$$($(IMAGE)_FILE_RINGS) 1))

# Create image report for image with all files appended
$(eval $(call XIP_TOOL,report,,$$($(IMAGE)_DEPS_REPORT)))

$(eval $(call BUILD_XIPIMAGE,$$($(IMAGE)_DEPS_IMAGE)))
endef

$(eval MYCHIPS := $(filter-out ocmb,$(CHIPS)))

$(foreach chip,$(MYCHIPS),\
	$(foreach chipId, $($(chip)_CHIPID),\
				$(eval $(call BUILD_SBE_IMAGE,hw,$(chip),$(chipId)))))
