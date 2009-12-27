#!/bin/bash

OPEN=open
R CMD INSTALL --clean ../../
Rscript testSwfDevice.R --output-prefix=output

#$OPEN *.swf
