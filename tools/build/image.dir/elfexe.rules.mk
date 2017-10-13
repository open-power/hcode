# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: tools/build/image.dir/elfexe.rules.mk $
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

# Makefile that defines how we generate elf executable
#
# Macro: GEN_ELF_EXE: generates ELF exe from linker script and .S files
#
# Input:
#    $1 == IMAGE
#    $2 == OUTPUT PATH
#    $3 == TOOLCHAIN
#    $4 == LAYOUT
# Usage:
#   $(call GEN_ELF_EXE,$(IMAGE),$$($(IMAGE)_PATH, prefix )
define GEN_ELF_EXE
$2/.$1.elf.built : $2/link_$1_script $4 $$($1_OBJS)
		$(C2) "    GEN        $1.out"
		$(C1) mkdir -p $(2) && \
		 $$($(3)_PREFIX)$$(LD) -T$$< -Map $2/$1.map -o $2/$1.out \
			$4 $$($1_OBJS) --start-group --end-group && \
		touch $$@

$2/$1.out : $2/.$1.elf.built
$2/$1.map : $2/.$1.elf.built

$(call __CLEAN_TARGET,$2/.$1.elf.built)
$(call __CLEAN_TARGET,$2/$1.out)
$(call __CLEAN_TARGET,$2/$1.map)

endef
