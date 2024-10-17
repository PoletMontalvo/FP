#include <iostream>
#include <cmath> 
#include <iomanip>

using namespace std; 
int main() {

//1.1 Realiza un código que ejecute las siguientes operaciones e imprima los resultados de ejecutar cada operación usando la instrucción cin
  
  cout << 3+5*2/2-1 << endl; 
  cout << 3+10/2-1 << endl;
  cout << 3+5-1 << endl;
  cout << 8-1 << endl;
  cout << 1/3*3 << endl;

//1.2 Escriba el código que pregunte al usuario por un número y escribir el resultado de la potencia del número. De la siguiente manera: Ingrese un número: 4, La potencia de 4 es 16
    
  int cuadrado;
  cout << "Dame el numero a elevar al cuadrado: ";
  cin >> cuadrado;
  cout << "El cuadrado de " << cuadrado << " es :" << cuadrado*cuadrado << endl; 

//1.3 Escriba un programa que pregunte al usuario por el número de yardas a convertir en metros. Recuerde que la unidad de conversión de una yarda equivale a 0.9144 metros. Ingrese las yardas: 10, Número en yardas: 9.144
  
  int yardas;
  cout << "Dame el numero de yardas en metros"; 
  cin >> yardas;
  cout << "El numero de yardas en metros es :" << yardas*0.9144 << endl;

// 1.4 Escriba el código de un programa que pregunte que calcule la depreciación de un auto con valor de 200,000 pesos donde se depreciará por cinco años, considerando que solo se puede depreciar el 80% del valor original pagado por el vehículo. Imprima en consola el valor de deducción por cada año
    
  float valor=200000, depreciacion, valor80;
  valor80 = valor*0.8, // mes: 160000/5 => 32,000
  depreciacion = valor80/5; 
  cout << "Depreciación = " << depreciacion << endl;

//1.5 Escriba un cálculo que calcule el porcentaje de deducción de impuestos del salario mensual de 25,000 pesos, donde este se deducirá un impuesto fijo de 900 pesos, más una parte porcentual de 1.5% sobre el cálculo de sueldo mensual – 900, Imprima el valor total del impuesto a deducir, y el sueldo neto que recibirá el empleado
    
  float sueldo = 25000, sueldo2, impuesto, sueldoneto;
  sueldo2 = sueldo - 900;
  impuesto = sueldo2*0.015;
  sueldoneto = sueldo2-impuesto;
  cout << "Sueldo neto = " << sueldoneto << endl;

//1.6 Escriba el código de cada una de las siguientes operaciones en C++; por favor cree una variable con el nombre de su elección e imprima el resultado con la instrucción cout;
 
  cout << 3*4 << endl; 
  cout << 12/3 << endl;
  cout << 12%3 << endl;
  cout << 12%7 << endl; 
  cout << 3+3 << endl;
  cout << 10/100 << endl; 

  cout << pow (3 , 2) << endl;

//1.7 Comparaciones. Cuál será el resultado de cada comparación y escriba el código e imprima los resultados usando la instrucción cout, NOTA: Las comparaciones encierrelas entre paréntesis
  
  int a =10, b=20;
  cout << boolalpha;
  cout << (a > b) << endl;
  cout << (a < b) << endl;
  cout << (a==b) << endl;
  cout << (a!=b) << endl;
  cout << ((a+b)>100) << endl;
  cout << ((a-b)==0) << endl;
  cout << ((a*b)>500) << endl;
  cout << ((a*b)<100) << endl;
  cout << ((a-b)<0) << endl;
  cout << (a < 20) << endl;
}
