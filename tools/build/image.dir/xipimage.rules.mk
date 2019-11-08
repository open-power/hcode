# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: tools/build/image.dir/xipimage.rules.mk $
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
#
# Makefile that automatically define all the recipes required to generate an
# XIP image
#
# MACROS:
#    BUILD_XIPIMAGE: Macro to automatically generate all the recipes for building
#                 an XIP image
#    ADD_XIPIMAGE_SRCDIR: Macro to add additional source directories to an image
#    ADD_XIPIMAGE_INCDIR: Macro to add additional include directories to an image
# Special Variables:
#    $(IMAGE)_PATH - alternate location to place image in
#    $(IMAGE)_LINK_SCRIPT - alternate linker script to use
#    $(IMAGE)_COMMONFLAGS - optional compile time flags to pass in
#
# BUILD_XIPIMAGE
#   This macro will automatically generate all the recipes for building an xip
#   image. Requires that the following variables are defined:
#      - IMAGE=name - name of the image to generate
#   As a result, this macro will define how to build $(IMAGE).bin
#   Inputs:
#     $1 <- The IPL section dependency report, $(IMAGE)_DEPS_REPORT
#
BUILD_XIPIMAGE = $(eval $(call __BUILD_XIPIMAGE,,$(1)))

# Order of operation:
#    Define default output path and linker script
#    Add directory of the defining .mk file to the source path for this image
#    Setup LOCALCOMMONFLAGS for this image
#    Create phony target to allow "make $(IMAGE)"
#    Call helper macros to generate .bin file
#    Erase IMAGE and OBJS variable
#   Inputs:
#     $1 <- What is this? It's referenced in macro calls at end of macro def.
#     $2 <- The IPL section dependency report, $(IMAGE)_DEPS_REPORT
#
define __BUILD_XIPIMAGE
$(IMAGE)_PATH ?= $(IMAGEPATH)/$(IMAGE)
$(IMAGE)_LINK_SCRIPT ?= $(IMAGE).cmd
$(IMAGE)_LAYOUT ?= $(IMAGEPATH)/$(IMAGE)/$(IMAGE).o

XIPPATH=$(ROOTPATH)/chips/p10/utils/imageProcs

$(call ADD_XIPIMAGE_INCDIR,$(IMAGE),$(XIPPATH))
$(call ADD_XIPIMAGE_SRCDIR,$(IMAGE),$(dir $(lastword $(MAKEFILE_LIST))))
$$($(IMAGE)_PATH)/$(IMAGE).bin : LOCALCOMMONFLAGS += $$($(IMAGE)_COMMONFLAGS)

.PHONY: $(IMAGE)
$(IMAGE) : $(IMAGE).pre_image_targets
		$(C1) mkdir -p $$($(IMAGE)_PATH)
		@$$(MAKE) $$($(IMAGE)_PATH)/$(IMAGE).bin

PHONY: $(IMAGE).modules
$(IMAGE).modules:  _BUILD/GEN_TARGETS
	@$$(MAKE)  $(sort $$($(IMAGE)_MODULE_TARGETS)) suppress_nothing_to_do

PHONY: $(IMAGE).exes
$(IMAGE).exes :  $(IMAGE).modules
	@$$(MAKE)  $(sort $( $$($(IMAGE)_EXE_TARGETS))) suppress_nothing_to_do

PHONY: $(IMAGE).pre_image_targets
$(IMAGE).pre_image_targets : $(IMAGE).exes
	@$$(MAKE)  $(sort $$($(IMAGE)_PRE_IMAGE_TARGETS)) suppress_nothing_to_do

IMAGE_TARGETS += $$($(IMAGE)_PATH)/$(IMAGE).bin

$(call GEN_IMAGE_BINARY,$(IMAGE),$$($(IMAGE)_PATH),$$(or $$($(1)_TARGET),PPE),$(2))
$(call GEN_ELF_EXE,$(IMAGE),$$($(IMAGE)_PATH),$$(or $$($(1)_TARGET),PPE),$$($(IMAGE)_LAYOUT))
$(call PROCESS_LINK_SCRIPT,$(IMAGE),$$($(IMAGE)_PATH), \
		$$($(IMAGE)_LINK_SCRIPT),$$(or $$($(1)_TARGET),PPE))

$(call __CLEAN_TARGET, $($(IMAGE)_LAYOUT))
$(call __CLEAN_TARGET, $(patsubst %.o,%.s,$($(IMAGE)_LAYOUT)))

IMAGE:=
OBJS:=

endef

# ADD_XIPIMAGE_SRCDIR
#     This macro will add additional source paths to an image
# Usage:
#    $(call ADD_XIPIMAGE_SRCDIR,XIPIMAGE,/path1 /path2)
ADD_XIPIMAGE_SRCDIR = $(eval $(call __ADD_XIPIMAGE_SRCDIR,$(1),$(2)))
__ADD_XIPIMAGE_SRCDIR = \
	$(foreach path,$(2),$(call ___ADD_XIPIMAGE_SRCDIR,$(1),$(2)))

# Order of operations:
#    * Add the path to the include list.
#    * Generate all the possible .C->.o, .c->.o, etc. pattern recipes.
define ___ADD_XIPIMAGE_SRCDIR
$(call __ADD_XIPIMAGE_INCDIR,$(1),$(2))
$(call __GENERATE_ASM_OBJECTRULES,$$($(IMAGE)_PATH),$(2),$$(or $$($(1)_TARGET),PPE))
endef

# ADD_XIPIMAGE_INCDIR
#     This macro will add additional include paths for an image
ADD_XIPIMAGE_INCDIR = $(eval $(call __ADD_XIPIMAGE_INCDIR,$(1),$(2)))
__ADD_XIPIMAGE_INCDIR = \
	$(foreach path,$(2),$(call ___ADD_XIPIMAGE_INCDIR,$(1),$(path)))
# Order of operations:
#    * Add path to -I COMMON flags for #include <> style include.
#    * Add path to $(IMAGE)_INCDIRS for use by other targets.
define ___ADD_XIPIMAGE_INCDIR
$(1)_COMMONFLAGS += -I$(2)
$(1)_INCDIRS += $(2)
endef


# __ADD_XIPIMAGE_OBJ
#    This macro will add additional objects to a module's dependency list.
# Usage:
#    $(call ADD_XIPIMAGE_OBJ,image,file1.o file2.o)
ADD_XIPIMAGE_OBJ = $(eval $(call __ADD_XIPIMAGE_OBJ,$(1),$(2)))
# Order of operations:
#    * Prepend $(IMAGE)_PATH to the path for the object.
#    * Add object and corresponding .dep file to the 'clean' target list.
#    * Add generated .dep file for header-file dependencies to __DEP_INCLUDES.
define __ADD_XIPIMAGE_OBJ
$(1)_OBJS += $$(addprefix $$($(1)_PATH)/,$(2))
$(foreach obj,$(2),$(call CLEAN_TARGET,$$($(1)_PATH)/$(obj))
	$(call CLEAN_TARGET,$$($(1)_PATH)/$(obj:.o=.dep)))

__DEP_INCLUDES += $$(wildcard $$(addprefix $$($(1)_PATH)/,$(2:.o=.dep)))

endef
