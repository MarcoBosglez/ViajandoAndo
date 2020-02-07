#ifndef CLIENTE_H
#define CLIENTE_H
#include "User.h"

class Cliente : public User  //  HERENCIA
{
    public:
        Cliente();
        virtual ~Cliente();


        string getCliente();
        void setCliente(string _cliente);
        string toString();

    protected:

    private:
        string cliente;
};

#endif // CLIENTE_H
