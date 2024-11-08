#include <iostream>
#include <string>

using namespace std;

int main() {

    // 1.21
    string respuesta;
    do
    {
        cout << "¿Quieres salir del ciclo? [SI/NO]: ";
        cin >> respuesta;
    } while (respuesta != "SI");
    cout << "Has salido del ciclo." << endl;


    //1.22
    char opcion;
    int numero1, numero2, total;

    do {
        numero1 = 0;
        numero2 = 0;
        total = 0;

        cout << "Menú de operaciones" << endl;
        cout << endl;
        cout << "a) Suma de dos operandos" << endl;
        cout << "b) Resta de dos operandos" << endl;
        cout << "c) Multiplicación de dos operandos" << endl;
        cout << "d) División de dos operandos" << endl;
        cout << "e) Residuo de dos operandos" << endl;
        cout << "s) Salir del Menú" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;
        switch (opcion)
        {
        case 'a':
            cout << "Numero 1: ";
            cin >> numero1;
            cout << "Numero 2: ";
            cin >> numero2;
            total = numero1 + numero2;
            cout << "Total: " << total << endl;
            break;
        case 'b':
            cout << "Numero 1: ";
            cin >> numero1;
            cout << "Numero 2: ";
            cin >> numero2;
            total = numero1 - numero2;
            cout << "Total: " << total << endl;
            break;
        case 'c':
            cout << "Numero 1: ";
            cin >> numero1;
            cout << "Numero 2: ";
            cin >> numero2;
            total = numero1 * numero2;
            cout << "Total: " << total << endl;
            break;
        case 'd':
            cout << "Numero 1: ";
            cin >> numero1;
            cout << "Numero 2: ";
            cin >> numero2;
            if (numero2 != 0)
            {
                total = numero1 / numero2;
                cout << "Total: " << total << endl;
            }
            else
            {
                cout << "Error: No se puede dividir por cero." << endl;
            }
            break;
        case 'e':
            cout << "Numero 1: ";
            cin >> numero1;
            cout << "Numero 2: ";
            cin >> numero2;
            if (numero2 != 0)
            {
                total = numero1 % numero2;
                cout << "Total: " << total << endl;
            }
            else
            {
                cout << "Error: No se puede dividir por cero." << endl;
            }
            break;
        case 's':
            cout << "Saliendo del programa..." << endl;
            break;
        default:
            cout << "Opción no válida. Inténtelo de nuevo." << endl;
        }
        cout << endl;
    } while (opcion != 's');

    // 1.23 
    string tarjeta;
    int pin;
    double saldo = 3450.00;
    double cantidad;
    cout << "Menú de operaciones Cajero UNITEC" << endl;
    cout << "Ingrese su PIN de 4 dígitos: ";
    cin >> pin;
    if (pin != 1234)
    {
        cout << "PIN invalido. Terminando el proceso..." << endl;
        return 0;

    }
    do
    {
        cout << "Seleccione una opción" << endl;
        cout << "a) Consulta de saldo" << endl;
        cout << "b) Retiro" << endl;
        cout << "c) Cancelar operacion" << endl;
        cout << "Opción: "; cin >> opcion;
        switch (opcion)
        {
        case 'a':
            cout << "Su saldo es: " << saldo << " pesos" << endl;
            break;
        case 'b':
            cout << "Ingrese la cantidad a retirar: ";
            cin >> cantidad;
            if (cantidad > saldo)
            {
                cout << "Fondos insuficientes. Terminando la operación." << endl;

            }
            else
            {
                saldo -= cantidad;
                cout << "Retiro exitoso. Saldo restante: " << saldo << " pesos" << endl;
            }
        break; case 'c':
            cout << "Operación cancelada. Terminando el proceso..." << endl;
            break;
        default:
            cout << "Opción no válida. Inténtelo de nuevo." << endl;
        }
        cout << endl;
    } while (opcion != 'c');

    //1.24
    srand(time(NULL)); //semilla
    int castigo = 0;
    int vida = 12;
    int premio = 0;
    cout << "vida inicial "
        << vida << endl;
    while (vida > 0)
    {
        //deducir uno vida
        vida--;
        cout << "costo de ciclo "
            << vida << endl;
        // castigo?
        castigo = rand() % 2;
        if (castigo == 1)
        {
            vida = vida - 3;
            cout << "castigo "
                << vida << endl;
        }
        premio = rand() % 2;
        if (premio == 1)
        {
            vida = vida + 3;
            cout << "premio "
                << vida << endl;
        }
        cout << "vida despues ciclo "
            << vida << endl;
    }

}
