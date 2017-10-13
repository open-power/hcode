# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: tools/build/common.dir/objects.rules.mk $
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

# Makefile with helper utility for generating all the possible wildcard
# recipes for an object file.

# __GENERATE_OBJECTRULES
#     $(__GENERATE_OBJECTRULES,destpath,srcpath,target)
# target should be one of: HOST, TARGET.
define __GENERATE_OBJECTRULES
.PRECIOUS: $(1)/%.o

$(1)/%.o: LOCALCOMMONFLAGS += $$($$(@F)_COMMONFLAGS)
$(1)/%.o: private LOCALCFLAGS += $$($$(@F)_CFLAGS)
$(1)/%.o: private LOCALCXXFLAGS += $$($$(@F)_CXXFLAGS)

$(1)/%.yy.o: $(2)/%.yy.C
$(call __CALL_CXX_DEP,$(3))
$(call __CALL_CXX,$(3))

$(1)/%.tab.o: $(2)/%.tab.C
$(call __CALL_CXX_DEP,$(3))
$(call __CALL_CXX,$(3))

$(1)/%.o: $(2)/%.C
$(call __CALL_CXX_DEP,$(3))
$(call __CALL_CXX,$(3))

$(1)/%.o: $(2)/%.cc
$(call __CALL_CXX_DEP,$(3))
$(call __CALL_CXX,$(3))

$(1)/%.o: $(2)/%.cpp
$(call __CALL_CXX_DEP,$(3))
$(call __CALL_CXX,$(3))

$(1)/%.o: $(2)/%.c
$(call __CALL_CC_DEP,$(3))
$(call __CALL_CC,$(3))

endef
