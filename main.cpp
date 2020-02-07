#include <iostream>
#include <fstream>
#include "Vuelo.h"
#include "Reservar.h"
#include "User.h"
#include "Cliente.h"

using namespace std;

int main()
{
    string a[5][5];
    ifstream file("vuelos.txt");
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            file >> a[i][j];
        }
    }

    string u[3][4];
    ifstream file2("usuarios.txt");
     for (int t = 0; t < 3; ++t)
    {
        for (int d = 0; d < 4; ++d)
        {
            file2 >> u[t][d];
        }
    }

    int choice, choice3, n = -1;
    string username = "";
    string password = "";

    User* user1 = new User();
    Vuelo* vuelo1 = new Vuelo();
    Reservar* reservacion1 = new Reservar();

    cout << "---------------------------------------------------------------------------------------------------- ";
    cout << endl << "\t\t\t\tVIAJANDO ANDO" << endl;
    cout << "----------------------------------------------------------------------------------------------------\n" << endl;
    cout << "Desea entrar al sistema? (1 = Si, 0 = No): ";
    cin >> choice;

    if (choice == 1)
    {
        bool choice2 = true;
        while (choice2 == true) //INICIA EL WHILEE
        {
            cout << "\n\n\n----------------------------------------------------------------------------------------------------\n";
            cout << endl << "\t\t\t\t *VUELOS\n"<<endl;
            cout << "----------------------------------------------------------------------------------------------------\n" << endl;
            cout << "1. Mostrar todos los vuelos." << endl;
            cout << "2. Buscar y seleccionar vuelo." << endl;
            cout << "3. Ver vuelos reservados." << endl;
            cout << "4. Iniciar sesion." << endl;
            cout << "5. Crear cuenta." << endl;
            cout << "6. Salir." << endl;

            cout << "\nEliga una opcion: ";
            cin >> choice3;
            cout << "\n\n";

            if(choice3 == 1) //MOSTRAR VUELOS
            {
                int c = 1;
                cout<< "\t\t\t*VUELOS DISPONIBLES"<<endl;
                cout << "--------------------------------------------------------------------------\n";
                cout<<" DESTINO\t\t  FECHA(MES)\t\t  PRECIO(MXN)\t\t |";
                cout << "\n--------------------------------------------------------------------------"<<endl;
                for(int i=0; i<5;i++)
                {
                    cout<<c<<". ";
                    c++;
                    for (int j=0; j<3 ; j++)
                    {
                        cout<<a[i][j]<<" \t\t ";
                    }
                    cout<<endl;
                }

                    int choice5;
                    cout << "\nQue vuelo desea reservar?(0 = Ninguno): ";
                    cin >> choice5;
                    cout << "\n";
                    if(choice5 == 1) //PONER MAS VUELOS EN LA LISTA Y CAMBIAR ESTO
                    {
                        //RESERVARVUELO();
                        if(username != "" || password != "")
                        {
                            reservacion1->hacerReservacion(a, 0);
                            n = 0;

                        }
                        else cout<<"**Sesion no iniciada.**";

                    }
                    else if(choice5 == 2)
                    {
                        //1
                        if(username != "" || password != "")
                        {
                            reservacion1->hacerReservacion(a, 1);
                            n = 1;
                        }
                        else cout<<"**Sesion no iniciada.**";
                    }
                    else if(choice5 == 3)
                    {
                        //2
                        if(username != "" || password != "")
                        {
                            reservacion1->hacerReservacion(a, 2);
                            n = 2;
                        }
                        else cout<<"**Sesion no iniciada.**";
                    }
                    else if(choice5 == 4)
                    {
                        //2
                        if(username != "" || password != "")
                        {
                            reservacion1->hacerReservacion(a, 3);
                            n = 3;
                        }
                        else cout<<"**Sesion no iniciada.**";
                    }
                    else if(choice5 == 5)
                    {
                        //2
                        if(username != "" || password != "")
                        {
                            reservacion1->hacerReservacion(a, 4);
                            n = 4;
                        }
                        else cout<<"**Sesion no iniciada.**";
                    }
            }
            else if (choice3 == 2) // BUSCAR POR DETALLE
            {
                int choice4;
                cout << "------------------------------------------------------------------------\n";
                cout<<"\t\t\t BUSQUEDA\t\t\t\t       |";
                cout << "\n------------------------------------------------------------------------"<<endl;
                cout << "1. Buscar por destino. \nEjemplo: 'Japon', 'Los_Angeles'. \n\n2. Buscar por fecha. \nEjemplo: 'Enero', Diciembre'. \n\n3. Buscar por precio (MXN). \nEjemplo: '500, '1000'. \n\n4. Buscar por duracion (HORAS). \nEjemplo: '1', '12'." << endl;
                cout << "\nEliga la opcion a buscar: ";
                cin >> choice4;

                if (choice4 == 1) // POR DESTINO
                {
                    string nombre;
                    cout<<"\nDestino: ";
                    cin >> nombre;
                    cout<<"\n";
                    vuelo1->setNombre(nombre);
                    vuelo1->buscarVuelo(a, nombre);
                    vuelo1->mostrarVuelo(a, nombre);
                    //SELECCIONAR VUELO AHORA Y DESPUES ROMPER CHOICE2 CON FALSE
                    int choice5;
                    cout << "\n\nDesea reservar este vuelo? (1 = Si, 0 = No): ";
                    cin >> choice5;
                    cout << "\n";
                    if(choice5 == 1)
                    {
                        //RESERVARVUELO();
                        if(username != "" || password != "")
                        {
                            n = vuelo1->buscarVuelo(a, nombre);
                            reservacion1->hacerReservacion(a, n);
                        }
                        else cout<<"**Sesion no iniciada.**";
                    }
                }
                else if (choice4 == 2) // POR FECHA
                {
                    string fecha;
                    cout<<"\nFecha: ";
                    cin >> fecha;
                    cout<<"\n";
                    vuelo1->setFecha(fecha);
                    vuelo1->buscarVuelo(a, fecha);
                    vuelo1->mostrarVuelo(a, fecha);
                    int choice5;
                    cout << "\n\nDesea reservar este vuelo? (1 = Si, 0 = No): ";
                    cin >> choice5;
                    cout << "\n";
                    if(choice5 == 1)
                    {
                        if(username != "" || password != "")
                        {
                            n = vuelo1->buscarVuelo(a, fecha);
                            reservacion1->hacerReservacion(a, n);
                        }
                        else cout<<"**Sesion no iniciada.**";
                        }
                    }
                else if (choice4 == 3) // POR PRECIO
                {
                    string precio;
                    cout<<"\nRango de Precio: ";
                    cin >> precio;
                    cout << " pesos MXN."<<endl;
                    cout<<"\n";
                    vuelo1->setPrecio(precio);
                    vuelo1->buscarVuelo(a, precio);
                    vuelo1->mostrarVuelo(a, precio);
                    int choice5;
                    cout << "\n\nDesea reservar este vuelo? (1 = Si, 0 = No): ";
                    cin >> choice5;
                    cout << "\n";
                    if(choice5 == 1)
                        {
                            if(username != "" || password != "")
                        {
                            n = vuelo1->buscarVuelo(a, precio);
                            reservacion1->hacerReservacion(a, n);
                        }
                        else cout<<"**Sesion no iniciada.**";
                        }
                    }

                else if (choice4 == 4) // POR DURACION
                {
                    string horas;
                    cout<<"\nRango de Duracion: ";
                    cin >> horas;
                    cout << " hrs."<<endl;
                    cout<<"\n";
                    vuelo1->setDuracion(horas);
                    vuelo1->buscarVuelo(a, horas);
                    vuelo1->mostrarVuelo(a, horas);
                    int choice5;
                    cout << "\n\nDesea reservar este vuelo? (1 = Si, 0 = No): ";
                    cin >> choice5;
                    cout << "\n";
                    if(choice5 == 1)
                    {
                        if(username != "" || password != "")
                        {
                            n = vuelo1->buscarVuelo(a, horas);
                            reservacion1->hacerReservacion(a, n);
                        }
                        else cout<<"**Sesion no iniciada.**";
                    }
                }else cout << "ERROR: NO HUBO UNA ELECCION."<<endl;
            }
            else if (choice3 == 3)
            {
                if(username != "" || password != "")
                    {
                        cout<<"Tu sesiones reservadas son: ";
                        cout<<"\n";
                        cout << "--------------------------------------------------------------------------\n";
                        cout<<" DESTINO        FECHA(MES)          PRECIO(MXN)          DURACION(HORAS) |";
                        cout << "\n--------------------------------------------------------------------------"<<endl;

                        if (n!=-2){
                        //HACER ALGO CON N
                        if(password == "marco123")
                        {
                            n=1;
                            reservacion1->verReservacion(a, n);
                        }
                        else if (password == "admin123")
                        {
                            n=3;
                            reservacion1->verReservacion(a, n);
                        }
                        else if (password != "")
                        {
                            reservacion1->verReservacion(a, n);
                        }
                        //reservacion1->verReservacion(a, n);

                        cout<<"\n\nDeseas cancelar tu reservacion? (1 = Si, 0 = No): ";
                        int choice0;
                        cin >>choice0;

                            if (choice0==1)
                            {
                                cout<<"Tu reservacion ha sido cancelada"<<endl;
                                n=-2;
                            if(password == u[0][1])
                            {
                                reservacion1->cancelarReservacion(n);
                                n=-2;
                            }
                            else if (password == u[1][1])
                            {
                                reservacion1->cancelarReservacion(n);
                                n=-2;
                            }
                            else if (password == u[2][1])
                            {
                                reservacion1->cancelarReservacion(n);
                                n=-2;
                            }

                        }
                    }else cout<<"No hay reservaciones";
                }
                else cout<<"Sesion no iniciada.";
            }
            else if (choice3 == 4) // INICIAR SESION
            {
                string password3 = user1->iniciarSesion(username, password, u);
                password = password3;
                cout<<password;

                string text= u[1][3];
                if(text == "50000")
                {
                    cout<<"Usted a viajado mas de 50,000km!\nGANADOR DE 40% DE DESCUENTO EN EL PROXIMO VUELO."<<endl;
                }
            }
            else if (choice3 == 5) // CREAR CUENTA
            {
                cout << "------------------\n";
                cout << " Creando cuenta\n";
                cout << "------------------\n" << endl;

                Cliente* c = new Cliente();

                cout << "Escoge tu nombre de usuario: ";
                cin >> username;
                cout << "Escoge tu password: ";
                cin >> password;

                u[2][0] = username;
                u[2][1] = password;

                cout << "\nTu cuenta ha sido creada exitosamente!\n";
                cout<<endl;
                n=-2;
            }
            else if (choice3 == 6) // SALIR
            {
                cout << "\nHasta la proxima!\n\n";
                choice2 = false;
            }else cout << "ERROR: NO HUBO UNA ELECCION."<<endl;
        }//WHILE TERMINA
    }
    else
    {
        cout << "\nHasta la proxima!\n\n";
    }
    return 0;
}
