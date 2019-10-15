//
// Created by rtrk on 9.10.19..
//

#ifndef MONOPOLY_PLAYER_H
#define MONOPOLY_PLAYER_H

#include <string>
#include <utility>
#include <iostream>
#include <vector>
#include "Field.h"

using namespace std;

class Player {
public:
    Player(string name, int id);

    ~Player(){
        delete onStop;
    }

    int getId();

    string getName();

    float getAmountOfMoney();

    void setAmountOfMoney(float amountOfMoney);

    int getCurrentPos();

    void setCurrentPos(int currentPos);

    int onTurn();

    bool canPayRent(Field *onStop);

    string wannaBuy(Field *onStop);

    void buy();

    void payRent(vector<Player*> players,Field *onStop);

    void setOnStop(Field *onStop);

    Field *getOnStop() const;

private:
    Field* onStop;
    string name_;
    int id_;
    float amountOfMoney = 30000;
    int currentPos = -1;
    friend bool operator== (Player lhs, Player rhs);

};


#endif //MONOPOLY_PLAYER_H
