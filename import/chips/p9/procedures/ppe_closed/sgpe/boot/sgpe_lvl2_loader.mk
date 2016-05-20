# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p9/procedures/ppe_closed/sgpe/boot/sgpe_lvl2_loader.mk $
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
#

IMAGE=sgpe_lvl2_loader

# Indicates we are doing an EKB build as opposed to a local build.
# Allow control of which rules to consider.
EKB_BUILD = 1

## Set _TARGET = PPC2PPE to use the 405 compiler with PPE backend or
#  set _TARGET = PPE to use the new native compiler
$(IMAGE)_TARGET=PPC2PPE

## PPE_TYPE can be std or gpe
_PPE_TYPE=gpe

$(IMAGE)_LINK_SCRIPT=linkloader.cmd

include $(P2P_SRCDIR)/p2pfiles.mk
OBJS += $(P2P_OBJECTS)
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(P2P_SRCDIR))

# It's important that the final included *.mk is in the $(SGPE_SRCDIR)
include $(SGPE_SRCDIR)/boot/topfiles.mk
OBJS+=$(BOOT_LOADER_OBJECTS)

$(IMAGE)_TRACE_HASH_PREFIX := $(shell echo $(IMAGE) | md5sum | cut -c1-4 \
	| xargs -i printf "%d" 0x{})

$(call ADD_PPEIMAGE_SRCDIR,$(SGPE_SRCDIR)/boot)

# add include paths
$(call ADD_PPEIMAGE_INCDIR,$(IMAGE),$(SGPE_SRCDIR)/boot \
	$(PK_SRCDIR)/kernel \
	$(PK_SRCDIR)/ppe42 \
	$(PK_SRCDIR)/trace \
	$(PK_SRCDIR)/$(_PPE_TYPE) \
	$(PM_LIBDIR)/include \
	$(PM_LIBDIR)/include/registers \
	$(PM_LIBDIR)/common \
	$(PM_LIBDIR)/occlib \
	$(HCODE_LIBDIR) \
	$(HCODE_COMMON_LIBDIR) \
	)

$(IMAGE)_LDFLAGS=-e __system_reset -N -gc-sections -Bstatic

$(call BUILD_PPEIMAGE)
