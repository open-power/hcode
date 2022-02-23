# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: tools/build/rules.dir/mflags.env.mk $
#
# OpenPOWER EKB Project
#
# COPYRIGHT 2015,2022
# [+] International Business Machines Corp.
#
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
# implied. See the License for the specific language governing
# permissions and limitations under the License.
#
# IBM_PROLOG_END_TAG

# Makefile to contain general default variables for the make environment.

# Default output paths.
ROOTPATH=../../import
OUTPUTPATH?=$(ROOTPATH)/../output
LIBPATH?=$(OUTPUTPATH)/lib_$(ECMD_ARCH)
EXEPATH?=$(OUTPUTPATH)/bin_$(ECMD_ARCH)
OBJPATH?=$(OUTPUTPATH)/obj_$(ECMD_ARCH)
GENPATH?=$(OUTPUTPATH)/gen_$(ECMD_ARCH)
IMAGEPATH?=$(OUTPUTPATH)/images_$(ECMD_ARCH)
ifeq ($(PROJECT_NAME),p9)
XIPPATH?=$(ROOTPATH)/chips/p9/xip
endif

# Create the output paths and original name links
# It has to be done here so it occurs for any build method
# i.e. a full build or a specific binary or image build
$(shell mkdir -p ${LIBPATH})
$(shell mkdir -p ${EXEPATH})
$(shell mkdir -p ${OBJPATH})
$(shell mkdir -p ${GENPATH})
$(shell mkdir -p ${IMAGEPATH})
$(shell ln -frsn ${LIBPATH} ${OUTPUTPATH}/lib)
$(shell ln -frsn ${EXEPATH} ${OUTPUTPATH}/bin)
$(shell ln -frsn ${OBJPATH} ${OUTPUTPATH}/obj)
$(shell ln -frsn ${GENPATH} ${OUTPUTPATH}/gen)
$(shell ln -frsn ${IMAGEPATH} ${OUTPUTPATH}/images)

# Location of the cross-compiler toolchain.
UNAME = $(shell uname)
ifneq ($(wildcard /opt/rh/devtoolset-8/root/usr/bin),)
__EKB_PREFIX?=/opt/rh/devtoolset-8/root/usr/bin/
else
__EKB_PREFIX?=/opt/rh/devtoolset-2/root/usr/bin/
endif

ifeq ($(UNAME),AIX)
__EKB_PREFIX=/opt/xsite/contrib/bin/
endif

HOST_PREFIX?=$(__EKB_PREFIX)
TARGET_PREFIX?=$(__EKB_PREFIX)

# Location of PPE42 cross-compiler toolchain
PPE_TOOL_PATH ?= $(CTEPATH)/tools/ppetools/$(ECMD_ARCH)_prod

PPE_PREFIX    ?= $(PPE_TOOL_PATH)/bin/powerpc-eabi-
PPE_BINUTILS_PREFIX ?= $(PPE_TOOL_PATH)/powerpc-eabi/bin/
SELF_REST_PREFIX ?= $(CTEPATH)/tools/p9_ppc64/prod/bin/powerpc64le-buildroot-linux-gnu-
# Default compiler tools to use.
CC?=gcc
CXX?=g++
AR?=ar
LD?=ld
OBJDUMP?=objdump
