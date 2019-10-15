//
// Created by rtrk on 10.10.19..
//

#ifndef MONOPOLY_STREET_H
#define MONOPOLY_STREET_H

#include <string>

struct Street{

    Street(string _name, int _price, float _rent): name(_name), price(_price), rent(_rent) {}
    string name;
    int price;
    float rent;
};
#endif //MONOPOLY_STREET_H
