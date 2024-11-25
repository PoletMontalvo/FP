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
}
