# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: tools/build/image.dir/cflags.env.mk $
#
# IBM CONFIDENTIAL
#
# EKB Project
#
# COPYRIGHT 2016,2017
# [+] International Business Machines Corp.
#
#
# The source code for this program is not published or otherwise
# divested of its trade secrets, irrespective of what has been
# deposited with the U.S. Copyright Office.
#
# IBM_PROLOG_END_TAG

# Override the LOCALCOMMONFLAGS from other cflags.env.mk files
PPE_LOCALCOMMONFLAGS =  -Wall -Werror
PPE_LOCALCOMMONFLAGS += -fsigned-char
PPE_LOCALCOMMONFLAGS += -msoft-float
PPE_LOCALCOMMONFLAGS += -meabi
PPE_LOCALCOMMONFLAGS += -msdata=eabi
PPE_LOCALCOMMONFLAGS += -ffreestanding
PPE_LOCALCOMMONFLAGS += -fno-common
PPE_LOCALCOMMONFLAGS += -fno-inline-functions-called-once

PPE_CFLAGS = -Os
PPE_CFLAGS += -gpubnames -gdwarf-3
PPE_CFLAGS += -ffunction-sections
PPE_CFLAGS += -fdata-sections
PPE_CFLAGS += -mcpu=ppe42
PPE_CFLAGS += -pipe

PPE_CXXFLAGS = -std=c++11
PPE_CXXFLAGS += -nostdinc++
PPE_CXXFLAGS += -fno-rtti
PPE_CXXFLAGS += -fno-threadsafe-statics
PPE_CXXFLAGS += -fno-exceptions

ASFLAGS = -mppe42

