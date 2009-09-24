.First.lib <- function(libname, pkgname) {
	library.dynam("swfDevice", pkgname, libname)
}

### in case we decide to keep the namespace ...
.onLoad <- .First.lib
