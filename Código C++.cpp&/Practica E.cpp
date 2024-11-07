#include <iostream>
#include <iomanip>
#include <string.h>
#include <math.h>

using namespace std;

int main() 
{
  string respuesta, SI, NO;

  do
  {
    cout << "Quieres salir del ciclo? [SI/NO]: "; 
    cin >> respuesta;
    if (respuesta == "SI")
    {
      cout << "Ciclo cerrado. "; 
      cout << endl;
      break;
    }
    else if (respuesta == "NO")
    {
      cout << "Continuando ciclo. "; cout << endl;
    }
  }while (true);
  cout << endl;

  
  // ejercisio 1.22 Menú de operaciones aritmeticas
  int opcion, n1=0, n2=0, t=0;
  double n3=0, n4=0, t1=0;
  do
  {
  cout << "MENU DE OPERACIONES " << endl; 
  cout << endl;
  cout << "1) Suma de operaciones. " << endl;
  cout << "2) Resta de operaciones. " << endl;
  cout << "3) Multiplicasión de operaciones. " << endl;
  cout << "4) Divición de operaciones. " << endl;
  cout << "5) Residuo de operaciones. " << endl;
  cout << "6) Salir del menú. " << endl;
  cout << "Ingresar una opción: "; cin >> opcion;
  cout << "La opción ingresada es: " << opcion << endl;
  cout << endl;
  switch (opcion)
    {
      case 1:
      cout << "Suma de operaciones." << endl;
      cout << "Ingresa el primer numero: "; cin >> n3;
      cout << "Ingresa el segundo numero: "; cin >> n4;
      t1 = n3 + n4;
      cout << "El resultado de la suma es: " << t1 << endl;
      cout << endl;
      break;

      case 2:
      cout << "Resta de operandos" << endl;
      cout << "Ingresa el primer numero: "; cin >> n3;
      cout << "Ingresa el segundo numero: "; cin >> n4;
      t1 = n3 - n4;
      cout << "El resultado de la resta es: " << t1 << endl;
      cout << endl;
      break;
      
      case 3:
      cout << "Multiplicasión de operandos" << endl;
      cout << "Ingresa el primer numero: "; cin >> n3;
      cout << "Ingresa el segundo numero: "; cin >> n4;
      t1 = n3 * n4;
      cout << "El resultado de la multiplicasión es: " << t1 << endl;
      cout << endl;
      break;
      
      case 4:
      cout << "Divición de operandos" << endl;
      cout << "Ingresa el primer numero: "; cin >> n3;
      cout << "Ingresa el segundo numero: "; cin >> n4;
      t1 = n3 / n4;
      cout << "El resultado de la divición es: " << t1 << endl;
      cout << endl;
      break;
      
      case 5:
      cout << "Residuo de operandos" << endl;
      cout << "Ingresa el primer numero: "; cin >> n1;
      cout << "Ingresa el segundo numero: "; cin >> n2;
      t = n1 % n2;
      cout << "El resultado del residuo es: " << t << endl;
      cout << endl;
      break;
      
      case 6:
      cout << "Salir del menu. " << endl;
      cout << endl;
      break;

      case 7:
        cout << "Opcion invalida. " << endl;
        cout << endl;
      break;
      
    }
}while (opcion != 6);



  // ejercisio 1.23 Cagero automatico.
  int inciso;
  float saldo=3450, retiro=0, restante;
  string contraseña;

  cout << "Bienvenido a nuestro banco UNITEC. " << endl;
  cout << "Por favor, ingrese el PIN: "; cin >> contraseña;

  if (contraseña == "1234")
  {
    cout << "La contraseña es correcta. " << endl;
    cout<<endl;
    
    do
      {
      cout << "CAJERO UNITEC." << endl; 
      cout << endl;
      cout << "1) Consulta de saldo. " << endl;
      cout << "2) Retiro de dinero. " << endl;
      cout << "3) Cancelar operación. " << endl;
      cout << "Ingresar una opción: "; cin >> inciso;
      cout << "La opción ingresada es: " << inciso << endl;
      cout << endl;
      switch (inciso)
        {
          case 1:
          cout << "CONSULTA DE SALDO." << endl;
          cout << "El saldo inicial que dispone es de $3,450.00 pesos. " << endl;
          cout << endl;
          break;

          case 2:
          cout << "RETIRO DE DINERO. " << endl;
          cout << "Ingrese la cantidad que se desea retirar: $"; cin >> retiro;
          if (retiro > saldo) 
          {
            cout << "Fondos insuficientes. " << endl;
           break;
          }
            else
          {
          saldo -= retiro;
          cout << "Se retiro $" << retiro << " de su cuenta." << endl;
          restante=3450-retiro;
          cout << "Su saldo restante es de $" << saldo << endl;
         break;
         }break;

          case 3:
          cout << "CANCELAR OPERACIÓN. " << endl;
          cout << "Operación cancelada. " << endl;
          cout << endl;
          break;

          case 4:
            cout << "Opcion invalida. " << endl;
            cout << endl;
          break;
        }
    }while (opcion == 3);
  }
  else
  {
    cout << "El PIN es incorrecto. " << endl;
  }
  cout<<endl;


  srand(time(NULL)); //semilla
int castigo = 0;
int vida = 12;
int premio = 0;
cout << "Vida inicial: " << vida << endl;
while (vida > 0) 
{
	//DEDUCIR UNO VIDA
	vida--;
	cout << "Costo de ciclo: " << vida << endl;
	//ver si hay castigo
	castigo = rand() % 2;
	if (castigo == 1)
	{
		vida = vida - 3;
		cout << "Castigo: " << vida << endl; 
	}
	premio = rand() % 2;
	if (premio == 1)
	{
		vida = vida + 3;
		cout << "Premio: " << vida << endl;
	}
	cout << "Vida despues de ciclo: " << vida << endl;
}
  }

