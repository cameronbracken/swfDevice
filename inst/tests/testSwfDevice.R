#!/usr/bin/env Rscript

require(swfDevice)
swf()
plot(1,col='red')
points(1.1,bg='blue',cex=5)
dev.off()