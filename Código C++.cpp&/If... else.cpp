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

// 3. Solicitar la edad de la persona y si esta es mayor de edad, escribir en pantalla “Mayor de edad” de lo contrario “Menor de edad”
int edad;
cout << "Edad: ";
cin >> edad;
cout << endl;
if (edad > 18)
{
	cout << "Mayor de edad. " << endl;
}
else
{
	cout << "Menor de edad. " << endl;
}	
	
// 4. Solicitar la temperatura si esta es menor a 10 grados, escribir en pantalla “hace mucho frío”, si la temperatura es entre mayor a 10 grados y menor a 17 grados, escribir en pantalla “hace frío” y por último si es mayor a 17 grados, escribir en pantalla “el clima es templado”.
int temp;
cout << "¿Temperatura?: ";
cin >> temp;
cout << endl;
if (temp < 10)
{
	cout << "Hace mucho frío. " << endl;
}
if (temp >= 10 and temp < 17)
{
	cout << "Hace frío." << endl;
}
if (temp > 17)
{
	cout << "Clima templado. " << endl;
}

// 5. Preguntar si al usuario si está a favor de la paz, guardar en una variable tipo char llamada voto, validar si el voto es ‘S’ o el voto es ‘N’ escribir en pantalla “voto valido” en caso de que sea cualquier otro carácter escribir, “voto invalido”
char voto = ' ';
cout << "¿A favor? S/N ";
cin >> voto;
if (voto == 's ' 
	or voto == 'S ' 
	or voto == 'n ' 
	or voto == 'N ')
{
	cout << "Voto valido " << endl;
}
else
{
	cout << "Voto invalido " << endl;	
	
	// 6. Preguntar al usuario cuantas horas ha trabajado el empleado durante la semana, si, el empleado trabajo más de 40 horas, el excedente de horas se multiplicará por 75 pesos y publicar este cálculo en pantalla que será el bono del empleado.
	int horasTrabajadas = 0;
	cout << "Horas trabajadas: ";
	cin >> horasTrabajadas;
	cout << endl;
	int horasBono = horasTrabajadas - 40;
	if (horasBono > 0)
	{
		horasBono = horasBono * 75;
		cout << "Bono: " << horasBono;
	}

	// 7. Crear dos variables de tipo int, que guarden el día y mes, del cumpleaños del usuario. Si la fecha corresponde a mes 9 y día 15, escribir en pantalla, “Feliz cumpleaños”
	

	// 8. Crear una variable que se llame velocidad, pregunta por este valor, si esta es negativa, escribir en pantalla “velocidad negativa”, si la velocidad es cero, escribir en pantalla “en reposo”, y si es positiva escribir en pantalla “velocidad positiva”.
	

	// 9. Crear las siguientes variables de tipo int: huevos, mantequilla, leche, harina, levadura, azucar y sal. Asigna valores aleatorios a cada variable, entre 1 y 5. Si todos los ingredientes tienen al menos un elemento, escribir en pantalla “Puedes crear hot cakes” de lo contrario escribir en pantalla “No hay suficientes ingredientes”
	

	// 10. Crear un programa en C++ que determine cuantos hot cakes se pueden hacer basado en la pregunta anterior.
	
	
	return 0;
}
