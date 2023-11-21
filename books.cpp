//
// Created by PC on 11/21/2023.
//

#include "books.h"
#include <fstream>
#include <cstring>

const string &Books::getTakenDate() const {
    return takenDate;
}

void Books::setTakenDate(const string &takenDate) {
    Books::takenDate = takenDate;
}

const string &Books::getReturnDate() const {
    return returnDate;
}

void Books::setReturnDate(const string &returnDate) {
    Books::returnDate = returnDate;
}

void Books::setName(const string &name) {

    Books::name = name;
}

string & Books::getName() {


    ifstream store;

    store.open("store.txt");

    if(store.is_open()){
        while(getline(store,line)){
            if(name == line){
        cout << "got it";
//        add();
        remove();
            }
            else{
                ifstream rented;
                rented.open("rented.txt");
                if(rented.is_open()){
                    while(getline(rented,line)){
                        if(name == line){
                            cout << "rented";
                        }
                        break;
                    }
                }

            }
        }


    }
    else{
cout << "file is not open";
    }

    return name;
}



void Books::add() {
    ifstream add;
    ofstream writeto;

    add.open("store.txt");
    writeto.open("rented.txt");

    while(getline(add,line)){
        if(name == line){
            writeto << line << '\n';
        }
    }

}

void Books::update() {
}

void Books::remove() {
  ifstream move;
  ofstream temp;

  move.open("store.txt");
  temp.open("temp.txt");

 while(getline(move,line)){

     if(name != line){

         temp << line << '\n';
     }
 }
move.close();
 temp.close();


 ::remove("store.txt");
 rename("temp.txt","store.txt");

}





