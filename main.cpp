#include <iostream>

using namespace std;

struct Nodo
{
    string dato, color, placa, modelo;
    Nodo *siguientePtr;
};

void agregarPila(Nodo *&, string, string, string, string);
void sacarPila(Nodo *&, string &, string &, string &, string &);
//void agregarDato(Nodo *&, string);

int main()
{
    Nodo *Pila = NULL;
    string dato, color, placa, modelo;
    char rpt;

    do
    {
        cout << "Ingrese un vehiculo: ";
        cin >> dato;
        cout << "Ingreses los atributos del vehiculo: " << endl;
        cout << "Modelo: "; cin >> modelo;
        cout << endl;
        cout << "Color: "; cin >> color;
        cout << endl;
        cout << "Placa: "; cin >> placa;
        cout << endl;

        agregarPila(Pila, dato, color, placa, modelo);
        cout << endl;

        //cout<<"Color: "; cin >> atributos;
        //  agregarDato(Pila, atributos);
        // cout << endl;

        cout << "Desea agregar otro vehiculo a la Pila de parqueos? (s/n)" << endl;
        cin >> rpt;

    } while ((rpt == 's') || (rpt == 's'));

    cout << endl;
    cout << "Mostrando los vehiculos de la Pila: " << endl;
    cout << endl;
    while (Pila != NULL)
    {
        sacarPila(Pila, dato, color, placa, modelo);

        if (Pila != NULL)
        {
            cout << "Se elimino el vehiculo: " << dato << " , " << endl;
             cout << "Con los atributos: "
                 << "Modelo: " << modelo << endl;
            cout << "Con los atributos: "
                 << "Color: " << color << endl;
             cout << "Con los atributos: "
                 << "Placa: " << placa << endl;     
        }
        else
        {
            cout << "Mostrando atributos del vehiculo: "<< endl;
            cout << "\n\tVehiculo: " << dato << "." << endl;
            cout << "\n   Modelo del vehiculo: " << modelo << endl;
            cout << "    Color del vehiculo: " << color << endl;
            cout << "    Placa del vehiculo: " << placa  <<"\n"<< endl;
            cout << endl;
            cout << endl;
        }
    }
    
    return 0;
}

void agregarPila(Nodo *&Pila, string numeroVehiculo, string datoColor, string datoPLaca, string datoModelo)
{
    Nodo *nuevo_nodo = new Nodo();
    //Nodo *segundo_nodo = new Nodo();
    nuevo_nodo->dato = numeroVehiculo;
    nuevo_nodo->modelo = datoModelo;
    nuevo_nodo->color = datoColor;
    nuevo_nodo->placa = datoPLaca;
    nuevo_nodo->siguientePtr = Pila;
    Pila = nuevo_nodo;

    cout << "\n\nEl vehiculo " << numeroVehiculo << " se agrego a la Pila estacionamiento correctamente" << endl;
    cout << "\n\n Los atributos "
         << " Color: " << datoModelo << " se agregaron correctamente" << endl;
    cout << "\n Los atributos "
         << " Placa: " << datoColor << " se agregaron correctamente" << endl;
    cout << "\n Los atributos "
         << " Placa: " << datoPLaca << " se agregaron correctamente" << endl;
    cout << endl;
}

void sacarPila(Nodo *&Pila, string &numeroVehiculo, string &datoColor, string &datoPLaca, string &datoModelo)
{
    Nodo *auxiliar = Pila;
    numeroVehiculo = auxiliar->dato;
    datoModelo = auxiliar->modelo;
    datoColor = auxiliar->color;
    datoPLaca = auxiliar->placa;
    Pila = auxiliar->siguientePtr;
    delete auxiliar;
}
/*
void agregarDato(Nodo *&Pila, string numeroDato)
{

    Nodo *nuevo_dato = Pila;
    nuevo_dato->atributos = numeroDato;
    nuevo_dato->siguientePtr = Pila;
    Pila = nuevo_dato;
    cout << "\n\n Los atributos "<<" Color: " << numeroDato << " se agregaron correctamente" << endl;
}
*/