#define BOX_HEIGHT 200
#define BOX_WIDTH 300

#include <stdio.h>
#include <stdlib.h>
#include <ming.h>


int main(void)
{
        // General variables
        SWFDisplayItem          buttons_display_item;
        int                     i;
        SWFDisplayItem          mc_display_item;
        SWFMovieClip            movie_clip;
        SWFDisplayItem          shape_display_item;
        SWFShape                shape_object;
        SWFMovie                my_movie;
        SWFAction               my_movie_action;

        // Fill styles we create
        SWFFillStyle            dark_blue_fill;
        SWFFillStyle            light_blue_fill;
        SWFFillStyle            green_fill;

        // Variables used for the play button
        SWFAction               play_action;
        SWFButton               play_button;
        SWFButtonRecord         play_record_down;
        SWFButtonRecord         play_record_over;
        SWFButtonRecord         play_record_up;
        SWFShape                play_shape_down;
        SWFShape                play_shape_over;
        SWFShape                play_shape_up;

        // Variables used for the stop button
        SWFAction               stop_action;
        SWFButton               stop_button;
        SWFButtonRecord         stop_record_down;
        SWFButtonRecord         stop_record_over;
        SWFButtonRecord         stop_record_up;
        SWFShape                stop_shape_down;
        SWFShape                stop_shape_over;
        SWFShape                stop_shape_up;


        // Initialise the movie structure in memory
        Ming_init();
        my_movie = newSWFMovieWithVersion(7);

        // Set the desired compression level for the output (9 = maximum compression)
        Ming_setSWFCompression(9);

        // Adjust the dimensions of the movie
        SWFMovie_setDimension(my_movie, 800, 600);

        // Set the frame rate for the movie to 24 frames per second
        SWFMovie_setRate(my_movie, 24.0);

        // Ensure the movie starts out in the "stopped" state
        my_movie_action = newSWFAction("_root.stop();");
        SWFMovie_add(my_movie, (SWFBlock) my_movie_action);

        // Create the fill styles we'll be using
        light_blue_fill = newSWFSolidFillStyle(0x00, 0x00, 0xf0, 0xff);
        dark_blue_fill = newSWFSolidFillStyle(0x00, 0x00, 0x90, 0xff);
        green_fill = newSWFSolidFillStyle(0x00, 0xcc, 0x00, 0xff);

        // *** Create the Play button ***

        // Create a shape to be used in the play button for its "UP" state
        play_shape_up = newSWFShape();
        SWFShape_setRightFillStyle(play_shape_up, dark_blue_fill);  // Use the dark blue fill
        SWFShape_setLine(play_shape_up, 1, 0x00, 0x00, 0x00, 0xff);
        SWFShape_movePenTo(play_shape_up, 220.0, 500.0);
        SWFShape_drawLine(play_shape_up, 25, 25);
        SWFShape_drawLine(play_shape_up, -25, 25);
        SWFShape_drawLine(play_shape_up, 0, -50);

        // Create a shape to be used in the play button for its "MOUSE OVER" state
        play_shape_over = newSWFShape();
        SWFShape_setRightFillStyle(play_shape_over, light_blue_fill);  // Use the light blue fill
        SWFShape_setLine(play_shape_over, 1, 0x00, 0x00, 0x00, 0xff);
        SWFShape_movePenTo(play_shape_over, 220.0, 500.0);
        SWFShape_drawLine(play_shape_over, 25, 25);
        SWFShape_drawLine(play_shape_over, -25, 25);
        SWFShape_drawLine(play_shape_over, 0, -50);

        // Create a shape to be used in the play button for its "DOWN" state
        play_shape_down = newSWFShape();
        SWFShape_setRightFillStyle(play_shape_down, green_fill);  // Use the green fill
        SWFShape_setLine(play_shape_down, 1, 0x00, 0x00, 0x00, 0xff);
        SWFShape_movePenTo(play_shape_down, 220.0, 500.0);
        SWFShape_drawLine(play_shape_down, 25, 25);
        SWFShape_drawLine(play_shape_down, -25, 25);
        SWFShape_drawLine(play_shape_down, 0, -50);

        // Create an empty button object we can use
        play_button = newSWFButton();

        // Add the shapes to the button for its various states
        play_record_up = SWFButton_addCharacter(play_button, (SWFCharacter) play_shape_up, SWFBUTTON_UP|SWFBUTTON_HIT);
        play_record_over = SWFButton_addCharacter(play_button, (SWFCharacter) play_shape_over, SWFBUTTON_OVER);
        play_record_down = SWFButton_addCharacter(play_button, (SWFCharacter) play_shape_down, SWFBUTTON_DOWN);

        // Add the Play action to the play button 
        play_action = newSWFAction("_root.play();");
        SWFButton_addAction(play_button, play_action, SWFBUTTON_MOUSEUP);

        // *** Create the Stop button ***

        // Create a shape to be used in the stop button for its "UP" state
        stop_shape_up = newSWFShape();
        SWFShape_setRightFillStyle(stop_shape_up, dark_blue_fill);  // Use the dark blue fill
        SWFShape_setLine(stop_shape_up, 1, 0x00, 0x00, 0x00, 0xff);
        SWFShape_movePenTo(stop_shape_up, 150.0, 500.0);
        SWFShape_drawLine(stop_shape_up, 50, 0);
        SWFShape_drawLine(stop_shape_up, 0, 50);
        SWFShape_drawLine(stop_shape_up, -50, 0);
        SWFShape_drawLine(stop_shape_up, 0, -50);

        // Create a shape to be used in the stop button for its "MOUSE OVER" state
        stop_shape_over = newSWFShape();
        SWFShape_setRightFillStyle(stop_shape_over, light_blue_fill);  // Use the light blue fill
        SWFShape_setLine(stop_shape_over, 1, 0x00, 0x00, 0x00, 0xff);
        SWFShape_movePenTo(stop_shape_over, 150.0, 500.0);
        SWFShape_drawLine(stop_shape_over, 50, 0);
        SWFShape_drawLine(stop_shape_over, 0, 50);
        SWFShape_drawLine(stop_shape_over, -50, 0);
        SWFShape_drawLine(stop_shape_over, 0, -50);

        // Create a shape to be used in the stop button for its "DOWN" state
        stop_shape_down = newSWFShape();
        SWFShape_setRightFillStyle(stop_shape_down, green_fill);  // Use the green fill
        SWFShape_setLine(stop_shape_down, 1, 0x00, 0x00, 0x00, 0xff);
        SWFShape_movePenTo(stop_shape_down, 150.0, 500.0);
        SWFShape_drawLine(stop_shape_down, 50, 0);
        SWFShape_drawLine(stop_shape_down, 0, 50);
        SWFShape_drawLine(stop_shape_down, -50, 0);
        SWFShape_drawLine(stop_shape_down, 0, -50);

        // Create an empty button object we can use
        stop_button = newSWFButton();

        // Add the shapes to the button for its various states
        stop_record_up = SWFButton_addCharacter(stop_button, (SWFCharacter) stop_shape_up, SWFBUTTON_UP|SWFBUTTON_HIT);
        stop_record_over = SWFButton_addCharacter(stop_button, (SWFCharacter) stop_shape_over, SWFBUTTON_OVER);
        stop_record_down = SWFButton_addCharacter(stop_button, (SWFCharacter) stop_shape_down, SWFBUTTON_DOWN);

        // Add the Stop action to the stop button
        stop_action = newSWFAction("_root.stop();");
        SWFButton_addAction(stop_button, stop_action, SWFBUTTON_MOUSEUP);

        // *** Create the movie clip container for the buttons ***

        // Embed the buttons in a movie clip
        movie_clip = newSWFMovieClip();
        mc_display_item = SWFMovieClip_add(movie_clip, (SWFBlock) play_button);
        mc_display_item = SWFMovieClip_add(movie_clip, (SWFBlock) stop_button);

        // Advance the movie clip one frame, else it doesn't get displayed
        SWFMovieClip_nextFrame(movie_clip);

        // Add the movie clip to the main movie
        buttons_display_item = SWFMovie_add(my_movie, movie_clip);

        // Set the movie clip to be shown higher in the display stack than the main movie
        SWFDisplayItem_setDepth(buttons_display_item, 100);

        // ***** Create the "main movie" (a box) here *****

        // Create the shape object we want
        shape_object = newSWFShape();
        SWFShape_setLine(shape_object, 1, 0x00, 0x00, 0x00, 0xff);
        SWFShape_setRightFillStyle(shape_object, light_blue_fill);
        SWFShape_drawLine(shape_object, BOX_WIDTH, 0.0);
        SWFShape_drawLine(shape_object, 0.0, BOX_HEIGHT);
        SWFShape_drawLine(shape_object, -(BOX_WIDTH), 0.0);
        SWFShape_drawLine(shape_object, 0.0, -(BOX_HEIGHT));

        // Add the shape object to the movie
        shape_display_item = SWFMovie_add(my_movie, (SWFBlock) shape_object);

        // Set the display depth for the image
        SWFDisplayItem_setDepth(shape_display_item, 10);

        // Move to 100, 100
        SWFDisplayItem_moveTo(shape_display_item, 150.00, 100.0);

        // Progressively move the square down and to the right
        for (i = 0; i <= 250; i++)
        {
                SWFMovie_nextFrame(my_movie);
                SWFDisplayItem_move(shape_display_item, 2, 2);
        }

        // Save the swf movie file to disk
        SWFMovie_save(my_movie, "ming-test-buttons.swf");

        // Free the memory allocated in this function
        destroySWFMovie(my_movie);
        destroySWFShape(shape_object);
        destroySWFMovieClip(movie_clip);
        destroySWFButton(stop_button);
        destroySWFButton(play_button);
        destroySWFFillStyle(dark_blue_fill);
        destroySWFFillStyle(light_blue_fill);
        destroySWFFillStyle(green_fill);
        return EXIT_SUCCESS;
}
