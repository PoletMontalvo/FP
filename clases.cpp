//CLase, es una estructura o mapa de la información que contiene un objeto.
//Objeto, un objeto es una instancia de una clase.
//Encapsulacion, solo pueden ser usadas dentro de la clase


#include <iostream>

using namespace std;
struct Alumno 
{
    // Atributos o propiedades
    string nombre;
    int cuenta;
};
int main()
{
    Alumno jose;
    jose.nombre = "Jose";
    jose.cuenta = 12345;

    Alumno polet;
    polet.nombre = "Polet";
    polet.cuenta = 335013;

    cout << "nombre: " << jose.nombre << endl;
    cout << "Cuenta: " << jose.cuenta << endl;
    cout << endl;
    cout << "Nombre: " << polet.nombre << endl;
    cout << "Cuenta: " << polet.cuenta << endl;

}
