#include <iostream>
using namespace std;

void calcularVelocidad(double distancia, double tiempo) 
{
    double velocidad = distancia / tiempo;
    cout << "Velocidad calculada: " << velocidad << " m/s " << endl;
}

int main() {
    cout << "Ejercicio 01" << endl;
    double distancia, tiempo;
    cout << "Distancia en metros: ";
    cin >> distancia;
    cout << "Tiempo en segundos: ";
    cin >> tiempo;

    calcularVelocidad(distancia, tiempo);

    return 0;
}
