//
// Created by PC on 11/23/2023.
//

#include "user.h"
#include <fstream>
#include <vector>
#include <cmath>


void signUp::setName(string &name) {
this->name = name;
}

void signUp::setUserName(string &username) {
this->username = username;
}

void signUp::setEmail(string &email) {
this->email = email;
}

void signUp::setPassword(string &password) {
this->password = password;
}


void signUp::collectInfo() {

    cout << enterName ;
    cin >> name;
    cout << enterEmail;
    cin >> email;
    cout << enterUserName;
    cin >> username;
    cout << enterPassword;
    cin >> password;
assignId();
    ofstream writeFile;
    writeFile.open("logininfo.txt", ios::app);



    writeFile << '\n' << idenName << name << "\n";
    writeFile << idenUser << username << "\n";
    writeFile << idenPass << password << "\n";
    writeFile << idenEmail << email << "\n";
    writeFile << id << ID;


    cout << "You just created an account";

}



void signUp::setId(int &ID) {
this->ID = ID;
}

void signUp::assignId() {

    fstream readFile;
    readFile.open("logininfo.txt");


    string idPrefix = "ID:";
    string line,lastLine;

    while(getline(readFile,line)){
       lastLine = line;

    }

    if(lastLine.substr(0,3) == idPrefix) {

        ID = stoi(line.substr(3,5));
        ID++;

    }

    readFile.close();
}




const string &Login::getUsername() const {
    return username;
}

const string &Login::getPassword1() const {
    return password;
}


int Login::signIn() {
    cout << enterUserName;
    cin >> username;
    cout << enterPassword;
    cin >> password;

    ifstream readFile;
    readFile.open("logininfo.txt");
    string searchUser =static_cast<string>(idenUser + username);
    string searchPass =static_cast<string> (idenPass + password);
    string line;

    while(getline(readFile,line)){

        if (searchUser == line) {
            if (getline(readFile, line) && searchPass == line) {
                cout << "Logged in successfully\n";
                int x;
                cin >> x;

                cout << "1: Return book: " << "\n" << "2: Rent a book: ";

                if(x == 1 ){

                }
                else if(x ==2 ){

                   rent();
                }
            }
            else {
                cout << "Wrong Pass";
                break;
            }
        }

    }



    readFile.close();
}

void Login::Return() {

}

void Login::rent() {

    ifstream readStore;
    readStore.open("store.txt");
    string line;

    while(getline(readStore,line)){
        cout << line << "\n";
    }

    readStore.clear();
    readStore.seekg(0, std::ios::beg);

    string bookName;
    cout << "Enter book name you want to borrow: ";
    cin >> bookName;

    ofstream registerTakenBooks;
    registerTakenBooks.open("RentedBooks.txt", ios::app);

    while(getline(readStore,line)){
        if ((bookName == line)) {
            time_t currentTime = time(nullptr) ;
            time_t inaWeek = time(nullptr) + 604800;
          string  currentTimeString = ctime(&currentTime);
          string  inaWeekString = ctime(&inaWeek);
            cout << "You have taken the book at "<< currentTimeString.substr(0,10)<< "\n";
            cout << "You have to return it on "<< inaWeekString.substr(0,10);
registerTakenBooks << bookName <<"is taken by" << "\n";

        }

    }

}

void Login::takeId() {

    string line,secondLine;

    ifstream loginInfo;




}
