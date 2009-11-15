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
		lines(c(1,2),c(2,2),type='o',lty=3)
		lines(c(2,2),c(2,1),type='o',lty=3)
		lines(c(0,1),c(0,0),type='o',lty=3)
		lines(c(0,0),c(0,1),type='o',lty=3)
		
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
		
		plot(16:1,1:16,type='n',axes=F,xlim=c(0,16),
			ylim=c(1,16),xlab='',ylab='')
		box()
		text(1,16,"serif normal",font=1,family='serif')
		text(2,15,"serif bold",font=2,family='serif')
		text(3,14,"serif italic",font=3,family='serif')
		text(4,13,"serif bold italic",font=4,family='serif')
		text(5,12,"sans normal",font=1,family='sans')
		text(6,11,"sans bold",font=2,family='sans')
		text(7,10,"sans italic",font=3,family='sans')
		text(8,9,"sans bold italic",font=4,family='sans')
		text(9,8,"mono normal",font=1,family='mono')
		text(10,7,"mono bold",font=2,family='mono')
		text(11,6,"mono italic",font=3,family='mono')
		text(12,5,"mono bold italic",font=4,family='mono')
		text(13,4,"default normal",font=1)
		text(14,3,"default bold",font=2)
		text(15,2,"default italic",font=3)
		text(16,1,"default bold italic",font=4)
		
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
		
	},
	
	function(main){
		
		leader <- c(0,0)
		ang <- round(runif(1,10,80))
		n <- 100
		ns <- 200
		d <- .6
		p <- 1
		followers <- cbind(rnorm(n),rnorm(n))
		bg <- rainbow(10,alpha=.5)
		sc <- rainbow(n,alpha=.5)
		for(i in 1:ns){
			
			plot(followers,xlab='',ylab='',main=main,xlim=c(-3,3),ylim=c(-3,3))
			if(length(grep('png',main)) == 0){
				swfAddPlayerControls('top')
				swfAddPlayerControls('bottom')
				swfAddPlayerControls('left')
				swfAddPlayerControls('right')
				swfAddPlayerControls('topright')
				swfAddPlayerControls('topleft')
				swfAddPlayerControls('bottomright')
				swfAddPlayerControls('bottomleft')
				swfAddPlayerControls('center')
			}
			points(leader[1],leader[2],bg=bg[7],pch=19,col=1)
			points(followers,bg=sc,pch=19,col=sc)
			
			leader[1] <- leader[1] + d*cos(ang*pi/180)
			leader[2] <- leader[2] + d*sin(ang*pi/180)
			if(leader[1] < -3 | leader[2] < -3 | leader[1] > 3 | leader[2] > 3) 
				ang <- (90 + ang) %% 360
			followers[,1] <- followers[,1] + p*runif(n) * (leader[1] - followers[,1])
			followers[,2] <- followers[,2] + p*runif(n) * (leader[2] - followers[,2])
		}	
		plot(followers,xlab='',ylab='',main=main,xlim=c(-3,3),ylim=c(-3,3),type='n')
	}
	
	
)
	
for( i in 27:length(tests)){
	
	n <- sprintf('%02d',i)
	cat('Running Test', n, 'of', length(tests) ,'\n')
	name <- paste('swfDevice_test',n,'.swf',sep='')
	pngname <- paste('swfDevice_test',n,'.png',sep='')
	swf(name,frameRate=12)
	tests[[i]]( name )
	dev.off()
	png(pngname,type='cairo',width=504,height=504)
	tests[[i]]( pngname )
	dev.off()
	#possibly generate gallery here
}

file.remove('swfs.html')
file.create('swfs.html')
swfs <- list.files(,"[0-9][0-9][.]swf$")
pngs <- list.files(,"[0-9][0-9][.]png$")

for(i in 1:length(swfs)){
	system(paste('swfdump --xhtml',swfs[i],'>> swfs.html'))
	cat('<img src=\'',pngs[i],'\'/>\n',file='swfs.html',append=T,sep='')
	cat('<br/>\n',file='swfs.html',append=T)
}