//
// Created by rtrk on 9.10.19..
//

#include <algorithm>
#include "Player.h"

int Player::getId(){
    return id_;
}

string Player::getName(){
    return name_;
}

float Player::getAmountOfMoney() {
    return amountOfMoney;
}

void Player::setAmountOfMoney(float amountOfMoney) {
    Player::amountOfMoney = amountOfMoney;
}

int Player::getCurrentPos() {
    return currentPos;
}

void Player::setCurrentPos(int currentPos) {
    Player::currentPos = currentPos;
}

Player::Player(string name, int id) : name_(std::move(name)), id_(id) {
}

int Player::onTurn() {
    std::srand(time(nullptr));
    char character;
    cout << "Roll dices ... " << endl;
    cout << "Put any character for rolling dices .. " << endl;
    cin >> character;
    int rollDices = rand()%6 + rand()%6 + 2;
    cout << "Dices are rolled ... " << rollDices << endl;
    this->setCurrentPos((getCurrentPos() + rollDices) % 36 );
    return getCurrentPos();

}

bool Player::canPayRent(Field* onStop) {
    return amountOfMoney - onStop->getRentOfField() >= 0;
}

string Player::wannaBuy(Field *onStop) {
    this->setOnStop(onStop);
    return "Do you wanna buy " + onStop->getNameOfField() + " for " + to_string(onStop->getPriceOfField()) + " [y/n]?";
}

void Player::buy() {
    if(this->getAmountOfMoney() >= onStop->getPriceOfField()){
        onStop->setIdOwner(this->getId());
        this->setAmountOfMoney(this->getAmountOfMoney()-onStop->getPriceOfField());
        onStop->setIsBought(true);
    }
    else {
        cout << "HEY! You dont have enough money!" <<endl;
    }
}

void Player::payRent(vector<Player *> players, Field *onStop) {
    auto owner = find_if(players.begin(), players.end(), [onStop](auto pl){return pl->getId() == onStop->getIdOwner();});
    cout << "HEY! You must pay rent to " << (*owner)->getName() << endl;
    (*owner)->setAmountOfMoney((*owner)->getAmountOfMoney()+onStop->getRentOfField());
    cout << this->getName() << " successfully paid rent!" << endl;
}

bool operator==(Player lhs, Player rhs) {
    return lhs.getId() == rhs.getId();
}

void Player::setOnStop(Field *onStop) {
    Player::onStop = onStop;
}

Field *Player::getOnStop() const {
    return onStop;
}


