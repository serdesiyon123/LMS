//
// Created by PC on 11/21/2023.
//

#include "books.h"
#include <fstream>
#include <cstdio>
#include <chrono>
#include <ctime>


void Books::setName(const string &name) {

    Books::name = name;
}


string & Books::getName() {
    ifstream store;
    store.open("store.txt");
    ifstream rented;
    rented.open("rented.txt");

    if(store.is_open()){
        while(getline(store,line)){
            if(name == line){
                update();
              cout << "The Book have to be returned on ";  returnDate();
                return name;
            }
        }
    } else {
        cout << "store.txt file is not open";
    }

    if(rented.is_open()){
        while(getline(rented,line)){
            if(name == line){
                cout << "Rented for now it will be return on ";
                returnDate();
                return name;

            }
        }
    } else {
        cout << "rented.txt file is not open";
    }

    return name;
}

void Books::update() {
    ifstream move;
    ofstream temp;
    ofstream rented;

    string line;
    move.open("store.txt");
    temp.open("temp.txt");
    rented.open("rented.txt", ios::app);

    while(getline(move,line)){
        if(name != line){
            temp << line << '\n';
        }
        if(name == line){
            rented << line << '\n';
        }
    }

    move.close();
    temp.close();
    rented.close();
    ::remove("store.txt");
    rename("temp.txt","store.txt");
}

int Books::takenDate() {

    auto today = time(0);
    string Today = ctime(&today);
    string strToday = Today.substr(0,10);

    return 0;
}

int Books::returnDate() {

auto weekLater = time(0) + 604800;
string strDate =  ctime(&weekLater);

string date = strDate.substr(0,10);
cout <<date;

    return 0;
}




