#include <iostream>
#include "StartGame.h"
#include "Player.h"
#include "UserDB.h"
#include "Move.h"
using namespace std;

int main() {
    cout << "Monopoly getting started..." << endl;
    cout << "Initializing board .. " << endl;
    UserDB *udb = new UserDB();
    udb->setPlayers();
    cout << "Enter your name..." << endl;
    string name;
    getline(cin,name);
    Player* pl = new Player(name);
    StartGame sg(pl,udb);
    vector<Player*> players = sg.getWaitingPlayers();
    MonopolyLogic* ml = sg.startSession(players);
    Move* mv = new Move();
    mv->setMl(ml);
    while(1){
        for(auto player: ml->getPlayers()){
            mv->setPlayer(player);
            string message = mv->yourTurn();
            if(message != ""){
                cout << message << endl;
                char answer;
                cin >> answer;
                if(answer == 'y')
                    player->buy();
            }

        }
        if(ml->getPlayers().size() == 1)
            break;
    }

    ml->announceWinner();

    return 0;
}