# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: tools/build/rules.dir/mflags.env.mk $
#
# OpenPOWER EKB Project
#
# COPYRIGHT 2015,2020
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
LIBPATH?=$(OUTPUTPATH)/lib
EXEPATH?=$(OUTPUTPATH)/bin
OBJPATH?=$(OUTPUTPATH)/obj
GENPATH?=$(OUTPUTPATH)/gen
IMAGEPATH?=$(OUTPUTPATH)/images
ifeq ($(PROJECT_NAME),p9)
XIPPATH?=$(ROOTPATH)/chips/p9/xip
endif

# Location of the cross-compiler toolchain.
UNAME = $(shell uname)

ifeq ($(UNAME),AIX)
__EKB_PREFIX=/opt/xsite/contrib/bin/
else
RHEL_VER = $(shell lsb_release -sr)
ifeq ($(word 1, $(subst ., ,$(RHEL_VER))), 6)
ifeq ($(wildcard /opt/rh/devtoolset-2/root/usr/bin),)
$(error devtoolset-2 is not installed on RHEL $(RHEL_VER))
endif
__EKB_PREFIX?=/opt/rh/devtoolset-2/root/usr/bin/
else ifeq ($(word 1, $(subst ., ,$(RHEL_VER))), 7)
ifeq ($(wildcard /opt/rh/devtoolset-8/root/usr/bin),)
$(error devtoolset-8 is not installed on RHEL $(RHEL_VER))
endif
__EKB_PREFIX?=/opt/rh/devtoolset-8/root/usr/bin/
else
$(error RHEL Version $RHEL_VER not supported)
endif
endif

HOST_PREFIX?=$(__EKB_PREFIX)
TARGET_PREFIX?=$(__EKB_PREFIX)

# Location of PPE42 cross-compiler toolchain
ifeq ($(PROJECT_NAME),p9)
PPE_TOOL_PATH ?= $(CTEPATH)/tools/ppetools/prod
else
PPE_TOOL_PATH ?= $(CTEPATH)/tools/ppetools/test
endif

PPE_PREFIX    ?= $(PPE_TOOL_PATH)/bin/powerpc-eabi-
PPE_BINUTILS_PREFIX ?= $(PPE_TOOL_PATH)/powerpc-eabi/bin/
SELF_REST_PREFIX ?= $(CTEPATH)/tools/p9_ppc64/prod/bin/powerpc64le-buildroot-linux-gnu-
# Default compiler tools to use.
CC?=gcc
CXX?=g++
AR?=ar
LD?=ld
OBJDUMP?=objdump
