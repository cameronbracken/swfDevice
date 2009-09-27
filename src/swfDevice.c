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
	swfInfo->nFrames = 1;
	/*Initilize the SWF movie*/
	Ming_init();
	swfInfo->movie = newSWFMovieWithVersion(8);

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

/*
 * This function is responsible for converting lengths given in page
 * dimensions (ie. inches, cm, etc.) to device dimensions (currenty
 * points- 1/72 of an inch). 
*/
double dim2dev( double length ){
	return length*72;
}

void firstTry(void)
{
        // Create local variables
        SWFFillStyle fill_style;
        SWFShape square_definition;
        SWFDisplayItem square_display_item;
        SWFMovie test_movie;


        // Initialise the movie structure in memory
        Ming_init();
        test_movie = newSWFMovieWithVersion(7);

        // Set the background color for the movie
        SWFMovie_setBackground(test_movie, 0x00, 0x00, 0x00);

        // Set the frame rate for the movie to 12 frames per second
        SWFMovie_setRate(test_movie, 12.0);

        // Set the total number of frames in the movie to 120
        SWFMovie_setNumberOfFrames(test_movie, 1);

        // Create a new fill style (semi-transparent)
        fill_style = newSWFSolidFillStyle(0xa5, 0xa5, 0xff, 0x80);
        
        // Create a square
        square_definition = newSWFShape();
        SWFShape_setRightFillStyle(square_definition, fill_style);
        SWFShape_drawLine(square_definition, 100.0, 0.0);
        SWFShape_drawLine(square_definition, 0.0, 100.0);
        SWFShape_drawLine(square_definition, -100.0, 0.0);
        SWFShape_drawLine(square_definition, 0.0, -100.0);

        // Add the square to the movie (at 0,0)
        square_display_item = SWFMovie_add(test_movie, (SWFBlock) square_definition);

        // Move to 100, 100
        SWFDisplayItem_moveTo(square_display_item, 100.00, 100.0);

        // Set the desired compression level for the output (9 = maximum compression)
        Ming_setSWFCompression(9);

        // Save the swf movie file to disk
        SWFMovie_save(test_movie, "ming-example.swf");

		return;
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
			"Begin swf output\n");	
		fprintf(swfInfo->logFile,
			"Setting dimensions %10.4f by %10.4f\n",
			deviceInfo->right, deviceInfo->top);	
		fprintf(swfInfo->logFile,
			"Setting background %3d, %3d, %3d\n",
			R_RED(deviceInfo->startfill), 
			R_GREEN(deviceInfo->startfill), 
			R_BLUE(deviceInfo->startfill));
	}

	// Set the background color for the movie
	SWFMovie_setBackground(swfInfo->movie, 
		R_RED(deviceInfo->startfill), 
		R_GREEN(deviceInfo->startfill), 
		R_BLUE(deviceInfo->startfill));
		
	SWFMovie_setDimension(swfInfo->movie, deviceInfo->right, deviceInfo->top);

	// Set the frame rate for the movie to 12 frames per second
	SWFMovie_setRate(swfInfo->movie, 2.0);

	// Set the total number of frames in the movie to 120
	SWFMovie_setNumberOfFrames(swfInfo->movie, 1);

	return TRUE;

}

static void SWF_Close( pDevDesc deviceInfo){

	/* Shortcut pointers to variables of interest. */
	swfDevDesc *swfInfo = (swfDevDesc *) deviceInfo->deviceSpecific;
	
	//If there is an open deug log, close it
	if( swfInfo->debug == TRUE )
		fclose(swfInfo->logFile);
	
	// Set the desired compression level for the output (9 = maximum compression)
	Ming_setSWFCompression(1);
	
	// Save the swf movie file to disk
    SWFMovie_save(swfInfo->movie, swfInfo->outFileName);

	/* Destroy the swfInfo structure. */
	free(swfInfo);

}





/* Utility routines. */
static void SWF_NewPage( const pGEcontext plotParams, pDevDesc deviceInfo ){
	
	/* Shortcut pointers to variables of interest. */
	swfDevDesc *swfInfo = (swfDevDesc *) deviceInfo->deviceSpecific;
	
	/*
	 * Add a new frame to the current movie.
	 * This function adds a new frame to the current movie. All items added, removed
	 * manipulated effect this frame and probably following frames.
	 */
	SWFMovie_nextFrame( swfInfo->movie );
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

			ascent = 0;
			descent = 0;			
			width = 0;
}
static double SWF_StrWidth( const char *str,
		const pGEcontext plotParams, pDevDesc deviceInfo )
{
	return 0.0;
}

static void SWF_Text( double x, double y, const char *str,
		double rot, double hadj, const pGEcontext plotParams, pDevDesc deviceInfo)
{
			
			
}


/* SWF_line draws a line between the two points given. */
static void SWF_Line( double x1, double y1,
		double x2, double y2, const pGEcontext plotParams, pDevDesc deviceInfo )
{
	/* Shortcut pointers to variables of interest. */
	swfDevDesc *swfInfo = (swfDevDesc *) deviceInfo->deviceSpecific;
	
	//If debugging, print info to log file
	if(swfInfo->debug == TRUE){
		fprintf(swfInfo->logFile,
			"Drawing line from (%10.4f, %10.4f) to (%10.4f, %10.4f)\n",
			x1,y1,x2,y2);
		fprintf(swfInfo->logFile,
			"Setting line color %3d, %3d, %3d\n",
			R_RED(plotParams->col), 
			R_GREEN(plotParams->col), 
			R_BLUE(plotParams->col));
		fprintf(swfInfo->logFile,
			"Setting line weight %f\n",
			plotParams->lwd );
	}
	
	SWFShape line;
	line = newSWFShape();
	SWFDisplayItem line_display_item;
	
	SWFShape_movePenTo(line, x1, y1);
	
	//honor the other line styles here such as 
	// lty, lend, ljoin, ...
	SWFShape_setLine2(line,
		(unsigned short) plotParams->lwd,
		R_RED(plotParams->col), 
		R_GREEN(plotParams->col), 
		R_BLUE(plotParams->col),
		R_ALPHA(plotParams->col),
		SWF_LINESTYLE_CAP_SQUARE |
		SWF_LINESTYLE_JOIN_ROUND |
		SWF_LINESTYLE_FLAG_HINTING,
		plotParams->lmitre);
	
	SWFShape_drawLine(line, x2, y2);
	
	SWFMovie_add(swfInfo->movie, (SWFBlock) line);
	
}
		
static void SWF_Circle( double x, double y, double r,
		const pGEcontext plotParams, pDevDesc deviceInfo ){
	
	/* Shortcut pointers to variables of interest. */
	swfDevDesc *swfInfo = (swfDevDesc *) deviceInfo->deviceSpecific;
	
	if( swfInfo->debug == TRUE )
		fprintf(swfInfo->logFile,
			"Drawing Circle at x = %f, y = %f, r = %f\n",
			x,y,r);
	
	SWFShape circle;
	circle = newSWFShape();
	
	SWFShape_movePenTo(circle, x, y);
	
	SWFShape_drawCircle(circle, r);
	
	SWFMovie_add(swfInfo->movie, (SWFBlock) circle);
			
}
		
static void SWF_Rectangle( double x0, double y0, 
		double x1, double y1, const pGEcontext plotParams, pDevDesc deviceInfo ){}
		
static void SWF_Polyline( int n, double *x, double *y,
		pGEcontext plotParams, pDevDesc deviceInfo )
{
	
	/* Shortcut pointers to variables of interest. */
	swfDevDesc *swfInfo = (swfDevDesc *) deviceInfo->deviceSpecific;	
	
	SWFShape line;
	line = newSWFShape();

	SWFShape_movePenTo(line, x[0], y[0]);

	//honor the other line styles here such as 
	// lty, lend, ljoin, ...
	SWFShape_setLine2(line,
		plotParams->lwd,
		R_RED(plotParams->col), 
		R_GREEN(plotParams->col), 
		R_BLUE(plotParams->col),
		R_TRANSPARENT(plotParams->col),
		SWF_LINESTYLE_CAP_SQUARE |
		SWF_LINESTYLE_JOIN_ROUND |
		SWF_LINESTYLE_FLAG_HINTING,
		plotParams->lmitre);
	
	/* Print coordinates for the middle segments of the line. */
	int i;
	for ( i = 1; i < n; i++ ){
		SWFShape_drawLine(line, x[i], y[i]);	
	}
	
	SWFMovie_add(swfInfo->movie, (SWFBlock) line);

}
		
static void SWF_Polygon( int n, double *x, double *y,
		pGEcontext plotParams, pDevDesc deviceInfo ){}

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