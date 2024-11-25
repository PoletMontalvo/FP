// 1.-
int numeros[10];
int num, i = 0;
num = -1;
while (num != 0)
{
    cout << "Numero: ";
    cin >> num;
    if (num == 0 and i > 9)
    {
        break;
    }
    numeros[i] = num;
    i++;
}
for (int elemento : numeros)
{
    cout << elemento << endl;
}

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> numeros;
    int num;
    num = -1;
    while (num != 0)
    {
        cout << "Numero: ";
        cin >> num;
        if (num == 0)
        {
            break;
        }
        numeros.push_back(num);
    }
    for (int elemento : numeros)
    {
        cout << elemento << endl;
    }

    // 2.-
    int numeros[10]
{ 34, 23, 94, 53, 16, 27, 5, 25, 42, 82 };
vector <int> vnum
{ 34, 23, 94, 53, 16, 27, 5, 25, 42, 82 };
int mayor = -1;
for (int i = 0; i <= 9; i++)
{
    if (vnum[i] > mayor)
    {
        mayor = vnum[i];
    }
}
cout << "El mayor es: " << mayor << endl;
}


#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int numeros[10]
    { 34, 23, 94, 53, 16, 27, 5, 25, 42, 82 };
    int numero, primero, segundo, tercero, 
        temp = 0;
    primero = numeros[0];
    segundo = numeros[1];
    tercero = numeros[2];
    if (primero < segundo)
    {
        temp = primero;
        primero = segundo;
        segundo = temp;
    }
    if (primero < tercero)
    {
        temp = primero;
        primero = tercero;
        tercero = temp;
    }
    if (segundo < tercero)
    {
        temp = segundo;
        segundo = tercero;
        tercero = temp;
    }
    for (int i = 3; i <= 9; i++)
    {
        if (numeros[i] > primero)
        {
            tercero = segundo;
            segundo = primero;
            primero = numeros[i];
        }
        else if
            (numeros[i] > segundo)
        {
            tercero = segundo;
            segundo = numeros[i];
        }
        else if
            (numeros[i] > tercero)
        {
            tercero = numeros[i];
        }
    }
    cout << primero << endl;
    cout << segundo << endl;
    cout << tercero << endl;
}

