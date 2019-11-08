#!/usr/bin/perl
# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p10/procedures/ppe/iohs/generate_sections_header.pl $
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

use warnings;
use strict;

while ( my $line = <STDIN> )
{
    if ( $line =~ /\.\S+\s+0x(\S+)\s*:\s*\{\s*_(\S+)\s*=/ )
    {
        my $var = $2;
        my $loc = $1;
        print "static const uint64_t p10_io_ppe_${var} = 0x${loc}ull;\n";
    }
}
