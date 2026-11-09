#ifndef PLAYER_H
#define PLAYER_H

// A header (.h) for each class you expect to need, with a comment saying what the class is responsible for, its member variables, and declarations of its main member functions. No implementations yet.

class Player {
    private:
        int score;
    public:
        Player();
        bool addPoints(int points);
        int getScore();
};

#endif