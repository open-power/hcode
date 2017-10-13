# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: tools/build/common.dir/clean.rules.mk $
#
# IBM CONFIDENTIAL
#
# EKB Project
#
# COPYRIGHT 2015,2017
# [+] International Business Machines Corp.
#
#
# The source code for this program is not published or otherwise
# divested of its trade secrets, irrespective of what has been
# deposited with the U.S. Copyright Office.
#
# IBM_PROLOG_END_TAG

# Makefile that defines a special target to remove files.

## $(call CLEAN_TARGET,/path/to/file)
## Adds target to the __CLEAN_TARGETS variable.
CLEAN_TARGET = $(eval $(call __CLEAN_TARGET,$(1)))
__CLEAN_TARGET = __CLEAN_TARGETS += $(1)


# Special rule for CLEAN pass that will delete a file (path/to/file) from
# a rule _BUILD/CLEAN/path/to/file.
.PHONY: _BUILD/CLEAN/%
_BUILD/CLEAN/% :
		$(C2) "    RM         $(notdir $@)"
		$(C1) rm -rf $(subst _BUILD/CLEAN/,,$@)
		$(C1) rm -rf $(subst .so,_x86_64.so,$(subst libp,p, $(subst _BUILD/CLEAN/,,$@)))

