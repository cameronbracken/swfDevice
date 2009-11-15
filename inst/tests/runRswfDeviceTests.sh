#!/bin/bash

OPEN=open
R CMD INSTALL --clean ../../
Rscript testSwfDevice.R

#$OPEN *.swf
