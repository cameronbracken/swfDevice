\name{swfAddPlayerControls}
\alias{swfAddPlayerControls}
\title{
swfAddPlayerControls
}
\description{
Generates play and stop buttons at the specified position. 
}
\usage{
swfAddPlayerControls <- function(x, y = NULL, inset=.1, 
	play.col = "green", stop.col = "red")
}
\arguments{
  \item{x}{A character string indicating the position of the controls (as in \code{\link{legend}}) or the x coordinate of the center of the controls.}
  \item{y}{The y coordinate of the center of the controls.}
  \item{inset}{If x is a character string then inset is used to determine the padding from the borders of the plot. Units are proportion of the plotting region.}
  \item{play.col}{The starting background color for the play button.}
  \item{stop.col}{The starting background color for the stop button.}
}

\details{
Adds player controls (play, stop) at the given position. The position may be specified as a character string such as in \code{\link{legend}}.   If an animation is being generated then \strong{controls must be added to every new frame}.  In other words, if a new top level plotting function is called and a new frame is generated, the controls on the last frame will be destroyed. 
}
\value{
\code{swfAddPlayerControls} returns no values.
}
\author{
Cameron Bracken \email{cameron.bracken@gmail.com}
}



\seealso{
\code{\link{swfDevice-package}}, 
\code{\link[swfDevice]{swf}}
}
\examples{
\dontrun{
	#Coming soon
}
}