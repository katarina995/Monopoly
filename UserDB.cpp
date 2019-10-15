//
// Created by rtrk on 14.10.19..
//

#include "UserDB.h"

#include <utility>
#include <algorithm>

UserDB::UserDB()  {
}

vector<Account*> UserDB::getPlayers() {
    if( players.size() <= 4 && players.size() > 1 )
        return players;
    else if (players.size() <= 1){
        cout<< "There are no two players" << endl;
    }else{
        vector<Account*> result;
        Account *pl = players.at(players.size()-1);
        result.push_back(pl);
        players.pop_back();
        int n = 3;
        while (n>0){
            Account* player = getRandomAccount();
            result.push_back(player);
            players.erase(remove(players.begin(),players.end(),player),players.end());
            n--;
        }
        return result;
    }
}

void UserDB::addPlayer(Account *pl) {
    players.push_back(pl);

}

void UserDB::setPlayers() {
    Account *ac1 = new Account("prvi");
    Account *ac2 = new Account("drugi");
    Account *ac3 = new Account("treci");
    vector<Account*> pomocni = {ac1,ac2,ac3};
    UserDB::players = pomocni;
}

Account *UserDB::getRandomAccount() {
    return players.at(rand()%players.size()+1);
}

