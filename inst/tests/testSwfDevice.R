#!/usr/bin/env Rscript

require(swfDevice)
swf()
plot(1:10,col='red',cex=5)
points(1:10,bg='blue')
dev.off()