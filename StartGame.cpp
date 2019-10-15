//
// Created by rtrk on 15.10.19..
//

#include "StartGame.h"

vector<Player *> StartGame::getWaitingPlayers() {
    vector<Player*> result;
    vector<Account> accounts = udb_->getPlayers();
    for(auto acc: accounts){
        Player* player = new Player(acc.name_,acc.id_);
        result.push_back(player);
    }
    return result;
}

MonopolyLogic *StartGame::startSession(vector<Player*> players) {
    Board *board = new Board();
    ml = new MonopolyLogic(board,players);
    return ml;
}


