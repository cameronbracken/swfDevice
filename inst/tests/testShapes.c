
// We are writing to files so we need stdio.h
#include <stdio.h>
#include <stdlib.h>
// Access the libming funtions
#include <ming.h>

int main(void)
{
        // Create local variables
        SWFFillStyle fill_style;
        SWFShape square, line, circle;
        SWFDisplayItem squared, lined, circled;
        SWFMovie test_movie;

        // Initialise the movie structure in memory
        Ming_init();
        test_movie = newSWFMovieWithVersion(8);

        // Set the background color for the movie
        SWFMovie_setBackground(test_movie, 0xff, 0xff, 0xff);

        // Set the frame rate for the movie to 12 frames per second
        SWFMovie_setRate(test_movie, 12.0);

        // Set the total number of frames in the movie to 120
        SWFMovie_setNumberOfFrames(test_movie, 2);
		
		line = newSWFShape(); 
		SWFShape_setLine(line,1,0x05,0x00,0x00,0xff); 
		SWFShape_drawLine(line,440,0); 

		square = newSWFShape(); 
		SWFShape_setLine2(square,1,0x00,0x00,0x00,0xff,
			SWF_LINESTYLE_CAP_ROUND, 1); 
		fill_style = newSWFSolidFillStyle(0x00,0x00,0x00,0x80);
		SWFShape_setRightFillStyle(square,fill_style); 
		SWFShape_drawLine(square,50,0); 
		SWFShape_drawLine(square,0,50); 
		SWFShape_drawLine(square,-50,0); 
		SWFShape_drawLine(square,0,-50); 

		circle = newSWFShape(); 
		SWFShape_setLine(circle,1,0x00,0x00,0x00,0xff); 
		fill_style = newSWFSolidFillStyle(0x00,0x00,0x00,0x80);
		SWFShape_setRightFillStyle(circle,fill_style);

		double ra = 40.0; 
		double x = 40.0; 
		double y = 40.0; 

		double a = ra * 0.414213562; // = tan(22.5 deg) 
		double b = ra * 0.707106781; // = sqrt(2)/2 = sin(45 deg) 

		SWFShape_movePenTo(circle,x+ra, y); 

		SWFShape_drawCurveTo(circle,x+ra, y-a, x+b, y-b); 
		SWFShape_drawCurveTo(circle,x+a, y-ra, x, y-ra); 
		SWFShape_drawCurveTo(circle,x-a, y-ra, x-b, y-b); 
		SWFShape_drawCurveTo(circle,x-ra, y-a, x-ra, y); 
		SWFShape_drawCurveTo(circle,x-ra, y+a, x-b, y+b); 
		SWFShape_drawCurveTo(circle,x-a, y+ra, x, y+ra); 
		SWFShape_drawCurveTo(circle,x+a, y+ra, x+b, y+b); 
		SWFShape_drawCurveTo(circle,x+ra, y+a, x+ra, y); 

        // Add the square to the movie (at 0,0)
        lined = SWFMovie_add(test_movie, (SWFBlock) line);
		squared = SWFMovie_add(test_movie, (SWFBlock) square);
		circled = SWFMovie_add(test_movie, (SWFBlock) circle);

		SWFDisplayItem_moveTo(lined,10,10); 
		SWFDisplayItem_moveTo(squared,15,15); 
		SWFDisplayItem_moveTo(circled,190,0);

        // Set the desired compression level for the output (9 = maximum compression)
        Ming_setSWFCompression(9);

        // Save the swf movie file to disk
        SWFMovie_save(test_movie, "ming-test-shapes.swf");

		return EXIT_SUCCESS;
}