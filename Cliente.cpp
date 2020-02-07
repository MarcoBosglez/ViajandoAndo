#include "Cliente.h"

Cliente::Cliente()
{
    cliente = "";
}

Cliente::~Cliente()
{
    //dtor
}

string Cliente::getCliente()
{
    return cliente;
}

void Cliente::setCliente(string _cliente)
{
    cliente = _cliente;
}

string Cliente::toString()
{
    string msg = "[";
    msg += "Cliente:";
    msg += cliente;
    msg += "\n";
    msg += "Usuario: ";
    msg += username3;
    msg += "\n";
    msg += "Contraseña: ";
    msg += password3;
    msg += "\n";
}
