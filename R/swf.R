swf <- 
function(file = "Rplots.swf", width = 7, height = 7, bg = "white", 
	fg = "black", frameRate = 12, fontFile = NULL){
	
	if(is.null(fontFile))
		fontFile <- system.file('fonts','ming-fonts-1.00',
			'ttf','Vera.ttf',package='swfDevice')
			
	#message(paste('Loading',fontFile))
		
    .External('swfDevice', file, width, height, bg, fg, 
		frameRate, fontFile ,package='swfDevice')
	invisible()
	
}
