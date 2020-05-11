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

if ( $ENV{PROJECT_ROOT} !~ /\S+/ )
{
    print "You need to be in ekb workon\n";
    exit(1);
}

$possibleregs = {};

$p10root = $ENV{PROJECT_ROOT} . "/chips/p10/";

sub addpossiblereg($)
{
    my $preg = shift();

    #if ($preg eq "TP_TCN1_N1_CPLT_CTRL0_TC_UNIT_SYNCCLK_MUXSEL_DC") {
    #  my ($package, $filename, $line) = caller;
    #  print "ADDED HERE!  $package $filename $line\n";
    #}
    $possibleregs->{$preg}++;
}

# We should really be using a static analysis tool for this, but I
# didn't see that any were installed by default on our machines.
sub analyzefile($)
{
    my $lastns = "";
    my $f      = shift();
    if ( ( $f =~ /\.C$/ || $f =~ /\.c$/ || $f =~ /\.H$/ || $f =~ /\.h$/ ) && $f !~ /common\/include/ )
    {
        open( BUF, $f ) || die "could not open file";
        while ( my $line = <BUF> )
        {
            my @sl = split( /\/\//, $line );    # parse out comments
            $line = @sl[0];
            if ( $line =~ /using\s+namespace\s+(\S+)\s*;/ )
            {
                $lastns = $1;
            }
            elsif ( $line =~ /Scom\s*\(\s*\S+\s*,\s*([A-Z0-9_]+)\s*/ )
            {
                my $regv = $1;
                addpossiblereg($regv);
            }
            elsif ( $line =~ /Register\s*\(\s*\S+\s*,\s*([A-Z0-9_]+)\s*,/ )
            {
                my $regv = $1;
                addpossiblereg($regv);
            }
            elsif ( $line =~ /PREP_([A-Z0-9_]+)\s*([(,]|$)/ )
            {
                while ( $line =~ /PREP_([A-Z0-9_]+)\s*([(,]|$)/g )
                {
                    my $regv = $1;
                    addpossiblereg($regv);
                }
            }
            elsif ( $line =~ /GET_([A-Z0-9_]+)\s*([(,]|$)/ )
            {
                while ( $line =~ /GET_([A-Z0-9_]+)\s*([(,]|$)/g )
                {
                    my $regv = $1;
                    addpossiblereg($regv);
                }
            }
            elsif ( $line =~ /PUT_([A-Z0-9_]+)\s*([(,]|$)/ )
            {
                while ( $line =~ /PUT_([A-Z0-9_]+)\s*([(,]|$)/g )
                {
                    my $regv = $1;
                    addpossiblereg($regv);
                }
            }
            elsif ( $line =~ /scomt\:\:[a-z]+\:\:([A-Z0-9_]+)/ )
            {
                my $regv = $1;
                addpossiblereg($regv);
            }
            elsif ( $line =~ /^\s*([A-Z0-9_]+)\s*[,]*\s*$/ )
            {
                my $regv = $1;
                addpossiblereg($regv);
            }
            elsif ( $line =~ /MMIO_\S+\s*\(\s*\S+\s*,\s*([A-Z0-9_]+)\s*,/ )
            {
                my $regv = $1;
                addpossiblereg($regv);
            }
            elsif ( $line =~ /regs\s*\(\s*\S+\s*,\s*([A-Z0-9_]+)\s*,/ )
            {
                my $regv = $1;
                addpossiblereg($regv);
            }
            elsif ( $line =~ /racetrack\s*\(\s*\S+\s*,\s*([A-Z0-9_]+)\s*,/ )
            {
                my $regv = $1;
                addpossiblereg($regv);
            }
            elsif ( $line =~ /SCOM_\S+\s*\(\s*\S+\s*,\s*([A-Z0-9_]+)\s*,/ )
            {
                my $regv = $1;
                addpossiblereg($regv);
            }
            elsif ( $line =~ /\S*SCOM\S*\s*\(\s*([A-Z0-9_]+)/ )
            {
                my $regv = $1;
                addpossiblereg($regv);
            }
            elsif ( $line =~ /in32\s*\(\s*([A-Z0-9_]+)/ )
            {
                my $regv = $1;
                addpossiblereg($regv);
            }
            elsif ( $line =~ /MMIO_LOWADDR\s*\(\s*([A-Z0-9_]+)\s*\)/ )
            {
                my $regv = $1;
                addpossiblereg($regv);
            }
            elsif ( $line =~ /\#define\s+\S+\s+([A-Z0-9_]+)/ )
            {
                my $regv = $1;
                addpossiblereg($regv);
            }
            elsif ( $line =~ /Scom\s*\(\s*\S+\s*,\s*[a-z]+::([A-Z0-9_]+)\s*/ )
            {
                my $regv = $1;
                addpossiblereg($regv);
            }
            elsif ( $line =~ /Register\s*\(\s*\S+\s*,\s*[a-z]+::([A-Z0-9_]+)\s*,/ )
            {
                my $regv = $1;
                addpossiblereg($regv);
            }
            elsif ( $line =~ /\s*=\s*([A-Z0-9_]+)\s*/ )
            {
                my $regv = $1;
                addpossiblereg($regv);
            }
            elsif ( $line =~ /FFDCREG\s*\(\s*([A-Z0-9_]+)/ )
            {
                my $regv = $1;
                addpossiblereg($regv);
            }
            elsif ( $line =~ /^\s*\S+\s*=\s*.+\?\s*[(]*\s*([A-Z0-9_]+)\s*[)]*\s*/ )
            {
                my $regv = $1;
                addpossiblereg($regv);
            }
            if ( $line =~ /^\s*\S+\s*=\s*.+\?.+\:\s*[(]*\s*([A-Z0-9_]+)\s*[)]*\s*/ )
            {
                my $regv = $1;
                addpossiblereg($regv);
            }
        }
        close(BUF);
    }
    if ( $f =~ /\.xml$/ )
    {
        open( BUF, $f ) || die "could not open file";
        while ( my $line = <BUF> )
        {
            if ( $line =~ /<scomRegister>(\S+)<\/scomRegister>/ )
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
    my $nuf      = $uf . ".tmp";
    my $buf      = "";
    my $ubuf     = "";
    my $path     = "";
    my $regmatch = {};
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
        $line = <UIN>;
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
                if ( $possibleregs->{$cnst} > 0 )
                {
                    $regmatch->{$lastreg}++;
                    addpossiblereg($lastreg);
                    $used = 1;
                }
            }
            elsif ( $line =~ /\s*static\s+const\s+\S+\s+(\S+)\s*=\s*\d+/ )
            {
                my $dval = $1;
                foreach my $rm ( keys %$regmatch )
                {
                    if ( $dval =~ /$rm/ )
                    {
                        addpossiblereg($dval);
                        $used = 1;
                        last;
                    }
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
        $line = <IN>;
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
    $line = <IN>;
    my $lastreg = "";
    my $used    = 1;    #header is used
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
            if ( $possibleregs->{$cnst} > 0 )
            {
                $regmatch->{$lastreg}++;
                addpossiblereg($lastreg);
                $used = 1;
            }
        }
        elsif ( $line =~ /\s*static\s+const\s+\S+\s+(\S+)\s*=\s*\d+/ )
        {
            my $dval = $1;
            foreach my $rm ( keys %$regmatch )
            {
                if ( $dval =~ /$rm/ )
                {
                    addpossiblereg($dval);
                    $used = 1;
                    last;
                }
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

walkdir($p10root);

$numargs = @ARGV;

if ( $numargs > 0 )
{
    $manualadds = @ARGV[0];
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

#get project headers
$headerdir = $p10root . "common/include/";

@files = split( /\n/, `ls -1 ${headerdir}p10_*_*_?.H` );

foreach $file (@files)
{
    print "$file\n";
    move_used_unused($file);
}
