#include <iostream>
using namespace std;

int main()
{
	// [] Operador de indice 
	/* {} Principio y fin de un codigo 
	   Conjunto de valores separados por comas
	   sirve para inicializar arreglos */

	const int TAMANO = 10;
	int naturales[TAMANO]{0,1,2,3,4,5,6,7,8,9};

    /*cout << naturales[0] << endl;
	naturales[0] = -1000;
	cout << naturales[0] << endl;*/

	for (int i = 0; i < TAMANO; i++)
	{
		cout << naturales[i] << endl;
	}
	cout << endl;
	for (int elemento : naturales)
	{
		cout << elemento << endl;
	}

	// Arreglos de hoy, son de una dimension

	//Ejemplo
	for (int i = 0; i <= 9; i++)
	{
		cout << i << " , ";
	}
	cout << endl;

	// 1. 
	for (int i = 9; i >= 0; i--)
	{
		cout << i << " , ";
	}
	cout << endl;

	// 2.
	for (int i = 0; i <= 99; i++)
	{
		cout << i << " , ";
	}
	cout << endl;

	// 3. 
	for (int i = 0; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			cout << i << " , ";
		}
	}
	cout << endl;

	// 4.
	int min, max;
	cout << "Dame el mínimo: ";
	cin >> min;
	cout << "Dame el máximo: ";
	cin >> max;
	for (int i = min; i <= max; i++)
	{
		cout << i << " , ";
	}
	cout << endl;

	// 5. 
	int minimo, maximo;
	cout << "Dame el máximo: ";
	cin >> maximo; 
	cout << "Dame el mínimo: ";
	cin >> minimo; 
	for (int i = maximo; i >= minimo; i--)
	{
		cout << i << " , ";
	}
	cout << endl;

	return 0;
}

	return 0;
}
