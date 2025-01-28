#include <iostream>
using namespace std;

double CalcularAreaPoligono(double apotema, double perimetro)
{
    cout << "Perímetro:" << endl;
        cin >> perimetro;
        cout << "Apotema:" << endl;
        cin >> apotema;
        
        double area = (perimetro * apotema) / 2;
        
        cout << "Area: " << area << endl;
    return area;
}

int main()
{
    //Ejercicio 02
    cout << "Ejercicio 02" << endl;
    char respuesta;
    double apotema, perimetro;

    cout << "1. Pentágono " << endl;
    cout << "2. Hexágono " << endl;
    cout << "3. Heptágono " << endl;
    cout << "4. Octágono " << endl;
    cout << "Escoge un polígono:" << endl;

    cin >> respuesta;

    switch (respuesta)
    {
    case '1':
        cout << "PENTÁGONO" << endl;
        CalcularAreaPoligono(apotema, perimetro);
        break;

    case '2':
        cout << "HEXÁGONO" << endl;
        CalcularAreaPoligono(apotema, perimetro);
        break;

    case '3':
        cout << "HEPTÁGONO" << endl;
        CalcularAreaPoligono(apotema, perimetro);
        break;

    case '4':
        cout << "OCTÁGONO" << endl;
        CalcularAreaPoligono(apotema, perimetro);
        break;
    }

    return 0;
}
