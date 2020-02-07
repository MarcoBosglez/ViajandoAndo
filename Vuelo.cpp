#include "Vuelo.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

Vuelo::Vuelo()
{
    nombre = "";
    fecha = "";
    busca = "";
    precio = "";
    duracion = "";
    numero = 0;
    asientos = 0;
    disponibilidad = false;
}

Vuelo::~Vuelo()
{
    //dtor
}

string Vuelo::getNombre()
{
    return nombre;
}

string Vuelo::getFecha()
{
    return fecha;
}

string Vuelo::getBusca()
{
    return busca;
}

string Vuelo::getPrecio()
{
    return precio;
}

string Vuelo::getDuracion()
{
    return duracion;
}

int Vuelo::getNumero()
{
    return numero;
}

int Vuelo::getAsientos()
{
    return asientos;
}

bool Vuelo::getDisponibilidad()
{
    return disponibilidad;
}

void Vuelo::setNombre(string _nombre)
{
    nombre = _nombre;
}

void Vuelo::setFecha(string _fecha) //FECHA ES EL MES
{
    fecha = _fecha;
}

void Vuelo::setBusca(string _busca)
{
    busca = _busca;
}

void Vuelo::setPrecio(string  _precio)
{
    precio = _precio;
}

void Vuelo::setDuracion(string  _duracion)
{
    duracion = _duracion;
}


void Vuelo::setNumero(int _numero) //NUMERO DE VUELO
{
    numero = _numero;
}

void Vuelo::setAsientos(int _asientos)
{
    asientos = _asientos;
}

bool Vuelo::setDisponibilidad(bool _disponibilidad)
{
    disponibilidad = _disponibilidad;
}

int Vuelo::buscarVuelo(string a[5][5], string _busca)
{
    for(int i=0 ; i<5;i++)
    {
        for(int j=0; j<5 ; j++)
        {
            if (a[i][j] == _busca) {
                return i;
            }
        }
    }
}

void Vuelo::mostrarVuelo(string a[5][5], string _busca)
{
    int found = buscarVuelo(a, _busca);
    cout<<"Busqueda en *VIAJANDO ANDO* de: '"<<_busca<<"': "<<endl;;

    cout << "--------------------------------------------------------------------------\n";
    cout<<" DESTINO        FECHA(MES)          PRECIO(MXN)          DURACION(HORAS) |";
    cout << "\n--------------------------------------------------------------------------"<<endl;

    for(int c=0; c<5; c++)
    {
     cout<<a[found][c]<<" \t \t";
    }
}
