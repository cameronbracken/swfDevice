#ifndef HAVE_SWFDEV_H

#define HAVE_SWFDEV_H 

/* Use default graphics engine function declarations. */
#define R_USE_PROTOTYPES 1

#include <R.h>
#include <Rdefines.h>
#include <Rinternals.h>
#include <R_ext/GraphicsEngine.h>

/* Linked list containing list of displayed items from each frame*/
typedef struct display_list DisplayList;

struct display_list { 
	SWFDisplayItem d;
	DisplayList *next;
};

typedef struct swfDevDesc{
	FILE *logFile;
	char outFileName[512];
	char logFileName[512];
	Rboolean debug;
	SWFMovie m;
	SWFFont ss;     // sans serif 
	SWFFont ss_b;   // sans serif bold
	SWFFont ss_i;   // sans serif italic
	SWFFont ss_b_i; // sans serif bold italic
	SWFFont mo;      // mono
	SWFFont mo_b;    // mono bold
	SWFFont mo_i;    // mono italic
	SWFFont mo_b_i;  // mono bold italic
	SWFFont se;      // serif
	SWFFont se_b;    // serif bold
	SWFFont se_i;    // serif itlic
	SWFFont se_b_i;    // serif bold italic
	int nFrames;
	double frameRate;
	//pointer to head of linked list of display items on current frame
	DisplayList *displayListHead; 
	//pointer to tail of linked list of display items on current frame
	DisplayList *displayListTail;
} swfDevDesc;

/* Function Prototypes */

static Rboolean SWF_Setup( pDevDesc deviceInfo, const char *fileName,
	double width, double height, const char *bg, const char *fg, 
	double frameRate, SEXP fontFileList, const char *logFileName );

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

/* Dummy routines. */
static void SWF_Activate( pDevDesc deviceInfo );
static void SWF_Deactivate( pDevDesc deviceInfo );
static Rboolean SWF_Locator( double *x, double *y, pDevDesc deviceInfo );
static void SWF_Mode( int mode, pDevDesc deviceInfo );

/*Custom functions*/
static void SWF_SetLineStyle(SWFShape shape, const pGEcontext plotParams, swfDevDesc *swfInfo );
static void SWF_SetFill(SWFShape shape, const pGEcontext plotParams, swfDevDesc *swfInfo );
static void SWF_LoadFont(const char *fontFile);
static void SWF_Init();
static void addToDisplayList(SWFDisplayItem item);
static R_INLINE SEXP getListElement(SEXP list, char *nm);
static SWFFont selectFont(int fontface, const char *fontfamily, swfDevDesc *swfInfo);
static void SWF_drawStyledLineTo(SWFShape line, double x_end, double y_end, int lty);

#endif // End of Once Only header
