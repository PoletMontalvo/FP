#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <sstream>
#include <cmath>

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
	double totalDeLaCuenta, porcentaje, propina;
	cout << "Total de la cuenta: ";
	cin >> totalDeLaCuenta;
	cout << "Porcentaje de propina a aplicar: ";
	cin >> porcentaje;
	cout << "Propina: " << (propina = totalDeLaCuenta * porcentaje) << endl;

	// 1.6 Escriba el código que solicite un número al usuario y si este número es mayor a 100, que imprima “El número es mayor a 100”, de lo contrario que imprima “El número es menor o igual que 100”
	int numero;
	cout << "Dame un número: ";
	cin >> numero;
	if (numero > 100)
	{
		cout << "El número es mayor a 100 " << endl;
	}
	else
	{
		cout << "El número es menor a 100 " << endl;
	}

	// 1.7 Escriba el código que solicite un número al usuario si este número es menor a cero entonces imprima que “el número es negativo”, de lo contrario imprimir el “número es positivo”
	signed int no;
	cout << "Dame un número: ";
	cin >> no;
	if (no < 0)
	{
		cout << "El número es negativo " << endl;
	}
	else
	{
		cout << "El numero es positivo " << endl;
	}

	// 1.8 Escriba un programa que pregunte por el mail del usuario y guardarlo en una variable llamada “Miemail”, y luego que pregunte por un password y se guarde en una variable llamada “Password_Ingresado”, validar si el password es igual a “12345” entonces imprimir “Felicidades password correcto” de otra manera imprimir “Su password es incorrecto”


	// 1.10 Crear el código que reciba el peso y la estatura del usuario, y calcule la masa corporal en base a la fórmula :
	double p;
	double estatura; //Variables de entrada
	double mc; //Variable de salida
	cout << "¿Peso? ";
	cin >> p;
	cout << endl;
	cout << "¿Estatura? ";
	cin >> estatura;
	cout << endl;
	cout << fixed;
	cout << setprecision(2);
	mc = p / (estatura * estatura);
	cout << "Masa corporal: " << mc << endl;
	if (mc < 18.5)
	{
		cout << "Tu peso es bajo. " << endl;
	}
	if (mc >= 18.5 and mc < 25)
	{
		cout << "Peso Normal. " << endl;
	}
	if (mc >= 25 and mc < 30)
	{
		cout << "Sobrepeso. " << endl;
	}
	if (mc >= 30 and mc < 35)
	{
		cout << "Obeso Clase 1 " << endl;
	}
	if (mc >= 35 and mc < 40)
	{
		cout << "Obeso clase 2 " << endl;
	}
	if (mc >= 40)
	{
		cout << "Obeso clase 3 " << endl;

	}
	return 0;
}
