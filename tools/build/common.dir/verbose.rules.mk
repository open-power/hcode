# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: tools/build/common.dir/verbose.rules.mk $
#
# IBM CONFIDENTIAL
#
# EKB Project
#
# COPYRIGHT 2013,2015
# [+] International Business Machines Corp.
#
#
# The source code for this program is not published or otherwise
# divested of its trade secrets, irrespective of what has been
# deposited with the U.S. Copyright Office.
#
# IBM_PROLOG_END_TAG

# File: verbose.rules.mk
# Description:
#     Control the verbosity of make commands by defining some prefixes that
#     other make rules can use.
#
# Setting the environment variable BUILD_VERBOSE=1 echos the full commands
# being executed, while leaving it off echos just a short description.

# Variables:
#     C1 - Prefix for the command to be executed.  ex. '$(C1)$(CC) foo.C'
#     C2 - Prefix for the short description of the command.  ex. '$(C2)CC foo.C'

ifdef BUILD_VERBOSE
    C1=
    C2=@true || echo
else
    C1=@
    C2=@echo
    MAKE+= --no-print-directory
endif

MAKE+= --no-builtin-rules --no-builtin-variables

