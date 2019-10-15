//
// Created by rtrk on 14.10.19..
//

#ifndef MONOPOLY_MONOPOLYLOGIC_H
#define MONOPOLY_MONOPOLYLOGIC_H
#include <utility>
#include <algorithm>

#include "Board.h"
#include "Player.h"

class MonopolyLogic {
public:
    MonopolyLogic(Board* b,vector<Player*> p);

    Board* getBoard();

    vector<Player*> getPlayers();

    void releasePlayer(Player *player);

    void releaseFields(Player *player);

    void announceWinner();

private:
    Board* board;
    vector<Player*> players;

};


#endif //MONOPOLY_MONOPOLYLOGIC_H
