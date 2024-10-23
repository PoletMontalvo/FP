#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <sstream>

using namespace std;

int main() {

	// 1.1 Escriba el código que pregunte al usuario por un número y escribir el resultado del cuadrado.De la siguiente manera :
	int num;
	cout << "Ingresa un número: ";
	cin >> num;
	cout << "El cuadrado de " << num << " es " << (num * num) << "." << endl;

	// 1.2 Escriba un código que solicite un número entero e imprima los resultados de x, 2x, 3x, 4x y 5x.Donde x es el número ingresado por el usuario, y los subsecuentes implican multiplicar por 2, multiplicar por 3, multiplicar por 4 y multiplicar por 5, y escribir el resultado en el siguiente formato :
	int x;
	cout << "Ingrese un número: ";
	cin >> x;
	cout << (x * 1) << " -- " << (x * 2) << " -- " << (x * 3) << " -- " << (x * 4) << " -- " << (x * 5) << endl;

	// 1.3 Escriba un programa que pregunte al usuario por su peso y en kilogramos y lo convierta en libras, el factor de conversión es 2.2 libras por un kilo.
	float peso;
	cout << "Dame tu peso: ";
	cin >> peso;
	cout << "Peso en libras: " << (peso * 2.2) << " libras." << endl;

	// 1.4 Escriba el código de un programa que pregunte por 3 números (use 3 instrucciones de entrada).Cree las tres variables de entrada, adicionalmente cree una variable que se llame Total y Promedio, donde Total contendrá la suma de las tres variables y Promedio que será el cálculo del promedio de los 3 números.
	int n1, n2, n3;
	cout << "n1: ";
	cin >> n1;
	cout << "n2: ";
	cin >> n2;
	cout << "n3: ";
	cin >> n3;
	int total;
	cout << "Total: " << (total = (n1 + n2 + n3));
	cout << endl; 
	int promedio;
	cout << "Promedio: " << (total / 3) << endl;
	
	// 1.5 Escriba un cálculo que calcule la propina de un Total, donde le pregunte al usuario por el total de la cuenta, y el porcentaje de propina a aplicar y guardarlo en una variable que se llame Porcentaje y como resultado imprima la cantidad a dar de propina.
	
	
	// 1.6 Escriba el código que solicite un número al usuario y si este número es mayor a 100, que imprima “El número es mayor a 100”, de lo contrario que imprima “El número es menor o igual que 100”
	//

	return 0; 
}
