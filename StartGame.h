//
// Created by rtrk on 15.10.19..
//

#ifndef MONOPOLY_STARTGAME_H
#define MONOPOLY_STARTGAME_H

#include "Board.h"
#include "MonopolyLogic.h"
#include "Player.h"
#include "UserDB.h"
using namespace std;

class StartGame {
public:
    StartGame(Player* player,UserDB* udb) : player_(player),udb_(udb){
        udb->addPlayer(player_);
    }
    
    vector<Player*> getWaitingPlayers();
    
    MonopolyLogic* startSession(vector<Player*> players);
private:
    Player *player_;
    UserDB *udb_;
    MonopolyLogic *ml;

};


#endif //MONOPOLY_STARTGAME_H
