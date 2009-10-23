swf <- 
function(file = "Rplots.swf", width = 7, height = 7, bg = "white", 
	fg = "black", frameRate = 12, fontFile = NULL){
	
	if(is.null(fontFile))
		fontFile <- system.file('fonts','ttf-bitstream-vera-1.10',
			'Vera.ttf',package='swfDevice')
			
	#message(paste('Loading',fontFile))
		
    .External('swfDevice', file, width, height, bg, fg, 
		frameRate, fontFile ,PACKAGE='swfDevice')
	invisible()
	
}
