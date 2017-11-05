# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p9/procedures/ppe_closed/lib/hcodelibfiles.mk $
#
# OpenPOWER HCODE Project
#
# COPYRIGHT 2015,2018
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
#  @file libcommonfiles.mk
#
#  @brief mk for libcommon.a object files
#
#  @page ChangeLogs Change Logs
#  @section ofiles.mk
#  @verbatim
#
#
# Change Log ******************************************************************
# Flag     Defect/Feature  User        Date         Description
# ------   --------------  ----------  ------------ -----------
#
# @endverbatim
#
##########################################################################
# INCLUDES
##########################################################################

HCODE_C_SOURCES = \
	p9_stop_recovery_trigger.c \
	p9_hcd_block_copy.c \
	p9_dd1_doorbell_wr.c

HCODE_S_SOURCES =

HCODE_OBJECTS = $(HCODE_C_SOURCES:.c=.o) $(HCODE_S_SOURCES:.S=.o)
