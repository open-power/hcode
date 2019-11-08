# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: tools/imageProcs/hw_image.mk $
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

MAX_SBE_RING_SECTION_SIZE ?= 25600

# Depend on the completion of the base hw_image
# binfiles to add to the hw_image
# Various image dependencies to serialize hw_image creation

# $1 == type {hw,sim}
# $2 == chip
# $3 == chipId
define BUILD_HW_IMAGE
$(eval IMAGE=$3.$1_image)

$(eval $(IMAGE)_PATH=$(IMAGEPATH)/hw_image)
$(eval $(IMAGE)_LINK_SCRIPT=hw_image.cmd)
$(eval $(IMAGE)_LAYOUT=$(IMAGEPATH)/hw_image/hw_image.o)
$(eval hw_image_COMMONFLAGS += -I$(ROOTPATH)/chips/p10/utils/imageProcs/)

# Files to be appended to image
$(eval $(IMAGE)_FILE_SBE     = $(IMAGEPATH)/sbe_image/$3.$1.sbe_image.bin)
$(eval $(IMAGE)_FILE_QME     = $(IMAGEPATH)/qme_image/$3.$1.qme_image.bin)
$(eval $(IMAGE)_FILE_XGPE    = $(IMAGEPATH)/xgpe_image/$3.xgpe_image.bin)
$(eval $(IMAGE)_FILE_PGPE    = $(IMAGEPATH)/pgpe_image/$3.pgpe_image.bin)
$(eval $(IMAGE)_FILE_RESTORE = $(IMAGEPATH)/restore_image/$3.restore_image.bin)
$(eval $(IMAGE)_FILE_IOPPE   = $(IMAGEPATH)/ioppe_image/$3.ioppe_image.bin)
$(eval $(IMAGE)_FILE_IOPXRAM = $(IMAGEPATH)/iopxram_image/$3.iopxram_image.bin)
$(eval $(IMAGE)_FILE_OVERLAYS= $(RINGFILEPATH)/$3.$1.overlays.bin)
$(eval $(IMAGE)_FILE_DYNAMIC = $(RINGFILEPATH)/$3.$1.dynamic.bin)

# Set up dependencies for
# - building image ( $(IMAGE)_DEPS_IMAGE )
# - appending image sections in sequence ( $(IMAGE)_DEPS_{<section>,REPORT} )
#   - file to be appended
#   - all dependencies of previously appended sections or on raw image
#   - append operation as to other section that has to be finished first
$(eval $(IMAGE)_DEPS_IMAGE     = $(IMAGEPATH)/sbe_image/.$3.$1.sbe_image.bin.built)
$(eval $(IMAGE)_DEPS_SBE       = $(IMAGEPATH)/sbe_image/.$3.$1.sbe_image.bin.built)
$(eval $(IMAGE)_DEPS_SBE      += $$($(IMAGE)_PATH)/.$(IMAGE).setbuild_host)

$(eval $(IMAGE)_DEPS_IMAGE    += $(IMAGEPATH)/qme_image/.$3.$1.qme_image.bin.built)
$(eval $(IMAGE)_DEPS_QME       = $(IMAGEPATH)/qme_image/.$3.$1.qme_image.bin.built)
$(eval $(IMAGE)_DEPS_QME      += $$($(IMAGE)_DEPS_SBE))
$(eval $(IMAGE)_DEPS_QME      += $$($(IMAGE)_PATH)/.$(IMAGE).append.sbe)

$(eval $(IMAGE)_DEPS_IMAGE    += $(IMAGEPATH)/xgpe_image/.$3.xgpe_image.bin.built)
$(eval $(IMAGE)_DEPS_XGPE      = $(IMAGEPATH)/xgpe_image/.$3.xgpe_image.bin.built)
$(eval $(IMAGE)_DEPS_XGPE     += $$($(IMAGE)_DEPS_QME))
$(eval $(IMAGE)_DEPS_XGPE     += $$($(IMAGE)_PATH)/.$(IMAGE).append.qme)

$(eval $(IMAGE)_DEPS_IMAGE    += $(IMAGEPATH)/pgpe_image/.$3.pgpe_image.bin.built)
$(eval $(IMAGE)_DEPS_PGPE      = $(IMAGEPATH)/pgpe_image/.$3.pgpe_image.bin.built)
$(eval $(IMAGE)_DEPS_PGPE     += $$($(IMAGE)_DEPS_XGPE))
$(eval $(IMAGE)_DEPS_PGPE     += $$($(IMAGE)_PATH)/.$(IMAGE).append.xgpe)

$(eval $(IMAGE)_DEPS_IMAGE    += $(IMAGEPATH)/restore_image/.$3.restore_image.bin.built)
$(eval $(IMAGE)_DEPS_RESTORE   = $(IMAGEPATH)/restore_image/.$3.restore_image.bin.built)
$(eval $(IMAGE)_DEPS_RESTORE  += $$($(IMAGE)_DEPS_PGPE))
$(eval $(IMAGE)_DEPS_RESTORE  += $$($(IMAGE)_PATH)/.$(IMAGE).append.pgpe)

$(eval $(IMAGE)_DEPS_IMAGE    += $(IMAGEPATH)/ioppe_image/.$3.ioppe_image.bin.built)
$(eval $(IMAGE)_DEPS_IOPPE     = $(IMAGEPATH)/ioppe_image/.$3.ioppe_image.bin.built)
$(eval $(IMAGE)_DEPS_IOPPE    += $$($(IMAGE)_DEPS_RESTORE))
$(eval $(IMAGE)_DEPS_IOPPE    += $$($(IMAGE)_PATH)/.$(IMAGE).append.core_restore)

$(eval $(IMAGE)_DEPS_IMAGE    += $(IMAGEPATH)/iopxram_image/.$3.iopxram_image.bin.built)
$(eval $(IMAGE)_DEPS_IOPXRAM   = $(IMAGEPATH)/iopxram_image/.$3.iopxram_image.bin.built)
$(eval $(IMAGE)_DEPS_IOPXRAM  += $$($(IMAGE)_DEPS_IOPPE))
$(eval $(IMAGE)_DEPS_IOPXRAM  += $$($(IMAGE)_PATH)/.$(IMAGE).append.ioppe)

# Here we only attempt to add rings if ENGD exists (done via CHIP_EC_PAIRS check).
# Otherwise the build will fail later because the p10.hw.{overlays,dyninits}.bin cant be found.
# Note the else-',' after "*.append.dyninits".
$(eval $(IMAGE)_DEPS_IMAGE    += $$($(IMAGE)_FILE_OVERLAYS))
$(eval $(IMAGE)_DEPS_OVERLAYS  = $$($(IMAGE)_FILE_OVERLAYS))
$(eval $(IMAGE)_DEPS_OVERLAYS += $$($(IMAGE)_DEPS_IOPXRAM))
$(eval $(IMAGE)_DEPS_OVERLAYS += $$($(IMAGE)_PATH)/.$(IMAGE).append.iopxram)
$(eval $(IMAGE)_DEPS_IMAGE    += $$($(IMAGE)_FILE_DYNAMIC))
$(eval $(IMAGE)_DEPS_DYNAMIC   = $$($(IMAGE)_FILE_DYNAMIC))
$(eval $(IMAGE)_DEPS_DYNAMIC  += $$($(IMAGE)_DEPS_OVERLAYS))
$(eval $(IMAGE)_DEPS_DYNAMIC  += $$($(IMAGE)_PATH)/.$(IMAGE).append.overlays)
$(eval $(IMAGE)_DEPS_REPORT    = $$($(IMAGE)_DEPS_DYNAMIC))
$(eval $(IMAGE)_DEPS_REPORT   += $$($(IMAGE)_PATH)/.$(IMAGE).append.dynamic)

# Append nested images using all files and serialised by dependencies
$(eval $(call XIP_TOOL,append,.sbe,$$($(IMAGE)_DEPS_SBE),$$($(IMAGE)_FILE_SBE)))
$(eval $(call XIP_TOOL,append,.qme,$$($(IMAGE)_DEPS_QME),$$($(IMAGE)_FILE_QME)))
$(eval $(call XIP_TOOL,append,.xgpe,$$($(IMAGE)_DEPS_XGPE),$$($(IMAGE)_FILE_XGPE)))
$(eval $(call XIP_TOOL,append,.pgpe,$$($(IMAGE)_DEPS_PGPE),$$($(IMAGE)_FILE_PGPE)))
$(eval $(call XIP_TOOL,append,.core_restore,$$($(IMAGE)_DEPS_RESTORE),$$($(IMAGE)_FILE_RESTORE)))
$(eval $(call XIP_TOOL,append,.ioppe,$$($(IMAGE)_DEPS_IOPPE),$$($(IMAGE)_FILE_IOPPE)))
$(eval $(call XIP_TOOL,append,.iopxram,$$($(IMAGE)_DEPS_IOPXRAM),$$($(IMAGE)_FILE_IOPXRAM)))

# Append PPE shared ring sections (but only if ENGD exists)
$(eval $(call XIP_TOOL,append,.overlays,$$($(IMAGE)_DEPS_OVERLAYS),$$($(IMAGE)_FILE_OVERLAYS) 1))
$(eval $(call XIP_TOOL,append,.dynamic,$$($(IMAGE)_DEPS_DYNAMIC),$$($(IMAGE)_FILE_DYNAMIC) 1))

# Make the image report
$(eval $(call XIP_TOOL,report,,$$($(IMAGE)_DEPS_REPORT)))

# Verify size of SBE .rings section (but only if ENGD exists)
$(if $(findstring $(2):$(3), $(CHIP_EC_PAIRS)),\
	$(eval $(foreach ec, $($(3)_EC),\
		$(eval $(call VERIFY_SBE_RING_SECTION, 0x$(ec), $(MAX_SBE_RING_SECTION_SIZE),$(ec))))))

$(eval $(call BUILD_XIPIMAGE,$$($(IMAGE)_DEPS_IMAGE)))
endef

define VERIFY_SBE_RING_SECTION
$(eval $(call XIP_TOOL,check-sbe-ring-section,,$($(IMAGE)_PATH)/.$(IMAGE).report,$1 $2,$3))
endef

$(eval MYCHIPS=$(filter p10,$(CHIPS)))

$(foreach chip,$(MYCHIPS),\
	$(foreach chipId, $($(chip)_CHIPID),\
		$(eval $(call BUILD_HW_IMAGE,hw,$(chip),$(chipId)))))
