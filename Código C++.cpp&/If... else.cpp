#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <sstream>

using namespace std;

int main() {

	// 1. Encontrar si un número es par o impar.
	int num = 10;
	cout << "dame un valor: ";
	cin >> num;
	cout << endl;
	if (num % 2 == 0) //Nunca poner ";"
	{
		cout << "par " << endl;
	}
	else //Nunca lleva condición
	{
		cout << "impar " << endl;
	}
	return 0;

	
      // 2. Encontrar el mayor de dos números, solicita los dos números de tipo int.
int num1, num2;
cout << "Primer valor: ";
cin >> num1;
cout << endl;
cout << "Segundo valor: ";
cin >> num2;
cout << endl;
if (num1 > num2)
{
	cout << "El mayor es: " << num1 << endl;
}
else
{
	cout << "El mayor es: " << num2 << endl;
}
return 0;
        }
