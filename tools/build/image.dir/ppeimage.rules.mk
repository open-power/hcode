# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: tools/build/image.dir/ppeimage.rules.mk $
#
# IBM CONFIDENTIAL
#
# EKB Project
#
# COPYRIGHT 2016
# [+] International Business Machines Corp.
#
#
# The source code for this program is not published or otherwise
# divested of its trade secrets, irrespective of what has been
# deposited with the U.S. Copyright Office.
#
# IBM_PROLOG_END_TAG
#
# Makefile that automatically define all the recipes required to generate a
# PPE image
#
# MACROS:
#    BUILD_PPEIMAGE: Macro to automatically generate all the recipes for
#                    building a PPE image
#    ADD_PPEIMAGE_SRCDIR: Macro to add additional source directories
#    ADD_PPEIMAGE_INCDIR: Macro to add additional include directories
# Special Variables:
#    $(IMAGE)_PATH - alternate location to place image in
#    $(IMAGE)_LINK_SCRIPT - alternate linker script to use
#    $(IMAGE)_COMMONFLAGS - optional compile time flags to pass in
#
# BUILD_PPEIMAGE
#   This macro will automatically generate all the recipes for building a PPE
#   image. Requires that the following variables are defined:
#      - IMAGE=name - name of the image to generate
#   As a result, this macro will define how to build $(IMAGE).bin
BUILD_PPEIMAGE = $(eval $(call __BUILD_PPEIMAGE))

# Order of operation:
#    Define default output path and linker script
#    Add directory of the defining .mk file to the source path for this image
#    Setup LOCALCOMMONFLAGS for this image
#    Create phony target to allow "make $(IMAGE)"
#    Call helper macros to generate .bin file
#    Erase IMAGE and OBJS variable
define __BUILD_PPEIMAGE

$(IMAGE)_PATH ?= $(OBJPATH)/$(IMAGE)
$(IMAGE)_LINK_SCRIPT ?= $(IMAGE).cmd

ifeq "PPE" "$($(IMAGE)_TARGET)"
endif

$(call ADD_PPEIMAGE_OBJ,$(IMAGE),$(OBJS))
$(call ADD_PPEIMAGE_SRCDIR,$(IMAGE),$(dir $(lastword $(MAKEFILE_LIST))))

$(IMAGEPATH)/$(IMAGE)/$(IMAGE).bin: LOCALCOMMONFLAGS= $(PPE_LOCALCOMMONFLAGS)
$(IMAGEPATH)/$(IMAGE)/$(IMAGE).bin: LOCALCOMMONFLAGS+= \
	$($($(IMAGE)_TARGET)_CFLAGS)
$(IMAGEPATH)/$(IMAGE)/$(IMAGE).bin: LOCALCOMMONFLAGS+= -DIMAGE_NAME=$(IMAGE)
$(IMAGEPATH)/$(IMAGE)/$(IMAGE).bin: LOCALCOMMONFLAGS+= \
	-DPK_TRACE_HASH_PREFIX=$($(IMAGE)_TRACE_HASH_PREFIX)
$(IMAGEPATH)/$(IMAGE)/$(IMAGE).bin: LOCALCOMMONFLAGS+=$$($(IMAGE)_COMMONFLAGS)
$(IMAGEPATH)/$(IMAGE)/$(IMAGE).bin: LOCALCFLAGS+= $$($(IMAGE)_CFLAGS)
$(IMAGEPATH)/$(IMAGE)/$(IMAGE).bin: LOCALCXXFLAGS= $$($(IMAGE)_CXXFLAGS)
$(IMAGEPATH)/$(IMAGE)/$(IMAGE).bin: LOCALLDFLAGS= $$($(IMAGE)_LDFLAGS)

.PHONY: $(IMAGE)
$(IMAGE) :
		$(C1) mkdir -p $(IMAGEPATH)/$(IMAGE)
		@$$(MAKE) $(IMAGEPATH)/$(IMAGE)/$(IMAGE).bin

$(call GEN_PPEIMAGE_BINARY,$(IMAGE),$(IMAGEPATH)/$(IMAGE),PPE_BINUTILS)
$(call GEN_ELF_OUT,$(IMAGE),$(IMAGEPATH)/$(IMAGE),PPE_BINUTILS)

$(call PROCESS_LINK_SCRIPT,$(IMAGE),$(OBJPATH)/$(IMAGE),\
		$$($(IMAGE)_LINK_SCRIPT),$$($(IMAGE)_TARGET))

IMAGE_TARGETS += $(IMAGEPATH)/$(IMAGE)/$(IMAGE).bin

IMAGE:=
OBJS:=

endef

# ADD_PPEIMAGE_SRCDIR
#     This macro will add additional source paths to an executable.
# Usage:
#    $(call ADD_PPEIMAGE_SRCDIR,exe,/path1 /path2)
ADD_PPEIMAGE_SRCDIR = $(eval $(call __ADD_PPEIMAGE_SRCDIR,$(1),$(2)))
__ADD_PPEIMAGE_SRCDIR = \
	$(foreach path,$(2),$(call ___ADD_PPEIMAGE_SRCDIR,$(1),$(2)))
# Order of operations:
#    * Add the path to the include list.
#    * Generate all the possible .C->.o, .c->.o, etc. pattern recipes.
define ___ADD_PPEIMAGE_SRCDIR
$(call __ADD_PPEIMAGE_INCDIR,$(1),$(2))
$(call __GENERATE_PPE_OBJECTRULES,$(OBJPATH)/$(1),$(2),$$($(1)_TARGET))

endef

# ADD_PPEIMAGE_INCDIR
#     This macro will add additional include paths to a module.
ADD_PPEIMAGE_INCDIR = $(eval $(call __ADD_PPEIMAGE_INCDIR,$(1),$(2)))
__ADD_PPEIMAGE_INCDIR = \
	$(foreach path,$(2),$(call ___ADD_PPEIMAGE_INCDIR,$(1),$(path)))
# Order of operations:
#    * Add path to -I COMMON flags for #include <> style include.
#    * Add path to $(exe)_INCDIRS for use by other targets.
define ___ADD_PPEIMAGE_INCDIR
$(1)_COMMONFLAGS += -I$(2)
$(1)_INCDIRS += $(2)

endef




# __ADD_PPEIMAGE_OBJ
#    This macro will add additional objects to a module's dependency list.
# Usage:
#    $(call ADD_PPEIMAGE_OBJ,image,file1.o file2.o)
ADD_PPEIMAGE_OBJ = $(eval $(call __ADD_PPEIMAGE_OBJ,$(1),$(2)))
# Order of operations:
#    * Prepend $(IMAGE)_PATH to the path for the object.
#    * Add object and corresponding .dep file to the 'clean' target list.
#    * Add generated .dep file for header-file dependencies to __DEP_INCLUDES.
define __ADD_PPEIMAGE_OBJ
$(1)_OBJS += $$(addprefix $$($(1)_PATH)/,$(2))
$(foreach obj,$(2),$(call CLEAN_TARGET,$$($(1)_PATH)/$(obj))
	$(call CLEAN_TARGET,$$($(1)_PATH)/$(obj:.o=.dep))
	$(call CLEAN_TARGET,$$($(1)_PATH)/$(obj:.o=.s))
	$(call CLEAN_TARGET,$$($(1)_PATH)/$(obj:.o=.es))
	$(call CLEAN_TARGET,$$($(1)_PATH)/$(obj:.o=.s.ppe.hash)))

__DEP_INCLUDES += $$(wildcard $$(addprefix $$($(1)_PATH)/,$(2:.o=.dep)))

endef
