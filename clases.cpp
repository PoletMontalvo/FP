//CLase, es una estructura o mapa de la información que contiene un objeto.
//Objeto, un objeto es una instancia de una clase.
//Encapsulacion, solo pueden ser usadas dentro de la clase


#include <iostream>

using namespace std;
struct Alumno 
{
    // Atributos o propiedades
    string nombre;
    int cuenta;
};
int main()
{
    Alumno jose;
    jose.nombre = "Jose";
    jose.cuenta = 12345;

    Alumno polet;
    polet.nombre = "Polet";
    polet.cuenta = 335013;

    cout << "nombre: " << jose.nombre << endl;
    cout << "Cuenta: " << jose.cuenta << endl;
    cout << endl;
    cout << "Nombre: " << polet.nombre << endl;
    cout << "Cuenta: " << polet.cuenta << endl;

}


#include <iostream>
#include <vector>

using namespace std;
struct Alumno 
{
    // Atributos o propiedades
public:
    string nombre;
    int cuenta;
    //Funciones de la estructura
public:
    static void altaAlumno(vector<Alumno> & v1)
    {
        Alumno alumno;
        cout << "Dame tu nombre: ";
        cin >> alumno.nombre; 
        cout << "Dame tu cuenta: ";
        cin >> alumno.cuenta;
        v1.push_back(alumno);
    }

    static void imprimeDatos(vector<Alumno> v1)
    {
        cout << "Tamano del vector: " << v1.size() << endl;
        cout << endl;
        for (int i = 0; i < v1.size(); i++)
        {
            cout << "nombre: " << v1[i].nombre << endl;
            cout << "Cuenta: " << v1[i].cuenta << endl;
        }
    }

};

int main()
{
    vector<Alumno> v;
    int numAlumnos;
    cout << "Num de alumnos a dar de alta: ";
    cin >> numAlumnos;
    for (int i = 0; i < numAlumnos; i++)
    {
        Alumno::altaAlumno(v);
    }
    Alumno::imprimeDatos(v);
}
