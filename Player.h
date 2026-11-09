#ifndef PLAYER_H
#define PLAYER_H

// This class handles a player's score. So far, the only functionality here is adding to it.

class Player {
    private:
        int score;
    public:
        Player();
        bool addPoints(int points);
        int getScore();
};

#endif