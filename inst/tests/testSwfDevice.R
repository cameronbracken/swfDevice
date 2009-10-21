#!/usr/bin/env Rscript

require(swfDevice)

tests <- list(
	
	#Test the basics, there is actually alot going on here
	# text, rectangles, polylines, regular lines 
	function(name){
		
		swf(name)
		plot(1)
		dev.off()
		
	},
	
	#Test col and fill parameters
	function(name){
		
		swf(name)
		plot(1:10,col='red',cex=5)
		points(1:10,bg='blue',pch=21)
		dev.off()
		
	}
)
	
for( i in 1:length(tests)){
	
	n <- sprintf('%02d',i)
	cat('Running Test', n ,'\n')
	tests[[i]]( paste('swfDevice_test',n,'.swf',sep='') )
	#possibly generate gallery here
}