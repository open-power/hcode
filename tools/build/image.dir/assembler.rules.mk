# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: tools/build/image.dir/assembler.rules.mk $
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

# Makefile that defines how we build .S files
#    Currently, we are using power-pc assembler
#
# Macros:
#    __GENERATE_ASM_OBJECTRULES: Macro to compiler .S into .o
# Inputs:
#    $1 == output path
#    $2 == src path
#    $3 == target toolchain
define __GENERATE_ASM_OBJECTRULES
.PRECIOUS: $1/%.s

$1/%.o: private LOCALCOMMONFLAGS = $$(basename $($$(@F))_COMMONFLAGS)

$1/%.s: private LOCALCOMMONFLAGS =

$1/%.s : $(2)/%.S
		$(C2) "    GEN        $$(@F)"
		$(C1) mkdir -p $1 && $$($(3)_PREFIX)$$(CC) -E  $$($$(basename $$(@F))_COMMONFLAGS)  -o $$@ $$^

$1/%.o : $1/%.s
		$(C2) "    GEN        $$(@F)"
		$(C1) mkdir -p $1 && $$($(3)_PREFIX)$$(AS)   $$(ASFLAGS) -o $$@ $$^
endef
