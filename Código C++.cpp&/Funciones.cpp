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
