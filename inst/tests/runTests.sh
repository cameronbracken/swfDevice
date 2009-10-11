#!/bin/bash

OPEN=open

gcc testMing.c -L/opt/local/lib -lming -I/opt/local/include -o testming
./testming

R_ARCH=/x86_64 R CMD INSTALL --clean ../../
R_ARCH=/x86_64 R CMD BATCH testSwfDevice.R

#$OPEN *.swf
