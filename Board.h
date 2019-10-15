//
// Created by rtrk on 9.10.19..
//

#ifndef MONOPOLY_BOARD_H
#define MONOPOLY_BOARD_H

#include <vector>
#include <fstream>
#include <string>
#include <iostream>
#include "Field.h"
#include "Player.h"
#include "Street.h"

using namespace std;

class Board {
public:
    Board();

     ~Board();

    vector<Field*> getFields();

private:
    vector<Field*> fields;

    void initializeFields();

    vector<Street*> readingFromFile();

};


#endif //MONOPOLY_BOARD_H
