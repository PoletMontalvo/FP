#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <sstream>

using namespace std;

int main() {

	cout << boolalpha; //imprime true en lugar de 1
	bool bb = true;
	cout << bb << endl;

	//char 1 caracter : alpha, numerico, caracter especial
	char opcion1 = 'a';
	cout << opcion1 << endl;

	//Operadores lógicos (Su resultado va aser true or false) 
	// and (disyuncion) && Ser mujer and > 60
	// or (conjuncion) ||  kitkat or sneakers or milkyway
	// not (negacion) !  not(tue) => false

	//Operaciones con desigualdad, comparaciones, magnitud

	//1. Igualdad
	cout << "(n1 == n2): " << (n1 == n2) << endl;
	cout << "(f1 == f2): " << (f1 == f2) << endl;

	//2. Desigualdad
	cout << "(n1 != n2): " << (n1 != n2) << endl;
	cout << "(f1 != f2): " << (f1 != f2) << endl;

	//3. Mayor que
	cout << "(n1 > n2): " << (n1 > n2) << endl;
	cout << "f1 > f2): " << (f1 > f2) << endl;

	//4. Menor que
	cout << "(n1 < n2): " << (n1 < n2) << endl;
	cout << "f1 < f2): " << (f1 < f2) << endl;

	//5. Mayor o igual que 
	cout << "(n1 >= n2): " << (n1 >= n2) << endl;
	cout << "f1 >= f2): " << (f1 >= f2) << endl;

	//6. Menor o igual que
	cout << "(n1 <= n2): " << (n1 <= n2) << endl;
	cout << "f1 <= f2): " << (f1 <= f2) << endl;

	//7. Comparaciones de tipos mixtos
	cout << "(n1 > f2): " << (n1 > f2) << endl;
	cout << "f1 > n2): " << (f1 > n2) << endl;

	//8: Valores negativos
	cout << "(n1 > -n2): " << (n1 > -n2) << endl;
	cout << "f1 > -f2): " << (f1 > -f2) << endl;

	//9. Combinacion de comparaciones 
	// Tambien puedes usar la palabra and en lugar de &&
	// Puedes usar la palbra or en lugar de	||
	cout << "((n1 < n2) && (f1 > f2)): " << ((n1 < n2) and (f1 > f2)) << endl;
	cout << "((n1 == 10) || (f1 == 5.2)): " << ((n1 == 10) or (f1 == 5.2)) << endl;

	//10. Comparciones anidades
	cout << "(n1 > n2 - 10): " << (n1 > n2 - 10) << endl;
	cout << "(f1 <= n2 - 10.5): " << (f1 <= n2 - 10.5) << endl;

	//11. Comparacion con constantes
	cout << "(n1 == 10): " << (n1 == 10) << endl;
	cout << "(f1 == 5.2): " << (f1 == 5.2) << endl;

	//12. Comparacion con los resultados de las operaciones aritmeticas
	cout << "((n1 + n2) < (f1 * f2)): " << ((n1 + n2) < (f1 * f2)) << endl;
	cout << "((n1 + n2) >= (f1 / f2)): " << ((n1 + n2) >= (f1 / f2)) << endl;

	//13. Comparacion de resultados negativos y positivos
	cout << "((-n1 < n2) < n2): " << ((-n1 < n2) < n2) << endl;
	cout << "((-f1 > n2) > f2: " << ((-f1 > n2) > f2) << endl;

	//14. Combinacion de aritmeticas y comparacion
	cout << "((n1 * n2) > (f1 - f2)): " << ((n1 * n2) > (f1 - f2)) << endl;
	cout << "((n2 / n1) <= (f1 + f2)): " << ((n2 / n1) <= (f1 + f2)) << endl;

	//15. Comparaciones encadenadas 
	cout << "(n1 < n2 and n2 < f1): " << (n1 < n2 and n2 < f1) << endl;
	cout << "(f2 > f1 and f1 > n1): " << (f2 > f1 and f1 > n1) << endl;

	//16. Comparacion de modulos
	cout << "((n2 % n1) == 0): " << ((n2 % n1) == 0) << endl;

	// Operadores lógicos
	bool p = true, q = false;

	//17. Lógico AND
	cout << "(p and q): " << (p and q);

	//18. OR Lógico 
	cout << "(p or q): " << (p or q);

	//19. Lógico NOT
	//Puedes usar la palabra not en lugar de !
	cout << "(!p): " << (not p);

	// 20. Combinacion de AND y NOT
	cout << "(p and not(q)): " << (p and not(q));

	//21. Doble not 
	cout << "(not(not(q))): " << (not(not(q))) << endl;

	//22. Operaciones mixtas
	cout << "(nop(p and q) or (p or not(q))): " << (not(p and q) or (p or not(q))) << endl;

	//23. Asignación de variables con operadores lógicos
	bool a = p and q;
	cout << "Valor asignado a variable 'a': " << a << endl;

	//24. Operaciones lógicas con números enteros (distinto de 0 es verdadero, cero es falso)
	int x = 5, y = 0;
	cout << "(x and y): " << (x and y) << endl;

	//25. Operaciones lógicas con tipos de datos mixtos
	float m = 3.5, n = 0.0;
	cout << "(m or n): " << (m or n) << endl;

	//26. Expresiones complejas
	cout << "((p or q) and (x or n)): " << ((p or q) and (x or n)) << endl;

	//27. Expresiones anidadas
	cout << "((x and not(y)) and (m or not(q)))" << ((x and not(y)) and (m or not(q))) << endl;

	//28. Operaciones lógicas con números de punto y flotante
	cout << "((m > n) and (m <= 3.5)): " << ((m > n) and (m <= 3.5)) << endl;

	//29. Uso de operadores lógicos de comparacion de cadena de texto (string)
	string strl = "hola", str2 = "mundo";
	cout << "((strl == strl2) or (strl1 != strl2)): " << ((strl == strl2) or (strl1 != strl2)) << endl;



	return 0;

}
