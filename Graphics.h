#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <array>
#include <string>
using namespace std;

// This class handles the game's graphics. So far, I'm expecting to use a 2D array since this is a terminal-based game.

class Graphics {
    private:
        array<array<string, 52>, 52> canvas;
        array<array<string, 50>, 50> board;

        // array<array<array<char, x>, y>, z> pieces; // array with all pieces containing a 2d array, chars formed in the shape of a piece
    public:
        // print out the current board
        Graphics();
        void updateCanvas();
        void drawCanvas();
        
};

#endif