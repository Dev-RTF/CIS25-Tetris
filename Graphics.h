#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <array>
#include <string>
using namespace std;

// This class handles the game's graphics. So far, I'm expecting to use a 2D array since this is a terminal-based game.

class Graphics {
    private:
        // I haven't yet figured out how large I want the game board to be, so I'll just use v,w,x,y,z instead of actual numbers for now.
        array<array<char, v>, w> currentBoard;
        array<array<array<char, x>, y>, z> pieces; // array with all pieces containing a 2d array, chars formed in the shape of a piece
    public:
        // print out the current board
        void drawBoard();
};

#endif