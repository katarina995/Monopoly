//
// Created by rtrk on 15.10.19..
//

#ifndef MONOPOLY_ACCOUNT_H
#define MONOPOLY_ACCOUNT_H
#include <string>

using namespace std;

struct Account{
    Account(string name) : name_(name){
        id_ = rand()%20+1;
    }
    string name_;
    int id_;
};
#endif //MONOPOLY_ACCOUNT_H
