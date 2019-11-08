# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/tools/imageProcs/restore_image.mk $
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
# FIXME -
# The following define has the full P10 build image sections. However, since
# some of the PPE binaries are not yet getting built, we will use the define
# BUILD_RESTORE_IMAGE_TEMP at the end instead as the binaries become incrementally
# available.
define BUILD_RESTORE_IMAGE
$(eval IMAGE=$1.restore_image)

$(eval $(IMAGE)_PATH=$(IMAGEPATH)/restore_image)
$(eval $(IMAGE)_LINK_SCRIPT=restore_image.cmd)
$(eval $(IMAGE)_LAYOUT=$(IMAGEPATH)/restore_image/restore_image.o)
$(eval restore_image_COMMONFLAGS += -I$(ROOTPATH)/chips/p10/utils/imageProcs/)

# Files with multiple DD level content to be generated (arg2=empty since
# there is no hw/sim variations)
$(eval $(call BUILD_DD_LEVEL_CONTAINER,$1,,cpmr_hdr))

# Files to be appended to image
$(eval $(IMAGE)_FILE_CPMR_HDR=$$($(IMAGE)_DD_CONT_cpmr_hdr))
$(eval $(IMAGE)_FILE_SELF=$(ROOTPATH/output/images/utils/stopreg/p10_core_save_restore_routines/p10_core_save_restore_routines.bin)

# dependencies for appending image sections in sequence:
# - file to be appended
# - all dependencies of previously appended sections or on raw image
# - append operation as to other section that has to be finished first
$(eval $(IMAGE)_DEPS_CPMR_HDR =$$($(IMAGE)_FILE_CPMR_HDR))
$(eval $(IMAGE)_DEPS_CPMR_HDR+=$$($(IMAGE)_PATH)/.$(IMAGE).setbuild_host)

$(eval $(IMAGE)_DEPS_SELF =$$($(IMAGE)_FILE_SELF))
$(eval $(IMAGE)_DEPS_SELF+=$$($(IMAGE)_DEPS_CPMR_HDR))
$(eval $(IMAGE)_DEPS_SELF+=$$($(IMAGE)_PATH)/.$(IMAGE).append.cpmr_hdr)

$(eval $(IMAGE)_DEPS_REPORT =$$($(IMAGE)_DEPS_HCODE))
$(eval $(IMAGE)_DEPS_REPORT+=$$($(IMAGE)_PATH)/.$(IMAGE).append.self_save_restore)

# Image build using all files and serialised by dependencies
$(eval $(call XIP_TOOL,append,.cpmr_hdr,$$($(IMAGE)_DEPS_CPMR_HDR),$$($(IMAGE)_FILE_CPMR_HDR) 1))
$(eval $(call XIP_TOOL,append,.self_restore,$$($(IMAGE)_DEPS_SELF),$$($(IMAGE)_FILE_SELF)))

# Create image report for image with all files appended
$(eval $(call XIP_TOOL,report,,$$($(IMAGE)_DEPS_REPORT)))

$(eval $(call BUILD_XIPIMAGE))
endef

define BUILD_RESTORE_IMAGE_TEMP
$(eval IMAGE=$1.restore_image)

$(eval $(IMAGE)_PATH=$(IMAGEPATH)/restore_image)
$(eval $(IMAGE)_LINK_SCRIPT=restore_image.cmd)
$(eval $(IMAGE)_LAYOUT=$(IMAGEPATH)/restore_image/restore_image.o)
$(eval restore_image_COMMONFLAGS += -I$(ROOTPATH)/chips/p10/utils/imageProcs/)

# Files with multiple DD level content to be generated

# Files to be appended to image

# Dependencies for appending image sections in sequence:
# - file to be appended
# - all dependencies of previously appended sections or on raw image
# - append operation as to other section that has to be finished first

# Image build using all files and serialised by dependencies

# Create image report for image with all files appended

$(eval $(call BUILD_XIPIMAGE))
endef

$(eval MYCHIPS := $(filter-out ocmb,$(CHIPS)))

$(foreach chip,$(MYCHIPS),\
	$(foreach chipId, $($(chip)_CHIPID),\
		$(eval $(call BUILD_RESTORE_IMAGE_TEMP,$(chipId)))))

