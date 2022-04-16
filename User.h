//
// Created by Tonyl on 4/15/2022.
//

#ifndef FINAL_MESSENGER_APP_USER_H
#define FINAL_MESSENGER_APP_USER_H

#include <string>

using namespace std;

class User {
public:

    User();
    //This is used to validate existing users
    User(string, string);
    //This is to validate if username has been taken
    User(string);

    //getters
    string get_username();
    string get_user_password();

    bool authenticate();
    bool check_unique();
    void get_user_status();

protected:
    string username;

    void set_username(string);
    void set_password(string);




private:
    string user_password;



};


#endif //FINAL_MESSENGER_APP_USER_H
