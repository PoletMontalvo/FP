//Librerías y macros
#include <iostream>
using namespace std;

//Prototipo de funcion: para llamar a la funcion 
int MinBetweenTwoNumbers(int n1, int n2);

int main()
{
    //Variables locales
    int n1, n2;
    cout << "Digite primer numero: ";
    cin >> n1;

    cout << "Digite segundo numero: ";
    cin >> n2;

    cout << "El menor es: " << MinBetweenTwoNumbers(n1, n2) << endl;
}
//Definición de funciones
int MinBetweenTwoNumbers(int n1,int n2)
{
    int min = 0;
    if (n1 < n2)
    {
        min = n1;
    }
    else
    {
        min = n2;
    }
    return min;
}
