# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: tools/imageProcs/hw_image.mk $
#
# OpenPOWER HCODE Project
#
# COPYRIGHT 2016,2018
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

MAX_SBE_RING_SECTION_SIZE ?= 25600

HW_IMAGE_VERSION:= $(shell cat $(ROOTPATH)/../tools/build/release_tag.txt)

#depend on the completion of the base hw_image
#binfiles to add to the hw_image
#various image dependencies to serialize hw_image creation
#$1 == type
#$2 == chipId
define BUILD_HW_IMAGE
$(eval IMAGE=$2.$1_image)

$(eval $(IMAGE)_PATH=$(IMAGEPATH)/hw_image)
$(eval $(IMAGE)_LINK_SCRIPT=hw_image.cmd)
$(eval $(IMAGE)_LAYOUT=$(IMAGEPATH)/hw_image/hw_image.o)
$(eval hw_image_COMMONFLAGS += -I$(ROOTPATH)/chips/p9/xip/)

$(eval $(IMAGE)_FILE_SGPE    = $(IMAGEPATH)/sgpe_image/$2.sgpe_image.bin)
$(eval $(IMAGE)_FILE_RESTORE = $(IMAGEPATH)/restore_image/$2.restore_image.bin)
$(eval $(IMAGE)_FILE_CME     = $(IMAGEPATH)/cme_image/$2.cme_image.bin)
$(eval $(IMAGE)_FILE_PSTATE  = $(IMAGEPATH)/pstate_gpe_image/$2.pstate_gpe_image.bin)
$(eval $(IMAGE)_FILE_IOPPE   = $(IMAGEPATH)/ioppe_image/$2.ioppe_image.bin)
$(eval $(IMAGE)_FILE_RINGS   = $(GENPATH)/rings/$1/$2.$1.rings.bin)
$(eval $(IMAGE)_FILE_OVERLAYS= $(GENPATH)/rings/$1/$2.$1.overlays.bin)

# dependencies for appending image sections in sequence
$(eval $(IMAGE)_DEPS_SGPE =$(IMAGEPATH)/sgpe_image/.$2.sgpe_image.bin.built)
$(eval $(IMAGE)_DEPS_SGPE+=$$($(IMAGE)_PATH)/.$(IMAGE).setbuild_host)

$(eval $(IMAGE)_DEPS_RESTORE =$(IMAGEPATH)/restore_image/.$2.restore_image.bin.built)
$(eval $(IMAGE)_DEPS_RESTORE+=$$($(IMAGE)_PATH)/.$(IMAGE).append.sgpe)

$(eval $(IMAGE)_DEPS_CME =$(IMAGEPATH)/cme_image/.$2.cme_image.bin.built)
$(eval $(IMAGE)_DEPS_CME+=$$($(IMAGE)_PATH)/.$(IMAGE).append.core_restore)

$(eval $(IMAGE)_DEPS_PSTATE =$(IMAGEPATH)/pstate_gpe_image/.$2.pstate_gpe_image.bin.built)
$(eval $(IMAGE)_DEPS_PSTATE+=$$($(IMAGE)_PATH)/.$(IMAGE).append.cme)

$(eval $(IMAGE)_DEPS_IOPPE =$(IMAGEPATH)/ioppe_image/.$2.ioppe_image.bin.built)
$(eval $(IMAGE)_DEPS_IOPPE+=$$($(IMAGE)_PATH)/.$(IMAGE).append.pgpe)

$(eval $(IMAGE)_DEPS_RINGS =$$($(IMAGE)_FILE_RINGS))
$(eval $(IMAGE)_DEPS_RINGS+=$$($(IMAGE)_PATH)/.$(IMAGE).append.ioppe)

$(eval $(IMAGE)_DEPS_OVERLAYS = $$($(IMAGE)_FILE_OVERLAYS))
$(eval $(IMAGE)_DEPS_OVERLAYS+= $$($(IMAGE)_PATH)/.$(IMAGE).append.rings)


# image build using all files and serialised by dependencies
$(eval $(call XIP_TOOL,append,.sgpe,$$($(IMAGE)_DEPS_SGPE),$$($(IMAGE)_FILE_SGPE)))
$(eval $(call XIP_TOOL,append,.core_restore,$$($(IMAGE)_DEPS_RESTORE),$$($(IMAGE)_FILE_RESTORE)))
$(eval $(call XIP_TOOL,append,.cme,$$($(IMAGE)_DEPS_CME),$$($(IMAGE)_FILE_CME)))
$(eval $(call XIP_TOOL,append,.pgpe,$$($(IMAGE)_DEPS_PSTATE),$$($(IMAGE)_FILE_PSTATE)))
$(eval $(call XIP_TOOL,append,.ioppe,$$($(IMAGE)_DEPS_IOPPE),$$($(IMAGE)_FILE_IOPPE)))

$(eval $(call XIP_TOOL,append,.rings,$$($(IMAGE)_DEPS_RINGS),$$($(IMAGE)_FILE_RINGS) 1))

$(eval $(call XIP_TOOL,append,.overlays,$$($(IMAGE)_DEPS_OVERLAYS), $$($(IMAGE)_FILE_OVERLAYS) 1))

$(eval $(call XIP_TOOL,set,build_tag,$$($(IMAGE)_PATH)/.$(IMAGE).append.overlays, $(HW_IMAGE_VERSION)))

$(eval $(call XIP_TOOL,report,,$$($(IMAGE)_PATH)/.$(IMAGE).setbuild_tag))

$(eval $(foreach ec, $($(2)_EC),\
	    $(eval $(call VERIFY_SBE_RING_SECTION, 0x$(ec), $(MAX_SBE_RING_SECTION_SIZE),$(ec)))))

$(eval $(call BUILD_XIPIMAGE))
endef

define VERIFY_SBE_RING_SECTION
	$(eval $(call XIP_TOOL,check-sbe-ring-section,,$($(IMAGE)_PATH)/.$(IMAGE).report, $1 $2,$3))
endef

$(eval $(call BUILD_HW_IMAGE,hw,p9n))


