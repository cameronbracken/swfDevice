swfAddPlayerControls <- function(x, y = NULL, inset=.1, play.col = "green",
	stop.col = "red"){
	
	if (is.character(x)){
		auto <- match.arg(x, c("bottomright", "bottom", "bottomleft", 
			"left", "topleft", "top", "topright", "right", "center"))

		usr <- par("usr")
		inset <- rep(inset, length.out = 2)
		insetx <- inset[1L] * (usr[2L] - usr[1L])
	 	x <- switch(auto, bottomright = , topright = , 
		    right = usr[2L] - insetx, bottomleft = , 
		    left = , topleft = usr[1L] + insetx, bottom = , 
		    top = , center = (usr[1L] + usr[2L])/2)
		insety <- inset[2L] * (usr[4L] - usr[3L])
		y <- switch(auto, bottomright = , bottom = , bottomleft = usr[3L] + 
		    insety, topleft = , top = , topright = usr[4L] - 
		    insety, left = , right = , center = (usr[3L] + usr[4L])/2)
	}
	
	x <- grconvertX(x, from = "user", to = "device")
	y <- grconvertX(y, from = "user", to = "device")
	

	.C('SWF_addPlayerControls', as.double(x), as.double(y) ,PACKAGE='swfDevice')

}