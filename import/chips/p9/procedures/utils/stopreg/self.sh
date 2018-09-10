# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p9/procedures/utils/stopreg/self.sh $
#
# OpenPOWER HCODE Project
#
# COPYRIGHT 2016,2018
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
#first first. Remove object file and executable file.

#!/bin/bash
SELF_REST_PATH=$PROJECT_ROOT/chips/p9/procedures/utils/stopreg
SRC=$SELF_REST_PATH/p9_core_restore_routines.S
OBJ=$SELF_REST_PATH/p9_core_restore_routines.o
IMG=$SELF_REST_PATH/selfRest
LINK=$SELF_REST_PATH/link.c
OBJDUMP="/opt/mcp/shared/powerpc64-gcc-20150516/wrappers/powerpc64-unknown-linux-gnu-objdump "
#set compiler path
ASMFILE="/opt/mcp/shared/powerpc64-gcc-20150516/wrappers/powerpc64-unknown-linux-gnu-gcc "
ASFLAGS="-save-temps -std=c99 -c -O3 -nostdlib -mcpu=power7 -mbig-endian -ffreestanding -mabi=elfv1"
#linker script after C preprocessing
LINK_SCRIPT=$SELF_REST_PATH/selfLink
if [ -f $IMG ] 
then    
    rm -f $IMG_MAP
    rm -f $DIS
    rm -f $IMG.bin
fi    
#set linker path
LOAD=/opt/mcp/shared/powerpc64-gcc-20150516/wrappers/powerpc64-unknown-linux-gnu-ld
#passing linker through pre-processor
$ASMFILE -E -c -P $LINK -o $LINK_SCRIPT
#compiling Source file
$ASMFILE $SRC $ASFLAGS -o $OBJ
#linking
$LOAD -T$LINK_SCRIPT -Map $IMG.map -Bstatic -o $IMG.bin $OBJ
$OBJDUMP -d  $OBJ >$IMG.list
