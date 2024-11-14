#include <iostream>

using namespace std;
int main()
{
    // 1. and 2.
    string nombreMes[12]{ "Enero ","Febrebro ", "Marzo ", "Abril ", "Mayo ", "Junio ", "Julio ", "Agosto ", "Septiembre ", "Octubre ", "Noviembre ", "Diciembre " };
    for (int i = 0; i < 12; i++)
    {
        cout << nombreMes[i] << endl;
    }
    cout << endl;

    // 3. and 4.
    string planetas[8]{ "Mercurio ", "Venus ", "Tierra ", "Marte ", "Júpiter ", "Saturno ", "Urano ", "Neptuno " };
    for (int i = 0; i < 8; i++)
    {
        cout << planetas[i] << endl;
    }
    cout << endl;
}
