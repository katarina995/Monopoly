//
// Created by rtrk on 15.10.19..
//

#include "Move.h"

string Move::yourTurn() {
    cout << "Player " << player->getName() << " with id " << player->getId() << " is on turn" << endl;
    int position = player->onTurn();
    Field *onStop = ml->getBoard()->getFields().at(position);
    cout << player->getName() << " stopped on " << onStop->getNameOfField() << " " << onStop->getIdOwner() << endl;
    if (onStop->getisBought()) {
        if (onStop->getIdOwner() != player->getId()) {
            if (player->canPayRent(onStop))
                player->payRent(ml->getPlayers(), onStop);
            else
                ml->releasePlayer(player);
        }
    } else {
        return player->wannaBuy(onStop);
    }
    return "";
}

void Move::setMl(MonopolyLogic *ml) {
    Move::ml = ml;
}

void Move::setPlayer(Player *player) {
    Move::player = player;
}


