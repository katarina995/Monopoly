//
// Created by rtrk on 14.10.19..
//

#include "MonopolyLogic.h"

MonopolyLogic::MonopolyLogic(Board* b, vector<Player*> p) : board(b), players(std::move(p)){

}

Board* MonopolyLogic::getBoard(){
    return board;
}

vector<Player*> MonopolyLogic::getPlayers() {
    return players;
}

void MonopolyLogic::releasePlayer(Player *player) {
    cout << "Player " << player->getName() << " with id " << player->getId() << " didnt have enough money to pay rent!!!" << player->getName() << " lost. BYE-BYE!!" << endl;
    players.erase(remove(players.begin(),players.end(),player),players.end());

    releaseFields(player);
}

void MonopolyLogic::announceWinner() {
    cout << "Player " << players.at(0)->getName() << " with id " << players.at(0)->getId() << " WIN!" << endl;
}

void MonopolyLogic::releaseFields(Player *player) {
    for(auto field: board->getFields()){
        if(field->getIdOwner() == player->getId()){
            field->setIdOwner(0);
            field->setIsBought(false);
        }
    }
}