#ifndef HAVE_SWFDEV_H

#define HAVE_SWFDEV_H 

/* Use default graphics engine function declarations. */
#define R_USE_PROTOTYPES 1

#include <R.h>
#include <Rinternals.h>
#include <R_ext/GraphicsEngine.h>
// Access the libming funtions
#include <ming.h>
// We are writing to files so we need stdio.h
#include <stdio.h>
#include <stdlib.h>

typedef struct{
	FILE *outputFile;
	char outFileName[128];
	Rboolean debug;
	SWFmovie movie;
	int nFrames;
} swfDevDesc;


/* Function Prototypes */

static Rboolean SWF_Setup(
		pDevDesc deviceInfo,
		const char *fileName,
		double width, double height,
		const char *bg, const char *fg);

double dim2dev( double length );

static Rboolean SWF_Open( pDevDesc deviceInfo );

/* Graphics Engine function hooks. Defined in GraphicsDevice.h . */

/* Utility routines. */
static void SWF_Close( pDevDesc deviceInfo );
static void SWF_NewPage( const pGEcontext plotParams, pDevDesc deviceInfo );
static void SWF_Clip( double x0, double x1,
		double y0, double y1, pDevDesc deviceInfo );
static void SWF_Size( double *left, double *right,
		double *bottom, double *top, pDevDesc deviceInfo);


/* Text routines. */
static void SWF_MetricInfo( int c, const pGEcontext plotParams,
		double *ascent, double *descent, double *width, pDevDesc deviceInfo );
static double SWF_StrWidth( const char *str,
		const pGEcontext plotParams, pDevDesc deviceInfo );
static void SWF_Text( double x, double y, const char *str,
		double rot, double hadj, const pGEcontext plotParams, pDevDesc deviceInfo);


/* Drawing routines. */
static void SWF_Line( double x1, double y1,
		double x2, double y2, const pGEcontext plotParams, pDevDesc deviceInfo );
static void SWF_Circle( double x, double y, double r,
		const pGEcontext plotParams, pDevDesc deviceInfo );
static void SWF_Rectangle( double x0, double y0, 
		double x1, double y1, const pGEcontext plotParams, pDevDesc deviceInfo );
static void SWF_Polyline( int n, double *x, double *y,
		pGEcontext plotParams, pDevDesc deviceInfo );
static void SWF_Polygon( int n, double *x, double *y,
		pGEcontext plotParams, pDevDesc deviceInfo );


#endif // End of Once Only header
