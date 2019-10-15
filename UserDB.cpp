//
// Created by rtrk on 14.10.19..
//

#include "UserDB.h"

#include <utility>
#include <algorithm>

UserDB::UserDB()  {
}

vector<Player*> UserDB::getPlayers() {
    if( players.size() <= 4 && players.size() > 1 )
        return players;
    else if (players.size() <= 1){
        cout << "There are no two players" << endl;

    }else{
        vector<Player*> result;
        Player *pl = players.at(players.size()-1);
        result.push_back(pl);
        players.pop_back();
        int n = 3;
        while (n>0){
            Player* player = players.at(rand()%players.size()+1);
            result.push_back(player);
            players.erase(remove(players.begin(),players.end(),player),players.end());
            n--;
        }
        return result;
    }
}

void UserDB::addPlayer(Player *pl) {
    players.push_back(pl);

}

void UserDB::setPlayers() {
    Player *pl1 = new Player("prvi");
    Player *pl2 = new Player("drugi");
    Player *pl3 = new Player( "treci");
    vector<Player*> pomocni;
    pomocni.push_back(pl1);
    pomocni.push_back(pl2);
    pomocni.push_back(pl3);
    UserDB::players = pomocni;
}

