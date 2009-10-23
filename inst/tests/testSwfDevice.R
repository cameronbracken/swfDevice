#!/usr/bin/env Rscript

require(swfDevice)

tests <- list(
	
	#Test the basics, there is actually alot going on here
	# text, rectangles, polylines, regular lines 
	function(main){
		
		plot(1,main=main)
		
	},
	
	#Test col and fill parameters
	function(main){
		
		plot(1:10,col='red',cex=5,main=main)
		points(1:10,bg='blue',pch=21)
		
	},
	
	# Test of text color.
	function(main){
	    plot(1, type='n', main=main)
	    text(0.8,0.8,'red',col='red')
			text(1.2,1.2,'blue',col='blue',cex=2)
	},

	# Plotting test- with legend
	function(main){

		plot(1,1, xlim=c(0,10), ylim=c(0,10), main=main)

		legend( x='top', title='Legend Test', legend=c('Hello, world!'), inset=0.05 )

		legend( 6, 4, title='Another Legend Test', legend=c('Test 1','Test 2'), pch=c(1,16))
		plot(1)
		plot(1:10)
		plot(1:10)

	},
	
	function(main){
		
		suppressMessages(require(animation))
		ani.options(interval = .001)
		knn.ani()
		
	},
	
	function(main){
		
		suppressMessages(require(animation))
		ani.options(interval = 0.001)
		mwar.ani(lty.rect = 3, pch = 21, col = "red", bg = "yellow",type='o')
		
	}
	
)
	
for( i in 1:length(tests)){
	
	n <- sprintf('%02d',i)
	cat('Running Test', n ,'\n')
	name <- paste('swfDevice_test',n,'.swf',sep='')
	swf(name,frameRate=5)
	tests[[i]]( name )
	dev.off()
	#possibly generate gallery here
}