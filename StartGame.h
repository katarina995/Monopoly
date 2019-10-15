//
// Created by rtrk on 15.10.19..
//

#ifndef MONOPOLY_STARTGAME_H
#define MONOPOLY_STARTGAME_H

#include "Board.h"
#include "Account.h"
#include "MonopolyLogic.h"
#include "Player.h"
#include "UserDB.h"
using namespace std;

class StartGame {
public:
    StartGame(Account* player,UserDB* udb) : player_(player),udb_(udb){
        udb_->addPlayer(player);
    }

    ~StartGame(){
        delete player_;
        delete udb_;
        delete ml;
    }

    vector<Player*> getWaitingPlayers();

    MonopolyLogic* startSession(vector<Player*> players);
private:
    Account *player_;
    UserDB *udb_;
    MonopolyLogic *ml;

};


#endif //MONOPOLY_STARTGAME_H
