#!/usr/bin/perl
# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p10/common/include/rmoldregs.pl $
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

@dlst = ( "iohs", "mc", "mcc", "mi", "omi", "omic", "pau", "pec", "perv", "phb", "proc", "c", "eq" );

foreach $dr (@dlst)
{
    $newest = `ls -ltr  $dr | tail -1`;
    if ( $newest =~ /\s+(\d+):(\d+)\s+/ )
    {
        $ntime = "$1:$2";
        @listdir = split( /\n/, `ls -ltr $dr` );
        foreach $tf (@listdir)
        {
            if ( $tf !~ /$ntime/ && $tf =~ /(\S+).H/ )
            {
                system("git rm $dr/$1.H");
                system("rm $dr/$1.H");
            }
        }
    }
}
