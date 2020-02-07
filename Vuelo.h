#include <string>
#include <iostream>
using namespace std;

#ifndef VUELO_H
#define VUELO_H

class Vuelo
{
    private:
        string nombre, fecha, busca, precio, duracion;
        int numero, asientos;
        bool disponibilidad;

    public:
        Vuelo();
        ~Vuelo();

        string getNombre();
        string getFecha();
        string getBusca();
        string getPrecio();
        string getDuracion();
        int getNumero();
        int getAsientos();
        bool getDisponibilidad();

        void setBusca(string _busca);
        void setNombre(string _nombre); //LO VAMOS A USAR PARA LA BUSQUEDA, NO PARA ENCONTRARLO, PARA ESO HACEMOS LAS MATRICES Y BUSCAMOS POR [0][1], [0][2], ETC...
        void setFecha(string _fecha); //FECHA ES EL MES
        void setPrecio(string _precio);
        void setDuracion(string _duracion);
        void setNumero(int _numero); //NUMERO DE VUELO
        void setAsientos(int _asientos);
        bool setDisponibilidad(bool _disponibilidad);

        int buscarVuelo(string a[5][5], string _busca);
        void mostrarVuelo(string a[5][5], string _busca);

        //falta string toString() y eso lo ponemos en ver reservacion y seria vuelo1->setNombre([n][0]), vuelo1->setFecha([n][1]) y asi.
};
#endif // VUELO_H
