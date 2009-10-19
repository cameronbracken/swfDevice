/*
 *  swfDevice, (C) 2009 Cameron Bracken
 *
 *  A graphics device for R : 
 *  	A Computer Language for Statistical Data Analysis
 *
 *  Copyright (C) 1995, 1996  Robert Gentleman and Ross Ihaka
 *  Copyright (C) 2001-8  The R Development Core Team
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, a copy is available at
 *  http://www.r-project.org/Licenses/
 */

// Access the libming funtions
#include <ming.h>
// We are writing to files so we need stdio.h
#include <stdio.h>
#include <stdlib.h>

#include "swfDevice.h"
#define DEBUG TRUE
#define BUFSIZE 512


SEXP swfDevice ( SEXP args ){

	/*
	 * Make sure the version number of the R running this
	 * routine is compatible with the version number of 
	 * the R that compiled this routine.
	*/
	R_GE_checkVersionOrDie(R_GE_version);

	/* Declare local variabls for holding the components of the args SEXP */
	const char *fileName;
	const char *bg, *fg;
	double width, height;

	/* 
	 * pGEDevDesc is a variable provided by the R Graphics Engine
	 * that contains all device information required by the parent
	 * R system. It contains one important componant of type pDevDesc
	 * which containts information specific to the implementation of
	 * the swf device. The creation and initialization of this component
	 * is one of the main tasks of this routine.
  */
	pGEDevDesc swfDev;


	/* Retrieve function arguments from input SEXP. */

	/*
	 * Skip first argument. It holds the name of the R function
	 * that called this C routine.
  */ 
	args = CDR(args);

	/* Recover file name. */
	fileName = translateChar(asChar(CAR(args)));
	/* Advance to next argument stored in SEXPR. */
	args = CDR(args);

	/* Recover figure dimensions. */
	/* For now these are assumed to be in inches. */
	width = asReal(CAR(args)); args = CDR(args);
	height = asReal(CAR(args)); args = CDR(args);
    
	/* Recover initial background and foreground colors. */
	bg = CHAR(asChar(CAR(args))); args = CDR(args);
	fg = CHAR(asChar(CAR(args))); args = CDR(args);
	
	

	/* Ensure there is an empty slot avaliable for a new device. */
	R_CheckDeviceAvailable();

	BEGIN_SUSPEND_INTERRUPTS{

		/* 
		 * The pDevDesc variable specifies which funtions and components 
		 * which describe the specifics of this graphics device. After
		 * setup, this information will be incorporated into the pGEDevDesc
		 * variable swfDev.
		*/ 
		pDevDesc deviceInfo;

		/* 
		 * Create the deviceInfo variable. If this operation fails, 
		 * a 0 is returned in order to cause R to shut down due to the
		 * possibility of corrupted memory.
		*/
		if( !( deviceInfo = (pDevDesc) calloc(1, sizeof(DevDesc))) )
			return 0;

		/*
		 * Call setup routine to initialize deviceInfo and associate
		 * R graphics function hooks with the appropriate C routines
		 * in this file.
		*/
		if( !SWF_Setup( deviceInfo, fileName, width, height, bg, fg ) ){
			/* 
			 * If setup was unsuccessful, destroy the device and return
			 * an error message.
			*/
			free( deviceInfo );
			error("SWF device setup was unsuccessful!");
		}

		/* Create swfDev as a Graphics Engine device using deviceInfo. */
		swfDev = GEcreateDevDesc( deviceInfo );

		// Register the device as an avaiable graphics device in the R
		// Session.
		GEaddDevice2( swfDev, "swf output" );

	} END_SUSPEND_INTERRUPTS;


	return R_NilValue;

}

/*
 * This function is responsible for initializing device parameters
 * contained in the variable deviceInfo. It returns a true or false
 * value depending on the success of initialization operations. The
 * static keyword means this function can only be seen by other functions
 * in this file. A better choice for the keyword might have been something
 * like "private"... 
*/

static Rboolean SWF_Setup(
	pDevDesc deviceInfo,
	const char *fileName,
	double width, double height,
	const char *bg, const char *fg ){

	/* 
	 * Create swfInfo, this variable contains information which is
	 * unique to the implementation of the SWF Device. The deviceInfo
	 * variable contains a slot into which swfInfo can be placed so that
	 * this information persists and is retrievable during the lifespan
	 * of this device.
	 *
	 * More information on the components of the deviceInfo structure,
	 * which is a pointer to a DevDesc variable, can be found under
	 * struct _DevDesc in the R header file GraphicsDevice.h
	 *
	 * swfInfo is a structure which is defined in the file swfDevice.h
	 *
	*/
	swfDevDesc *swfInfo;
	
	pGEcontext plotParams;

	/*
	 * pGEcontext is actually a *pointer* to a structure of type
	 * R_GE_gcontext. If we don't allocate it, it will be passed
	 * into the initialization routine without actually pointing
	 * to anything. This causes nasty crashes- for some reason
	 * only on Windows and Linux...
  */	
	if( !( plotParams = (pGEcontext) malloc(sizeof(pGEcontext)) ) )
		return FALSE;

	/* 
	 * Initialize swfInfo, return false if this fails. A false return
	 * value will cause the whole device initialization routine to fail.
	*/
	if( !( swfInfo = (swfDevDesc *) malloc(sizeof(swfDevDesc)) ) )
		return FALSE;

	/* Copy SWF-specific information to the swfInfo variable. */
	strcpy( swfInfo->outFileName, fileName);
	swfInfo->debug = DEBUG;
	swfInfo->nFrames = 0;
	/*Initilize the SWF movie version 8 so more line styles can be used*/
	Ming_init();
	swfInfo->m = newSWFMovieWithVersion(8);

	/* Incorporate swfInfo into deviceInfo. */
	deviceInfo->deviceSpecific = (void *) swfInfo;

	/* 
	 * These next statements define the capabilities of the device.
	 * These capabilities include:
	 *	-Device/user interaction
	 *	-Gamma correction
	 *	-Clipping abilities
	 *	-UTF8 support
	 *  -Text justification/alignment abilities
	*/

	/* 
	 * Define the gamma factor- used to adjust the luminosity of an image. 
	 * Set to 1 since there is no gamma correction in the SWF device. Also,
	 * canChangeGamma is set to FALSE to disallow user adjustment of this
	 * default
	*/
	deviceInfo->startgamma = 1;
	deviceInfo->canChangeGamma = FALSE;

	/*
	 * canHAdj is an integer specifying the level of horizontal adjustment
	 * or justification provided by this device. Currently set to 0 as this
	 * is not implemented. 
	*/
	deviceInfo->canHAdj = 0;

	/*
	 * useRotatedTextInContour specifies if the text function along with
	 * rotation parameters should be used over Hershey fonts when printing
	 * contour plot labels. As one of the primary goals of this device
	 * is to unify font choices, this value is set to true.
	*/
	deviceInfo->useRotatedTextInContour = FALSE; 

	/*
	 * canClip specifies whether the device implements routines for filtering
	 * plotting input such that it falls within a rectangular clipping area.
	 * Implementing this leads to an interesting design choice- to implement
	 * clipping here in the C code or hand it off to the SWF clipping 
	 * routines.  Clipping at the C level may reduce  and simplify the final 
	 * output file by not printing objects that fall outside the plot 
	 * boundaries. 
	*/
	deviceInfo->canClip = FALSE;

	/*
	 * These next parameters speficy if the device reacts to keyboard and 
	 * mouse events. Since this device outputs to a file, not a screen window, 
	 * these actions are disabled.
	*/
	deviceInfo->canGenMouseDown = FALSE;
	deviceInfo->canGenMouseMove = FALSE;
	deviceInfo->canGenMouseUp = FALSE;
	deviceInfo->canGenKeybd = FALSE;

	/* 
	 * This parameter specifies whether the device is set up to handle UTF8
	 * characters. This makes a difference in the complexity of the text
	 * handling functions that must be built into the device. If set to true
	 * both hook functions textUTF8 and strWidthUTF8 must be implemented.
	 * Compared to ASCII, which only has 128 character values, UTF8 has
	 * thousends. This will require a fairly sophisticated function for
	 * calculating string widths.
	 *
	 * UTF8 support would be a great feature to include as it would make
	 * this device useful for an international audience. For now only
	 * the ASCII character set will be used as it is easy to implement.
	 * 
	 * wantSymbolUTF8 indicates if mathematical symbols should be treated
	 * as UTF8 characters.
	*/
	deviceInfo->hasTextUTF8 = FALSE;
	deviceInfo->wantSymbolUTF8 = FALSE;

	/*
	 * Initialize device parameters. These concern properties such as the 
	 * plotting canvas size, the initial foreground and background colors and 
	 * the initial clipping area. Other parameters related to fonts and text 
	 * output are also included.
	*/

	/*
	 * Set canvas size. The bottom left corner is considered the origin and 
	 * assigned the value of 0pt, 0pt. The upper right corner is assigned by 
	 * converting the specified height and width of the device to points.
	*/
	deviceInfo->bottom = 0;
	deviceInfo->left = 0;
	deviceInfo->top = dim2dev( height );
	deviceInfo->right = dim2dev( width );

	/* Set default character size in pixels. */
	deviceInfo->cra[0] = 9;
	deviceInfo->cra[1] = 12;

	/* Set initial font. */
	deviceInfo->startfont = 1;

	/* Set initial font size. */
	deviceInfo->startps = 10;

	/* 
	 * Apparently these are supposed to center text strings over the points at
	 * which they are plotted. SWF does this automagically.
	 *
	 * I hope.
	 *
	*/
	deviceInfo->xCharOffset = 0;	
	deviceInfo->yCharOffset = 0;	
	deviceInfo->yLineBias = 0;	

	/* Specify the number of inches per pixel in the x and y directions. */
	deviceInfo->ipr[0] = 1/dim2dev(1);
	deviceInfo->ipr[1] = 1/dim2dev(1);

	/* Set initial foreground and background colors. */
	deviceInfo->startfill = R_GE_str2col( bg );
	deviceInfo->startcol = R_GE_str2col( fg );

	/* Set initial line type. */
	deviceInfo->startlty = 0;


	/* 
	 * Connect R graphic function hooks to SWF Routines implemented in this
	 * file. Each routine performs a specific function such as adding text, 
	 * drawing a line or reporting/adjusting the status of the device.
	*/

	/* Utility routines. */
	deviceInfo->close = SWF_Close;
	deviceInfo->newPage = SWF_NewPage;
	deviceInfo->clip = SWF_Clip;
	deviceInfo->size = SWF_Size;

	/* Text routines. */
	deviceInfo->metricInfo = SWF_MetricInfo;
	deviceInfo->strWidth = SWF_StrWidth;
	deviceInfo->text = SWF_Text;

	/* Drawing routines. */
	deviceInfo->line = SWF_Line;
	deviceInfo->circle = SWF_Circle;
	deviceInfo->rect = SWF_Rectangle;
	deviceInfo->polyline = SWF_Polyline;
	deviceInfo->polygon = SWF_Polygon;

	/* Dummy routines. These are mainly used by GUI graphics devices. */
	deviceInfo->activate = SWF_Activate;
	deviceInfo->deactivate = SWF_Deactivate;
	deviceInfo->locator = SWF_Locator;
	deviceInfo->mode = SWF_Mode;

	/* Call SWF_Open to create and initialize the output file. */
	if( !SWF_Open( deviceInfo ) )
		return FALSE;

	return TRUE;

}

static Rboolean SWF_Open( pDevDesc deviceInfo ){

	/* 
	 * Shortcut pointers to variables of interest. 
	 * It seems like there HAS to be a more elegent way of accesing
	 * these...
	*/
	swfDevDesc *swfInfo = (swfDevDesc *) deviceInfo->deviceSpecific;

	//firstTry();
	//Debug log
	if( swfInfo->debug == TRUE ){
		if( !( swfInfo->logFile = fopen(R_ExpandFileName("swfDevice.log"), "w") ) )
			return FALSE;
			
		fprintf(swfInfo->logFile,
			"SWF_Open: Begin swf output\n");	
		fprintf(swfInfo->logFile,
			"SWF_Open: Setting dimensions %6.1f by %6.1f\n",
			deviceInfo->right, deviceInfo->top);	
		fprintf(swfInfo->logFile,
			"SWF_Open: Setting background %3d, %3d, %3d\n",
			R_RED(deviceInfo->startfill), 
			R_GREEN(deviceInfo->startfill), 
			R_BLUE(deviceInfo->startfill));
		
	}

	// Set the background color for the movie
	SWFMovie_setBackground(swfInfo->m, 
		R_RED(deviceInfo->startfill), 
		R_GREEN(deviceInfo->startfill), 
		R_BLUE(deviceInfo->startfill));
		
	SWFMovie_setDimension(swfInfo->m, deviceInfo->right, deviceInfo->top);

	// Set the frame rate for the movie to 12 frames per second
	SWFMovie_setRate(swfInfo->m, 2.0);

	// Set the total number of frames in the movie to 120
	SWFMovie_setNumberOfFrames(swfInfo->m, 1);

	return TRUE;

}

static void SWF_Close( pDevDesc deviceInfo){

	/* Shortcut pointers to variables of interest. */
	swfDevDesc *swfInfo = (swfDevDesc *) deviceInfo->deviceSpecific;
	
	//If there is an open deug log, close it
	if( swfInfo->debug == TRUE ){
		fprintf(swfInfo->logFile,
			"SWF_Close: end swf output\n");
		fclose(swfInfo->logFile);
	}
	
	SWFMovie_setNumberOfFrames(swfInfo->m, 1);
	
	// Set the desired compression level for the output (9 = maximum compression)
	Ming_setSWFCompression(1);
	
	// Save the swf movie file to disk
    SWFMovie_save(swfInfo->m, swfInfo->outFileName);

	/* Destroy the swfInfo structure. */
	free(swfInfo);

}


/* Utility routines. */
static void SWF_NewPage( const pGEcontext plotParams, pDevDesc deviceInfo ){
	
	/* Shortcut pointers to variables of interest. */
	swfDevDesc *swfInfo = (swfDevDesc *) deviceInfo->deviceSpecific;
	
	if( swfInfo->debug == TRUE )
		fprintf(swfInfo->logFile,
			"SWF_Newpage: Starting new frame\n");
	
	/*
	 * Add a new frame to the current movie.
	 * This function adds a new frame to the current movie. All items added, removed
	 * manipulated effect this frame and probably following frames.
	 */
	//SWFMovie_nextFrame( swfInfo->m );
	swfInfo->nFrames++;
	
}

static void SWF_Clip( double x0, double x1,
		double y0, double y1, pDevDesc deviceInfo ){}
		
static void SWF_Size( double *left, double *right,
		double *bottom, double *top, pDevDesc deviceInfo){
	/* Return canvas size. */
	*bottom = deviceInfo->bottom;
	*left = deviceInfo->left;
	*top = deviceInfo->top;
	*right = deviceInfo->right;
}


/* Text routines. */
static void SWF_MetricInfo( int c, const pGEcontext plotParams,
		double *ascent, double *descent, double *width, pDevDesc deviceInfo ){

			*ascent = 0;
			*descent = 0;			
			*width = 0;
}
static double SWF_StrWidth( const char *str,
		const pGEcontext plotParams, pDevDesc deviceInfo )
{
	return 0.0;
}

static void SWF_Text( double x, double y, const char *str,
		double rot, double hadj, const pGEcontext plotParams, pDevDesc deviceInfo)
{
	/* Shortcut pointers to variables of interest. */
	swfDevDesc *swfInfo = (swfDevDesc *) deviceInfo->deviceSpecific;
	
	if( swfInfo->debug == TRUE )
		fprintf(swfInfo->logFile,
			"SWF_Text: Writing Text\n");	
			
}



    /*
     * device_Line should have the side-effect that a single
     * line is drawn (from x1,y1 to x2,y2)
     *
     * R_GE_gcontext parameters that should be honoured (if possible):
     *   col, gamma, lty, lwd
     */
static void SWF_Line( double x1, double y1,
		double x2, double y2, const pGEcontext plotParams, pDevDesc deviceInfo )
{
	/* Shortcut pointers to variables of interest. */
	swfDevDesc *swfInfo = (swfDevDesc *) deviceInfo->deviceSpecific;
	
	//If debugging, print info to log file
	if(swfInfo->debug == TRUE){
		fprintf(swfInfo->logFile,
			"SWF_Line: Drawing line from (%6.1f, %6.1f) to (%6.1f, %6.1f)\n",
			x1,y1,x2,y2);
	}
	SWFShape line = newSWFShape();
	
	SWFShape_movePenTo(line, x1, y1);
	
	if( plotParams->col != R_RGBA(255, 255, 255, 0) )
		SetLineStyle(line, plotParams, swfInfo);
		
	SWFShape_drawLineTo(line, x2, y2);

	SWFMovie_add(swfInfo->m, (SWFBlock) line);
	
}

    /*
     * device_Circle should have the side-effect that a
     * circle is drawn, centred at the given location, with
     * the given radius.
     * (If the device has non-square pixels, 'radius' should
     * be interpreted in the units of the x direction.)
     * The border of the circle should be
     * drawn in the given "col", and the circle should be
     * filled with the given "fill" colour.
     * If "col" is NA_INTEGER then no border should be drawn
     * If "fill" is NA_INTEGER then the circle should not
     * be filled.
     *
     * R_GE_gcontext parameters that should be honoured (if possible):
     *   col, fill, gamma, lty, lwd
     */	
static void SWF_Circle( double x, double y, double r,
		const pGEcontext plotParams, pDevDesc deviceInfo ){
	
	/* Shortcut pointers to variables of interest. */
	swfDevDesc *swfInfo = (swfDevDesc *) deviceInfo->deviceSpecific;
	
	if( swfInfo->debug == TRUE )
		fprintf(swfInfo->logFile,
			"SWF_Circle: Drawing Circle at x = %f, y = %f, r = %f\n",
			x,y,r);
	
	SWFShape circle;
	circle = newSWFShape();
	
	SWFShape_movePenTo(circle, x, y);

	// this is causing the shapes not to be drawn???
	if( plotParams->fill != R_RGBA(255, 255, 255, 0) )
		SetFill( circle,  plotParams, swfInfo);

	if( plotParams->col != R_RGBA(255, 255, 255, 0) )
		SetLineStyle( circle,  plotParams, swfInfo);
	
	// draws a circle with radius r 
	// centered at (x,y) into shape circle

	double a = r * 0.414213562; 
	// = tan(22.5 deg)

	double b = r * 0.707106781; 
	// = sqrt(2)/2 = sin(45 deg)

	SWFShape_movePenTo(circle, x + r, y);

	SWFShape_drawCurveTo(circle, x+r, y-a, x+b, y-b); 
	SWFShape_drawCurveTo(circle, x+a, y-r, x  , y-r); 
	SWFShape_drawCurveTo(circle, x-a, y-r, x-b, y-b); 
	SWFShape_drawCurveTo(circle, x-r, y-a, x-r, y  ); 
	SWFShape_drawCurveTo(circle, x-r, y+a, x-b, y+b); 
	SWFShape_drawCurveTo(circle, x-a, y+r, x  , y+r); 
	SWFShape_drawCurveTo(circle, x+a, y+r, x+b, y+b); 
	SWFShape_drawCurveTo(circle, x+r, y+a, x+r, y  );
	
	
	// I would like to use this function but the circles 
	// drawn with it are funky
	//SWFShape_drawCircle(circle, r);
	

	//SWFDisplayItem circled;
	//circled = 
	SWFMovie_add(swfInfo->m, (SWFBlock) circle);
	//SWFDisplayItem_moveTo(circled,x,y);
	
			
}
		
	/*
     * device_Rect should have the side-effect that a
     * rectangle is drawn with the given locations for its
     * opposite corners.  The border of the rectangle
     * should be in the given "col" colour and the rectangle
     * should be filled with the given "fill" colour.
     * If "col" is NA_INTEGER then no border should be drawn
     * If "fill" is NA_INTEGER then the rectangle should not
     * be filled.
     */
static void SWF_Rectangle( double x0, double y0, 
		double x1, double y1, const pGEcontext plotParams, pDevDesc deviceInfo ){

	/* Shortcut pointers to variables of interest. */
	swfDevDesc *swfInfo = (swfDevDesc *) deviceInfo->deviceSpecific;

	if( swfInfo->debug == TRUE )
		fprintf(swfInfo->logFile,
			"SWF_Rectangle: Drawing Rectangle\n");
			
	SWFShape rectangle;
	rectangle = newSWFShape();

	if( plotParams->col != R_RGBA(255, 255, 255, 0) )
		SetLineStyle(rectangle, plotParams, swfInfo);
		
	if( plotParams->fill != R_RGBA(255, 255, 255, 0) )
		SetFill(rectangle, plotParams, swfInfo);

	/* Start the pen at the first point */
	SWFShape_movePenTo(rectangle, x0, y0);

	/* Draw the four line segments on the rectangle */
	SWFShape_drawLineTo(rectangle, x0, y1);
	SWFShape_drawLineTo(rectangle, x1, y1);
	SWFShape_drawLineTo(rectangle, x0, y1);
	SWFShape_drawLineTo(rectangle, x0, y0);	

	SWFMovie_add(swfInfo->m, (SWFBlock) rectangle);
			
}
		
	/*
     * device_Polyline should have the side-effect that a
     * series of line segments are drawn using the given x
     * and y values.
     *
     * R_GE_gcontext parameters that should be honoured (if possible):
     *   col, gamma, lty, lwd
     */
static void SWF_Polyline( int n, double *x, double *y,
		pGEcontext plotParams, pDevDesc deviceInfo )
{
	
	/* Shortcut pointers to variables of interest. */
	swfDevDesc *swfInfo = (swfDevDesc *) deviceInfo->deviceSpecific;	
	
	if( swfInfo->debug == TRUE )
		fprintf(swfInfo->logFile,
			"SWF_Polyline: Drawing Polyline\n");
	
	SWFShape line;
	line = newSWFShape();
	
	if( plotParams->col != R_RGBA(255, 255, 255, 0) )
		SetLineStyle(line, plotParams, swfInfo);
		
	if( plotParams->fill != R_RGBA(255, 255, 255, 0) )
		SetFill(line, plotParams, swfInfo);
	
	/* Start the pen at the first point */
	SWFShape_movePenTo(line, x[0], y[0]);
	
	if( swfInfo->debug == TRUE )
		fprintf(swfInfo->logFile,
			"\t\t(%5.1f,%5.1f)\n",x[0], y[0]);
	
	/* Print coordinates for the middle segments of the line. */
	int i;
	for ( i = 1; i < n; i++ ){
		SWFShape_drawLineTo(line, x[i], y[i]);	
		
		if( swfInfo->debug == TRUE )
			fprintf(swfInfo->logFile,
				"\t\t(%5.1f,%5.1f)\n", x[i], y[i]);
	}
	
	SWFMovie_add(swfInfo->m, (SWFBlock) line);

}
	
	/*
     * device_Polygon should have the side-effect that a
     * polygon is drawn using the given x and y values
     * the polygon border should be drawn in the "col"
     * colour and filled with the "fill" colour.
     * If "col" is NA_INTEGER don't draw the border
     * If "fill" is NA_INTEGER don't fill the polygon
     *
     * R_GE_gcontext parameters that should be honoured (if possible):
     *   col, fill, gamma, lty, lwd
     */	
static void SWF_Polygon( int n, double *x, double *y,
		pGEcontext plotParams, pDevDesc deviceInfo ){

	/* Shortcut pointers to variables of interest. */
	swfDevDesc *swfInfo = (swfDevDesc *) deviceInfo->deviceSpecific;
	
	if( swfInfo->debug == TRUE )
		fprintf(swfInfo->logFile,
			"SWF_Polygon: Drawing Polygon\n");	
			
	SWFShape line;
	line = newSWFShape();

	if( plotParams->col != R_RGBA(255, 255, 255, 0) )
		SetLineStyle(line, plotParams, swfInfo);
	
	if( plotParams->fill != R_RGBA(255, 255, 255, 0) )
		SetFill(line, plotParams, swfInfo);
		
	/* Start the pen at the first point */
	SWFShape_movePenTo(line, x[0], y[0]);

	/* Print coordinates for the middle segments of the line. */
	int i;
	for ( i = 1; i < n; i++ ){
		SWFShape_drawLineTo(line, x[i], y[i]);	
	}
		
	SWFMovie_add(swfInfo->m, (SWFBlock) line);
			
}

static void SetLineStyle(SWFShape shape, const pGEcontext plotParams, 
	swfDevDesc *swfInfo ){
	
	byte red = R_RED(plotParams->col);
	byte green = R_GREEN(plotParams->col);
	byte blue = R_BLUE(plotParams->col);
	byte alpha =  R_ALPHA(plotParams->col);
	fprintf(swfInfo->logFile,"\tLineStyle: Red=%d, ",red);
	fprintf(swfInfo->logFile,"Green=%d, ",green);
	fprintf(swfInfo->logFile,"Blue=%d, ",blue);
	fprintf(swfInfo->logFile,"Alpha=%d\n",alpha);
	
	//FIXME: Honor all the line parameters such as 
	//lty, lend, ljoin 
	SWFShape_setLine(shape,
		(unsigned short) plotParams->lwd,
		red, green, blue, alpha);
		
	/*
	SWFShape_setLine2(shape,
		(unsigned short) plotParams->lwd,
		red, green, blue, alpha,
		SWF_LINESTYLE_CAP_ROUND,
		plotParams->lmitre);
	*/
		
		
}


static void SetFill(SWFShape shape, const pGEcontext plotParams, 
	swfDevDesc *swfInfo  ){
	
	/*
	 *	Some Notes on Color
	 *
	 *	R uses a 24-bit color model.  Colors are specified in 32-bit
	 *	integers which are partitioned into 4 bytes as follows.
	 *
	 *		<-- most sig	    least sig -->
	 *		+-------------------------------+
	 *		|   0	| blue	| green |  red	|
	 *		+-------------------------------+
	 *
	 *	The red, green and blue bytes can be extracted as follows.
	 *
	 *		red   = ((color	     ) & 255)
	 *		green = ((color >>  8) & 255)
	 *		blue  = ((color >> 16) & 255)
	 */
	
	byte red = R_RED(plotParams->fill);
	byte green = R_GREEN(plotParams->fill);
	byte blue = R_BLUE(plotParams->fill);
	
	//Top 8 bits: 255 = opaque, 0 = transparent
	byte alpha = R_ALPHA(plotParams->fill);
	
	fprintf(swfInfo->logFile,"\tFill: Red=%d, ",red);
	fprintf(swfInfo->logFile,"Green=%d, ",green);
	fprintf(swfInfo->logFile,"Blue=%d, ",blue);
	fprintf(swfInfo->logFile,"Alpha=%d\n",alpha);
	
	SWFFillStyle fill_style;
	fill_style = newSWFSolidFillStyle( red, green, blue, alpha );
	if(fill_style == NULL)
		error("Failed to allocate memory for fill object!");
	SWFShape_setRightFillStyle(shape, fill_style);
}

/*static void FontSetup(){
	
	char *fonts[10] = {
	"Bitstream Vera Serif.fdb",
	"Bitstream Vera Serif-B.fdb",
	"Bitstream Vera Sans.fdb",
	"Bitstream Vera Sans-B.fdb",
	"Bitstream Vera Sans-I.fdb"
	"Bitstream Vera Sans-B-I.fdb",
	"Bitstream Vera Sans Mono.fdb",
	"Bitstream Vera Sans Mono-B.fdb",
	"Bitstream Vera Sans Mono-I.fdb",
	"Bitstream Vera Sans Mono-B-I.fdb"
	};

	int i;

	for(i = 0; i < 11; i++){
		char *tmp = fonts[i];
		sprintf(fonts[i], BUFSIZE,
			"%s%slibrary%sswfDevice%sinst%sfonts%sming-fonts-1.00%sfdb%s%s",
			R_Home, FILESEP, FILESEP, FILESEP, FILESEP, FILESEP, FILESEP, 
			FILESEP, tmp);
		//myFont = newSWFFont_fromFile( fdbName );
	}
	
};*/

/*
 * This function is responsible for converting lengths given in page
 * dimensions (ie. inches, cm, etc.) to device dimensions (currenty
 * points- 1/72 of an inch).
 * With an swf file this doesn't really matter, because the size is 
 * ultimately set when the file is embedded in html.  
*/
double dim2dev( double length ){
	return length*72;
}

static void SWFLoadFont(){
	
	
	
}

/* 
 * Activate and deactivate execute commands when the active R device is 
 * changed. For devices using plotting windows, these routines usually change 
 * the window title to something like "Active" or "Inactive". Locator is a 
 * routine that is determines coordinates on the plotting canvas corresponding 
 * to a mouse click. For devices plotting to files these functions can be left 
 * as dummy routines.
*/
static void SWF_Activate( pDevDesc deviceInfo ){}
static void SWF_Deactivate( pDevDesc deviceInfo ){}
static Rboolean SWF_Locator( double *x, double *y, pDevDesc deviceInfo ){
	return FALSE;
}

/*
 * The mode function is called when R begins drawing and ends drawing using
 * a device. Currently there are no actions necessary under these conditions
 * so this function is a dummy routine. 
*/
static void SWF_Mode( int mode, pDevDesc deviceInfo ){}