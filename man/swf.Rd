\name{swf}
\alias{swf}
\title{
SWF Graphics Device
}
\description{
\code{swf} is used to open a R graphics device which supports output in the SWF (shockwave flash) format.
}
\usage{
swf(file = "Rplots.swf", width = 7, height = 7, bg="white", fg="black", 
	frameRate = 12, fontFile = NULL)
}
\arguments{
  \item{file}{A character string indicating the desired path to the output file.}
  \item{width}{The width of the output figure, in \bold{inches}.}
  \item{height}{The height of the output figure, in \bold{inches}.}
  \item{bg}{The starting background color for the plot.}
  \item{fg}{The starting foreground color for the plot.}
  \item{frameRate}{The frame rate for the resulting swf file. Ignored if multipage output is not used.}
  \item{fontFile}{Path to a ttf font to use for text. If NULL Vera fonts will be used.}
  }

\details{
swfDevice outputs swf graphics by using the Ming library. 
}
\value{
\code{swf()} returns no values.
}
\references{
The Ming Library: \url{http://sourceforge.net/projects/pgf}\cr
}
\author{
Cameron Bracken \email{cameron.bracken@gmail.com}
}
\note{
Windows
}



\seealso{
\code{\link{swfDevice-package}}
}
\examples{
\dontrun{
	#Coming soon
}
}
\keyword{ device }
