#include <iostream>

using namespace std;

int main() {
	// 1.16 Diseñar un programa que lea tres números A, B, C y visualice en pantalla el valor del más grande.
	int a = 1, b = 10, c = 100;
	cout << "A: " << a << endl;
	cout << "B: " << b << endl;;
	cout << "C: " << c << endl;
	if ((a > b) and (a > c))
	{
		cout << "El valor más grande es A " << endl;
	}
	if ((b > c) and (b > a))
	{
		cout << "El valor más grande es B " << endl;
	}
	if ((c > a) and (c > b))
	{
		cout << "El valor más grande es C" << endl;
	}

	// 1.17 Crear un programa que lea tres números diferentes, A, B, C, e imprime los valores máximo y mínimo. El procedimiento constistirá en comparaciones sucesivas de parejas de números. Cree el algoritmo, diagrama de flujo y código en C#
	int a1 = 4, b1 = 5, c1 = 8;
	if ((a > b) and (a > c) and (b > c))
	{
		cout << "De máximo a mínimo: " << a << " > " << b << " > " << c << endl;
	}
	if ((b > a) and (b > c) and (a > c))
	{
		cout << "De máximo a mínimo: " << b << " > " << a << " > " << c << endl;
	}
	if ((c > a) and (c > b) and (b > a))
	{
		cout << "De máximo a mínimo: " << c << " > " << b << " > " << a << endl;
	}

	// 1.18 Crear un programa al que le solicitemos la HH, MM, SS y nos calcule la hora dentro de un segundo más tarde. Leeremos las horas, minutos, segundos como números enteros.
	int hh, ss, mm;
	cout << "HH: ";
	cin >> hh;
	cout << "MM: ";
	cin >> mm;
	cout << "SS: ";
	cin >> ss;
	if (ss < 59)
	{
		cout << "La hora un segundo más tarde: " << hh << ":" << mm << ":" << (ss + 1) << endl;
	}
	if ((mm == 59) and (ss == 59))
	{
		cout << "La hora un segundo más tarde: " << (hh + 1) << ":" << (mm == 00) << ":" << (ss == 00) << endl;
	}
	if ((mm < 59) and (ss == 59))
	{
		cout << "La hora un segundo más tarde: " << hh << ":" << (mm + 1) << ":" << (ss == 00) << endl;
	}

	// 1.19 Determinar el precio del boleto de ida y vuelta en avión, conociendo la distancia a recorrer y sabiendo que si el número de días de estancia es superior a 7 y la distancia superior a 800 hm el billete tiene una reducción del 30%. El precio por km es de 2.5 dólares.
	double precio, reduccion = 0.30, distancia, distancia1, distancia2;
	int dias;
	cout << "Distancia a recorrer de ida: ";
	cin >> distancia1;
	cout << "Diatancia a recorrer de vuelta: ";
	cin >> distancia2;
	cout << "Días de estancia: ";
	cin >> dias;
	distancia = distancia1 + distancia2;
	if ((dias > 7) and (distancia > 800))
	{
		cout << "Precio de boleto de ida y vuelta: ";
		precio = distancia * 2.5;
		reduccion = precio * .30;
		precio = precio - reduccion;
		cout << precio << endl;
	}
	if ((dias < 7) and (distancia < 800))
	{
		cout << "Precio de boleto de ida y vuelta: ";
		precio = distancia * 2.5;
		cout << precio << endl;
	}

	// 1. 20 Escribir las instrucciones apropiadas para cada una de las siguientes condiciones:
	  // a) Si un ángulo es igual de 90°
	double angulo;
	cout << "Dame el ángulo: ";
	cin >> angulo;
	if (angulo == 90)
	{
		cout << "El ángulo es un ángulo recto. " << endl;
	}
	else
	{
		cout << "El ángulo no es un ángulo recto. " << endl;
	}

	// b) Si la temperatura es igual es superior a 100°
	double temperatura;
	cout << "Temperatura: ";
	cin >> temperatura;
	if (temperatura > 100)
	{
		cout << "Por encima del punto de ebullición del agua." << endl;
	}
	else
	{
		cout << "Por debajo del punto de ebullición del agua." << endl;
	}
	// c) Recibir un número
	int num;
	cout << "Dame un número: ";
	cin >> num;

	// d) Si "x" es mayor que "y" y "z" es menor que "y", imprimir x.
	// e) Si la distancia es mayor que 20 y menos que 35.

	return 0;
}
