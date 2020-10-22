# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: tools/build/rules.dir/mflags.env.mk $
#
# OpenPOWER HCODE Project
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
XIPPATH?=$(ROOTPATH)/chips/p9/xip

# Location of the cross-compiler toolchain.
UNAME = $(shell uname)
__EKB_PREFIX?=/opt/rh/devtoolset-8/root/usr/bin/

ifeq ($(UNAME),AIX)
__EKB_PREFIX=/opt/xsite/contrib/bin/
endif

HOST_PREFIX?=$(__EKB_PREFIX)
TARGET_PREFIX?=$(__EKB_PREFIX)

# Location of PPE42 cross-compiler toolchain
PPE_TOOL_PATH ?= $(CTEPATH)/tools/ppetools/prod
PPE_PREFIX    ?= $(PPE_TOOL_PATH)/bin/powerpc-eabi-
PPE_BINUTILS_PREFIX ?= $(PPE_TOOL_PATH)/powerpc-eabi/bin/

# Default compiler tools to use.
CC?=gcc
CXX?=g++
AR?=ar
LD?=ld
