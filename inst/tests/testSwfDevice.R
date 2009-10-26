#!/usr/bin/env Rscript

require(swfDevice)

tests <- list(
	
	#Test the basics, there is actually alot going on here
	function(main){
	    #test a circle and some simple text
	    plot(1, axes=F, xlab='', ylab='', main=main)
	    text(1, 1.1, 'Some Text')
	},

	function(main){
	    #test a rectangular box
	    plot(1, type='n', axes=F, main=main)
	    box()
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

		legend( x='top', title='Legend Test', legend=c('Hello'), inset=0.05 )

		legend( 6, 4, title='Another Legend Test', legend=c('Test 1','Test 2'), pch=c(1,16))

	},

	# Plotting test- pch values 0-25

	function(main){

		# Magic stuff taken from example(points)
		n <- floor(sqrt(26))
		npchIndex <- 0:(25)

		ix <- npchIndex %/% n
		iy <- 3 + (n-1) - npchIndex %% n

		rx <- c(-1,1)/2 + range(ix)
		ry <- c(-1,1)/2 + range(iy)

		# Set up plot area
		plot(rx, ry, type="n", axes=F, xlab='', ylab='', main=main, sub="Standard R plotting characters")

		# Plot characters.
		for( i in 1:26 ){

			points(ix[i], iy[i], pch=i-1)
			# Place text label so we know which character is being plotted.
			text(ix[i]-0.3, iy[i], i-1 )

		}

	},

	#tests a outline colored circle
	function(main){
	    plot(-2:2, -2:2, type = "n", axes=F, xlab='', ylab='', main=main)
	    points(rnorm(10), rnorm(10), col = "red")
	    points(rnorm(10)/2, rnorm(10)/2, col = "blue")
	},

	#test for filled circle color
	function(main){
	    plot(-2:2, -2:2, type = "n", axes=F, xlab='', ylab='', main=main)
	    points(rnorm(10), rnorm(10), pch=21, col='blue', bg='forestgreen')
	},

	#test for a colored line
	function(main){
	    plot(c(0,1), c(0,1), type = "l", axes=F, 
	            xlab='', ylab='', col='red3', main=main)
	},


	#tests cex, there is actually nothing in the swfDevice that handles this
	function(main){
	    plot(1, axes=F, xlab='', ylab='', cex=10, main=main)
	    points(1, cex=.5)
	},

	#test for filled color rectangle
	function(main){
	    plot(-2:2, -2:2, type = "n", axes=F, xlab='', ylab='', main=main)
	    points(rnorm(10), rnorm(10), pch=22, col='red', bg='gold')
	},

	#test for line types
	function(main){
	    plot(0, type='n', xlim=c(0,1), ylim=c(0,6), 
	            axes=F, xlab='', ylab='', main=main)
	    for(i in 0:6)
	    	lines(c(0, 1), c(i, i), lty=i)
	},

	#test for line weight
	function(main){
	    plot(0, type='n', xlim=c(0,1), ylim=c(0,6), 
	            axes=F, xlab='', ylab='', main=main)
	    for(i in 0:6)
	    	lines(c(0,1), c(i,i), lwd=i)
	},
	
	#test of drawing direction with dashed lines
	function(main){
		
		plot(c(0,1),c(0,1),type='o',lty=2,xlim=c(0,2),ylim=c(0,2))
		lines(c(2,1),c(2,1),type='o',lty=2)
		lines(c(0,1),c(1,0),type='o',lty=2)
		lines(c(2,1),c(1,2),type='o',lty=2)
		
	},

	#test for transparency
	function(main){
	    plot(-2:2, -2:2, type = "n", axes=F, xlab='', ylab='', main=main)
	    points(rnorm(50), rnorm(50), pch=21, bg=rainbow(50,alpha=.5), cex=10)
	},

	#test of many points for file size
	function(main){
	    plot(-2:2, -2:2, type = "n", axes=F, xlab='', ylab='', main=main)
	    points(rnorm(500), rnorm(500), pch=21, bg=rainbow(50,alpha=.5), cex=10)
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

	# Test with many strings and complex clipping from help(contour)
	function(main){
	    x <- -6:16
	    op <- par(mfrow = c(2, 2))
	    contour(outer(x, x), method = "edge")
	    z <- outer(x, sqrt(abs(x)), FUN = "/")
	    image(x, x, z)
	    contour(x, x, z, col = "pink", add = TRUE, method = "edge")
	    contour(x, x, z, ylim = c(1, 6), method = "simple", labcex = 1)
	    contour(x, x, z, ylim = c(-6, 6), nlev = 20, lty = 2, method = "simple")
	    par(op)
	},
	
	
	# Three dimensional plotting test- taken from a persp example.
	function(main){

		x <- seq( -1.95, 1.95, length=30 )
		y <- seq( -1.95, 1.95, length=35 )

		z <- outer( x, y, function(a,b){ a*b^2 } )

		nrz <- nrow(z)
		ncz <- ncol(z)

		jet.colors <- colorRampPalette( c("blue", "green") )

		nbcol <- 100

		color <- jet.colors(nbcol)

		zfacet <- z[-1,-1] + z[-1,-ncz] + z[-nrz, -1] + z[-nrz, -ncz]
		facetcol <- cut(zfacet, nbcol)

		persp(x, y, z, col=color[facetcol], phi=30, theta=-30, ticktype='detailed', main=main )

	},
	
	# Neat example of image.plot using the fields package.
	function(main){
	
		sink('/dev/null')
		suppressPackageStartupMessages(require(spam))
		suppressPackageStartupMessages(require(fields))
		sink()
		data(RCMexample)
	
		image.plot( RCMexample$x, RCMexample$y, RCMexample$z[,,8], main=main )
	
	},
	
	# from the ggplot2 book section "Fitting multiple models"
	function(main){

		sink('/dev/null')
		suppressPackageStartupMessages(require(mgcv))
		suppressPackageStartupMessages(require(ggplot2))
		sink()
		print(qplot(carat, price, data = diamonds, geom = "smooth", 
		colour = color, main = main))

	},
	
	#Animation examples
	function(main){
		
		sink('/dev/null')
		suppressMessages(require(animation))
		sink()
		ani.options(interval = .001)
		knn.ani()
		
	},
	
	function(main){
		
		sink('/dev/null')
		suppressMessages(require(animation))
		sink()
		ani.options(interval = 0.001)
		mwar.ani(lty.rect = 3, pch = 21, col = "red", bg = "yellow",type='o')
		
	},
	
	function(main){
		
		sink('/dev/null')
		suppressMessages(require(animation))
		sink()
		ani.options(interval = 0.001)
		cv.ani(x = runif(15), k = 15)
		
	},
	
	function(main){
		
		sink('/dev/null')
		suppressMessages(require(animation))
		sink()
		ani.options(interval = 0.001)
		kmeans.ani()
		
	},
	
	function(main){
		
		sink('/dev/null')
		suppressMessages(require(animation))
		sink()
		ani.options(interval = 0.001)
		clt.ani(type = "h")
		
	},
	
	function(main){
		
		sink('/dev/null')
		suppressMessages(require(animation))
		sink()
		ani.options(interval = 0.001)
		lln.ani(pch = ".")
		
	}
	
	
)
	
for( i in 1:length(tests)){
	
	n <- sprintf('%02d',i)
	cat('Running Test', n, 'of', length(tests) ,'\n')
	name <- paste('swfDevice_test',n,'.swf',sep='')
	pngname <- paste('swfDevice_test',n,'.png',sep='')
	swf(name,frameRate=1)
	tests[[i]]( name )
	dev.off()
	png(pngname,type='cairo')
	tests[[i]]( name )
	dev.off()
	#possibly generate gallery here
}