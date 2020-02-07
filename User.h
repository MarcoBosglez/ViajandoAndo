#include <string>
#include <iostream>
using namespace std;

#ifndef USER_H
#define USER_H

class User
{
    private:
        //string username3, password3;
    public:
        User();
        ~User();
        string username3, password3;
        string getUsername3();
        string getPassword3();

        void setUsername3(string _username3);
        void setPassword3(string _password3);

        string  iniciarSesion(string _username, string _password, string u[3][4]);

};

#endif // USER_H
