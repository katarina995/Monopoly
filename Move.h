//
// Created by rtrk on 15.10.19..
//

#ifndef MONOPOLY_MOVE_H
#define MONOPOLY_MOVE_H

#include "Player.h"
#include "MonopolyLogic.h"

class Move {
public:
    Move() = default;

    ~Move(){
        delete player;
        delete ml;
    }

    string yourTurn();

    void setMl(MonopolyLogic *ml);

    void setPlayer(Player *player);

private:
    Player* player;
    MonopolyLogic *ml;
};


#endif //MONOPOLY_MOVE_H
