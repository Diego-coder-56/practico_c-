#include <iostream>
using namespace std;

int main()
{
    string Nombre;
    string Apellido;
    string* Direc_Nom;  // Definir como puntero a string
    string* Direc_Ape;  // Definir como puntero a string

    Nombre = "Angel";
    Apellido = "Juarez";
    Direc_Nom = &Nombre;  // Asignar la dirección de Nombre
    Direc_Ape = &Apellido;  // Asignar la dirección de Apellido

    Nombre = "Salvador";
    Apellido = "Carlos";

    cout << "El nombre del competidor es: " << *Direc_Nom << endl;  // Desreferenciar puntero para obtener el valor
    cout << "El apellido del competidor es: " << *Direc_Ape << endl;  // Desreferenciar puntero para obtener el valor
    cout << Direc_Nom << endl;  // Mostrar dirección de memoria

    return 0;
}