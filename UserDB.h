//
// Created by rtrk on 14.10.19..
//

#ifndef MONOPOLY_USERDB_H
#define MONOPOLY_USERDB_H
#include "Player.h"
#include <vector>

using namespace std;

class UserDB {
public:
    UserDB();

    vector<Player*> getPlayers();

    void addPlayer(Player *pl);

    void setPlayers();

private:
    vector<Player*> players;
};


#endif //MONOPOLY_USERDB_H
