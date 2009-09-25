#!/bin/bash

R_ARCH=/x86_64 R CMD INSTALL --clean ../../
R_ARCH=/x86_64 Rscript testSwfDevice.R