#include <string>
#include <iostream>
using namespace std;

#ifndef RESERVAR_H
#define RESERVAR_H


class Reservar
{
    private:
        string vuelo; //CON LOS NUMEROS DEL INT YA SEA 1 O 0 PODEMOS VER SI ES TRUE O FALSE
        int n;

    public:
        Reservar();
        ~Reservar();

        string getVuelo();
        int getN();

        void setN(int _n);
        void setVuelo(string _vuelo);
        bool estaReservado(string a[5][5], int _n);
        int hacerReservacion(string a[5][5], int _n);
        int cancelarReservacion(int _n);
        void verReservacion(string a[5][5], int _n);
};

#endif // RESERVAR_H
