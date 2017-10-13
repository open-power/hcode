# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: tools/build/image.dir/elfout.rules.mk $
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
# Makefile that defines how we generate elf out
#
# Macro: GEN_ELF_OUT: generates ELF out from linker script and .S files
#
# Input:
#    $1 == IMAGE
#    $2 == OUTPUT PATH
#    $3 == TARGET toolchain
# Usage:
#   $(call GEN_ELF_OUT,$(IMAGE),$$($(IMAGE)_PATH),$(TOOLCHAIN)

define GEN_ELF_OUT
$2/$1.out.built : $(OBJPATH)/$1/link_$1_script $$($1_OBJS)
		$(C2) "    GEN        $1.out"
		$(C1) mkdir -p $(2) && \
		$$($3_PREFIX)$$(LD) $$(LDFLAGS) $$(LOCALLDFLAGS) \
			-T$$< -Map $2/$1.map -o $2/$1.out $$($(1)_LIBPATH) \
			$$($1_OBJS) --start-group $$($(1)_DEPLIBS) --end-group && \
		touch $$@

$2/$1.map : $2/$1.out.built
$2/$1.out : $2/$1.out.built


$(call __CLEAN_TARGET,$2/$1.out.built)
$(call __CLEAN_TARGET,$2/$1.out)
$(call __CLEAN_TARGET,$2/$1.map)

endef


