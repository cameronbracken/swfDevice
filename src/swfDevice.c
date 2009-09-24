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

#include "swfDevice.h"

int firstTry(void)
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
        SWFMovie_setNumberOfFrames(test_movie, 120);

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

        return EXIT_SUCCESS;
}
