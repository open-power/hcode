# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/tools/imageProcs/sgpe_image.mk $
#
# OpenPOWER HCODE Project
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

# $1 == chipId
define BUILD_SGPE_IMAGE
$(eval IMAGE=$1.sgpe_image)

$(eval $(IMAGE)_PATH=$(IMAGEPATH)/sgpe_image)
$(eval $(IMAGE)_LINK_SCRIPT=sgpe_image.cmd)
$(eval $(IMAGE)_LAYOUT=$(IMAGEPATH)/sgpe_image/sgpe_image.o)
$(eval sgpe_image_COMMONFLAGS += -I$(ROOTPATH)/chips/p9/xip/)

# files with multiple DD level content to be generated
$(eval $(call BUILD_DD_LEVEL_CONTAINER,$1,qpmr_header))
$(eval $(call BUILD_DD_LEVEL_CONTAINER,$1,stop_gpe))

# files to be appended to image
$(eval $(IMAGE)_FILE_QPMR=$$($(IMAGE)_DD_CONT_qpmr_header))
$(eval $(IMAGE)_FILE_LVL1_BL=$(IMAGEPATH)/sgpe_lvl1_copier/sgpe_lvl1_copier.bin)
$(eval $(IMAGE)_FILE_LVL2_BL=$(IMAGEPATH)/sgpe_lvl2_loader/sgpe_lvl2_loader.bin)
$(eval $(IMAGE)_FILE_HCODE=$$($(IMAGE)_DD_CONT_stop_gpe))

# dependencies for appending image sections in sequence:
# - file to be appended
# - all dependencies of previously appended sections or on raw image
# - append operation as to other section that has to be finished first
$(eval $(IMAGE)_DEPS_QPMR =$$($(IMAGE)_FILE_QPMR))
$(eval $(IMAGE)_DEPS_QPMR+=$$($(IMAGE)_PATH)/.$(IMAGE).setbuild_host)

$(eval $(IMAGE)_DEPS_LVL1_BL =$$($(IMAGE)_FILE_LVL1_BL))
$(eval $(IMAGE)_DEPS_LVL1_BL+=$$($(IMAGE)_DEPS_QPMR))
$(eval $(IMAGE)_DEPS_LVL1_BL+=$$($(IMAGE)_PATH)/.$(IMAGE).append.qpmr)

$(eval $(IMAGE)_DEPS_LVL2_BL =$$($(IMAGE)_FILE_LVL2_BL))
$(eval $(IMAGE)_DEPS_LVL2_BL+=$$($(IMAGE)_DEPS_LVL1_BL))
$(eval $(IMAGE)_DEPS_LVL2_BL+=$$($(IMAGE)_PATH)/.$(IMAGE).append.lvl1_bl)

$(eval $(IMAGE)_DEPS_HCODE =$$($(IMAGE)_FILE_HCODE))
$(eval $(IMAGE)_DEPS_HCODE+=$$($(IMAGE)_DEPS_LVL2_BL))
$(eval $(IMAGE)_DEPS_HCODE+=$$($(IMAGE)_PATH)/.$(IMAGE).append.lvl2_bl)

$(eval $(IMAGE)_DEPS_REPORT =$$($(IMAGE)_DEPS_HCODE))
$(eval $(IMAGE)_DEPS_REPORT+=$$($(IMAGE)_PATH)/.$(IMAGE).append.hcode)

# image build using all files and serialised by dependencies
$(eval $(call XIP_TOOL,append,.qpmr,$$($(IMAGE)_DEPS_QPMR),$$($(IMAGE)_FILE_QPMR) 1))
$(eval $(call XIP_TOOL,append,.lvl1_bl,$$($(IMAGE)_DEPS_LVL1_BL),$$($(IMAGE)_FILE_LVL1_BL)))
$(eval $(call XIP_TOOL,append,.lvl2_bl,$$($(IMAGE)_DEPS_LVL2_BL),$$($(IMAGE)_FILE_LVL2_BL)))
$(eval $(call XIP_TOOL,append,.hcode,$$($(IMAGE)_DEPS_HCODE), $$($(IMAGE)_FILE_HCODE) 1))

# create image report for image with all files appended
$(eval $(call XIP_TOOL,report,,$$($(IMAGE)_DEPS_REPORT)))

$(eval $(call BUILD_XIPIMAGE))
endef

$(eval MY_CHIPS := $(filter-out centaur ocmb,$(CHIPS)))

$(foreach chip,$(MY_CHIPS),\
	$(foreach chipId, $($(chip)_CHIPID),\
	$(eval $(call BUILD_SGPE_IMAGE,$(chipId)))))
