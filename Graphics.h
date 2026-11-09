#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <array>
#include <string>
using namespace std;

// A header (.h) for each class you expect to need, with a comment saying what the class is responsible for, its member variables, and declarations of its main member functions. No implementations yet.

class Graphics {
    private:
        // I haven't yet figured out how large I want the game board to be, so I'll just use v,w,x,y,z instead of actual numbers for now.
        array<array<char, v>, w> currentBoard;
        array<array<array<char, x>, y>, z> pieces; // array with all pieces containing a 2d array, chars formed in the shape of a piece
    public:

};

#endif