//
// Created by rtrk on 9.10.19..
//

#include "Board.h"
#include <algorithm>

Board::Board(){
    initializeFields();
}

Board::~Board(){
    delete this;
}

void Board::initializeFields() {
    vector<Street*> streets = readingFromFile();
    for(auto street : streets){
        Field *field;
        field = new Field(street->name, street->price, street->rent);
        fields.push_back(field);
    }

}

vector<Street*> Board::readingFromFile() {
    vector<Street*> streets;
    string nameOfFile;
    cout << "Please enter file name" << endl;
    getline(cin,nameOfFile);
    cout << nameOfFile << endl;
    ifstream inputs;
    inputs.open(nameOfFile);
    if(inputs){
        for (string street; getline (inputs, street);)
        {
            auto const pos = street.find_last_of(' ');
            Street *str;
            str = new Street(street.substr(0, pos + 1), stoi(street.substr(pos + 1)),
                             stoi(street.substr(pos + 1)) * 0.25);
            cout << str->name << '\n';
            streets.push_back(str);
        }
        inputs.close();
    }
    else {
        cout << "Unable to open file\n";
        exit(1);
    }
    return streets;
}


vector<Field*> Board::getFields() {
    return fields;
}




