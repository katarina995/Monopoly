//
// Created by rtrk on 9.10.19..
//

#include "Field.h"

string Field::getNameOfField() {
    return NameOfField;
}

bool Field::getisBought() const {
    return isBought;
}

int Field::getIdOwner() const {
    return idOwner;
}

void Field::setIdOwner(int _idOwner) {
    idOwner = _idOwner;
}

void Field::setIsBought(bool _isBought) {
    isBought = _isBought;
}

int Field::getPriceOfField() const {
    return priceOfField;
}

float Field::getRentOfField() const {
    return rentOfField;
}
