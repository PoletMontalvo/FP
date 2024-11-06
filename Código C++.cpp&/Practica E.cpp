#include <iostream>
#include <string>

using namespace std;

int main (){
    
    //1.21
    string respuesta; 
    do 
    { 
        cout << "Quieres salir del ciclo? [SI/NO]: "; 
        cin >> respuesta; 
    } while (respuesta != "SI"); 
    cout << "Has salido del ciclo." << endl;
    
    // 1.22
        numero1 = 0;
        numero2 = 0;
        total = 0;
        do 
        {
            cout << "Menú de operaciones aritméticas" << endl;
            cout << "a) Suma de los operadores" << endl;
            cout << "b) Resta de dos operadores" << endl;
            cout << "c) Multiplicación de dos operadores" << endl;
            cout << "d) División de dos operadores" << endl;
            cout << "e) Residuo de dos operadores" << endl;
            cout << "s) Salir del Menú" << endl;
            cin >> opcion;
        } while (opcion != 's');
    
    return 0;
}
