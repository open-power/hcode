# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p10/common/ppe/ppetrace/test/Makefile $
#
# OpenPOWER EKB Project
#
# COPYRIGHT 2019
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
# Unit test code - Compile on Big endian machine (AIX)
TARGET=trace
CC=gcc

OBJS := ppe_trace_op.o pk_trace_core.o driver.o

all: $(TARGET)

CDEFS += -DPK_TRACE_VERSION=3
CDEFS += -DPK_TRACE_SUPPORT=1
CDEFS += -DPK_TRACE_SZ=1024
CDEFS += -D__SIM__
CDEFS += -DIMAGE_NAME=TEST_V32________
INCLUDES := .
CFLAGS += -Wall
CFLAGS += -Werror
CFLAGS += -O2
CFLAGS += $(CDEFS)

$(TARGET): $(OBJS)
	gcc $(CFLAGS) $(CDEFS) -o $(TARGET) $(OBJS)
