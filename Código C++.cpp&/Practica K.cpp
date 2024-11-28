#include <iostream>
using namespace std;

void cuadrado()
{
    float lado;
    cout << "CUADRADO" << endl;
    cout << "Lado: ";
    cin >> lado;
    cout << "Área: " << (lado * lado) << endl;
}

void rectangulo()
{
    float ladoLargo, ladoAncho;
    cout << "RECTANGULO" << endl;
    cout << "Lado largo: ";
    cin >> ladoLargo;
    cout << "Lado ancho: ";
    cin >> ladoAncho;
    cout << "Area: " << (ladoAncho * ladoLargo) << endl;
}

void circulo()
{
    float radio, pi = 3.14, area;
    cout << "CIRCULO" << endl;
    cout << "Radio: ";
    cin >> radio;
    area = radio * pi;
    area = area * area;
    cout << "Área: " << area << endl;
}

void triangulo()
{
    float base, altura, area;
    cout << "TRIANGULO" << endl;
    cout << "Base: ";
    cin >> base;
    cout << "Altura: ";
    cin >> altura;
    area = base * altura;
    area = area / 2;
    cout << "Área: " << area << endl;
}

void rombo()
{
    int diagonal1, diagonal2, area;
    cout << "ROMBO" << endl;
    cout << "Diagonal 1: ";
    cin >> diagonal1;
    cout << "Diagonal 2: ";
    cin >> diagonal2;
    area = diagonal1 * diagonal2;
    area = area / 2;
    cout << "Area: " << area << endl;
}

int main() 
{
    cuadrado();
    cout << endl;
    rectangulo();
    cout << endl;
    circulo();
    cout << endl;
    triangulo();
    cout << endl;
    rombo();
}
