# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: tools/build/common.dir/cflags.env.mk $
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

# Makefile to define useful common flags for all environments.

LOCALCOMMONFLAGS += -O3 -fPIC -Wall -Werror
LOCALLDFLAGS += --std=gnu++11
ifeq ($(UNAME),Linux)
LOCALLDFLAGS += -rdynamic
endif
LOCALCXXFLAGS += --std=gnu++11
