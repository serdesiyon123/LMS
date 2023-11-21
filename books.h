//
// Created by PC on 11/21/2023.
//

#ifndef LMS_BOOKS_H
#define LMS_BOOKS_H
#include <iostream>
#include <ctime>


using namespace std;

class Books {

public:
void add();
void update();
void remove();

    string & getName();
    string line;
    const string &getTakenDate() const;
    const string &getReturnDate() const;
    void setTakenDate(const string &takenDate);
    void setReturnDate(const string &returnDate);
    void setName(const string &name);
private:
    string name;
    string takenDate;
    string returnDate;

};


#endif //LMS_BOOKS_H
