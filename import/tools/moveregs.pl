#!/usr/bin/perl
# IBM_PROLOG_BEGIN_TAG
# This is an automatically generated prolog.
#
# $Source: import/tools/moveregs.pl $
#
# OpenPOWER EKB Project
#
# COPYRIGHT 2020
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

#$PROJECT_ROOT

use strict;

if ( $ENV{PROJECT_ROOT} !~ /\S+/ )
{
    print "You need to be in ekb workon\n";
    exit(1);
}

my $allregs      = {};
my $possibleregs = {};

my $p10root = $ENV{PROJECT_ROOT} . "/chips/p10/";

sub addpossiblereg($)
{
    my $preg = shift();
    $possibleregs->{$preg}++;
}

# See which registers are referenced in this source file
sub analyzefile($)
{
    my $lastns = "";
    my $f      = shift();
    if (   ( $f =~ /\.C$/ || $f =~ /\.c$/ || $f =~ /\.H$/ || $f =~ /\.h$/ )
        && $f !~ /common\/include/
        && $f !~ /hwp\/initfiles/
        && $f !~ /engd\// )
    {
        print "Processing: $f\n";
        open( BUF, $f ) || die "could not open file";
        while ( my $line = <BUF> )
        {
            my @sl = split( /\/\//, $line );    # parse out comments
            $line = @sl[0];
            my @rmregs  = ();
            my $linelen = length($line);
            foreach my $reg ( keys %$allregs )
            {
                if ( length($reg) <= $linelen )
                {
                    if ( index( $line, $reg ) != -1 )
                    {
                        addpossiblereg($reg);
                        push( @rmregs, $reg );

                        #last; # someone could put more than one register in a line :(
                    }
                }
            }
            foreach my $reg (@rmregs)
            {
                delete $allregs->{$reg};
            }
        }
        close(BUF);
    }
    if ( $f =~ /\.xml$/ )
    {
        open( BUF, $f ) || die "could not open file";
        while ( my $line = <BUF> )
        {
            if (   $line =~ /<scomRegister>\s*(\S+)\s*<\/scomRegister>/
                || $line =~ /<cfamRegister>\s*(\S+)\s*<\/cfamRegister>/ )
            {
                my $reg   = $1;
                my @parts = split( /::/, $reg );
                my $regv  = pop @parts;
                addpossiblereg($regv);
            }
        }
        close(BUF);
    }
}

sub walkdir($)
{
    my $d = shift();
    my @fl = split( /\n/, `ls -1 $d` );
    foreach my $f (@fl)
    {
        my $ff = "$d/$f";
        if ( -d $ff )
        {
            walkdir($ff);
        }
        elsif ( $f =~ /\.C$/ || $f =~ /\.c$/ || $f =~ /\.xml$/ || $f =~ /\.H$/ || $f =~ /\.h$/ )
        {
            analyzefile($ff);
        }
    }
}

sub move_used_unused($)
{
    my $f         = shift();
    my @nextfiles = ();
    my $nf        = $f . ".tmp";
    my $uf        = $f;
    $uf =~ s/\.H$/_unused.H/;
    my $nuf  = $uf . ".tmp";
    my $buf  = "";
    my $ubuf = "";
    my $path = "";
    if ( $f =~ /(\S+)\/[a-zA-Z0-9_]+\.H/ )
    {
        $path = $1;
    }
    open( IN,   $f )      || die "could not open file";
    open( TMP,  ">$nf" )  || die "could not open file";
    open( UTMP, ">$nuf" ) || die "could not open file";
    if ( -e $uf )
    {
        ## read unused file and extract used registers
        open( UIN, $uf ) || die "could not open file";
        my $line    = <UIN>;
        my $lastreg = "";
        my $used    = 0;
        my $tmpbuf  = "";
        while ( $line !~ /\/\/>>THE END<</ )
        {

            if ( $line =~ /\/\/>>\s+\S*\[(\S+)\]/ )
            {
                $lastreg = $1;
                if ( $used != 0 )
                {
                    $buf .= $tmpbuf;
                }
                else
                {
                    print UTMP $tmpbuf;
                }
                $used   = 0;
                $tmpbuf = "";
                if ( $possibleregs->{$lastreg} > 0 )
                {
                    $used = 1;
                }
            }
            elsif ( $line =~ /\s*static\s+const\s+\S+\s+(\S+)\s*=\s*0x/ )
            {
                my $cnst = $1;
                if ( $used != 0 )
                {
                    addpossiblereg($cnst);
                }
                elsif ( $possibleregs->{$cnst} > 0 )
                {
                    addpossiblereg($lastreg);
                    $used = 1;
                }
            }
            elsif ( $line =~ /\s*static\s+const\s+\S+\s+(\S+)\s*=\s*\d+/ )
            {
                my $dval = $1;
                if ( $used != 0 )
                {
                    addpossiblereg($dval);
                }
            }
            if ( $line =~ /\/\/>>\s*\S+\[(\S+)\]/ )
            {
                my $cnst = $1;
                if ( $possibleregs->{$cnst} > 0 )
                {
                    $used = 1;
                }
            }
            $tmpbuf .= $line;
            $line = <UIN>;
        }
        close(UIN);
        if ( $used != 0 )
        {
            $buf .= $tmpbuf;
        }
        else
        {
            print UTMP $tmpbuf;
        }
    }
    else
    {
        # unised file doesn't exist yet
        # take the crap from the used file for the header
        my $line = <IN>;
        while ( $line !~ /\/\/>>\s+\S*\[\S+\]/ && $line !~ /^\s*static/ && $line !~ /\/\/>>THE END<</ )
        {
            if ( $line =~ /\s*\#ifndef\s+(\S+)/ || $line =~ /\s*\#define\s+(\S+)/ )
            {
                my $myfdf = $1;
                if ( $myfdf !~ /PPE_HCODE/ )
                {
                    $line =~ s/$myfdf/${myfdf}UNUSED__/;
                }
            }
            print UTMP $line;
            $line = <IN>;
        }
        close(IN);
        open( IN, $f ) || die "could not open file";
    }
    my $line    = <IN>;
    my $lastreg = "";
    my $used    = 1;      #header is used
    my $tmpbuf  = "";
    while ( $line !~ /\/\/>>THE END<</ )
    {
        if ( $line =~ /\/\/>>\s+\S*\[(\S+)\]/ )
        {
            $lastreg = $1;
            if ( $used != 0 )
            {
                print TMP $tmpbuf;
            }
            else
            {
                $ubuf .= $tmpbuf;
            }
            $used   = 0;
            $tmpbuf = "";
            if ( $possibleregs->{$lastreg} > 0 )
            {
                $used = 1;
            }
        }
        elsif ( $line =~ /\s*static\s+const\s+\S+\s+(\S+)\s*=\s*0x/ )
        {
            my $cnst = $1;
            if ( $used != 0 )
            {
                addpossiblereg($cnst);
            }
            elsif ( $possibleregs->{$cnst} > 0 )
            {
                addpossiblereg($lastreg);
                $used = 1;
            }
        }
        elsif ( $line =~ /\s*static\s+const\s+\S+\s+(\S+)\s*=\s*\d+/ )
        {
            my $dval = $1;
            if ( $used != 0 )
            {
                addpossiblereg($dval);
            }
        }
        if ( $line =~ /\/\/>>\s*\S+\[(\S+)\]/ )
        {
            my $cnst = $1;
            if ( $possibleregs->{$cnst} > 0 )
            {
                $used = 1;
            }
        }
        $tmpbuf .= $line;
        $line = <IN>;
    }
    if ( $used != 0 )
    {
        print TMP $tmpbuf;
    }
    else
    {
        $ubuf .= $tmpbuf;
    }
    print TMP $buf;
    print UTMP $ubuf;
    print TMP $line;
    print UTMP $line;
    while ( $line = <IN> )
    {
        print TMP $line;
        if ( $line =~ /^\s*#include\s+\"(\S+)\.H\"/ )
        {
            my $inch = $1;
            if ( $line =~ /^\s*#include\s+\"(\S+)\"/ )
            {
                my $ntf = $1;
                $ntf = $path . "/" . $ntf;
                push( @nextfiles, $ntf );
            }
            $line =~ s/$inch/${inch}_unused/;
        }
        print UTMP $line;
    }
    close(IN);
    close(TMP);
    close(UTMP);
    system("mv $nuf $uf");
    system("mv $nf $f");
    foreach my $nf (@nextfiles)
    {
        move_used_unused($nf);
    }
}

sub collectallfileregs($)
{
    my $f = shift;
    open( BUF, $f ) || die "could not open file.";
    while ( my $line = <BUF> )
    {
        if ( $line =~ /\/\/>>\s+\[(\S+)\]/ )
        {
            $allregs->{$1}++;
        }
    }
}

sub collectallregs()
{
    print "Collecting all regs\n";
    my $headerdir = $p10root . "common/include/";
    my @files = split( /\n/, `ls -1 ${headerdir}p10_*_*_?.H` );

    foreach my $file (@files)
    {
        collectallfileregs($file);
    }
    @files = split( /\n/, `ls -1 ${headerdir}p10_*_*_?_unused.H` );

    foreach my $file (@files)
    {
        collectallfileregs($file);
    }
}

sub moveallfiles()
{
    my $headerdir = $p10root . "common/include/";
    my @files = split( /\n/, `ls -1 ${headerdir}p10_*_*_?.H` );

    foreach my $file (@files)
    {
        print "$file\n";
        move_used_unused($file);
    }
}

sub getcurrentused($)
{
    my $f        = shift();
    my @nxtfiles = ();
    my $path     = "";
    if ( $f =~ /(\S+)\/[a-zA-Z0-9_]+\.H/ )
    {
        $path = $1;
    }
    open( BUF, $f ) || die "could not open file";
    while ( my $line = <BUF> )
    {
        if ( $line =~ /\/\/>>\s+\S*\[(\S+)\]/ )
        {
            my $lastreg = $1;
            addpossiblereg($lastreg);
        }
        elsif ( $line =~ /\s*static\s+const\s+\S+\s+(\S+)\s*=\s*0x/ )
        {
            my $cnst = $1;
            addpossiblereg($cnst);
        }
        elsif ( $line =~ /\s*static\s+const\s+\S+\s+(\S+)\s*=\s*\d+/ )
        {
            my $dval = $1;
            addpossiblereg($dval);
        }
        elsif ( $line =~ /^\s*#include\s+\"(\S+)\"/ )
        {
            my $ntf = $1;
            if ( $ntf =~ /\/reg/ )
            {
                push( @nxtfiles, $path . "/" . $ntf );
            }
        }
    }
    close(BUF);
    foreach my $nf (@nxtfiles)
    {
        getcurrentused($nf);
    }
}

sub buildcurrentusedregs()
{
    my $headerdir = $p10root . "common/include/";
    my @files = split( /\n/, `ls -1 ${headerdir}p10_*_*_?.H` );

    foreach my $file (@files)
    {
        getcurrentused($file);
    }
}

collectallregs();

my $numargs = @ARGV;

if ( $numargs > 0 )
{
    my $manualadds = @ARGV[0];
    open( BUF, $manualadds ) || die "could not open file";
    while ( my $line = <BUF> )
    {
        if ( $line =~ /(\S+)/ )
        {
            addpossiblereg($1);
            print "Adding manual reg: $1\n";
        }
    }
}

if ( $numargs > 1 )
{
    buildcurrentusedregs();
    for ( my $idx = 1; $idx < $numargs; $idx++ )
    {
        my $f = @ARGV[$idx];
        $f = $ENV{PROJECT_ROOT} . "/" . $f;
        if ( -d $f )
        {
            walkdir($f);
        }
        else
        {
            analyzefile($f);
        }
    }

}
else
{
    print "Walking source looking for regs\n";
    walkdir($p10root);
}

moveallfiles();
