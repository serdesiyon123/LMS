//
// Created by PC on 11/23/2023.
//

#ifndef LMS_USER_H
#define LMS_USER_H
#include <iostream>

using namespace std;

class signUp {
public:
    void setName(string &name);
    void setUserName(string &username);
    void setEmail(string &email);
    void setPassword(string &password);
    void collectInfo();
    void assignId();


    string enterName = "Enter your name: ";
    string enterEmail = "Enter your email: ";
    string enterUserName = "Enter user name: ";
    string enterPassword = "Enter your password: ";
    string idenName = "Name:";
    string idenUser = "Username:";
    string idenPass = "Password:";
    string idenEmail = "E-mail:";
    string id = "ID:";
    string writeid =  to_string(ID);

    int getId() const;
    void setId(int& ID);


private:
    string name, username, email, password;
    int ID = 0000;
};


class Login{


public:
    const string &getUsername() const;
    const string &getPassword1() const;
    int signIn();
    void Return();
    static void rent();
    void takeId();



    string idenName = "Name:";
    string idenUser = "Username:";
    string idenPass = "Password:";
    string idenEmail = "E-mail:";
    string enterUserName = "Enter user name: ";
    string enterPassword = "Enter your password: ";
private:
    string username,password;

};

#endif //LMS_USER_H
