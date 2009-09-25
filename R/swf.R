swf <- function(file = "Rplots.swf", width=7, height=7, bg="white", fg="black"){
    .External('swfDevice', fileName, width, height, bg, fg, package='swfDevice')
	invisible()
}
