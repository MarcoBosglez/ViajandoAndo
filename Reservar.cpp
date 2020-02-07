#include <iostream>
#include "Reservar.h"

Reservar::Reservar()
{
    //ctor
}

Reservar::~Reservar()
{
    //dtor
}

string Reservar::getVuelo()
{
    return vuelo;
}

void Reservar::setVuelo(string _vuelo)
{
    vuelo = _vuelo;
}

int Reservar::getN()
{
    return n;
}

void Reservar::setN(int _n)
{
    n = _n;
}


bool Reservar::estaReservado(string a[5][5], int _n) // IF ESTA RESERVADO ES TRUE ENTONCES PUEDES CANCELARLA O VER LA INFO
{
    bool valor3;
    int valor4 = hacerReservacion(a, n);

    if(valor4 == 1)
    {
        valor3 = true;
    }
    else if (valor4 == 0)
    {
        valor3 = false;
    }
    return valor3;
}

int Reservar::hacerReservacion(string a[5][5], int _n)  //PONER ESTE EN MAIN
{
    //1
    cout<<"Tu vuelo ha sido reservado.";
    //cout << "--------------------------------------------------------------------------\n";
    //cout<<" DESTINO        FECHA(MES)          PRECIO(MXN)          DURACION(HORAS) |";
    //cout << "\n--------------------------------------------------------------------------"<<endl;

    for(int i=0; i<4; i++)
    {
        //cout<<a[n][i]<<"\t \t";
    }
    return 1;
}

int Reservar::cancelarReservacion(int _n) // PONER ESTE EN MAIN
{
    _n = -1;
}

void Reservar::verReservacion(string a[5][5], int _n)
{
    for(int i=0; i<5; i++)
    {
        cout<<a[_n][i]<<"\t \t";
    }
}
