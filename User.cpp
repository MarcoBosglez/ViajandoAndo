#include <iostream>
#include "User.h"

User::User()
{
    username3 = "";
    password3 = "";
}

User::~User()
{
    //dtor
}

string User::getUsername3()
{
    return username3;
}

string User::getPassword3()
{
    return password3;
}

void User::setUsername3(string _username3)
{
    username3 = _username3;
}

void User::setPassword3(string _password3)
{
    password3 = _password3;
}

string User::iniciarSesion(string _username3, string _password3, string u[3][4])
{
    string username2;
    string password2;

    cout << "------------------\n";
    cout << " Iniciando Sesion\n";
    cout << "------------------\n" << endl;
    cout << "Escribe tu nombre de usuario: ";
    cin >> username2;

    if((username2 == u[0][0]) || (username2 == u[1][0]))
    {
        cout << "Escribe tu password: ";
        cin >> password2;

        if((password2 == u[0][1]) || (password2 == u[1][1]))
        {
            cout << "\nInicio de sesion exitoso!"<<endl;
        }
