#!/usr/bin/env Rscript

require(swfDevice)
library(getopt)

#Column 3: Argument mask of the flag. An integer. Possible values: 
# 0=no argument, 1=required argument, 2=optional argument. 
optspec <- matrix(c('output-prefix', 'p', 2, "character"),ncol=4,byrow=T)

#parse the command line arguments
opt <- getopt(optspec)

prefix <- ifelse(!is.null(opt$"output-prefix"),opt$"output-prefix",'.')

tests <- list(

	#test a rectangular box
	function(main){
	    plot(1, type='n', axes=F, main=main)
	    box()
		
		return('Unfilled Rectangle')
	},

	# Test of text color.
	function(main){
	    plot(1, type='n', main=main)
	    text(0.8,0.8,'red',col='red')
			text(1.2,1.2,'blue',col='blue',cex=2)
				
		return('Text Color')
	},

	# Plotting test- with legend
	function(main){

		plot(1,1, xlim=c(0,10), ylim=c(0,10), main=main)

		legend( x='top', title='Legend Test', legend=c('Hello'), inset=0.05 )

		legend( 6, 4, title='Another Legend Test', 
			legend=c('Test 1','Test 2'), pch=c(1,16))
			
		return('Legend String Placememt')

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
		plot(rx, ry, type="n", axes=F, xlab='', ylab='', 
			main=main, sub="Standard R plotting characters")

		# Plot characters.
		for( i in 1:26 ){

			points(ix[i], iy[i], pch=i-1)
			# Place text label so we know which character is being plotted.
			text(ix[i]-0.3, iy[i], i-1 )

		}
		return('Point types (pch)')
	},

	#tests a outline colored circle
	function(main){
	    plot(-2:2, -2:2, type = "n", axes=F, xlab='', ylab='', main=main)
	    points(rnorm(10), rnorm(10), col = "red")
	    points(rnorm(10)/2, rnorm(10)/2, col = "blue")
	
		return('Outlined colored circle')
	},

	#test for filled circle color
	function(main){
	    plot(-2:2, -2:2, type = "n", axes=F, xlab='', ylab='', main=main)
	    points(rnorm(10), rnorm(10), pch=21, col='blue', bg='forestgreen')
	
		return('Filled Circle')
	},

	#test for a colored line
	function(main){
	    plot(c(0,1), c(0,1), type = "l", axes=F, 
	            xlab='', ylab='', col='red3', main=main)
	
		return('Colored Line')
	},


	#tests cex, there is actually nothing in the swfDevice that handles this
	function(main){
	    plot(1, axes=F, xlab='', ylab='', cex=10, main=main)
	    points(1, cex=.5)
	
		return('Cex')
	},

	#test for filled color rectangle
	function(main){
	    plot(-2:2, -2:2, type = "n", axes=F, xlab='', ylab='', main=main)
	    points(rnorm(10), rnorm(10), pch=22, col='red', bg='gold')
	
		return('Filled Color Rectangle')
	},

	#test for line types
	function(main){
	    plot(0, type='n', xlim=c(0,1), ylim=c(0,6), 
	            axes=F, xlab='', ylab='', main=main)
	    for(i in 0:6)
	    	lines(c(0, 1), c(i, i), lty=i)
	
		return('Line Types')
	},

	#test for line weight
	function(main){
	    plot(0, type='n', xlim=c(0,1), ylim=c(0,6), 
	            axes=F, xlab='', ylab='', main=main)
	    for(i in 0:6)
	    	lines(c(0,1), c(i,i), lwd=i)
		
		return('Line Weight')
	},
	
	#Test the basics, there is actually alot going on here
	function(main){
	    #test a circle and some simple text
	    plot(1, axes=F, xlab='', ylab='', main=main)
	    text(1, 1.1, 'Some Text')
	
		return('The obligatory plot(1) test')
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
		
		return('Drawing Directions')
		
	},

	#test for transparency
	function(main){
	    plot(-2:2, -2:2, type = "n", axes=F, xlab='', ylab='', main=main)
	    points(rnorm(50), rnorm(50), pch=21, bg=rainbow(50,alpha=.5), cex=10)
		
		return('Transparency')
	},

	#test of many points for file size
	function(main){
	    plot(-2:2, -2:2, type = "n", axes=F, xlab='', ylab='', main=main)
	    points(rnorm(500), rnorm(500), pch=21, bg=rainbow(50,alpha=.5), cex=10)
		
		return('Many Overlapping Points for Filesize')
	},
	
	#Font families and faces
	function(main){
		
		par(mar=rep(0, 4), cex=0.7)
		plot.new()
		plot.window(c(0.05, 0.95), 0:1)
		family <- c("sans", "serif", "mono")
		face <- 1:4
		for (i in 1:4)
		  for (j in 1:3) {
		    par(family=family[j], lheight=1.5)
		    text(seq(.15, .85, length=4)[i],
		         seq(.25, .75, length=3)[j],
		         paste("family=\"", family[j], "\"\nfont=", face[i], sep=""),
		         font=face[i])
		  }
		segments(.02, c(.125, .375, .625, .875), 
		         .98, c(.125, .375, .625, .875), col="grey")
		segments(.02, c(.125, .375, .625, .875) - .01, 
		         .02, c(.125, .375, .625, .875) + .01, col="grey")
		segments(.98, c(.125, .375, .625, .875) - .01, 
		         .98, c(.125, .375, .625, .875) + .01, col="grey")
		rect(c(.27, .5, .73) - .01,
		     .1,
		     c(.27, .5, .73) + .01,
		     .9, col="white", border=NA)
		
		return('Font Faces and Families')
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
	
		return('Many Strings With Complex Clipping')
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

		persp(x, y, z, col=color[facetcol], 
				phi=30, theta=-30, ticktype='detailed', main=main )
		
		return('Persp Plot')
	},
	
	# Neat example of image.plot using the fields package.
	function(main){
	
		sink('/dev/null')
		suppressPackageStartupMessages(require(spam))
		suppressPackageStartupMessages(require(fields))
		sink()
		data(RCMexample)
	
		image.plot( RCMexample$x, RCMexample$y, RCMexample$z[,,8], main=main )
		
		return('Complex Image Plot')
	},
	
	# from the ggplot2 book section "Fitting multiple models"
	function(main){

		sink('/dev/null')
		suppressPackageStartupMessages(require(mgcv))
		suppressPackageStartupMessages(require(ggplot2))
		sink()
		print(qplot(carat, price, data = diamonds, geom = "smooth", 
		colour = color, main = main))
		
		return('Transparent Polygon Fill')
	},
	
	#Animation examples
	function(main){
		
		sink('/dev/null')
		suppressMessages(require(animation))
		sink()
		ani.options(interval = .001)
		knn.ani()
		
		return('Animation Package KNN')
	},
	
	function(main){
		
		sink('/dev/null')
		suppressMessages(require(animation))
		sink()
		ani.options(interval = 0.001)
		mwar.ani(lty.rect = 3, pch = 21, col = "red", bg = "yellow",type='o')
		
		return('Animation Package Moving Window AR')
	},
	
	function(main){
		
		sink('/dev/null')
		suppressMessages(require(animation))
		sink()
		ani.options(interval = 0.001)
		cv.ani(x = runif(15), k = 15)
		
		return('Animation Package Cross Validation')
		
	},
	
	function(main){
		
		sink('/dev/null')
		suppressMessages(require(animation))
		sink()
		ani.options(interval = 0.001)
		kmeans.ani()
		
		return('Animation Package K Means')
	},
	
	function(main){
		
		sink('/dev/null')
		suppressMessages(require(animation))
		sink()
		ani.options(interval = 0.001)
		clt.ani(type = "h")
		
		return('Animation Package CLT 1')
	},
	
	function(main){
		
		sink('/dev/null')
		suppressMessages(require(animation))
		sink()
		ani.options(interval = 0.001)
		lln.ani(pch = ".")
		
		return('Animation Package CLT 2')
	},
	
	function(main){
		
		b <- rainbow(1000,alpha=.3)
		p <- cbind(rnorm(1),rnorm(1))
		ns <- ifelse(length(grep('png',main)) == 0,200,1)
		
		for(i in 1:ns){
			
			plot(p,xlab='',ylab='',main=main,xlim=c(-3,3),ylim=c(-3,3),type='n')
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
			points(p,bg=sample(b,i),pch=19,col=sample(b,i))
			p <- rbind(p,cbind(rnorm(1),rnorm(1)))
		}	
		plot(p,xlab='',ylab='',main=main,xlim=c(-3,3),ylim=c(-3,3),type='n')
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
		return('Player Control Placement')
	},
	
	function(main){
		
		leader <- c(0,0)
		ang <- round(runif(1,10,80))
		n <- 100
		ns <- ifelse(length(grep('png',main)) == 0,200,1)
		d <- .6
		p <- 1
		followers <- cbind(rnorm(n),rnorm(n))
		bg <- rainbow(10,alpha=.5)
		sc <- rainbow(n,alpha=.5)
		for(i in 1:ns){
			
			plot(followers,xlab='',ylab='',main=main,xlim=c(-3,3),ylim=c(-3,3))
			if(length(grep('png',main)) == 0){
				swfAddPlayerControls('topright')
			}
			points(leader[1],leader[2],bg=bg[7],pch=19,col=1)
			points(followers,bg=sc,pch=19,col=sc)
			
			leader[1] <- leader[1] + d*cos(ang*pi/180)
			leader[2] <- leader[2] + d*sin(ang*pi/180)
			if(leader[1] < -3 | leader[2] < -3 | leader[1] > 3 | leader[2] > 3) 
				ang <- (90 + ang) %% 360
			followers[,1] <- followers[,1] + 
				p*runif(n) * (leader[1] - followers[,1])
			followers[,2] <- followers[,2] + 
				p*runif(n) * (leader[2] - followers[,2])
		}	
		plot(followers,xlab='',ylab='',
			main=main,xlim=c(-3,3),ylim=c(-3,3),type='n')
		if(length(grep('png',main)) == 0){
			swfAddPlayerControls('topright')
		}
		return('Animation of medium complexity')
	},
	
	function(main){
		
		suppressMessages(require(tseriesChaos))
		suppressMessages(require(scatterplot3d))
		sim.cont.full <- function(syst, start.time, end.time, dt, start.x,
		                          parms = NULL){

		     times <- seq(start.time, end.time, by = dt)
		     series <- lsoda(start.x, times, func = syst, parms = parms)[,-1]
		     series
		}

		lorenz.ts <- sim.cont.full(lorenz.syst, 0, 6, 0.05,
		                           start.x=c(20,0,30), parms=c(10, 28, -8/3))
		
		par(mar=c(2.2,3.2,0,4.2))
		scatterplot3d(rbind(lorenz.ts[1,]),type='l',color='steelblue',
			xlab='x',ylab='y',zlab='z',scale.y=.5, 
			xlim = range(lorenz.ts[,1]),
			ylim = range(lorenz.ts[,2]), zlim = range(lorenz.ts[,3]))
		end <- 2
		if(length(grep('png',main)) == 0){
			swfAddPlayerControls(-1,-1)
			end <- nrow(lorenz.ts)-1
		}
		
		for(i in 2:end){			
			scatterplot3d(lorenz.ts[1:i,],type='l',color='steelblue',xlab='x',
				ylab='y',zlab='z',scale.y=.5, xlim = range(lorenz.ts[,1]),
				ylim = range(lorenz.ts[,2]), zlim = range(lorenz.ts[,3]))
			if(length(grep('png',main)) == 0){
				swfAddPlayerControls(-1,-1)
			}
		}
		
		return('Long Animation')
	}
	
	
)
	
cat('\n-- Running Test Suite --\n')
for( i in 1:length(tests)){
	
	n <- sprintf('%02d',i)
	cat('Running Test', n, 'of', length(tests),'\b: ')
	if(!file.exists( prefix )) dir.create( prefix, recursive = TRUE)
	swfname <- file.path(prefix, paste('swfDevice_test',n,'.swf',sep=''))
	pngname <- file.path(prefix, paste('swfDevice_test',n,'.png',sep=''))
	swf(swfname,frameRate=20)
	test.name <- tests[[i]]( swfname )
	dev.off()
	cat(test.name,'\n')
	png(pngname,type='cairo',width=504,height=504)
	tests[[i]]( pngname )
	dev.off()
	
}
cat('-- Finished Running Test Suite --\n')

html <- 'swfs.html'
quiet <- file.remove(html)
quiet <- file.create(html)
swfs <- list.files(prefix,"[0-9][0-9][.]swf$")
pngs <- list.files(prefix,"[0-9][0-9][.]png$")

for(i in 1:length(swfs)){
	system(paste('cd',prefix,'; swfdump --xhtml',swfs[i],'>>',html))
	cat('<img src=\'',pngs[i],'\'/>\n',file=file.path(prefix,html),append=T,sep='')
	cat('<br/>\n',file=file.path(prefix,html),append=T)
}