//Librerías y macros
#include <iostream>
using namespace std;

//Prototipo de funcion: para llamar a la funcion 
int MaxBetweenTwoNumbers(int n1, int n2);

int main()
{
    //Variables locales
    int n1, n2;
    cout << "Digite primer numero: ";
    cin >> n1;

    cout << "Digite segundo numero: ";
    cin >> n2;

    cout << "El mayor es: " << MaxBetweenTwoNumbers(n1, n2) << endl;
}
//Definición de funciones
int MaxBetweenTwoNumbers(int n1,int n2)
{
    int max = 0;
    if (n1 > n2)
    {
        max = n1;
    }
    else
    {
        max = n2;
    }
    return max;
}
