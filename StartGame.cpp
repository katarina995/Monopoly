//
// Created by rtrk on 15.10.19..
//

#include "StartGame.h"

vector<Player *> StartGame::getWaitingPlayers() {
    return udb->getPlayers();
}

MonopolyLogic *StartGame::startSession(vector<Player*> players) {
    Board *board = new Board();
    ml = new MonopolyLogic(board,players);
    return ml;
}


