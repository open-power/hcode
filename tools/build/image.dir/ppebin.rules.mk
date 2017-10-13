# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: tools/build/image.dir/ppebin.rules.mk $
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
# Makefile that defines how we generate binaries for a specific source
#
# Macros:
#    GEN_PPEIMAGE_BINARY: Macro to generate a PPE image binary and disassembly
#                         from an elf output.
# Input:
#    $1 == IMAGE
#    $2 == OUTPUT PATH
#    $3 == TARGET toolchain
#
# Order Of Operation:
#    Run objcopy to generate the binary
#    If ImgEditor exists then run ImgEditor to add timestamp & version info
#       to the binary
#    Run objdump to generate an assembler listing
#    Run trace hash to generate the trexStringFile

define GEN_PPEIMAGE_BINARY
$2/$1.bin : $2/$1.out
		$(C2) "    GEN        $$(@F)"
		$(C1) mkdir -p $$(@D)
		$(C1) $$($(3)_PREFIX)$$(OBJCOPY) -O binary $$^ $2/$1_temp.bin
ifdef IMAGE_EDITOR
ifneq ("$(wildcard $(EXEPATH)/$(IMAGE_EDITOR))", "")
		$(C1) $(EXEPATH)/$(IMAGE_EDITOR) $2/$1_temp.bin;
endif
endif
		$(C1) mv $2/$1_temp.bin $$@
		$(C2) "    GEN        $$(@F).dis"
		$(C1) $$($(3)_PREFIX)$$(OBJDUMP) -S $$^ > $2/$1.dis
		$(C2) "    GEN        trexStringFile"
		$(C1) $$(THASH) -c -d $(OBJPATH)/$(1) \
			-s $(OBJPATH)/$(1)/trexStringFile > /dev/null

$2/$1.dis : $2/$1.bin

$(call __CLEAN_TARGET,$2/$1.bin)
$(call __CLEAN_TARGET,$2/$1.dis)
$(call __CLEAN_TARGET,$(OBJPATH)/$(1)/trexStringFile)
IMAGE_EDITOR=
endef

