#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <sstream>

using namespace std;

int main() {

// SECCIÓN DECLARACIÓN DE VARIABLES

int materias = 5;
cout << "Materias que estás cursado: " << materias << endl;

int cuatrimestre = 6;
cout << "Valor del cuatrimestre: " << cuatrimestre << endl;

int numero = 335013822;
cout << "Tu número de cuenta es: " << numero << endl;

string materia = "fundamentos de programación. ";
cout << "El nombre de la materia es: " << materia << endl;

string nombre = "Polet Esmeralda ";
cout << "Nombre: " << nombre << endl;

string apellidoPaterno = "Montalvo ";
cout << "Apellido paterno: " << apellidoPaterno << endl;

string apellidoMaterno = "Simental ";
cout << "Apellido materno: " << apellidoMaterno << endl;

long celular = 5524509642;
cout << "Celular: " << celular << endl;

long casa = 5553162594;
cout << "Número de la casa: " << casa << endl;

string correoQueMasUso = "esmeralda2406004@gmail.com";
cout << "Correo que más uso: " << correoQueMasUso << endl;

string correMyUnitec = "polet.montalvo35@my.unitec.edu.mx";
cout << "Correo asignado: " << correMyUnitec << endl;

string carrera = "Diseño, animación y Arte digital. ";
cout << "Carrera: " << carrera << endl;

bool blackboard = true;
cout << "¿Has usado Blackboard antes? (1 para si, 0 para no): " << blackboard << endl;


// SECCIÓN ANÁLISIS DE ERROR DE SINTAXIS 

  //Ejecicio 1: int1numero = 5;
  int numero1 = 5; //El identificador no puede empezar con un número.
  
  //Ejercicio 2: float valor@ = 3.14;
  float valor = 3.14; //No se admite el "@".
  
  //Ejercicio 3: double double = 9.81;
  double num = 9.81; // double se repite como variable y como identificador.
  
  //Ejercicio 4: char letra " 'AB';
  char letra = 'A'; //El char solo puede tener un valor.
  
  //Ejercicio 5: bool esVerdadero = "true";
  bool esVerdadero = true //El valor de bool va sin comillas.
  
  //Ejercicio 6: int numero = 10.5;
  int numero = 10; //Los numeros int son enteros.
  
  //Ejercicio 7: string nombre = 'Juan';
  string nombre = "Juan"; //Se usan las comillas, no la comilla simple.
  
  //Ejercicio 8: const int PI = 3.14;
  const double PI = 3.14; // Se usa double para usar números con decimales.
  
  //Ejercicio 9: int suma = 5 +;
  int suma = 5 + 5; //Faltaba un valor para realizar la suma.
  
  /* Ejercicio 10: int numero;
                   numero= 10 */
  int numero;
  numero = 10; //Faltaba ";".
  
  //Ejercicio 11: int numero = "diez";
  int numero = 10; //Int es para números enteros, no se pueden usar letras.
  
  //Ejercicio 12: float altura = 1,75;
  float altura = 1.75; //Se usa punto y no coma.
  
  //Ejercicio 13: char inicial = "J"; 
  char inicial = 'J'; //Char jsa comillas simples.
  
  //Ejercicio 14: bool esMayor = 1;
  bool esVerdadero = true; //Bool se trata de usar true o false.
  
  //Ejercicio 15: string apellido = Juan;
  string nombre = "Juan"; //Juan no es un apellido y los textos deben llevar comillas.
  
  //Ejercicio 16: int resultado = 5 *;
  int resultado = 5 * 5; //Faltaban un valor para realizar la multiplicación.
  
  //Ejercicio 17: double area = 3.14 * radio^2;
  double area = 3.14 * (radio * radio);
  
  //Ejercicio 18: int edad = 25
  int edad = 25; //Falta ";".
  
  //Ejercicio 19: float peso = 70.5f;
  float peso = 70.5f; //Está correcto.
  
  //Ejercicio 20: int suma= 10 + 20
  int suma = 10 + 20; //Faltaba ";".

return 0


}