//
// Created by PC on 11/21/2023.
//

#ifndef LMS_BOOKS_H
#define LMS_BOOKS_H
#include <iostream>
#include <ctime>
#include <cstdio>

using namespace std;

class Books {

public:
void update();
int takenDate();
int returnDate();

    string & getName();
    string line;

    void setName(const string &name);
private:
    string name;


};


#endif //LMS_BOOKS_H
