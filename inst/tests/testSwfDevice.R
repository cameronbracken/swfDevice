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
		
	},
	
	#test of fontface and fontfamily
	function(main){
		
		plot(12:1,1:12,type='n',axes=F,xlim=c(0,12),ylim=c(1,12),xlab='',ylab='')
		box()
		text(1,12,"serif normal",font=1,family='serif')
		text(2,11,"serif bold",font=2,family='serif')
		text(3,10,"serif italic",font=3,family='serif')
		text(4,9,"serif bold italic",font=4,family='serif')
		text(5,8,"sans normal",font=1,family='sans')
		text(6,7,"sans bold",font=2,family='sans')
		text(7,6,"sans italic",font=3,family='sans')
		text(8,5,"sans bold italic",font=4,family='sans')
		text(9,4,"mono normal",font=1,family='mono')
		text(10,3,"mono bold",font=2,family='mono')
		text(11,2,"mono italic",font=3,family='mono')
		text(12,1,"mono bold italic",font=4,family='mono')
		
	},
	
	function(main){
		
		plot(c(0,1),c(0,1),type='o',lty=2)
		
	}
	
)
	
for( i in 1:length(tests)){
	
	n <- sprintf('%02d',i)
	cat('Running Test', n ,'\n')
	name <- paste('swfDevice_test',n,'.swf',sep='')
	swf(name,frameRate=1)
	tests[[i]]( name )
	dev.off()
	#possibly generate gallery here
}