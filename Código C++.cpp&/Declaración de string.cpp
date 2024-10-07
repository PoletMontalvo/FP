#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <sstream>

using namespace std;

int main()
{
	// EJERCICIO 1
	// Declarar e imprimir un string
	string texto0 = "Hola Mundo ";
	cout << texto0 << endl;

	//EJERCICIO 2
	// Unir dos textos en un grupo
	string primerTexto = "Hola ";
	string segundoTexto = "Mundo! ";
	string   textoUnido = primerTexto + segundoTexto;
	cout << textoUnido << endl;

	// EJERCICIO 3
	// Introducir un valor en una variable de texto (string) usando teclado
	string nombre;
	cout << "Introduce tu nombre: ";
	cin >> nombre;
	cout << "Hola " << nombre << "!" << endl;

	//EJERCICIO 4
	//Introducir una línea completa de texto (string)
	//cin.ignore(); //Ignora la instrucción cin, cuando hay "cin >>" arriba anteriormente a esta línea de código
	string nombreCompleto;
	cout << "introduce tu nombre completo: ";
	getline(cin, nombreCompleto); //obtiene una línea completa de texto
	cout << "Tu nombre completo: " << nombreCompleto << endl;

	//EJERCICO 5
	//Longitud de texto: Una variable tipo string se puede accesar a la función length() para obtener cuantos caracteres tiene
	// De que tu tamaño string
	cout << "La longitud del texto es: " << nombreCompleto.length() << endl;

	//EJERCICIO 6
	//Al ser una cadena de caracteres (string) se puede obtener el caracter específico de una palabra 
	// [] = perador de indice
	//Como acceder un carácter específico de un texto (String)
	cout << "El primer nombre carácter de nombre completo: " << nombreCompleto[0] << endl;

	// EJERCICIO 7
	// Cambiar un caracter especifico en un texto 
	string cambio = "Hola ";
	cambio[0] = 'h';
	cout << cambio << endl;

	// EJERCICIOP 8
	// Convertir un string a MAYÚSCULAS
	string textoMinusculas = "TEXTO A CONVERTIR: ";
	transform(textoMinusculas.begin(), textoMinusculas.end(), textoMinusculas.begin(), toupper);

	//EJERCICIO 9
	//Convertir un string a minusculas
	string textoMayusculas = "TEXTO A CONVERTIR: ";
	transform(textoMayusculas.begin(), textoMayusculas.end(), textoMayusculas.begin(), toupper);

	//Ejercico 10
	//Insertar un texto dentro de otro texto
	string textoPrincipal = "Polet, ";
	textoPrincipal.insert(6, "Esmeralda");
	cout << textoPrincipal << endl;

	// EJERCICIO 11
	//Revertir un texto
	string textoRevertir = "Hola, mundo! ";
	reverse(textoRevertir.begin(), textoRevertir.end());
	cout << textoRevertir << endl;

	// EJERCICO 12
	// Convertir un número a un string 
	int n1 = 123;
	string numeroAtexto = to_string(n1);
	cout << "Número como string: " << numeroAtexto << endl;

	// EJERCICIO 13
	// Convertir un string a número 
	string textoAnumero = "123 ";
	int n2 = stoi(textoAnumero);
	cout << "string como número: " << n2 << endl;
	

}
