
#include <iostream>
using namespace std;

int main()
{
    int num, i, producto;
    cout << "Ingrese el Numero de la tabla a Multiplicar" << endl;
    cin >> num;
    i = 1;
    cout << endl;
    while (i <= 10)
    {
        producto = i * num;
        cout << i << " x " << num << " = " << producto << endl;
        i = i + 1;
    }
    system("PAUSE");
    return 0;
}