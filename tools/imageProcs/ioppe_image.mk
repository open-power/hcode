# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: tools/imageProcs/ioppe_image.mk $
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
# $1 == chipId
define BUILD_IOPPE_IMAGE
$(eval IMAGE=$1.ioppe_image)

$(eval $(IMAGE)_PATH=$(IMAGEPATH)/ioppe_image)
$(eval $(IMAGE)_LINK_SCRIPT=ioppe_image.cmd)
$(eval $(IMAGE)_LAYOUT=$(IMAGEPATH)/ioppe_image/ioppe_image.o)
$(eval ioppe_image_COMMONFLAGS += -I$(ROOTPATH)/chips/p9/xip/)

# files to be appended to image
$(eval $(IMAGE)_FILE_IOF=$(IMAGEPATH)/iox/iox.bin)
$(eval $(IMAGE)_FILE_IOO_ABUS=$(IMAGEPATH)/ioa/ioa.bin)

$(eval $(IMAGE)_FILE_IOO_NV=$(CONFIG_IONV_FILE_LOCATION))

# dependencies for appending image sections in sequence:
# - file to be appended
# - all dependencies of previously appended sections or on raw image
# - append operation as to other section that has to be finished first
$(eval $(IMAGE)_DEPS_IOF =$$($(IMAGE)_FILE_IOF))
$(eval $(IMAGE)_DEPS_IOF+=$$($(IMAGE)_PATH)/.$(IMAGE).setbuild_host)

$(eval $(IMAGE)_DEPS_IOO_ABUS =$$($(IMAGE)_FILE_IOO_ABUS))
$(eval $(IMAGE)_DEPS_IOO_ABUS+=$$($(IMAGE)_DEPS_IOF))
$(eval $(IMAGE)_DEPS_IOO_ABUS+=$$($(IMAGE)_PATH)/.$(IMAGE).append.iof)

$(eval $(IMAGE)_DEPS_IOO_NV =$$($(IMAGE)_FILE_IOO_NV))
$(eval $(IMAGE)_DEPS_IOO_NV+=$$($(IMAGE)_DEPS_IOO_ABUS))
$(eval $(IMAGE)_DEPS_IOO_NV+=$$($(IMAGE)_PATH)/.$(IMAGE).append.ioo_abus)

$(eval $(IMAGE)_DEPS_REPORT =$$($(IMAGE)_DEPS_IOO_NV))

#fix up the dependancies if we include the ionv.bin file
$(if $(findstring y,$(CONFIG_INCLUDE_IONV)),\
$(eval $(IMAGE)_DEPS_REPORT+=$$($(IMAGE)_PATH)/.$(IMAGE).append.ioo_nv),\
$(eval $(IMAGE)_DEPS_REPORT+=$$($(IMAGE)_PATH)/.$(IMAGE).append.ioo_abus))

# image build using all files and serialised by dependencies
$(eval $(call XIP_TOOL,append,.iof,$$($(IMAGE)_DEPS_IOF),$$($(IMAGE)_FILE_IOF)))
$(eval $(call XIP_TOOL,append,.ioo_abus,$$($(IMAGE)_DEPS_IOO_ABUS),$$($(IMAGE)_FILE_IOO_ABUS)))

$(if $(findstring y,$(CONFIG_INCLUDE_IONV)),\
$(eval $(call XIP_TOOL,append,.ioo_nv,$$($(IMAGE)_DEPS_IOO_NV),$$($(IMAGE)_FILE_IOO_NV))))

# create image report for image with all files appended
$(eval $(call XIP_TOOL,report,,$$($(IMAGE)_DEPS_REPORT)))

$(eval $(call BUILD_XIPIMAGE))
endef

$(foreach chip,$(CHIPS),\
	$(foreach chipId, $($(chip)_CHIPID),\
	$(eval $(call BUILD_IOPPE_IMAGE,$(chipId)))))

