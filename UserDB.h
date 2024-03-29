//
// Created by rtrk on 14.10.19..
//

#ifndef MONOPOLY_USERDB_H
#define MONOPOLY_USERDB_H
#include "Account.h"
#include <vector>
#include <iostream>

using namespace std;

class UserDB {
public:
    UserDB();

    ~UserDB() = default;

    vector<Account> getPlayers();

    void addPlayer(const Account& pl);

    void setPlayers();

private:
    vector<Account> players;

    Account getRandomAccount();
};


#endif //MONOPOLY_USERDB_H
