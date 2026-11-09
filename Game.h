#ifndef GAME_H
#define GAME_H

// A header (.h) for each class you expect to need, with a comment saying what the class is responsible for, its member variables, and declarations of its main member functions. No implementations yet.

class Game {
    private:
        int highestScore;
        int dropSpeed;
    public:
        Game();
        int getHighestScore();
        int getDropSpeed();
        bool setDropSpeed();
};

#endif