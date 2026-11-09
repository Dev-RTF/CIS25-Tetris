#ifndef GAME_H
#define GAME_H

// This class handles the game's settings and general data about it.

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