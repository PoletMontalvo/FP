#include <iostream>
using namespace std;

//funciones
void hola()
{
    cout << "Hola mundo ";
}
void suma()
{
    int n1, n2;
    cout << "No. 1: ";
    cin >> n1;
    cout << "No. 2: ";
    cin >> n2;
    cout << n1 + n2 << endl;
}
//No puedo definir funciones dentro de otra funcion
int main() //Punto de entrada
{
    //hola(); //Esto es invocar o llamar la funcion
    suma();
}

#include <iostream>
using namespace std;

// variables globales: fuera de la funcion main
int n1, n2;
//funciones
void pedirNumeros()
{
    cout << "Dame el no. 1: ";
    cin >> n1;
    cout << "Dame el no. 2: ";
    cin >> n2;
}
void suma(int n1, int n2) //variable local
{
    //Suma con parametros
    cout << n1 + n2 << endl;
}
//No puedo definir funciones dentro de otra funcion
int main() //Punto de entrada
{
    pedirNumeros();
    suma(n1, n2); //argumentos
}
