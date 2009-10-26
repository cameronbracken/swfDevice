swf <- 
function(file = "Rplots.swf", width = 7, height = 7, bg = "white", 
	fg = "black", frameRate = 12, fontFiles = NULL, ttf = 'liberation'){
	
	
	
	liberation = c(
		'LiberationSans-Regular.ttf',
		'LiberationSans-Bold.ttf',
		'LiberationSans-Italic.ttf',
		'LiberationSans-BoldItalic.ttf',
		'LiberationMono-Regular.ttf',
		'LiberationMono-Bold.ttf',
		'LiberationMono-Italic.ttf',
		'LiberationMono-BoldItalic.ttf',
		'LiberationSerif-Regular.ttf',
		'LiberationSerif-Bold.ttf',
		'LiberationSerif-Italic.ttf',
		'LiberationSerif-BoldItalic.ttf')
	vera = c(
		'Vera.ttf', 
		'VeraBd.ttf', 
		'VeraIt.ttf',
		'VeraBI.ttf', 
		'VeraMono.ttf',
		'VeraMoBd.ttf', 
		'VeraMoIt.ttf', 
		'VeraMoBI.ttf', 
		'VeraSe.ttf',
		'VeraSeBd.ttf',
		'VeraSe.ttf',
		'VeraSeBd.ttf')
		
	if(is.null(fontFiles)){
		theFont <- if(ttf == 'vera') vera else liberation
		files <- system.file('fonts',ttf, theFont, package='swfDevice')
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
	
	#message(paste('Loading',fontFiles,collapse='\n'))
		
    .External('swfDevice', file, width, height, bg, fg, 
		frameRate, fontFiles ,PACKAGE='swfDevice')
	invisible()
	
}


