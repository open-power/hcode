# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: tools/build/common.dir/symlink.rules.mk $
#
# IBM CONFIDENTIAL
#
# EKB Project
#
# COPYRIGHT 2015,2016
# [+] International Business Machines Corp.
#
#
# The source code for this program is not published or otherwise
# divested of its trade secrets, irrespective of what has been
# deposited with the U.S. Copyright Office.
#
# IBM_PROLOG_END_TAG
#CREATE_SYMLINK
#    This macro creates a symlink for the generated common fapi2 files
#        that will be used to compile fapi2_ifCompiler as well
#    Input:
#        $1 = File with fully qualified path
#        $2 = output directory path
#    Output: A symlink to output directory
define CREATE_SYMLINK
$(eval GENERATED=create_symlink_$(notdir $1))
$(eval SOURCES+=$1)
$(eval TARGETS=$(notdir $1))
$(eval $(GENERATED)_COMMAND_PATH=)
$(eval $(GENERATED)_PATH=$2)
$(eval $(GENERATED)_RUN=$(call CREATE_SYMLINK_RUN_COMMAND,$1))
$(call BUILD_GENERATED)
endef

#CREATE_SYMLINK_RUN_COMMAND
#    This macro defines the command used to create the symlink
define CREATE_SYMLINK_RUN_COMMAND
		$(C1) rm -f $($(GENERATED)_PATH)/$(notdir $1) && \
		ln -s $$$$(realpath $$$$<) $($(GENERATED)_PATH)/$(notdir $1)
endef
