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

	return 0;
}
