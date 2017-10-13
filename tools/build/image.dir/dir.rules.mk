# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: tools/build/image.dir/dir.rules.mk $
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
# Makefile that automatically define the recipies for all the p9_xip_tool
# commands
#
# Macro:
#    depend_on_dir: adds an order only dependancy for a directory which contains
#                   the specified file. Adds a target to create the directory
# Input:
#    $1 - fully specified file
# Usage: $(call depend_on_dir, path/to/object.o )
define depend_on_dir
$(1): | $(dir $(1))

$(dir $(1)):
	mkdir -p $$@

endef
