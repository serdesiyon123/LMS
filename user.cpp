//
// Created by PC on 11/23/2023.
//

#include "user.h"
#include <fstream>
#include <vector>

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

void signUp::assignId() {

    ifstream readFile;
    readFile.open("logininfo.txt");



    string line;
    vector<string> copy;
    while(getline(readFile,line)){
        copy.push_back(line);

    }


int last = copy.size();
string final = copy[last - 1];



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
                return 0;
            }
            else {
                cout << "Wrong Pass";
                break;
            }
        }

    }







    readFile.close();
}
