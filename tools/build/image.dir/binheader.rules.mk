# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: tools/build/image.dir/binheader.rules.mk $
#
# IBM CONFIDENTIAL
#
# EKB Project
#
# COPYRIGHT 2016,2017
# [+] International Business Machines Corp.
#
#
# The source code for this program is not published or otherwise
# divested of its trade secrets, irrespective of what has been
# deposited with the U.S. Copyright Office.
#
# IBM_PROLOG_END_TAG
#
# Makefile that automatically define all the recipes required to generate an
# binary header image
#
# MACROS:
#    BUILD_BINHEADER: Macro to automatically generate all the recipes
#    for building a binary header image
#
#    ADD_BINHEADER_SRCDIR:
#            Macro to add additional source directories to an image
#    ADD_BINHEADER_INCDIR:
#            Macro to add additional include directories to an image
#
# Special Variables:
#    $(IMAGE)_PATH - alternate location to place image in
#    $(IMAGE)_LINK_SCRIPT - alternate linker script to use
#    $(IMAGE)_COMMONFLAGS - optional compile time flags to pass in
#
# BUILD_BINHEADER
#   This macro will automatically generate all the recipes for building
#   a binary header image. Requires that the following variables are defined:
#      - IMAGE=name - name of the image to generate
#      - $(IMAGE)_TARGET - toolchain to use (PPE|PPC2PPE)
#   As a result, this macro will define how to build $(IMAGE).bin
BUILD_BINHEADER = $(eval $(call __BUILD_BINHEADER,$(1),$(2)))

# Order of operation:
#    Define default output path and linker script
#    Add directory of the defining .mk file to the source path for this image
#    Setup LOCALCOMMONFLAGS for this image
#    Create phony target to allow "make $(IMAGE)"
#    Call helper macros to generate .bin file
#    Erase IMAGE and OBJS variable

define __BUILD_BINHEADER
$(IMAGE)_PATH ?= $(OBJPATH)/$(IMAGE)
$(IMAGE)_LINK_SCRIPT ?= $(IMAGE)Link
$(call ADD_BINHEADER_OBJ,$(IMAGE),$(OBJS))
$(call ADD_BINHEADER_SRCDIR,$(IMAGE),$(dir $(lastword $(MAKEFILE_LIST))))

$(IMAGEPATH)/$(IMAGE)/$(IMAGE).bin: LOCALCOMMONFLAGS =
$(IMAGEPATH)/$(IMAGE)/$(IMAGE).bin: LOCALCOMMONFLAGS += $$($(IMAGE)_COMMONFLAGS)
$(IMAGEPATH)/$(IMAGE)/$(IMAGE).bin: LOCALLDFLAGS = $$($(IMAGE)_LDFLAGS)

.PHONY:  $(IMAGE)
$(IMAGE) :
	$(C1) mkdir -p $(IMAGEPATH)/$(IMAGE)
		@$$(MAKE) $(IMAGEPATH)/$(IMAGE)/$(IMAGE).bin

##
## rules to make a bin from a obj
$(call GEN_HEADER_BINARY,$(IMAGE),$(IMAGEPATH)/$(IMAGE),PPE_BINUTILS,$1,$2)
$(call PROCESS_LINK_SCRIPT,$(IMAGE),$(OBJPATH)/$(IMAGE),\
		$$($(IMAGE)_LINK_SCRIPT),$$($(IMAGE)_TARGET))

IMAGE_TARGETS += $(IMAGEPATH)/$(IMAGE)/$(IMAGE).bin

IMAGE:=
OBJS:=

endef


# ADD_BINHEADER_SRCDIR
#     This macro will add additional source paths to an executable.
# Usage:
#    $(call ADD_BINHEADER_SRCDIR,exe,/path1 /path2)
ADD_BINHEADER_SRCDIR = $(eval $(call __ADD_BINHEADER_SRCDIR,$(1),$(2)))
__ADD_BINHEADER_SRCDIR = \
	$(foreach path,$(2),$(call ___ADD_BINHEADER_SRCDIR,$(1),$(2)))
# Order of operations:
#    * Add the path to the include list.
#    * Generate all the possible .C->.o, .c->.o, etc. pattern recipes.
define ___ADD_BINHEADER_SRCDIR
$(call __ADD_BINHEADER_INCDIR,$(1),$(2))
$(call __GENERATE_PPE_OBJECTRULES,$(OBJPATH)/$(1),$(2),$$($(1)_TARGET))
endef

# ADD_BINHEADER_INCDIR
#     This macro will add additional include paths to a module.
ADD_BINHEADER_INCDIR = $(eval $(call __ADD_BINHEADER_INCDIR,$(1),$(2)))
__ADD_BINHEADER_INCDIR = \
	$(foreach path,$(2),$(call ___ADD_BINHEADER_INCDIR,$(1),$(path)))
# Order of operations:
#    * Add path to -I COMMON flags for #include <> style include.
#    * Add path to $(exe)_INCDIRS for use by other targets.
define ___ADD_BINHEADER_INCDIR
$(1)_COMMONFLAGS += -I$(2)
$(1)_INCDIRS += $(2)

endef

# __ADD_BINHEADER_OBJ
#    This macro will add additional objects to a module's dependency list.
# Usage:
#    $(call ADD_BINHEADER_OBJ,image,file1.o file2.o)
ADD_BINHEADER_OBJ = $(eval $(call __ADD_BINHEADER_OBJ,$(1),$(2)))
# Order of operations:
#    * Prepend $(IMAGE)_PATH to the path for the object.
#    * Add object and corresponding .dep file to the 'clean' target list.
#    * Add generated .dep file for header-file dependencies to __DEP_INCLUDES.
#    * Create any directories which are required for objects.
define __ADD_BINHEADER_OBJ
$(1)_OBJS += $$(addprefix $$($(1)_PATH)/,$(2))
file= $$(addprefix $$($(1)_PATH)/,$(2))
$(foreach obj,$(2),$(call CLEAN_TARGET,$$($(1)_PATH)/$(obj))
	$(call CLEAN_TARGET,$$($(1)_PATH)/$(obj:.o=.dep))
	$(call CLEAN_TARGET,$$($(1)_PATH)/$(obj:.o=.s)))

__DEP_INCLUDES += $$(wildcard $$(addprefix $$($(1)_PATH)/,$(2:.o=.dep)))

$(call depend_on_dir,$(file))

endef

# Makefile that defines how to make a binary image
#
# Macros:
#    GEN_HEADER_BINARY: Macro to generate a binary headerfile
#
# Input:
#    $1 == IMAGE
#    $2 == OUTPUT PATH
#    $3 == TARGET toolchain
#    $4 == DEPENDENT IMAGE 1 necessary for calculation of header entry value
#    $5 == DEPENDENT IMAGE 2 necessary for calculation of header entry value (optional)
#
# Order Of Operation:
#    Run objcopy to generate the binary
#    Run ImgEditor to add timestamp & version info to the binary

define GEN_HEADER_BINARY
$2/$1.bin : $(OBJPATH)/$1/link_$1_script $$($1_OBJS) $4
		$(C2) "    GEN        $$(@F)"
		$(C1) mkdir -p $(2) && \
		 $$($3_PREFIX)$$(LD) $$(LOCALLDFLAGS) \
			-T$$< -Map $2/$1.map -o $2/$1_temp.bin \
			-s $$($1_OBJS) && \
		 $$(EXEPATH)/$(IMAGE_EDITOR) $2/$1_temp.bin $(4) $(5) && \
		mv $2/$1_temp.bin $$@

$(call __CLEAN_TARGET,$2/$1.bin)
$(call __CLEAN_TARGET,$2/$1.map)
IMAGE_EDITOR=
endef

