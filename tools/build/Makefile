# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: tools/build/Makefile $
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

# Root makefile for the build system.
# Includes subdirectory makefiles in a specific order:
#       * Build system 'environment' files (*.env.mk).
#       * Build system 'rule' files (*.rules.mk).
#       * Global make files (from $(MAKEFILE_PATH).
#       * All dependency include files from $(__DEP_INCLUDES).
#       * Build system 'final' files (*.final.mk).

CTEPATH ?=  $(CROSS_COMPILER_PATH)
GCC-TOOL-PREFIX ?= $(CROSS_COMPILER_PATH)/bin/powerpc-eabi-
BINUTILS-TOOL-PREFIX ?= $(CROSS_COMPILER_PATH)/powerpc-eabi/bin/

.SECONDEXPANSION:
.DEFAULT_GOAL = all

-include $(wildcard $(addsuffix /*.env.mk,$(wildcard *.dir)))
-include $(wildcard $(addsuffix /*.rules.mk,$(wildcard *.dir)))
-include $(wildcard $(addsuffix /*.mk,$(MAKEFILE_PATH)))
-include $(__DEP_INCLUDES)
-include $(wildcard $(addsuffix /*.final.mk,$(wildcard *.dir)))
