#ifndef PIECE_H
#define PIECE_H

#include <string>
using namespace std;

// A header (.h) for each class you expect to need, with a comment saying what the class is responsible for, its member variables, and declarations of its main member functions. No implementations yet.

class Piece {
    private:
        string type;
        char direction;
    public:
        Piece();
        bool rotate();
        void place();
};

#endif