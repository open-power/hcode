#!/usr/bin/perl
# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/chips/p10/procedures/ppe/iohs/generate_regs.pl $
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

my $numargs = @ARGV;

if ( $numargs < 4 )
{
    print "Required args: <hfile> <cfile> <section> <ppe_file>\n";
    exit(1);
}

my $hfile   = $ARGV[0];
my $cfile   = $ARGV[1];
my $section = $ARGV[2];
my $ppefile = $ARGV[3];
my $suffix  = $ARGV[4];
if ( !defined($suffix) || ( $suffix eq "-" ) )
{
    $suffix = "";
}

open( HBUF, ">>${hfile}" ) || die "Could not write file: $hfile";
open( CBUF, ">>${cfile}" ) || die "Could not write file: $cfile";

print HBUF "\n";
print HBUF "extern p10_io_ppe_cache ${section};\n";
print HBUF "\n";

print CBUF "\n";
print CBUF "p10_io_ppe_cache ${section}(&p10_io_phy_ppe_scom_regs, ${section}_start);\n";
print CBUF "\n";

open( BUF, $ppefile ) || die "Could not open ppe file: $ppefile";

my $register;
my $addr;
my $shift;
my $mask;
while ( my $line = <BUF> )
{

    if ( $line =~ /\#define\s+(\S+)_addr\s+(\S+)/ )
    {
        $register = $1;
        $addr     = $2;
    }
    if ( $line =~ /\#define\s+(\S+)_shift\s+(\S+)/ )
    {
        $shift = $2;
    }
    if ( $line =~ /\#define\s+(\S+)_mask\s+(\S+)/ )
    {
        $mask = $2;
        print HBUF "extern p10_io_ppe_sram_reg p10_io_ppe_${register}${suffix};\n";
        print CBUF "p10_io_ppe_sram_reg p10_io_ppe_${register}${suffix}(&${section}, $addr, $mask, $shift);\n";
    }
}

close(HBUF);
close(CBUF);

