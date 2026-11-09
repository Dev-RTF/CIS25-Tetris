#ifndef PIECE_H
#define PIECE_H

#include <string>
using namespace std;

// This class handles data and functions regarding Tetris pieces.

class Piece {
    private:
        string type; // the type of piece
        char direction;
        int posX;
        int posY;

    public:
        Piece(); // I'll probably have main create these randomly.
        bool rotate(char key); // a key press will rotate the piece in a certain direction
        void place(); // Taking into account the current piece's position, this function force-places a piece. This function will probably use another function that is supposed to find out where is it legal for a piece to go, which is in some way connected to the piece natural falling
        int getPosX();
        int getPosY();
};

#endif