#include <iostream>
using namespace std;

// Definir la estructura Arma
struct Arma {
    string nombre;
    int precio;
    int danio;
};

int main() {
    // Definir armas disponibles
    Arma armas[3] = {
        {"Espada oxidada", 10, 5},
        {"Escudo mágico", 15, 2},
        {"Arco élfico", 20, 7}
    };

    int oroJugador = 30; // Oro inicial del jugador

    while (true) {
        cout << "Bienvenido a la tienda de armas!" << endl;
        cout << "Tienes " << oroJugador << " monedas de oro." << endl;

        // Mostrar armas disponibles
        cout << "Armas disponibles:" << endl;
        for (int i = 0; i < 3; i++) {
            cout << i + 1 << ". " << armas[i].nombre
                << " - Precio: " << armas[i].precio
                << " - Daño: " << armas[i].danio << endl;
        }

        // Menú de opciones
        cout << "1. Comprar arma" << endl;
        cout << "2. Salir" << endl;

        int opcion;
        cin >> opcion;

        if (opcion == 1) {
            cout << "Selecciona el número del arma que deseas comprar: ";
            int seleccion;
            cin >> seleccion;

            if (seleccion >= 1 && seleccion <= 3) {
                if (oroJugador >= armas[seleccion - 1].precio) {
                    oroJugador -= armas[seleccion - 1].precio;
                    cout << "Compra exitosa: " << armas[seleccion - 1].nombre << endl;
                }
                else {
                    cout << "No tienes suficiente oro." << endl;
                }
            }
            else {
                cout << "Opción inválida." << endl;
            }
        }
        else if (opcion == 2) {
            cout << "Gracias por visitar la tienda. ¡Hasta luego!" << endl;
            break;
        }
        else {
            cout << "Opción inválida. Por favor, selecciona una opción válida." << endl;
        }
    }

    return 0;
}
