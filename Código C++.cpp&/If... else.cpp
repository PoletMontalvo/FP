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
}
