swf <- 
function(file = "Rplots.swf", width = 7, height = 7, bg = "white", 
	fg = "black", frameRate = 12, fontFiles = NULL){
	
	
	
	
	fonts <- c('Vera.ttf', 'VeraBd.ttf', 'VeraIt.ttf','VeraBI.ttf', 'VeraMono.ttf',
		'VeraMoBd.ttf', 'VeraMoIt.ttf', 'VeraMoBI.ttf', 'VeraSe.ttf',
		'VeraSeBd.ttf','VeraSe.ttf','VeraSeBd.ttf')
	if(is.null(fontFiles)){
		files <- system.file('fonts','ttf-bitstream-vera-1.10',
			fonts,package='swfDevice')
		fontFiles <- list(
			ss = files[1],
			ss_b = files[2],
			ss_i = files[3],
			ss_b_i = files[4],
			mo = files[5],
			mo_b = files[6],
			mo_i = files[7],
			mo_b_i = files[8],
			se = files[9],
			se_b = files[10],
			se_i = files[11],
			se_b_i = files[12]
		)
	}
	
	#message(paste('Loading',fontFiles))
		
    .External('swfDevice', file, width, height, bg, fg, 
		frameRate, fontFiles ,PACKAGE='swfDevice')
	invisible()
	
}
