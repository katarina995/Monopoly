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
    StartGame(Player* _player,UserDB* _udb) : player(_player),udb(_udb){
        udb->addPlayer(player);
        cout<<"cao"<<endl;

    }
    vector<Player*> getWaitingPlayers();
    MonopolyLogic* startSession(vector<Player*> players);
private:
    Player *player;
    UserDB *udb;
    MonopolyLogic *ml;

};


#endif //MONOPOLY_STARTGAME_H
