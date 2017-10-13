# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: tools/build/image.dir/linkScript.rules.mk $
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

# Makefile that defines how we process a linker script
#
# Macro:
#    PROCESS_LINK_SCRIPT: Runs gcc pre-processor on link script
# Inputs:
#    $1 = IMAGE
#    $2 = OUTPUTPATH
#    $3 = <image>.cmd
#    $4 = TARGET toolchain
# Usage:
#   $(call PROCESS_LINK_SCRIPT,$(IMAGE),$$($(IMAGE)_PATH,$(IMAGE).cmd)
define PROCESS_LINK_SCRIPT
$2/link_$1_script : $(addprefix $(dir $(lastword $(MAKEFILE_LIST))),$3)
		$(C2) "    GEN        link_$1_script"
		$(C1) mkdir -p $2
		$(C1) $$($(4)_PREFIX)$$(CPP) -E -x c++ -P $$($1_COMMONFLAGS) -Upowerpc $$< -o $2/link_$1_script_temp.cmd
		$(C1) $$($(4)_PREFIX)$$(CPP) -E -x c++ -P $$($1_COMMONFLAGS) -Upowerpc $2/link_$1_script_temp.cmd -o $$@
 
$(call __CLEAN_TARGET,$2/link_$1_script)

endef

