#include <iostream>

using namespace std; // Sirve para usar el cout y cin
main()
{

  int numero;
  int multiplicacion;

  cout << "Ingrese el numero de tabla que desee: " << endl;
  cin >>numero;

  for (int i = 1; i<=20; i++)
  {
    multiplicacion = i = numero;
    cout << numero << " x " <<i<< " = " <<multiplicacion<<endl;

  }

   system ("PAUSE");
   return 0;
}