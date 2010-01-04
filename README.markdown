__swfDevice__: R graphics device for swf (flash) output
__Status__: Pre-Alpha

__Description__: This package provides the swf() graphics device in R.  Using Ming library (http://www.libming.org/) , this device can create flash movies from R plotting commands.  My vision for this device is that multipage output will be rendered as movies with specifiable parameters and optional buttons for control. 

__System Requirements__: Depends on libming version >= 0.4.0beta5.  This version introduced support for ttf fonts without conversion.  The windows version will attempt to compile ming from source.

__Todo__

* Device features to address/investigate
	- xCharOffset yCharOffset            
	- yLineBias
	- ipr: pixels per inch             
	- cra: default character size in pixels
	- gamma                  
	- canClip: will be much harder than tikzDevice                 	
	- canChangeGamma
	- canHAdj: not supported
	- startps: ditto        
	- hasTextUTF8: should be possible with ming
	- wantSymbolUTF8: ditto 
	- useRotatedTextInContour: ditto 
* Implement remaining graphics parameters 
	- gamma  
	- lend
	- ljoin
	- lmitre
	- lineheight
* Graphics primitives 
	- metricInfo (is currently returning the same metrics for all characters, this is bad but does not severely affect the text placement)
	- textUTF8       
	- strWidthUTF8
* Working windows build that does not crash when any operation is performed
* Fix mixed up font faces

__Lessons Learned__

* SWFShape\_setRightFillStyle() and SWFShape\_setLine2() do not play nicely


__Planned Features__

* Better control over player controls
* R Bindings to the ming library (will this really be useful?)
	- Control subset of parameters at the R level
* Option to wrap swf in html output