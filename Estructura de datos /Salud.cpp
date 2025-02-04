//EJERCICIO: Determina el estado de salud del jugador usando punteros
	// 1) Se declara la variable SALUD para almacenar la salud del jugador
	// 2) Se usa puntero para manipular y acceder a esa varible
	// 3) Se determinará si la salud es CRITICA, NORMAL o ALTA
	// 4) Se mostrará la dirección de memoria de la variable de salud
	
#include <iostream>
using namespace std;

string estadoSalud(int* salud) 
{
    if (*salud <= 30)
        return "CRITICA";
    else if (*salud <= 70)
        return "NORMAL";
    else
        return "ALTA";
}

int main() 
{
    int SALUD;
    cout << "¿Cuánta salud tienes? ";
    cin >> SALUD;

    int* ptrSalud = &SALUD;

    string estado = estadoSalud(ptrSalud);

    cout << "Estado de salud: " << estado << endl;
    cout << "Dirección de memoria de SALUD: " << ptrSalud << endl;

    return 0;
}
