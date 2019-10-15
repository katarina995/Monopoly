//
// Created by rtrk on 9.10.19..
//

#ifndef MONOPOLY_FIELD_H
#define MONOPOLY_FIELD_H

#include <string>
#include <utility>
#include <utility>

using namespace std;

class Field {
public:
    Field(string _NameOfField, int _priceOfField, float _rentOfField) : NameOfField(std::move(std::move(_NameOfField))), priceOfField(_priceOfField), rentOfField(_rentOfField){}

    ~Field() {
        delete this;
    }

    string getNameOfField();

    bool getisBought() const;

    int getIdOwner() const;

    void setIdOwner(int _idOwner);

    void setIsBought(bool _isBought);

    int getPriceOfField() const;

    float getRentOfField() const;

private:
    string NameOfField;
    int priceOfField;
    float rentOfField;
    int idOwner = 0;
    bool isBought = false;
};


#endif //MONOPOLY_FIELD_H
