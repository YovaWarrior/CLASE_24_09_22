#include <iostream>

using namespace std;

main()
{
    int numero;
    cout << "Ingresa el numero de la tabla de multiplicar :" << endl;
    cin >> numero;

    for (int i = 1; i <= 10; i++)
    {
        int multiplicacion = i * numero;
        cout << numero << " x " << i << "=" << multiplicacion << endl;
    }

    system("PAUSE");
    return 0;
}