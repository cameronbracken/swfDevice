#include <stdio.h>
#include <stdlib.h>
#include <ming.h>

int main(void)
{
        // Create local variables
        int i;
        SWFDisplayItem image_display_item;
        SWFFont font_object;
        SWFMovie test_movie;
        SWFText text_object;


        // Initialise the movie structure in memory
        Ming_init();
        test_movie = newSWFMovieWithVersion(7);

        // Set the desired compression level for the output (9 = maximum compression)
        Ming_setSWFCompression(9);

        // Set the background color for the movie
        SWFMovie_setBackground(test_movie, 0x00, 0x00, 0x00);

        // Adjust the dimensions of the movie
        SWFMovie_setDimension(test_movie, 800, 600);

        // Set the frame rate for the movie to 24 frames per second
        SWFMovie_setRate(test_movie, 24.0);

        // Load a font from disk
        font_object = newSWFFont_fromFile("../fonts/ttf-bitstream-vera-1.10/Vera.ttf");
        if (NULL == font_object)
        {
                // Something went wrong, so exit
                printf("Unable to load font from file.\n");
                return EXIT_FAILURE;
        }

        // Create a new, empty text object
        text_object = newSWFText();

        // Tell the text object to use the font previously loaded
        SWFText_setFont(text_object, font_object);

        // Set the height of the text
        SWFText_setHeight(text_object, 18.0);

        // Set the color of the text
        SWFText_setColor(text_object, 0x00, 0x00, 0xff, 0xff);

        // Add a string to the text object
        SWFText_addString(text_object, "This is some example text", NULL);

        // Add the text object to the movie (at 0,0)
        image_display_item = SWFMovie_add(test_movie, (SWFBlock) text_object);

        // Move to 100, 100
        SWFDisplayItem_moveTo(image_display_item, 100.00, 100.0);

        // Progressively move the text down and to the right
        for (i = 0; i <= 250; i++)
        {
                SWFMovie_nextFrame(test_movie);
                SWFDisplayItem_move(image_display_item, 2, 2);
        }

        // Save the swf movie file to disk
        SWFMovie_save(test_movie, "ming-test-text.swf");

        // Free the swf movie in memory
        destroySWFMovie(test_movie);

        // Free the swf text object
        destroySWFText(text_object);

        return EXIT_SUCCESS;
}
